//This is the 7th question according to the assignment pdf.

//Name : Harshit Ravi 
//Group : 1A82
//Roll no. : 1025090056

#include <stdio.h>
int main (){
	int Roll_no = 1025090056;
	char Name[50]= "Harshit Ravi";
	
	int a,b;
	
	printf ("Enter the first number : ");
	scanf ("%d",&a);
	
	printf ("Enter the second number : ");
	scanf ("%d",&b);
	
	int max = a>b?a:b;
	
	printf ("The greatest of the two numbers %d and %d is : %d",a,b,max);
	
	return 0;
}
