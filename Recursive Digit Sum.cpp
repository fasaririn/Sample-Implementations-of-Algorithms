//Write a C++ program that uses recursion to compute the sum of the digits of a non-negative integer.

#include <iostream>
using namespace std;

int sumOfDigits(int num){
	
	//base case
	if (num == 0)
	return 0;
	
	//recursive case
	return (num % 10 + sumOfDigits(num/10));
	
}

int main(){
	
	int num = 12345; //insert random numbers here~
	cout << "Sum of digits: " << sumOfDigits(num);
}
