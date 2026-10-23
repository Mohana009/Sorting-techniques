#include<stdio.h>
void print_array(int A[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}
int get_max(int A[], int n){
	int max = A[0];
	for(int i = 0; i < n; i++){
		if(max < A[i])	max = A[i];
		return max;
	}
}
void radix_sort(int A[], int n){
	int m = get_max(A, n);
	//2 Dimensional array with 10 rows and n columns
	int buckets[10][n];
	while(m){
		int e = 1;
		int count[10] ={0};
		//Segregation of numbers into buckets
		for(int i = 0; i < n; i++){
			int pos = (A[i]/e) % 10;
			buckets[pos][count[pos]] = A[i];
			count[pos]++;
		}
		//Reconstruction
		int c = 0;
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < count[i]; j++){
				A[c] = buckets[i][j];
				c += 1;
			}
		}
		e = e * 10;
		m = m / 10;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	int A[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &A[i]);
	}
	printf("Before sorting: ");
	print_array(A, n);
	radix_sort(A, n);
	printf("After sorting: ");
	print_array(A, n);
}
