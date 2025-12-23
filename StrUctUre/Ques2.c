// a record contains name of cricketer, his age, number of test matches that
// he has played and the average runs that he has scored in each test matche.
// Create an array of structure to hold records of 20 such cricketer and then
// write a program to read these records.

#include <stdio.h>
#include <string.h>
int main(){
    typedef struct records{
        char firstname[30];
        char lastname[30];
        int age;
        int matchPlayed;
        float average;
    }records;
    records arr[20];
    for(int i = 0;i<3;i++){
        printf("Enter name of cricketer: ");
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        printf("Enter Age: ");
        scanf("%d",&arr[i].age);
        printf("Enter total no. of Test matches played: ");
        scanf("%d",&arr[i].matchPlayed);
        printf("Enter the average of the player: ");
        scanf("%f",&arr[i].average);
    }

    for(int i = 0;i<3;i++){
        printf("Name: %s %s\n",arr[i].firstname,arr[i].firstname);
        printf("Age: %d\n",arr[i].age);
        printf("Matches: %d\n",arr[i].matchPlayed);
        printf("Average: %.2f\n",arr[i].average);
        printf("\n");
    }
    return 0;
}