// Your code here...
#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num;
    scanf("%d", &num);

    if (num & (1 << 31))
        printf("Set\n");
    else
        printf("Not Set\n");

    return 0;
}
