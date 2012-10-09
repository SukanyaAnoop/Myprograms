
/* write a program to implement insertion sort
Input :Limit
Output:Sorted array
Date  :04/10/2012
 */

#include<stdio.h>

void main() {

    int limit,array[200],i,j,temp;

    printf("Enter the limit:");
    scanf("%d",&limit);

    printf("Enter the elements :\n");
    for(i=0;i<limit;i++) {

        scanf("%d",&array[i]);

    }

    for (i=1;i<limit;i++)  {

        temp = array[i];
        j = i-1;

        while ((j>= 0) && (array[j]) > temp) {

            array[j+1] = array[j ];

            j--;
        }

        array[j+1] = temp;
    }

    printf("Enter the elements :\n");

    for(i=0;i<limit;i++) {

        printf("%d\t",array[i]);
    
    }

}
