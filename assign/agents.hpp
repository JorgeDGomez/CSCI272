#include <sstream>
using namespace std;

#define RECOVERY_PERIOD 14

class Agent {
public:
    virtual bool isInfected()  = 0;
    virtual bool isDead()  = 0;
    virtual bool isCured(int i) = 0;
    virtual string info() const = 0;
};

ostream& operator<<(ostream& o, const Agent& a)
{
    o << a.info();
    return o;
}

class Healthy : public Agent {
public:
    bool isInfected() {return false;}
    bool isDead()     {return false;}
    bool isCured(int i)    {return false;}
    string info() const {
        ostringstream output;
        output << "H" ;
        return output.str();
    }
};

class Infected : public Healthy {
protected:
    int infectedOn;
public:
    Infected() : infectedOn{0} {}
    Infected(int d) : Infected() { infectedOn = d; }
    Infected(const Infected &i) : Infected() { infectedOn = i.infectedOn; }

    bool isInfected() {return true;}
    bool isDead()     {return false;}
    bool isCured(int i) {return infectedOn + RECOVERY_PERIOD < i;}

    string info() const {
        ostringstream output;
        output << "I[" << infectedOn << "]";
        return output.str();
    }
};


class Dead : public Infected {
    int diedOn;
public:
    Dead(Infected* i, int day) : Infected(*i), diedOn{day} {}

    bool isInfected() {return true;}
    bool isDead()     {return true;}
    bool isCured(int i) {return false;}

    string info() const {
        ostringstream output;
        output << "D[" << infectedOn << ", " << diedOn << "]";
        return output.str();
    }
};

class Cured : public Infected {
protected:
    int curedOn;
public:
    Cured(Infected* i, int day) : Infected(*i), curedOn{day} {}

    bool isInfected() {return false;}
    bool isDead()     {return true;}
    bool isCured()    {return true;}

    string info() const {
        ostringstream output;
        output << "C[" << infectedOn << ", " << curedOn << "]";
        return output.str();
    }
};
