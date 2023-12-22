#include<stdio.h>
int ten_times(int *i);

int main(){
    int i = 7;
    printf("The value of a variable i before function call is %d\n",i);
    printf("The ten times of i is %d",ten_times(&i));
    return 0;
}

int ten_times(int *i){
    int temp;
    temp = 10*(*i);
    return temp;
}