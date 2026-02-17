#include <stdio.h>
#include<stdlib.h>
#include<math.h>

void recursion();
int main(int argc, char const *argv[]){
    printf("1");
    recursion(3242);
    printf("\n");
    return 0;
}
void recursion(int bin){
    int num;
    num = bin%2;
    bin = floor(bin/2);
    if(bin==1){
        printf("%d",num);
        return;
    }
    recursion(bin);
    printf("%d",num);
}
