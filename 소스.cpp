#include <iostream>

using namespace std; 

int main()
{
	int i = 0;
	int Sum = 0;

	for (i = 0; i <= 100; i++)
	{
		//Sum = Sum + i;
		Sum += i;
	}
	cout << Sum << endl;
	
	return 0;
}