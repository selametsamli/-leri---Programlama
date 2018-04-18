#include <stdio.h>
#include <stdlib.h>

int main( ) {
	char name[20][15];
	char family[20][20];
	char TC_No[20][15];
	float avg[20];
	int i;
	for(i=0;i<5;i++){
		printf("Enter your name: ");
		scanf("%s",name[i]);
		printf("Enter your family name: ");
		scanf("%s",family[i]);
		printf("Enter your TC number: ");
		scanf("%s",TC_No[i]);
		printf("Enter your average: ");
		scanf("%f",&avg[i]);
	}
	
	printf("           name                family              TC no             Average       \n");
	printf("-----------------------------------------------------------------------------------\n");
	for(i=0;i<5;i++){
		printf("%15s  %20s %20s         %5.2f\n",name[i],family[i],TC_No[i],avg[i]);
	}
	
	return 0;
}

