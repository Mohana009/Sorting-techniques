//Insertion sort
#include<stdio.h>
//We assume sorted and unsorted parts in the array
//Initially first element is considered as sorted
void Insertion_sort(int *A, int n){
	//i is starting from 1st index beacuse we consider first element (0th idexed element) as sorted part
	for(int i = 1; i < n; i++){
		int curr = 	A[i];	//Current element 
		int prev = i - 1;		//prev is first element in sorted part
		//Backward loop by creating space for current element
		while(prev >= 0 && A[prev] > curr){
			A[prev + 1] = A[prev];
			prev--;
		}
		A[prev + 1] = curr;	//Placing current element into its correct position
	}


void Print_array(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}

int main(){

	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	Insertion_sort(arr, n);
	Print_array(arr, n);	
}