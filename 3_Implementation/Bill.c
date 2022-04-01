#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "jewellerybill.h"

int main()
{
    float Total;
    int opt, n, invoiceFound = 0;
    struct order ord;
    struct order orders;
    char saveB = 'y';
    char contFlag = 'y';
    char name[40];
    FILE *fp;
    while (contFlag == 'y')
    {
        float Total = 0;
        int invoice = 0;
        printf("\t=================Padma Jewellers===============");
        printf("\n\nPlease select your prefered operation");
        printf("\n\n1.Generate Invoice");
        printf("\n2.Show all Invoices");
        printf("\n3.Search Invoice");
        printf("\n4.Exit");
        void BillH();
        printf("\n\nPlease Select your prefered operation:\t");
        scanf("%d", &opt);
        fgetc(stdin);
        switch (opt)
        {
        case 1:
            system("clear");
            printf("\n\nCustomer Name:\t");
            fgets(ord.customername, 50, stdin);
            ord.customername[strlen(ord.customername) - 1] = 0;
            strcpy(ord.date, __DATE__);
            printf("\nPlease Enter the Number of Items:\t");
            scanf("%d", &n);
            ord.numberofItems = n;
            for (int i = 0; i < n; i++)
            {
                fgetc(stdin);
                printf("\n\n");
                printf("Please enter the item %d:\t", i + 1);
                fgets(ord.itm[i].items, 20, stdin);
                ord.itm[i].items[strlen(ord.itm[i].items) - 1] = 0;
                printf("Please enter the quantity:\t");
                scanf("%d", &ord.itm[i].quantity);
                printf("Please enter the unit price:\t");
                scanf("%f", &ord.itm[i].price);
                Total += ord.itm[i].quantity * ord.itm[i].price;
            }
            BillH(ord.customername, ord.date);
            for (int i = 0; i < ord.numberofItems; i++)
            {
                BillB(ord.itm[i].items, ord.itm[i].quantity, ord.itm[i].price);
            }
            BillF(Total);
            printf("\n\tThank you.Visit Again.\n");
            printf("\nDo you want to save the invoice [y/n]:\t");
            scanf("%s", &saveB);
            if (saveB == 'y')
            {
                fp = fopen("JewellersBill.dat", "a+");
                fwrite(&ord, sizeof(struct order), 1, fp);
                // if (fwrite != 0)
                //   printf("\nSuccessfully saved");
                // else
                //   printf("\nError saving");
                fclose(fp);
            }
            break;
        case 2:
            system("clear");
            fp = fopen("JewellersBill.dat", "r");
            printf("\n *****Your Previous Invoices*****\n");
            while (fread(&orders, sizeof(struct order), 1, fp))
            {
                float tot = 0;
                BillH(orders.customername, orders.date);
                for (int i = 0; i < orders.numberofItems; i++)
                {
                    BillB(orders.itm[i].items, orders.itm[i].quantity, orders.itm[i].price);
                    tot += orders.itm[i].quantity * orders.itm[i].price;
                }
                BillF(tot);
            }
            fclose(fp);
            break;

        case 3:
            printf("\nEnter the name of the customer:\t");
            // fgetc(stdin);
            fgets(name, 50, stdin);
            name[strlen(name) - 1] = 0;
            system("clear");
            fp = fopen("JewelleryBill.dat", "r");
            printf("\t *****Invoice of %s*****\n", name);
            while (fread(&orders, sizeof(struct order), 1, fp))
            {
                float tot = 0;
                if (!strcmp(orders.customername, name))
                {
                    BillH(orders.customername, orders.date);
                    for (int i = 0; i < orders.numberofItems; i++)
                    {
                        BillB(orders.itm[i].items, orders.itm[i].quantity, orders.itm[i].price);
                        tot += orders.itm[i].quantity * orders.itm[i].price;
                    }
                    BillF(tot);
                    invoiceFound = 1;
                }
            }
            if (!invoiceFound)
            {
                printf("Sorry the invoice for %s  doesnot exists", name);
            }
            fclose(fp);
            break;

        case 4:
            printf("\n\t\tBye Bye :)\n\n");
            exit(0);
            break;

        default:
            printf("Sorry invalid option");
            break;
        }
        printf("\nDo you want to perform another operation?[y/n]:\t");
        scanf("%s", &contFlag);
    }
    printf("\n\n");
    return 0;
}