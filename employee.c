/#include <stdio.h>

struct Employee {
    char name[50]; 
    int id; 
    float salary;
    int experience;
    char department[50];
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%d",e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter experience in years: ");
    scanf("%d", &e.experience);

    getchar();
    printf("Enter department: ");
    fgets(e.department, sizeof(e.department), stdin);

    printf("\nEmployee Details:\n");
    printf("Name: %s", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Experience: %d years\n", e.experience);
    printf("Department: %s", e.department);

    return 0;
}
