#include <stdio.h>
#include <math.h>
int main() {
    int prepaid, paymentperiod, carprice, monthlyfee, payment, P, i;
    printf("enter the price of thr car:");
    scanf("%d", &carprice);
    printf("enter the prepaid:");
    scanf("%d", &prepaid);
    printf("enter the payment period:");
    scanf("%d", &paymentperiod);
    printf("percentage of annual profit:");
    scanf("%d", &monthlyfee);
    P = carprice - prepaid;
    i = monthlyfee / 12;
    payment = (i * P) / (1 - pow((1 + i), -monthlyfee));
    printf("monthlyfee:%d", payment / monthlyfee);
    printf("\ntotalpayment:%d", payment);
    return 0;
}