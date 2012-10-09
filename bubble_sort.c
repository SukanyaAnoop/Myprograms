
/* Write a program to implement bubble sorting
Input :Limit
Output:Sorted array
Date  :04/10/2012
 */

#include<stdio.h>

void main() {

    int i,j,limit,temp,array[200];

    printf("Enter the limit:");
    scanf("%d",&limit);

    printf("Enter the elements \n");
    for(i=0;i<limit;i++) {

        scanf("%d",&array[i]);

    }

    for(i=0;i<limit;i++) {

        for(j=i+1;j<limit;j++) {

            if(array[i]>array[j]) {

                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    printf("Sorted array is \n");
    for(i=0;i<limit;i++) {

        printf("%d\t",array[i]);

    }
}




