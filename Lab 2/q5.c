//Name : Harshit Ravi 
//Group : 1A82
//Roll no. : 1025090056

#include <stdio.h>
int main (){
	int Roll_no = 1025090056;
	char Name[50]= "Harshit Ravi";
	
	int a,b,c;
	printf ("Enter the first number : ");
	scanf ("%d",&a);
	printf ("Enter the second number : ");
	scanf ("%d",&b);
	printf ("The values of a and b be %d and %d, respectively.\n",a,b);
	c = a;
	a = b;
	b = c;
	printf ("After swapping, the values of a and b becomes %d and %d, respectively.",a,b);
	return 0;
}
