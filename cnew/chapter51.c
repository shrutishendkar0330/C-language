#include<stdio.h>
int main() {
    int i = 10;
    int *j;
    j = &i;
    printf("The address of value of variable is %u\n",&i);
    printf("The value of i is %d\n", *j);
    return 0;
}