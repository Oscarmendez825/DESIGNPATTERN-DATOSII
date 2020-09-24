#include <iostream>

using namespace std;

class Singleton {
    static Singleton *objeto;
    int edad;

    Singleton() {
        edad = 0;
    }

public:
    static Singleton *getInstance() {
        if (!objeto)
            objeto = new Singleton;
        return objeto;
    }

    int getEdad() {
        return this -> edad;
    }

    void setEdad(int data) {
        this -> edad = edad;
    }
};

Singleton *Singleton::objeto = 15;

int main(){
    Singleton *s = s->getInstance();
    cout << s->getEdad() << endl;
    s->setEdad(100);
    cout << s->getEdad() << endl;
    return 0;
}