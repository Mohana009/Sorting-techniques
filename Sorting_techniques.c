//SORTING TECHNIQUES



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

int partition(int *arr, int l, int h, int pivot){
	int s = l; 
	int e = h;
	int key = arr[pivot];
	while(s < e){
		while(arr[s] <= key){
			s++;
		}
		while(arr[e] > key){
			e--;
		}
		if(s < e){
			int temp = arr[s];
			arr[s] = arr[e];
			arr[e]= temp;
		}
	}
	int temp =arr[e];
	arr[e] = arr[pivot];
	arr[pivot] = temp;
	return e;
}
void Quick_sort(int *arr, int l, int h){
	if(l < h){
		int pivot = l;
		pivot = partition(arr, l, h, pivot);
		Quick_sort(arr, l, pivot-1);
		Quick_sort(arr, pivot+1, h);
		
	}
}
void Bubblesort(int *arr, int i, int j, int n){
	if(i >= n)	return;	//outerloop
	if(j >= n - 1)	return;	//inner loop
	
	if(arr[j] > arr[j+1]){
		int temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	}
	
	Bubblesort(arr, i, j+1, n);
	Bubblesort(arr, i+1, 0, n);
}
void Insertion_sort(int *arr, int n){
	for(int i = 1; i < n; i++){
		int curr = arr[i];
		int prev = i - 1;
		while(prev >= 0 && curr < arr[prev]){
			arr[prev + 1] = arr[prev];
			prev--;
		}
		arr[prev+1] = curr;
 	}
}
void Selection_sort(int *arr, int n){
	for(int i = 0; i < n - 1; i++){
		int si = i;
		for(int j = i+1; j < n; j++){
			if(arr[j] < arr[si]){
				si = j;
			}
		} 
		int temp = arr[si];
		arr[si] = arr[i];
		arr[i] = temp;
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
//	Merge_sort(arr, 0, n - 1);
//	Quick_sort(arr, 0, n-1);
//	Bubblesort(arr, 0, 1, n);
//	Insertion_sort(arr, n);
	Selection_sort(arr, n);
	Print_Array(arr, n);
	
	
}