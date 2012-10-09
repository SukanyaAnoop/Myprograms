
/*Write a program to implement stack through Array
Input :Array of elements
Output:Array of elements after pop and push operation
Date  :04/10/2012
 */

#include <stdio.h>
#include<ctype.h>

int stack[200];
int top=-1;   
int limit;

void main() {

    void push(int);
    int pop();
    int num,var,num1,i;

    printf("Enter the limit:");
    scanf("%d",&limit);

    printf(" MAIN MENU \n ..........\n 1.Add element to stack\n 2.Delete element from the stack \n 3.Display\n 4.exit \n ");

    do {

        printf("Enter the variable:");
        scanf("%d",&var);

        switch(var)  {

            case 1:
                printf(" Enter the data ");
                scanf("%d",&num);
                push(num);
                break;

            case 2: 
                num1=pop();
                printf("Value returned from pop function is  %d ",num1);
                break;

            case 3:
                if(top==-1) {

                    printf("\n  STACK EMPTY\n ");
                }

                else {

                    for(i=top;i>=0;i--) {

                        printf("%d\n",stack[i]);

                    }
                }
                break;

            default: 
                printf("Invalid Choice . ");
                break;

        }                          //end of switch

    } while(var!=4);        //end of do-while

}               //end of main


void push(int num) {

    if(top==limit-1)  {

        printf("\nSTACK FULL\n");
        return;
    }

    else  {

        top++;
        stack[top]=num;

    }
}

int pop() {

    int num2 ;
    if(top==-1) {

        printf("\n  STACK EMPTY \n");
        return 0;
    }

    else {

        num2=stack[top];
        top--;
    }
    return(num2);

}

