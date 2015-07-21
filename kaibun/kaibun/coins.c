//
//  coins.c
//  kaibun
//
//  Created by 向日葵会下雨 on H27/07/21.
//  Copyright (c) 平成27年 向日葵会下雨. All rights reserved.
//

#include "coins.h"
#include <stdio.h>

#define A 500
#define B 100
#define C 50
#define D 10
#define E 5
#define F 1

#define Money 1000
#define Price 521

void coins() {
    int charge;
    int num500, num100, num50, num10, num5, num1;
    charge = Money - Price;
    if(charge < 0 ) printf("お金足りません");
    else{
        num500 = charge / A;
        charge = charge % A;
        num100 = charge / B;
        charge = charge % B;
        num50 = charge / C;
        charge = charge % C;
        num10 = charge / D;
        charge = charge % D;
        num5 = charge / E;
        charge = charge % E;
        num1 = charge / F;
        printf("500 * %d  \n", num500);
        printf("100 * %d  \n", num100);
        printf("50 * %d  \n", num50);
        printf("10 * %d  \n", num10);
        printf("5 * %d  \n", num5);
        printf("1 * %d  \n", num1);
    }
    
}
