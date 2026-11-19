//Q151: Create an Employee structure with an enum for Department
//(HR, IT, FINANCE, SALES) and print the employee details.
#include <stdio.h>
#include <string.h>

enum Department {
    HR,
    IT,
    FINANCE,
    SALES
};

struct Employee {
    char name[100];
    int id;
    enum Department dept;
};

const char* deptToString(enum Department d) {
    switch (d) {
        case HR:      return "HR";
        case IT:      return "IT";
        case FINANCE: return "FINANCE";
        case SALES:   return "SALES";
        default:      return "UNKNOWN";
    }
}

int parseDept(const char *s, enum Department *out) {
    if (strcmp(s, "HR") == 0) {
        *out = HR;
        return 1;
    }
    if (strcmp(s, "IT") == 0) {
        *out = IT;
        return 1;
    }
    if (strcmp(s, "FINANCE") == 0) {
        *out = FINANCE;
        return 1;
    }
    if (strcmp(s, "SALES") == 0) {
        *out = SALES;
        return 1;
    }
    return 0;
}

int main() {
    struct Employee emp;
    char deptStr[32];

    printf("Enter employee details (e.g., Employee: Raj | ID: 11 | Dept: IT): ");
    if (scanf(" Employee: %99[^|] | ID: %d | Dept: %31s",
              emp.name, &emp.id, deptStr) != 3) {
        if (scanf("%99s %d %31s", emp.name, &emp.id, deptStr) != 3) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    size_t len = strlen(emp.name);
    while (len > 0 && emp.name[len - 1] == ' ') {
        emp.name[--len] = '\0';
    }

    if (!parseDept(deptStr, &emp.dept)) {
        printf("Invalid department.\n");
        return 1;
    }

    printf("Name: %s | ID: %d | Dept: %s\n",
           emp.name,
           emp.id,
           deptToString(emp.dept));

    return 0;
}