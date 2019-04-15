#include <stdio.h>
int main()
{
    float result;
    char ch;
    char choice;
    int  n;
    printf("Food Menu\n");
    printf("******************************\n");
    printf("Food             Price\n");
    printf("\n");
    printf("B= Burger        Rs.200\n");
    printf("F= French Fries  Rs.50\n");
    printf("P= Pizza         Rs.500\n");
    printf("S= Sandwiches    Rs.150\n\n");
    printf("Enter Your Choice:\n");
    scanf("%c",&ch);
    printf("Enter Quantity:\n\n");
    scanf("%d",&n);

    switch (ch) {
    case 'B': {
        printf("Total Bill = %d\n",n*200);
        break;
    }
    case 'F': {
        printf("Total Bill = %d\n",n*50);
        break;
    }
    case 'P': {
        printf("Total Bill = %d\n",n*500);
        break;
    }
    case 'S': {
        printf("Total Bill = %d\n",n*150);
        break;
    }
    default:
        printf("Thank You\n");
    }
    return 0;
}

