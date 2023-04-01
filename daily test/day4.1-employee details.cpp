#include <stdio.h>
#define MAX_EMPLOYEES 100
struct employee {
    int eid;
    char ename[20];
    float salary;
};
int main() {
    int n, i;
    struct employee emp[MAX_EMPLOYEES];
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Employee number: ");
        scanf("%d", &emp[i].eid);
        printf("Employee name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
        printf("%d %s %f", emp[i].eid,emp[i].ename,emp[i].salary);
    }
    return 0;
}
