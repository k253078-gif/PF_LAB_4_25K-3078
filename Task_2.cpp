#include <stdio.h>
int main(){
	
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if (age < 12){
		printf("You are a Child");
	} 
	else if(age < 18){
		printf("You are a Teenager");
	}
	else if(age > 18 && age < 60 ){
		printf("You are a Adult");
	}
	else{
		printf("You are a Senior Citizen");
	}
	
	return 0;

}
