#include<stdio.h>
#include<string.h>




int toInteger(char val[]);


int main(char* argv[]) {

	char val[100];

	printf("enter a number as a string: ");

	scanf("%s",val);

	printf("\nresult: %d \n",toInteger(val));

	return 0;
}

int toInteger(char* val){
	int length = strlen(val);
	int result=0;
	int i=0;
	
	for(; i<length; i++){
		if(val[i] >= '0' && val[i]<='9'){
			int temp = val[i]-'0';
			result = result*10 + temp;
		}

	}
	return result;
}

