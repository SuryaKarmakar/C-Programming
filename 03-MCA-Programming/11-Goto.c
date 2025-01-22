#include <stdio.h>

/*
# Forward jump -
goto label;
label:

# Backward jump -
label:
goto label;
*/

int main() {
    int age;

try_again:
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("you are eligible\n");
        goto end;
    }

    printf("you are not eligible\n");
    goto try_again;

end:
    return 0;
}