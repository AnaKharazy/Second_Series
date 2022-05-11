#include <stdio.h>
#include <math.h>
int main() {
    float day, totalcases;
    totalcases = 1;
    printf("enter the day:");
    scanf("%fl", &day);
    for (int i = 0; i < day; ++i) {
        totalcases = totalcases + (totalcases * 0.28);
    }
    printf("%1.f", totalcases);
    return 0;
}