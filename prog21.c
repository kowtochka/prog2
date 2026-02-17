#include <stdio.h>
#include<stdlib.h>

void recursion();

int main(int argc, char const *argv[]){
    printf("Введите любое число и для выхода напишите 0\n");
    recursion();
    return 0;
}
void recursion(){
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("\n");
        printf("Все положительные числа\n");
        return;
    }
    recursion();
    if(num>0){
        printf("%d\n",num);
    }
}
