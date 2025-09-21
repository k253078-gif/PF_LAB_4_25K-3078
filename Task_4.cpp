#include <stdio.h>

int main() {
    int amount;
    int limit = 5000 ;

    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &amount);

    if (amount <= limit && amount % 20 == 0) {
        printf("Withdrawal approved.\n");
    } else {
        printf("Withdrawal denied.\n");
    }

    return 0;
}

