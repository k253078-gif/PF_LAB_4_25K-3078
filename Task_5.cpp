#include <stdio.h>

int main(){
	
	int number;
	printf("Enter a number: ");
	scanf("%d",&number);
	
	if (number%3==0 && number%5==0){
		
		printf("The number %d is  divisible by both 3 and 5", number);
	}

	else{
		printf("The number %d is not divisible by 3 and 5", number);
	}
	return 0;
}
