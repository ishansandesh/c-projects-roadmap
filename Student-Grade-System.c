#include <stdio.h>

int main() {
    printf("\033[1;33m|----------------- Student-Grade-System -------------------|\033[0m\n\n\n");


    char name[50];
    int marks[5];
    int total = 0;
    float avg;

    printf("[*] Enter student name: ");
    scanf("%s", name);

    for(int i = 0; i < 5; i++){
        printf("[*] Enter subject %d marks: ", i+1);
        scanf("%d", &marks[i]);
        if (marks[i] >= 0 && marks[i] <= 100){
            total += marks[i];
        }else{
            printf("Not in range!\n");
            i--;
        }
        
    }

    avg = total / 5.0;

    char grade;

    if(avg >= 90)
        grade = 'A';
    else if(avg >= 80)
        grade = 'B';
    else if(avg >= 70)
        grade = 'C';
    else if(avg >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n----- RESULT -----\n");
    printf("[+] Name: %s\n", name);
    printf("[+] Total: %d\n", total);
    printf("[+] Average: %.2f\n", avg);
    printf("[+] Grade: %c\n", grade);

    return 0;
}