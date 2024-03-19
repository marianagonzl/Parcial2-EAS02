#include <iostream>
#include <string>
using namespace std;

class Figura{
private: 
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};


class Cuadrado: public Figura
{
    public:
    Cuadrado():Figura(){}
    Cuadrado(int b): Figura(b,b){
        float ar=b*b;
        setArea(ar);
    }

};

class Rectangulo: public Figura
{
    public:
    Rectangulo():Figura(){};
    Rectangulo(int b, int h): Figura(b, h){
        float ar = b*h;
        setArea(ar);
    }

};


class Triangulo: public Figura
{
    public:
    Triangulo():Figura(){}
    Triangulo(int b, int h): Figura(b, h){
        float ar = (b*h)/2;
        setArea(ar);
    }

};


int main () {

    Cuadrado c(5);
    cout << c.getArea() << endl; // 25
    Rectangulo r(5,5);
    cout << r.getArea() << endl; // 25
    Triangulo t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}

Figura::Figura()
{
    this->b = 0;
    this->h = 0;
    this->a = 0.0;
}

Figura::Figura(int b, int h)
{

    this->b = b;
    this->h = h;
    this->a = 0.0;
}

void Figura::setArea(float a)
{
    this->a=a;
}

float Figura::getArea()
{
    return this->a;
}