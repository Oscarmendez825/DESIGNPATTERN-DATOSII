#include <iostream>
class Rectangulo
{
public:
    virtual void draw() = 0;
};


class Lados
{
public:
    Lados(int x1, int y1, int x2, int y2) {
        x1_ = x1;
        y1_ = y1;
        x2_ = x2;
        y2_ = y2;
        std::cout << "Lados(x1,y1,x2,y2)\n";
    }
    void oldDraw() {
        std::cout << "Lados:  oldDraw(). \n";
    }
private:
    int x1_;
    int y1_;
    int x2_;
    int y2_;
};


class Adapter: public Rectangulo, private Lados
{
public:
    Adapter(int x, int y, int w, int h):
            Lados(x, y, x + w, y + h) {
        std::cout << "Adapter(x,y,x+w,x+h)\n";
    }

    void draw() {
        std::cout << "Adapter: draw().\n";
        oldDraw();
    }
};

int main()
{
    int x = 20, y = 50, w = 300, h = 200;
    Rectangulo *r = new Adapter(x,y,w,h);
    r->draw();
}
