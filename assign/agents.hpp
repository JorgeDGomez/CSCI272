#include <sstream>
using namespace std;

#define RECOVERY_PERIOD 14

class Agent {
public:
};

ostream& operator<<(ostream& o, const Agent& a)
{
    o << a.info();
    return o;
}

class Healthy {
};

class Infected {
};

class Dead {
};

class Cured {
};
