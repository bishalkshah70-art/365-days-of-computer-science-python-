#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";



    printf("Enter Your age: ");
    scanf("%d", &age);




    printf("Enter Your gpa: ");
    scanf("%f", &gpa);


    printf("Enter Your grade: ");
    scanf(" %c", &grade);


    getchar();
    printf("Enter Your Full Name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1] = '\0';



    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);





    return 0;
}