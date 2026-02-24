#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){
    int size;
    int m = 0;
    int k = 0;
    printf("Введите размер массива\n");
    scanf("%d",&size);
    int*c = malloc(sizeof(int)*size);
    int*d = malloc(sizeof(int)*size);
    int*b = malloc(sizeof(int)*size);
    srand(time(0));
    for(int i=0;i<size;i++){
        b[i]=rand()%101-50;
        if(b[i]>=0){
            c[m]=b[i];
            m++;
        }else{
            d[k]=b[i];
            k++;
        }
    }
    c =realloc(c,(sizeof(int)*m));
    d =realloc(d,(sizeof(int)*k));
    printf("Исходный массив:\n");
    for(int i =0;i<size;i++){
        printf("%d ", b[i]);
    }
    free(b);    
    printf("\n");
    printf("Массив отрицательных чисел:\n");
    for(int i =0;i<k;i++){
        printf("%d ", d[i]);
    }
    free(d);    
    printf("\n");
    printf("Массив положительных чисел:\n");
    for(int i =0;i<m;i++){
        printf("%d ", c[i]);
    }
    free(c);
    printf("\n");
    return 0;
}
