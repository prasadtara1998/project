#include <stdio.h>

int main() 
{
    float selling_p,profit;
    printf("Enter the selling price: ");
    scanf("%f",&selling_p);
    printf("Eneter the profit earned: ");
    scanf("%f",&profit);
    printf("Cost price of one item is: %.2f",(selling_p-profit)/15);
    
    return 0;
}
