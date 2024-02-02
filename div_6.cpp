#include<iostream>

using namespace std;


int main(){



cout << " Enter number : ";


	int num;
	cin >> num;


	bool check1 = (num % 2 == 0); // using%2


	double p = (double)num /2.0;// using /2
	p = p - (int) p;
	bool check2 =  == 0;


	int check3 = num % 10;	// using %10
	bool is_even3 = check3 == 0 || check3 == 2 || check3 == 4 || check3 == 6 || check3 == 8;

   }




