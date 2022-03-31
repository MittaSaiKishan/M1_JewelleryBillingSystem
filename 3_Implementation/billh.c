#include <stdio.h>
#include <stdlib.h>
#include "jewellerybill.h"

void BillH(char name[40], char date[40])
{
    printf("\n\n");
    printf("\t   Padma Jewellers");
    printf("\n\t  ----------------");
    printf("\nDate;%s", date);
    printf("\nInvoice To:%s", name);
    printf("\n");
    printf("----------------------------------------------\n");
    printf("Items\t\t");
    printf("Quantity\t\t");
    printf("Total\t\t");
    printf("\n---------------------------------------------");
    printf("\n\n");
}
void BillB(char items[30], int quantity, float price)
{
    printf("%s\t\t", items);
    printf("%d\t\t", quantity);
    printf("%.2f\t\t", quantity * price);
    printf("\n");
}
void BillF(float Total)
{
    printf("\n");
    float discount = 0.1 * Total;
    float NetTotal = Total - discount;
    float CGST = 0.09 * NetTotal, GrandTotal = NetTotal + 2 * CGST;
    printf("-----------------------------------------------\n");
    printf("SubTotal\t\t\t%.2f", Total);
    printf("\nDiscount @5%s\t\t\t%.2f", "%", discount);
    printf("\n\t\t\t\t------");
    printf("\nNet Total\t\t\t%.2f", NetTotal);
    printf("\nCGST @9%s\t\t\t%.2f", "%", CGST);
    printf("\nSGST @9%s\t\t\t%.2f", "%", CGST);
    printf("\n-----------------------------------------------");
    printf("\nGrand Total\t\t\t%.2f", GrandTotal);
    printf("\n-----------------------------------------------\n");
}
