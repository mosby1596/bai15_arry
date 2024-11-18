// bai15_arry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	string cars[5] = { "volvo","BMW","Frod","mazda","tesla" };
	for (int i = 0; i < 5; i++)
	{
		cout << cars[i] << "\n";
		cars[1] = "vinamilk";
	}
} 


