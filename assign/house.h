// House Class

class House {
    int size;
    char border;
    char fill;

public: 
    House(int s, char b = 'X', char f = '*'): border(b), fill(f) {
        size = s;
        if (s < 3)
            size = 3;
        if (s > 37)
            size = 37;
    }

    int GetSize();
    int Perimeter();
    double Area();

    void Grow();
    void Shrink();

    void SetBorder(char b);
    void SetFill(char f);

    void Draw();
    void Summary();
};

