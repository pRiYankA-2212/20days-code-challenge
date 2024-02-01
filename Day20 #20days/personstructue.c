//Create a structer type person with name salary and age as its attibutes.Declare and initialize 2 varibale for this .Print the name of person and age of the other.
#include<stdio.h>
#include<string.h>
int main(){
    struct Person{
        int salary;
        int age ;
        char name [50];

    };
    struct Person female;
    female.age=30;
    female.salary=70000;
    strcpy(female.name,"radhika ");

    struct Person male;
    male.age=40;
    male.salary=75000;
    strcpy(male.name,"raghav ");

  printf("%s\n",female.name);
  printf("%d",male.age);

}
