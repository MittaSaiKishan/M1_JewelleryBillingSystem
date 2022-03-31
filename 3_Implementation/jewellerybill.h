/**
 * @file jewellerybill.h
 * @author MittaSaiKishan
 * @brief Jewellery Bill Invoice for the purchase of items
 * @version 0.1
 * @date 2022-03-31
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef __JEWELLERY_BILL_H__
#define __JEWELLERY_BILL_H__

#include <stdio.h>
#include <string.h>

struct item
{
    char items[30];
    float price;
    int quantity;
};

struct order
{
    char customername[40];
    char date[40];
    int numberofItems;
    struct item itm[40];
};
/**
 * @brief BillHeaderFunction To print customer details
 *
 * @param name [in]
 * @param date [in]
 */
void BillH(char name[40], char date[40]);

/**
 * @brief BillBodyFunction To print price
 *
 * @param items [in]
 * @param quantity [in]
 * @param price [out]
 */

void BillB(char items[30], int quantity, float price);

/**
 * @brief BillFooterFunction To print Total amount
 *
 * @param Total [out]
 */
void BillF(float Total);

#endif /*__JEWELLERY_BILL_H__*/