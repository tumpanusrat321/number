#include<stdio.h>
int main()
{
    int n;
    printf("Enter day number: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("monday");
        break;
    case 4:
        printf("tuesday");
        break;
    case 5:
        printf("wednesday");
        break;
    case 6:
        printf("thursday");
        break;
    default:
        printf("Error");
    }
    return 0;
}
