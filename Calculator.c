#include <stdio.h>

int main(){
    float num1, num2;
    char operate;
    
    while (1){
        printf("[*] Enter number: ");
        scanf("%f",&num1);
        printf("[*] Enter Number: ");
        scanf("%f",&num2);
        printf("[*] Enter Operator: ");
        scanf(" %c",&operate);
        switch (operate)
        {
        case '+':
            printf("[+] Answer: %.2f\n",num1 +num2);
            break;
        case '-':
            printf("[+] Answer: %.2f\n",num1 -num2);
            break;
        case '/':
            if (num2 == 0){
                printf("[-] Can't Devide By Zero\n");
            }else{
                printf("[+] answer: %.2f\n",num1 / num2);
            }
            break;
        case '*':
            printf("[+] Answer: %.2f\n",num1 *num2);
            break;
        default:
            printf("[Invalid Input!]\n");
            break;
        }

    }

    


    return 0;
}