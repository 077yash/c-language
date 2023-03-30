#include<stdio.h>

struct employee{
	int id;
	char name[25];
	int age;
	char roll[10];
	char city[15];
	int experience;
	char company_name[50];
};

void main(){
	int n,i;
	
	printf("enter no. of employee: ");
	scanf("%d",&n);
	
	struct employee s[n];
	for(i=0;i<n;i++){
		
	printf("enter id\t: ");
	scanf("%d",&s[i].id);
	
	printf("enter name\t: ");
	scanf("%s",&s[i].name);
	
	printf("enter age\t: ");
	scanf("%d",&s[i].age);
	
	printf("enter roll\t: ");
	scanf("%s",&s[i].roll);
	
	printf("enter city\t: ");
	scanf("%s",&s[i].city);
	
	printf("enter experience\t: ");
	scanf("%d",&s[i].experience);
	
	printf("enter company_name\t: ");
	scanf("%s",&s[i].company_name);
   }
  
  printf("id\tname\tage\trole\t\tcity\texperience\tcompany_name\n");
  
  for(i=0;i<n;i++){
   	printf("%d\t",s[i].id);
   	printf("%s\t",s[i].name);
   	printf("%d\t",s[i].age);
   	printf("%s\t",s[i].roll);
   	printf("%s\t",s[i].city);
	printf("%d\t\t",s[i].experience);
	printf("%s\n",s[i].company_name);
   }

}
