#include<stdio.h>
void Bubble_sort(int A[], int i, int j, int n){
		//base case if all passes are done
		if(i >= n) return;
		
		//For each files
		if(j >= n - 1) return;
		
		if(A[j] > A[j + 1]){
			
			int swap = A[j];
			A[j] = A[j + 1];
			A[j + 1] = swap;
		}
		Bubble_sort(A, i, j+1, n);
		Bubble_sort(A, i+1, 0, n);
	}
int main(){
	int n;
	scanf("%d", &n);
	int A[n];
	for(int i = 0; i < n; i++) scanf("%d", &A[i]);
	int i = 0, j = i + 1;
	Bubble_sort(A, i, j, n);
	for(int i = 0; i < n; i++)	printf("%d ", A[i]);
	
}
