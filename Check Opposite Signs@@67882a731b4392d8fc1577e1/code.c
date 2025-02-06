#include <stdio.h>
int main() {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    // Check if n1 and n2 have opposite signs
    if ((n1 > 0 && n2 < 0) || (n1 < 0 && n2 > 0)) {
        printf("True");
    } else {
        printf("False");
    }
}
