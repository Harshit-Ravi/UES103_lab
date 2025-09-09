//Name : Harshit Ravi 
//Group : 1A82
//Roll no. : 1025090056

#include <stdio.h>
int main (){
	int Roll_no = 1025090056;
	char Name[50]= "Harshit Ravi";
	
	float r,pi,area;
	printf ("Enter radius : ");
	scanf ("%f",&r);
	
	pi = 3.14;
	
	area = pi * r * r;
	
	printf ("Area of cirle with radius %f is : %f",r,area);
	return 0;
}
