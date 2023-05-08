#include <stdio.h>

int reverse(int num);

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The reverse of the number is: %d", reverse(num));

    return 0;
}

int reverse(int num) {
    if(num == 0) {
        return 0;
    } else {
	(num % 10) * pow(10, floor(log10(num))) + reverse(num / 10);
    }
}
