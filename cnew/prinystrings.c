#include <stdio.h>
#include <string.h>

int main() {
    char s1[] = "Far";
    char s2[] = "joke";
    int val = strcmp(s1, s2);
    printf("Now the val is %d", val);
    return 0;
}