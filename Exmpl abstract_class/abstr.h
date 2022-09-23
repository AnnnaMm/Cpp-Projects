#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

class Figure
{
public:

    virtual double Perimeter() = 0;
    virtual void output() = 0;


};
class Rectangle : public Figure // прямокутник
{
private:
    double Width_R; //ширина 
    double Height_R;
    double P;//висота
public:
    Rectangle();
    
    Rectangle(double Width_R, double Height_R);
    void setWidth(double w);
    double getWidth();

    void setHeight(double h);
    double getHeight();

    double getPerimeter();
    double Perimeter() override;

    void showFigureType();
    
    void output();
   

};
class Triangle : public Figure  //переробити на трикутник 
{
private:
    double Side1;
    double Side2;
    double Side3;
    double P;
public:
    Triangle();
    
    Triangle(double Side1, double Side2, double Side3);
    void setS(double one,double two,double tree);

    double getS1();
    double getS2();
    double getS3();

    double getPerimeter();
    double Perimeter() override;
    
    void showFigureType();
  
    void output();
   
};

class Parallelogram : public Figure // трапеція
{
private:
    double Width_P;
    double Height_P;
    double P;
public:
    Parallelogram();
    Parallelogram(double Width_P, double Height_P);

    void setWidth(double wp);
    double getWidth();

    void setHeight(double hp);
    double getHeight();

    double getPerimeter();
    double Perimeter() override;
  
    void showFigureType();
    
    void output();
    
};
class Trapeze : public Figure
{
private:
    double SideT1;
    double SideT2;
    double SideT3;
    double SideT4;
    double P;
public:
    Trapeze();
    
    Trapeze(double SideT1, double SideT2, double SideT3, double SideT4);
    void setSt(double onet, double twot, double treet, double fourt);

    double getS1t();
    double getS2t();
    double getS3t();
    double getS4t();

    double getPerimeter();
    double Perimeter() override;
    
    void showFigureType();
 
    void output();
   
};
