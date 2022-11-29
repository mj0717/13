#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME  20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student{
	int ID;
	char name[MAX_NAME];
	double grade; 
};

int main(int argc, char *argv[]) {
	
struct student s1={2213450,"MyoungjuChoi", 4.3};//instance

s1.ID=2213450;
strcpy(s1.name,"ChoiMyoungju");
s1.grade=3.3;

printf("ID: %i\n",s1.ID);
printf("name: %s\n",s1.name);
printf("grade: %lf\n",s1.grade);



	return 0;
}


