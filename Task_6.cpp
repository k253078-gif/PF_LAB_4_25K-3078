#include <stdio.h>

int main(){
	int num1,num2,ans;
	
	printf("Enter First number :");
	scanf("%d",&num1);
	
    printf("Enter Second number :");
	scanf("%d",&num2);
	
    (num1==num2)
    
	? (printf("Both %d and %d are equal",num1,num2))
	:(num1>num2) 
	
	? (printf("%d is maximum",num1))
	:(printf("%d is maximum",num2));
    
    
	return 0;
}
