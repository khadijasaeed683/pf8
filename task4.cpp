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
	
		
			for(int n = 2; n < num; n++)
			{
			
			if (num % n != 0)
			{
				count++;

			}
			n--;
			}
			
	return count;
		
}