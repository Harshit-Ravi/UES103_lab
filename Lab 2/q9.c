//Name : Harshit Ravi 
//Group : 1A82
//Roll no. : 1025090056

#include <stdio.h>
int main (){
	int Roll_no = 1025090056;
	char Name[50]= "Harshit Ravi";
	
	int a,b;
	double division;
	printf ("Enter the first number : ");
	scanf ("%d",&a);
	printf ("Enter the second number : ");
	scanf ("%d",&b);
	division = (double)a/b;
	printf ("Result : %.2lf",division);
	return 0;
}
