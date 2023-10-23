#include<iostream>
using namespace std;
bool brickFit(int bHeight, int bWidth, int hHeight, int hWidth, int bDepth);

main()
{
	int bHeight, bWidth, bDepth, hHeight, hWidth;
	cout<< "Enter Height of brick: ";
	cin >> bHeight;
	cout << "Enter Width of brick: ";
	cin>> bWidth;
	cout<< "Emter depth of brick:";
	cin >> bDepth;
	cout<< "Enter Height of hole: ";
	cin>> hHeight;
	cout << "Enter width of hole: ";
	cin >> hWidth;
	cout << brickFit( bHeight, bWidth, hHeight, hWidth, bDepth);



}
bool brickFit(int bHeight, int bWidth, int hHeight, int hWidth, int bDepth)
{
	if( (hWidth==bWidth || hHeight==bWidth || hWidth==bDepth)  && (hHeight==bHeight || hHeight==bWidth || hHeight==bDepth))
	{
	return true;
	}
	else {
	return false;
	}


}
