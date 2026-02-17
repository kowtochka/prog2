#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int N =9;
int nums[10];
int c=0;
void recursion();
void main(){
    srand(time(0));
    for(int i=0;i<N;i++){
        nums[i]=rand()%21-10;
    }
    for(int i =0;i<N+1;i++){
        printf("%d ", nums[i]);
    }    
    printf("\n");
    printf("Отрицательные числа массива\n");  
    recursion(nums, N);  
}

void recursion(int n, int N){
    int num;
    if(nums[c]<=0){
        num=nums[c];
        printf("%d\n",num);
    }
    if(c==9){
        printf("Положительные числа массива\n");
        return;
    }
    if(nums[c]>0){
        num=nums[c];
    }    
    c++;
    recursion(n, N);
    if(num>0){
        printf("%d\n",num);
    }
}