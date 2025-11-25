/* Demonstrating structures containing arrays and arrays of structs */

#include <stdio.h>
#include <string.h>

typedef struct Person {
    int age;
    char gender;
    char name[32];
} Person;

int main() {
    Person p1;
    p1.age = 50;
    p1.gender = 'F';
    strcpy(p1.name, "ABC");     //Note that p1.name = "Kriti" is not permitted

    Person p2 = {44, 'M', "XYZ"};

    Person family[4] = {{1, 'F', "ABC"}, 
                        {2, 'F', "DEF"}, 
                        {30, 'F', "PQR"}, 
                        {33, 'M', "XYZ"}};

    int kid1Age = family[0].age;
    int kid2Age = family[1].age;
    printf("The kids are %d and %d years old\n", kid1Age, kid2Age);

    return 0;

}