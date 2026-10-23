/*We'll assume that array is divided into two parts
	1.sorted part
	2.Unsorted part
The smallest element from the unsorted part is swapped with the last element int the sorted part 

Initially we consider the total array as unsorted

Then we ind the smallest element in the array(unsorted part) and swaps it with the first element
So now the first element's part sorted and the remaining part is unsorted */

#include<stdio.h>
//void swap(int *a, int *b){		* -> dereferencing operator -> brings the value at that particular address
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
void Selection_sort(int arr[], int n){
		//We'll run the outer loop for n-1 times beacuse after placing the n - 1 elements
		//in their correct positions the nth element is also placed automatically
		
	for(int i = 0; i < n - 1; i++){
		int si = i;		
		/* si is index of the first element in the unsorted part
		
		We'll start comparing the first element in the usorted array with the remaining elements 
		in the unsorted array
		So j is started at i + 1 and runs till n */
		
		for(int j = i + 1; j < n; j++){			
			if(arr[j] < arr[si]){		
				si = j;
			}
		}
//		swap(&arr[i], &arr[si]); -> Swapping through call by reference -> & brings the address
	int temp = arr[i];
	arr[i] = arr[si];
	arr[si] = temp;
	
	//Time complexity O(n^2)
		
	}
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
	Selection_sort(arr, n);
	Print_array(arr, n);

}