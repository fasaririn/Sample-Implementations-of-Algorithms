#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high){
		int left, right, tempIndex;
		int temp[100];
		
		left = low;
		tempIndex = low;
		right = mid + 1;
		
		while (left <= mid && right <= high){
	        
			if (arr[left] < arr[right]){
	            temp[tempIndex] = arr[left];
	            left++;
	        }
	        
	        else{
	            temp[tempIndex] = arr[right];
	            right++;
	        }
	        
	        tempIndex++;
    	}

    while (left <= mid){
        
		temp[tempIndex] = arr[left];
        left++;
        tempIndex++;
    }

    while (right <= high){
        temp[tempIndex] = arr[right];
        right++;
        tempIndex++;
    }

    for (int i = low; i < tempIndex; i++){
        arr[i] = temp[i];
    }
    
}

void mergeSort(int arr[], int low, int high){
	
	if (low < high){
		int mid; 
		mid = (low + high)/2;
		
		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);
		
		merge(arr, low, mid, high);
	}
	return;
}

int main(){
	
	int size;
	cout << "Enter size: ";
	cin >> size;
	
	int arr[size];
	
	cout << "Enter " << size << " integers: \n";
	for (int i=0; i < size; i++){
		cin >> arr[i];
	}
	
	int low = 0;
	int high = size - 1;
	
	cout << "Before Merge Sort: ";
	for (int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	
	mergeSort(arr, low, high);
	
	cout << "\nAfter Merge Sort: ";
	for (int i=0; i<size; i++){
		cout << arr[i] << " ";
	}
	
	return 0;
}
