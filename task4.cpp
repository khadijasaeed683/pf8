#include<iostream>
using namespace std;
int primeNo(int num);

main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;
	cout << primeNo(num);
}

int primeNo(int num)
{
	int  count=0;
	
		for (int c = num; c >= 1; c--)
		{
			for(int n = 2; n < num; n++)
			{
			
			if (c % n != 0)
			{
				count++;
			}
			}
			
		}
	return count;
		
}