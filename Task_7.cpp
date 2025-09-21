#include <stdio.h>

int main(){
	int rating;
	
	printf("What would you rate the movie /' Lion King /' from 1 to 5: ");
	scanf("%d",&rating);

    switch (rating) {
        case 5:
            printf("Excellent!\n");
            break;
        case 4:
            printf("Good.\n");
            break;
        case 3:
            printf("Average.\n");
            break;
        case 2:
            printf("Poor.\n");
            break;
        case 1:
            printf("Terrible.\n");
            break;
        default:
            printf("Invalid rating! Please enter a number between 1 and 5.\n");
    }

    return 0;   
	
}
