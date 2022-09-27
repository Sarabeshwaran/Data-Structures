CODE

#include <stdio.h>
int main()
{
int i, low, high, mid, n, key, array[100];
printf("Enter number of elements:");
scanf("%d",&n);
printf("Enter %d integers:", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find:");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list", key);
return 0;
}


Sample Output :

Enter number of elements:5
Enter 4 integers:3
4
5
6
Enter value to find:5
5 found at location 3
