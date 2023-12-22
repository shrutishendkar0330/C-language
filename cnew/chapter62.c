#include <stdio.h>

void address(int i){
    printf("The Addrees of i is %u", &i);
}

int main() {
    int i =5;
    printf("The address of i is %u\n", &i);
    addresss(i);
    return 0;
}