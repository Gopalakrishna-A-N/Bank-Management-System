#include<stdio.h>

struct account
{
    int accno;
    char name[30];
    float balance;
};

int main()
{
    struct account a[100];
    int n=0;
    int choice,acc,i,found;
    float amt;

    while(1)
    {
        printf("\n--- BANK MANAGEMENT SYSTEM ---\n");
        printf("1.Create Account\n");
        printf("2.Deposit\n");
        printf("3.Withdraw\n");
        printf("4.Check Balance\n");
        printf("5.Display All Accounts\n");
        printf("6.Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {

        case 1:
            printf("Enter Account Number: ");
            scanf("%d",&a[n].accno);

            printf("Enter Name: ");
            scanf("%s",a[n].name);

            printf("Enter Initial Balance: ");
            scanf("%f",&a[n].balance);

            n++;
            printf("Account Created Successfully\n");
            break;

        case 2:
            printf("Enter Account Number: ");
            scanf("%d",&acc);

            found=0;

            for(i=0;i<n;i++)
            {
                if(a[i].accno==acc)
                {
                    printf("Enter Amount: ");
                    scanf("%f",&amt);

                    a[i].balance+=amt;
                    printf("Amount Deposited\n");
                    found=1;
                }
            }

            if(!found)
            printf("Account Not Found\n");

            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d",&acc);

            found=0;

            for(i=0;i<n;i++)
            {
                if(a[i].accno==acc)
                {
                    printf("Enter Amount: ");
                    scanf("%f",&amt);

                    if(amt>a[i].balance)
                        printf("Insufficient Balance\n");
                    else
                    {
                        a[i].balance-=amt;
                        printf("Withdraw Successful\n");
                    }

                    found=1;
                }
            }

            if(!found)
            printf("Account Not Found\n");

            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d",&acc);

            found=0;

            for(i=0;i<n;i++)
            {
                if(a[i].accno==acc)
                {
                    printf("Balance: %.2f\n",a[i].balance);
                    found=1;
                }
            }

            if(!found)
            printf("Account Not Found\n");

            break;

        case 5:
            for(i=0;i<n;i++)
            {
                printf("\nAccount No: %d",a[i].accno);
                printf("\nName: %s",a[i].name);
                printf("\nBalance: %.2f\n",a[i].balance);
            }
            break;

        case 6:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}