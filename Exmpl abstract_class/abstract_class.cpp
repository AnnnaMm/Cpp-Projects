#include "abstr.h"

Rectangle::Rectangle() 
{
    Width_R = 0; 
    Height_R = 0;
};
Rectangle::Rectangle(double Width_R, double Height_R)
{
    if (Width_R < 0 || Height_R < 0)
    {
        this->Width_R = 0;
        this->Height_R = 0;
    }
    else {
        this->Width_R = Width_R;
        this->Height_R = Height_R;
    }
};
void Rectangle::setWidth(double w)
{
    Width_R = w;
}
void Rectangle::setHeight(double h)
{
    Height_R = h;
}
double Rectangle::getPerimeter()
{
    return P;
}

double Rectangle::getWidth()
{
    return Width_R;
}
double Rectangle::getHeight()
{
    return Height_R;
}

double Rectangle::Perimeter()
{
     P = (Width_R * 2) + (Height_R * 2);
     return P;
};
void Rectangle::showFigureType()
{
    cout << "Rectangle" << std::endl;
};
void Rectangle::output()
{
    cout << "a = " << Width_R << endl << "b = " << Height_R <<endl <<"P ="<< P << endl;
    cout << "-------------------------------" << endl;

};



Triangle::Triangle(double Side1, double Side2, double Side3)
{
    if (Side1 < 0 || Side2 < 0 || Side3 < 0)
    {
        this->Side1 = 0;
        this->Side2 = 0;
        this->Side3 = 0;
    }
    else {
        this->Side1 = Side1;
        this->Side2 = Side2;
        this->Side3 = Side3;
    }
};
void Triangle:: setS(double one, double two, double tree)
{
    Side1 = one;
    Side2 = two;
    Side3 = tree;
}
double Triangle::getS1()
{
    return Side1;
}
double Triangle::getS2()
{
    return Side2;
}
double Triangle::getS3()
{
    return Side3;
}
double Triangle::getPerimeter()
{
    return P;
}


double Triangle::Perimeter()
{
    P = Side1 + Side2 + Side3;
    return Side1 + Side2 + Side3;
};
void Triangle::showFigureType()
{
    cout << "Triangle" << std::endl;
};
void Triangle::output()
{
    cout << "a = " << Side1 << endl << "b = " << Side2 << endl << "c = " << Side3 << endl << "P = " << P << endl;
    cout << "-------------------------------" << endl;
};



Parallelogram::Parallelogram(double Width_P, double Height_P)
{
    if (Width_P < 0 || Height_P < 0)
    {
        this->Width_P = 0;
        this->Height_P = 0;
    }
    else {
        this->Width_P = Width_P;
        this->Height_P = Height_P;
    }
};
void Parallelogram::setWidth(double wp)
{
    Width_P = wp;
}
void Parallelogram::setHeight(double hp)
{
    Height_P = hp;
}
double Parallelogram::getPerimeter()
{
    return P;
}
double Parallelogram::getWidth()
{
    return Width_P;
}
double Parallelogram::getHeight()
{
    return Height_P;
}
double Parallelogram::Perimeter() 
{
    P =(Width_P * 2) + (Height_P * 2);
    return P;
};
void Parallelogram::showFigureType()
{
    cout << "Parallelogram" << std::endl;
};
void Parallelogram::output()
{
    cout << "a = " << Width_P << endl << "b = " << Height_P << endl << "P = " << P << endl;
    cout << "-------------------------------" << endl;
};


Trapeze::Trapeze(double SideT1, double SideT2, double SideT3, double SideT4)
{
    if (SideT1 < 0 || SideT2 < 0 || SideT3 < 0 || SideT4 < 0)
    {
        this->SideT1 = 0;
        this->SideT2 = 0;
        this->SideT3 = 0;
        this->SideT4 = 0;
    }
    else
    {
        this->SideT1 = SideT1;
        this->SideT2 = SideT1;
        this->SideT3 = SideT1;
        this->SideT4 = SideT1;
    }
};
void Trapeze :: setSt(double onet, double twot, double treet, double fourt)
{
    SideT1 = onet;
    SideT2 = twot;
    SideT3 = treet;
    SideT4 = fourt;
}
double Trapeze :: getS1t()
{
    return SideT1;
}
double Trapeze :: getS2t()
{
    return SideT2;
}
double Trapeze :: getS3t()
{
    return SideT3;
}
double Trapeze :: getS4t()
{
    return SideT4;
}
double Trapeze::getPerimeter()
{
    return P;
}


double Trapeze::Perimeter()
{
    P = SideT1 + SideT2 + SideT3 + SideT4;
    return P;
};
void Trapeze::showFigureType()
{
    cout << "Trapeze" << endl;
};
void Trapeze::output()
{
    cout << "a = " << SideT1 << endl << "b = " << SideT2 << endl << "c = " << SideT3 << endl << "d = " << SideT4 << endl << "P = " << P << endl;
    cout << "-------------------------------" << endl;
};
