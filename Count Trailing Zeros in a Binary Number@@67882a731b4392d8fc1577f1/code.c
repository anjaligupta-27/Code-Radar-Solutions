// Your code here...
#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t num;
    scanf("%d", &num);

    printf("%d\n", (num == 0) ? 32 : __builtin_ctz(num));
    
    return 0;
}