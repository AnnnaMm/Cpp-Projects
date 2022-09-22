#include "abstr.h"
int main()
{
    /* Rectangle rect(30, 50);
     Triangle tr(30, 20, 40);
     Parallelogram pr(10, 15);
     Trapeze trp(15, 20, 25, 30);*/
   /*  cout << "Rectangle square: " << rect.getPerimeter() << endl;
     cout << "Triangle square: " << tr.getPerimeter() << endl;
     cout << "Parallelogram square: " << pr.getPerimeter() << endl;
     cout << "Trapeze square: " << trp.getPerimeter() << endl;
     return 0*/
  /*  Rectangle r;
    r.setHeight(5);
    r.setWidth(7);
    r.Perimeter();
    auto p = r.getPerimeter();*/
    
    const int constanta = 8;
    Figure** figures = new Figure * [constanta];

    figures[0] = new Rectangle(2, 6);
    figures[1] = new Rectangle(4, 7);

    figures[2] = new Triangle(5, 5, 8);
    figures[3] = new Triangle(12, 13, 14);

    figures[4] = new Parallelogram(5, 9);
    figures[5] = new Parallelogram(7, 8);

    figures[6] = new Trapeze(6, 9, 13, 11);
    figures[7] = new Trapeze(2, 5, 9, 7);

    for (int i = 0; i < constanta; i++)
    {
        figures[i]->Perimeter();
    }
    cout << "Rectangle" << endl;
    figures[0]->output();
    figures[1]->output();
    cout << "-------------------------------" << endl;
    cout << endl;

    cout << "Triangle" << endl;
    figures[2]->output();
    figures[3]->output();
    cout << "-------------------------------" << endl;
    cout << endl;

    cout << "Parallelogram" << endl;
    figures[4]->output();
    figures[5]->output();
    cout << "-------------------------------" << endl;
    cout << endl;

    cout << "Trapeze" << endl;
    figures[6]->output();
    figures[7]->output();
    cout << "-------------------------------" << endl;
    cout << endl;
    return 0;
}