#include<stdio.h>
struct Feet
{
	int inch,feet;
}f1,f2,f3;
main()
{
	printf("1st Distance");
	printf("\nEnter the value of inch=");
	scanf("%d",&f1.inch);
	printf("\nEnter the value of feet=");
	scanf("%d",&f1.feet);
	
	printf("\n2st Distance");
	printf("\nEnter the value of inch=");
	scanf("%d",&f2.inch);
	printf("\nEnter the value of feet=");
	scanf("%d",&f2.feet);
	
	f3.feet=f1.feet+f2.feet;
	f3.inch=f1.inch+f2.inch;
	
	printf("\nSum of two disatance in inch=%d \nSum of two disatance in feet=%d",f3.inch,f3.feet);
}
