CODE

#include <stdio.h>
int main()
{
    int a[10], item, noOfElements;
    int i;
    printf("\nEnter number of elements of an array : ");
    scanf("%d", &noOfElements);
    printf("\n");
    printf("Enter elements : ");
    for (int i = 0 ; i < noOfElements ; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter item to search : ");
    scanf("%d", &item);
    for (int i = 0 ; i <= 9 ; i++)
    {
        if ( item == a[i] )
        {
            printf("Item found at location %d", i+1);
            break;
        }
    }
    if ( i > 9)
        printf("\nItem does not exist.");
    return 0;
}


OUTPUT

Enter number of elements of an array : 4

Enter elements : 7 6 5 4  
Enter item to search : 5
Item found at location 3
