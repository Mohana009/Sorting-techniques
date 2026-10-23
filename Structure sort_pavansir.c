//Pavan sir code
#include<stdio.h>
struct Employee{
	int Id;
	char name[20];
	int salary;
	char org[20];
};
typedef struct Employee employee;
void Print_structure(employee emps[], int n){
	printf("Id\tName\tSalary\tOrg\n");
	for(int i = 0; i < n; i++){
		printf("%d\t%s\t%d\t%s\n", emps[i].Id, emps[i].name, emps[i].salary, emps[i].org);	
	}
}
void Bubblesort(employee emps[], int n){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n -1 ; j++)
			if(emps[j].Id > emps[j + 1].Id){		//Sorting based on Id
				employee swap = emps[j];
				emps[j] = emps[j + 1];
				emps[j + 1] = swap;
			}
		}
	}
int main(){
	employee e1 = {90, "Ramu", 7500, "T-hub"};
	employee e2 = {10, "Aditya", 6500, "Google"};
	employee e3 = {12, "Raghu", 6000, "Microsoft"};
	employee emps[3] = {e1, e2, e3};
	Print_structure(emps, 3);
	Bubblesort(emps, 3);
	printf("\n");
	Print_structure(emps, 3);
	
	
	
}