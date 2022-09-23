#include "CD.h"
int main()
{
    int Size_of_COLLECTION;
    int YearOfAbum;
    cout << "Number of cd : ";
    cin >> Size_of_COLLECTION;
    cout << "---------------------" << endl;

   CD* CD_COLLECTION = new CD[Size_of_COLLECTION];

    for (int i = 0; i < Size_of_COLLECTION; i++)
    {
        CD_COLLECTION[i].ReadFromKeyboard();
    }
    cout << "Year of album release : ";
    cin >> YearOfAbum;

    int YearOfAbumIsInCollection = 0;
    for (int i = 0; i < Size_of_COLLECTION; i++)
    {
        if (YearOfAbum == CD_COLLECTION[i].GetYear())
        {
            cout << "CD, which was released this year : ";
            cout << CD_COLLECTION[i].GetName() << endl;
            YearOfAbumIsInCollection++;


        }
    }
    if (YearOfAbumIsInCollection == 0)
    {
        cout << " There is none CD, released in this year! ";
    }
    
    delete[] CD_COLLECTION;
}