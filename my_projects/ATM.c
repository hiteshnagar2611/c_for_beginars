#include <stdio.h>

int main(){
    float x,y;
    char ch;
    printf("enter initial amount\n");
    scanf("%f",&x);
    printf("enter\nc for credit\nd for debit\nb for balance\n");
    scanf("\n%c",&ch);
    switch (ch)
    {
    case 'c':
        printf("enter creadit amount\n");
        scanf("%f",&y);
        x=x+y;
        printf("new amount=%f",x);
        break;
    case 'd':
        printf("enter debit amount\n");
        scanf("%f",&y);
        if(x>=y){
            x=x-y;
            printf("new amount=%f",x);
        }
        else{
            printf("insufficient amount in your account ");
        
        }
        break;

        case 'b':
        printf("amount in account =%f",x);
        break;
    default:
        printf("choose correct option ");
        break;
    }

return 0;
}
