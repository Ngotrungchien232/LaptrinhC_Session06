#include <stdio.h>

int main() {
    // in ra cac so tu 1 den 100
    for (int i = 1; i <= 100; i++) {
        // kiem tra xem so nao la boi chung cua 3 va 5
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        }
        // kiem tra xem so nao la boi chung cua 3
        else if (i % 3 == 0) {
            printf("Fizz\n");
        }
        // kiem tra xem so nao la boi chung cua 5
        else if (i % 5 == 0) {
            printf("Buzz\n");
        }
        // neu khong phai boi chung cua 3 va 5
        else {
            printf("%d\n", i);
        }
    }
    return 0;
}

