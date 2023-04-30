#include <stdio.h>
#include <string.h>
struct employee{
    char name[20];
    int age;
    char pos[10];
    char doj[12];
}emp[10];

int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        printf("Enter details of employee %d:\n",i+1);
        printf("Name: ");
        scanf("%s",&(emp[i].name));
        printf("Age: ");
        scanf("%d",&(emp[i].age));
        printf("Position: ");
        scanf("%s",&(emp[i].pos));
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%s",&(emp[i].doj));
    }
    for(int i = 0;i<n - 1;i++){
        for(int j = 0;j < n-i-1;j++){
            if(strcmp(emp[j].name,emp[j+1].name)>0){
                struct employee temp = emp[j];
                emp[j] = emp[j+1];
                emp[j+1] = temp;
            }
        }
    }
    printf("Employee List sorted by name: \n\n");
    for(int i = 0;i<n;i++){
        printf("Name: %s\n",emp[i].name);
        printf("Age: %d\n",emp[i].age);
        printf("Position: %s\n",emp[i].pos);
        printf("Date of joining (dd/mm/yyyy): %s\n",emp[i].doj);
    }
    for(int i = 0;i<n - 1;i++){
        for(int j = 0;j < n-i-1;j++){
            if(strcmp(emp[j].doj,emp[j+1].doj)>0){
                struct employee temp = emp[j];
                emp[j] = emp[j+1];
                emp[j+1] = temp;
            }
        }
    }
    printf("\nEmployee List sorted by date of joining: \n\n");
    for(int i = 0;i<n;i++){
        printf("Name: %s\n",emp[i].name);
        printf("Age: %d\n",emp[i].age);
        printf("Position: %s\n",emp[i].pos);
        printf("Date of joining (dd/mm/yyyy): %s\n",emp[i].doj);
    }
    return 0;
}