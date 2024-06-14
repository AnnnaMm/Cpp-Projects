#include "triangleclass.h"
//Triangle.
int main()
{
	int NumOfTriangles;
	cout << "Number of triangles : ";
	cin >> NumOfTriangles;

	Triangle* pArrOfTriangle = new Triangle[NumOfTriangles];
	Triangle trngl, t2;

	for (int i = 0; i < NumOfTriangles; i++)
	{
		cin >> trngl;
		pArrOfTriangle[i] = trngl;
	}


	bubblePerimeterSort(pArrOfTriangle, NumOfTriangles);

	cout << "                     " << endl;
	cout << "***************" << endl;
	cout << "                     " << endl;

	for (int i = 0; i < NumOfTriangles; i++)
	{
		cout << pArrOfTriangle[i];
	}

	cout << "                     " << endl;
	cout << "Isosceles triangles" << endl;
	cout << "                     " << endl;

	for (int i = 0; i < NumOfTriangles; i++)
	{
		if ((pArrOfTriangle[i]).IsIsosceles())

			cout << pArrOfTriangle[i];

	}
	cout << "                     " << endl;
	cout << "Equilateral triangeles" << endl;
	cout << "                     " << endl;
	for (int i = 0; i < NumOfTriangles; i++)
	{
		if ((pArrOfTriangle[i]).IsEquilateral())

			cout << pArrOfTriangle[i];

	}
	cout << "                     " << endl;
	cout << "Rectangular triangles" << endl;
	cout << "                     " << endl;
	for (int i = 0; i < NumOfTriangles; i++)
	{
		if ((pArrOfTriangle[i]).IsRectangular())

			cout << pArrOfTriangle[i];

	}


	Triangle tMax;
	int nMax = 0;

	for (int i = 0; i < NumOfTriangles; i++)
	{
		if (tMax < pArrOfTriangle[i])
		{
			tMax = pArrOfTriangle[i];
			nMax = i;

		}
	}

	cout << "                     " << endl;
	cout << "Max area is:" << tMax.GetSquare() << endl;
	cout << "                     " << endl;

	delete[] pArrOfTriangle;
	getchar();
}







