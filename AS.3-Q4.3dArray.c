#include <stdio.h>
#include <conio.h>
int i,j,k;
int num;
int main () {
    int arr[2][3][3];
   printf("Enter the values in the array: \n");
   for ( i = 1; i <= 2; i++ ) {

      for ( j = 1; j <= 3; j++ ) {
      	for (k = 1; k<= 3; k++ ) {
         printf("The value at arr[%d][%d][%d]:", i,j,k);
         scanf("%d",&arr[i][j][k]); 
    	}
      }
   }
   printf("Printing the values in array:\n");
      for ( i = 1; i <= 2; i++ ) {

     	 for ( j = 1; j <= 3; j++ ) {
      		for (k = 1; k<= 3; k++ ) {
         	printf("%d", arr[i][j][k]);
         	if(k==3)
         	{
         		printf("\n");
			 }
    	}
      }
      printf("\n");
	}
	printf("\n Enter the block row and column number: \n");
	scanf("%d %d %d",&i,&j,&k);
	printf("Enter the new number you want to update with:");
	scanf("%d",&num);
	arr[i][j][k]=num;
   printf("Array after updating: \n");
      for ( i = 1; i <= 2; i++ ) {
     	 for ( j = 1; j <= 3; j++ ) {
      		for (k = 1; k<= 3; k++ ) {
         	printf("%d", arr[i][j][k]);
         	if(k==3)
         	{
         		printf("\n");
			 }
    	}
      }
      printf("\n");
	}
   getch();
   return 0;
}
