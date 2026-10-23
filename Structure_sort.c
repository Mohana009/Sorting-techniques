//Mycode to sort structure 			
//Sorting based on first letter of the name
//Just worked for 2 names
#include<stdio.h>
struct Human{
	char name[20];
	int age;
};
int main(){					//i = 0			i = 1			i = 2
	struct Human  H[3] = {{"Rajesh", 13}, {"Ashok", 10}};
					//name[k]
	//printf("%s %d\n", H[0].name, H[0].age);
	int k;
	scanf("%d", &k);
	struct Human t;
	for(int i = 0; i < 2; i++){			
			if(H[i].name[k - 1] > H[i + 1].name[k - 1]){
				printf("Sorting Required");
				t = H[i];
				H[i] = H[i + 1];
				H[i + 1] = t;
				printf("\nDone\n");
			}
			else	printf("Not required\n");
	}
	for(int i = 0; i < 3; i++){
		printf("%s %d\n", H[i].name, H[i].age);
	}
	
}