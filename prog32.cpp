#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]){
    int size;
    printf("Введите размер массива\n");
    scanf("%d",&size);
    float*a = new float [size];
    int**b = new int* [size];
    srand(time(0));
    for(int i=0;i<size;i++){
        a[i]=(float)rand()/rand();
    }
    for(int i=0;i<size;i++){
        b[i] =(int*) &a[i];
    }
    printf("Адреса элементов массива:\n");
    for(int i =0;i<size;i++){
        printf("%20p ",b[i]);
    }
    printf("\n");
    printf("Исходный массив:\n");
    for(int i =0;i<size;i++){
        printf("%20f ",a[i]);
    }
    for(int i=0;i<size;i++){
        for(int j=size-1;j>i;j--){
            if(*b[j]<*b[j-1]){
                int* temp = b[j];
                b[j]=b[j-1];
                b[j-1] = temp;
            }
        }
    }
    printf("\nОтсортированные адреса элементов массива:\n");
    for(int i =0;i<size;i++){
        printf("%20p ",b[i]);
    }
    printf("\n");

   
    return 0;
}