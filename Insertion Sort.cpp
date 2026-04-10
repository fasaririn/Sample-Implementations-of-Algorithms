#include <iostream>
using namespace std;

void displayList(int arr[], int size){
	cout << endl;
	for (int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

void insertionSort(int arr[], int size){
	cout << endl;
	for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        
        cout << "Iteration #" << i << ": ";
        displayList(arr, size);
        
    }
}


int main(){
	
	int size = 7;
	int arr[size] = {8, 1, 10, 3, 4, 6, 7} ;
	
	/*
	If user input:
	cout << "Enter seven integers: \n";
	for (int i=0; i < size; i++){
		cin >> arr[i];
	}*/
	
	cout << "\nBefore Insertion Sort: ";
	displayList(arr, size);
	
	insertionSort(arr, size);
	
	cout << "\nAfter Insertion Sort: ";
	displayList(arr, size);
	
	return 0;
}
	
