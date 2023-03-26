#include <stdio.h>

#define MAX 5
struct stack
{   
    int arr[MAX];
    int top;
}st;
void push();
void pop();
void display();

int main(){
    int option;
    st.top=-1;//stack empty

    do{
        printf("\nSelect an option\n1)Push\n2)Pop\n3)Display elements\n4)Exit\n");
        printf("Your choice is: ");
        scanf("%d", &option);

        switch(option){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                //exit(0);
                break;
            default:
                break;
        }

    }while(option!=4);


    return 0;
}

void push(){
    int item;
    if(st.top == MAX-1){
        printf("\n\nThe stack is overflow");
    }
    else{
        printf("Ingrese el elemento: ");
        scanf("%d", &item);
        st.top++;
        st.arr[st.top] = item;
    }
}

void pop(){
    if(st.top == -1){
        printf("\n\n Stack underflow");
    }
    else{
        int item;
        item = st.arr[st.top];
        st.top--;
        printf("\n\nThe popped element is: %d", item);
    }
}

void display(){
    if(st.top == -1){
        printf("/nThe stack is empty");
    }
    else{
        for(int i=st.top; i>0; i--){
            printf("\n%d", st.arr[i]);
        }
    }

}