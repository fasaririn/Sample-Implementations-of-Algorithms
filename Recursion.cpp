//Write a recursive algorithm to search for a target value x in a sorted array.
//Define the base case when the element is found or the subarray is empty
//Reduce the search space by half in each recursive call
//The algo used here is binary search which gets rid of half the array after every iteration
#include <iostream>
#include <array>
using namespace std;

int searchForX(int array[], int low, int high, int target){
	
	if (low > high){
		return -1;
	} // base case, subarray is empty
	
	int mid = low + (high - low)/2; // halves the array into 2 
	
	if (array[mid] == target) return mid; // base case, element is found
	
	if (target < array[mid]){ // if true, target is in the left
		return searchForX(array, low, mid - 1, target);
		}
	else{ // target is on the right
		return searchForX(array, mid+1, high, target);
	}
	// recursive base
		
}

int main(){
	int target, result;
	int numbers[6]{1, 3, 8, 10, 23, 24}; //random sorted array 	
	
	cout << "Numbers in array: ";
	for (int num : numbers) {
    	cout << num << " "; 
	} //for range to show the numbers in the array
	
	cout << endl << "Enter Target to Search: ";
	cin >> target;
	
	result = searchForX(numbers, 0, 5, target);
	
	if (result != -1){
	cout << "Target " << target << " found at index " << result;
	}
	else{
		cout << "Target " << target << " not found";	
	}
}
