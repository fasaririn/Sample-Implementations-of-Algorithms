#include <iostream>
using namespace std;
	
int main(){
	
	int n = 5; //size
	int array[n]={5, 2, 8, 6, 4}; //random numbers
	
	cout << "Unsorted Numbers: "; 
	for (int i=0; i < n; i++){
		cout << array[i] << " "; 
	}
	
	//sort
	
	for (int i = 0 ; i < n; i++ ){
		for (int j = 0; j < n-i-1; j++ ){
			if (array[j] > array[j+1]){
			//store in temp var
			int temp = array[j];
			//swap
			array[j] = array[j+1];
			array[j+1] = temp;
			}
		}
	}
	
	//display array
	
	cout << "\nSorted Numbers: "; 
	for (int i=0; i < n; i++){
		cout << array[i] << " "; 
	}
	
	return 0;
	
}
