#include<iostream>

using namespace std;


int main(){

int num1, num2;


    cout << " Enter two numbers to exchange them : ";
	cin >> num1 >> num2;

	cout<<" Numbers before exchange =>  num1 = "<< num1 << " num2 = "<< num2 << endl;

    int helper = num1;
    num1 = num2;
    num2 = helper;

    cout<<" Numbers after exchange  =>  num1 = "<< num1 << " num2 = "<< num2;


}




