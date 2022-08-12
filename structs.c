#include <stdio.h>

//creating the struct
struct myStructure{
	int age;
	char name[40];
};

int main(){
	struct myStructure s1; //creating structure variable
	
	//assigning values to the struct
	s1.age = 22;
	strcpy(s1.name, "Somade Daniel");
//	s1.name = "Somade Daniel"; //won't work
	
	//print values
	printf("I am %d years old", s1.age);
	printf("\nMy name is %s", s1.name);
	
	return 0;
}
