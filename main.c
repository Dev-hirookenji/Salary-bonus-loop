#include <stdio.h>
#define p printf
#define s scanf

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Mark Kenneth O. Ferrer DICT 1-3*/

int main() 
{
	
	int emno, year, n=0;
	char ans, name [40];
	float sal, total, bonus[999];
	year = 0;
	
	do{
	
	p("\nEmployee No. :	");
	s("%d", &emno);
	p("\nEmployee Name: ");
	s("%s", name);
	p("Salary: ");
	s("%f", &sal);
	p("Years of service: ");
    s("%d",&year);
    
	n=n+1;
	if(year==1)
	
        bonus[n]=sal*0.10;
	
	
	else if(year>=2&&year<=5)
	
        bonus[n]=sal*0.20;
	
	
	else if(year>=6&&year<=10)
	
        bonus[n]=sal*0.50;
	
	
	else if(year>=11)
	
        bonus[n]=sal*0.75;
	

	p("BONUS: %.2f",bonus[n]);
    p("\n\nPROCESS ANOTHER? (Y/N)");
    s("%s",&ans);
    
    total += bonus[n];
}
	while((ans=='Y')||(ans=='y'));
	p("\n\nTotal Bonus: %.2f",total);
	
	return 0;
}
