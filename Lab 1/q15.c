//Name : Harshit Ravi 
//Group : 1A82
//Roll no. : 1025090056

#include <stdio.h>
int main(){
	int Roll_no = 1025090056;
	char Name[50]= "Harshit Ravi";
	
	float basic_salary,da,ta,gross_salary;
	printf ("Enter Basic salary of the person : ");
	scanf ("%f",&basic_salary);
	
	da = basic_salary * 10 / 100;
	
	ta = basic_salary * 12 / 100;
	
	gross_salary = basic_salary + da + ta;
	
	printf ("Gross Salary of the person : %f",gross_salary);
	
	return 0;
}
