#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){
    int n;
    int s=0;
    printf("Введите размер массива\n");
    scanf("%d",&n);
    int*a = malloc(sizeof(int)*n);
    int*b = malloc(sizeof(int)*n);
    for(int i=0;i<n-2;i++){
        a[i]=i+2;
    }
    for (int i=0; i<n;i++){
        s=0;
        for(int j=1;j<n;j++){
            if( a[j]%a[i]!=0){
                a[j]=b[s];
                s++;
            }
        }
        free(a);
        int *a = malloc(sizeof(int)*s);
        b =realloc(b,(sizeof(int)*s));
        for(int k=0;k<s;s++){
            a[k]=b[k];
        }

    }
    printf("Простые числа:\n");
    for(int i =0;i<s;i++){
        printf("%d ", a[i]);
    }
    return 0;
}

//ты уснул или говорить не можешь?