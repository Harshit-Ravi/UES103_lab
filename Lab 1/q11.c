//Name : Harshit Ravi 
//Group : 1A82
//Roll no. : 1025090056

#include <stdio.h>
#include <math.h>
int main (){
	int Roll_no = 1025090056;
	char Name[50]= "Harshit Ravi";
	
	double a,result;
	int n;
	
	printf ("Enter a number : ");
	scanf ("%lf",&a);
	
	printf ("Enter the value of n (for the nth root) : ");
	scanf ("%d",&n);
	
	result = pow(a,1.0/n);
	
	printf ("The value of %dth root of %.2lf is : %.4lf",n,a,result);
	return 0;
}
