#include <stdio.h>

int main(){
	  char color;
	   printf("Enter a color R,G,Y :");
	   scanf("%c",&color);
	   
	   if(color=='R' || color== 'r'){
	   	printf("Stop!");
	   }
	   else if( color=='G' || color== 'g'){
	   	printf("GO!");
	   }
	   else{
	   	printf("Caution ");
	   }
	   
	   return 0;
}
