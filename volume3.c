#include<stdio.h>
enum week
{
	Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday
};
main()
{
	char n;
	printf("Enter the value of n=");
	scanf("%c",&n);
	switch(n)
	{
		case 'S':
			printf("%d",Sunday);
			break;
		case 'M':
			printf("%d",Monday);
			break;
		case 'T':
			printf("%d",Tuesday);
			break;
		case 'W':
			printf("%d",Wednesday);
			break;
		case 't':
			printf("%d",Thursday);
			break;
		case 'F':
			printf("%d",Friday);
			break;
		case 's':
			printf("%d",Saturday);
			break;
		default :
			printf("Invalid day.");
			break;
	}
}

