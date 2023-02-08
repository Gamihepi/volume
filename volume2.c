#include<stdio.h>
struct student
{
	int roll_no;
	char name;
	float chemmarks;
	float mathsmarks;
	float phymarks;
	float per;
	
}S1,S2,S3,S4,S5;
main()
{
    
	
	printf("Enter the student 1 roll number=");
	scanf("%d",&S1.roll_no);
	printf("Enter the student 1 name=");
	scanf("%s",&S1.name);
	printf("Enter the stduent 1 chemmarks=");
	scanf("%f",&S1.chemmarks);
	printf("Enter the stduent 1 mathsmarks=");
	scanf("%f",&S1.mathsmarks);
	printf("Enter the stduent 1 phymarks=");
	scanf("%f",&S1.phymarks);
	S1.per	= (S1.chemmarks+S1.mathsmarks+S1.phymarks)*100/300;
	printf("\n Percentage of student 1=%f",S1.per);
	
	printf("\n\nEnter the student 2 roll number=");
	scanf("%d",&S2.roll_no);
	printf("Enter the student 2 name=");
	scanf("%s",&S2.name);
	printf("Enter the stduent 2 chemmarks=");
	scanf("%f",&S2.chemmarks);
	printf("Enter the stduent 2 mathsmarks=");
	scanf("%f",&S2.mathsmarks);
	printf("Enter the stduent 2 phymarks=");
	scanf("%f",&S2.phymarks);
	S2.per	= (S2.chemmarks+S2.mathsmarks+S2.phymarks)*100/300;
	printf("\n Percentage of student 2=%f",S2.per);
	
	
	printf("\n\nEnter the student 3 roll number=");
	scanf("%d",&S3.roll_no);
	printf("Enter the student 3 name=");
	scanf("%s",&S3.name);
	printf("Enter the stduent 3 chemmarks=");
	scanf("%f",&S3.chemmarks);
	printf("Enter the stduent 3 mathsmarks=");
	scanf("%f",&S3.mathsmarks);
	printf("Enter the stduent 3 phymarks=");
	scanf("%f",&S3.phymarks);
	S3.per	= (S3.chemmarks+S3.mathsmarks+S3.phymarks)*100/300;
	printf("\n Percentage of student 3=%f",S3.per);
	
	
	printf("\n\nEnter the student 4 roll number=");
	scanf("%d",&S4.roll_no);
	printf("Enter the student 4 name=");
	scanf("%s",&S4.name);
	printf("Enter the stduent 4 chemmarks=");
	scanf("%f",&S4.chemmarks);
	printf("Enter the stduent 4 mathsmarks=");
	scanf("%f",&S4.mathsmarks);
	printf("Enter the stduent 4 phymarks=");
	scanf("%f",&S4.phymarks);
	S4.per	= (S4.chemmarks+S4.mathsmarks+S4.phymarks)*100/300;
	printf("\n Percentage of student 4=%f",S4.per);
	
	
	printf("\n\nEnter the student 5 roll number=");
	scanf("%d",&S5.roll_no);
	printf("Enter the student 5 name=");
	scanf("%s",&S5.name);
	printf("Enter the stduent 5 chemmarks=");
	scanf("%f",&S5.chemmarks);
	printf("Enter the stduent 5 mathsmarks=");
	scanf("%f",&S5.mathsmarks);
	printf("Enter the stduent 5 phymarks=");
	scanf("%f",&S5.phymarks);
	S5.per	= (S5.chemmarks+S5.mathsmarks+S5.phymarks)*100/300;
	printf("\n Percentage of student 5=%f",S5.per);
	
	
}
