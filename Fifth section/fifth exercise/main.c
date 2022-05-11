#include <stdio.h>
#include <math.h>
int main() {
    float initialhousecost, annualfuelcost, taxrate, formula;
    printf("enter the initial house cost:");
    scanf("%fl", &initialhousecost);
    printf("enter the annual fuel cost:");
    scanf("%fl", &annualfuelcost);
    printf("enter the tax rate");
    scanf("%fl", &taxrate);
    formula = initialhousecost + (annualfuelcost * 5) + 5 * (initialhousecost * taxrate);
    printf("%fl", formula);
    return 0;
}

