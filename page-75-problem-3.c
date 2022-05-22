#include <stdio.h>

int main()
{
    double loan_amount, interest_rate, numbers_of_years, total_amount, monthly_amount;
    printf("Enter loan amount: ");
    scanf("%lf", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter  number of years: ");
    scanf("%lf", &numbers_of_years);
    total_amount = loan_amount + loan_amount * interest_rate * numbers_of_years / 100.00;
    monthly_amount = total_amount / (numbers_of_years * 12);
    printf("Total amount = %0.2lf \n", total_amount);
    printf("monthly amount = %0.2lf \n", monthly_amount);
    return 1;
}