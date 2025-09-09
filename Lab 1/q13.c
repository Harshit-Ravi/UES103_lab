//Name : Harshit Ravi 
//Group : 1A82
//Roll no. : 1025090056

#include <stdio.h>
int main(){
	int Roll_no = 1025090056;
	char Name[50]= "Harshit Ravi";
	

	int p,r,t;
	float si;
	
	printf ("Enter the Principal amount : ");
	scanf ("%d",&p);

	printf ("Enter the rate : ");
	scanf ("%d",&r);

	printf ("Enter the Time : ");
	scanf ("%d",&t);
	
	si = ( p * r * t ) / 100;
	
	printf ("Simple interest = %f",si);
	return 0;
}
