
/*Write a program to implement queue
Input :Limit
Output:Elements in queue
Date  :06/10/2012
 */

#include<stdio.h>

int queue[200];
int front=-1;
int rear=-1;
int limit;

void main() {

    void insert(int);
    int delete();
    int num,var,num1,i;

    printf("Enter the limit:");
    scanf("%d",&limit);

    printf(" MAIN MENU \n ..........\n 1.Add element to queue\n 2.Delete element from the queue \n 3.Display\n 4.exit \n ");

    do {

        printf("Enter the variable:");
        scanf("%d",&var);

        switch(var)  {

            case 1:
                   printf(" Enter the data ");
                   scanf("%d",&num);
                   insert(num);
                   break;

            case 2: 
                   num1=delete();
                   printf("Value returned from delete function is  %d ",num1);
                   break;

            case 3:
                   if(front>rear) {
                      
                       printf("\n  QUEUE EMPTY\n ");
                  
                   }
                  
                   else {
                     
                       for(i=front;i<=rear;i++) {
                        
                           printf("%d\n",queue[i]);
                       
                       }

                   }
                   break;

            default: 
                    printf("Invalid Choice . ");
                    break;
      
        }                          //end of switch

    } while(var!=4);        //end of do-while

}               //end of main

void insert(int num) {

    if(rear>=limit-1)  {

        printf("\nQUEUE FULL\n");
        return;
    }

    else  {
       
        if (front==-1)      /*If queue is initially empty */
            front=0;
        rear++;
        queue[rear]=num;

    }
}

int delete() {

    int num2 ;
  
    if(front==-1||front>rear) {

        printf("\n  QUEUE EMPTY \n");
        return 0;
    }

    else {

        num2=queue[front];
        front++;
    }
 
    if(front>rear) {

        front=rear=-1;

    }

    return(num2);

}

