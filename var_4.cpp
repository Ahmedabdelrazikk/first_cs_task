#include<iostream>

using namespace std;


int main(){

int num1, num2;


    cout << " Enter two numbers start & end : ";
	cin >> num1 >> num2;


	int S_1_num=(num2*(num2+1)/2);

	num1--;

	int S_num_num=(num2*(num2+1)/2)-(num1*(num1+1)/2);

	cout << "Sum from 1 to "<< num2 <<" = "<<S_1_num << endl;
	cout << "Sum from "<< ++num1 << " to " <<num2<<" = "<<S_num_num <<endl;


}




