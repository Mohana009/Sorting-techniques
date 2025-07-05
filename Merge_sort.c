//Implementation in C
#include<stdio.h>
void Merge(int *arr, int l, int r, int m){
	int i = l; 
	int j = m+1;
	int B[r+1];
	int k = 0;
	while(i <= m && j <= r){
		if(arr[i] < arr[j]){
			B[k++] = arr[i++];
		}
		else if(arr[i] > arr[j]){
			B[k++] = arr[j++];
		}
	}
	while(i <= m){
		B[k++] = arr[i++];
	}
	while(j <= r){
		B[k++] = arr[j++];
	}
	for(int p = l, q = 0; p <= r; p++, q++){
		arr[p] =  B[q];
	}
}
void Merge_sort(int *arr, int l, int r){
	if(l < r){
		int m = (l+r)/2;
		Merge_sort(arr, l, m);
		Merge_sort(arr, m+1, r);
		Merge(arr, l, r, m);
	}
}
void Print_Array(int *A, int n){
	for(int i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i = 0; i < n; i++)	scanf("%d", &arr[i]);
	Merge_sort(arr, 0, n - 1);
	Print_Array(arr, n);
	
	
}
