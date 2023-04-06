#include<stdio.h>

int main()
{
    int choice, amount = 0, balance = 0;
    
    printf("Welcome to the Bank Management System\n\n");

    while(1)
    {
        printf("Enter 1 to deposit money\n");
        printf("Enter 2 to withdraw money\n");
        printf("Enter 3 to view balance\n");
        printf("Enter 00 to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter the amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("\nMoney deposited successfully\n\n");
                break;

            case 2:
                printf("\nEnter the amount to withdraw: ");
                scanf("%d", &amount);
                if(amount > balance)
                {
                    printf("\nInsufficient balance\n\n");
                }
                else
                {
                    balance -= amount;
                    printf("\nMoney withdrawn successfully\n\n");
                }
                break;

            case 3:
                printf("\nYour account balance is %d\n\n", balance);
                break;

            case 4:
                printf("\nThank you for using the Bank Management System\n");
                return 0;

            default:
                printf("\nInvalid choice\n\n");
                break;
        }
    }
}
