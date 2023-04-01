#include <stdio.h>

union wage {
    int wage_int;
    float wage_float;
};

struct employee {
    char name[50];
    int id_number;
    union wage hourly_wage;
};

int main() {
    struct employee emp;
    printf("Enter employee's name: ");
    scanf("%s", emp.name);
    printf("Enter employee's ID number: ");
    scanf("%d", &emp.id_number);
    printf("Enter employee's hourly wage (as integer or float): ");
    scanf("%f", &emp.hourly_wage.wage_float);
    printf("Employee information:\n");
    printf("Name: %s\n", emp.name);
    printf("ID number: %d\n", emp.id_number);
    printf("Hourly wage: %d (as integer) or %.2f (as float)\n", emp.hourly_wage.wage_int, emp.hourly_wage.wage_float);
    return 0;
}

