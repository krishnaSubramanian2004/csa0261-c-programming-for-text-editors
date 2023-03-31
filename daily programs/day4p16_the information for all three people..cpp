#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_ADDRESS_LENGTH 100

struct person {
    char name[MAX_NAME_LENGTH];
    int age;
    char address[MAX_ADDRESS_LENGTH];
};

int main() {
    struct person people[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter the name of person %d: ", i+1);
        fgets(people[i].name, MAX_NAME_LENGTH, stdin);
        strtok(people[i].name, "\n");

        printf("Enter the age of person %d: ", i+1);
        scanf("%d", &people[i].age);
        getchar();

        printf("Enter the address of person %d: ", i+1);
        fgets(people[i].address, MAX_ADDRESS_LENGTH, stdin);
        strtok(people[i].address, "\n"); 
    }
    for (int i = 0; i < 3; i++) {
        printf("Person %d:\n", i+1);
        printf("Name: %s\n", people[i].name);
        printf("Age: %d\n", people[i].age);
        printf("Address: %s\n", people[i].address);
    }

    return 0;
}
