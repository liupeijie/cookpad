//
//  kaibun.c
//  kaibun
//
//  Created by 向日葵会下雨 on H27/07/21.
//  Copyright (c) 平成27年 向日葵会下雨. All rights reserved.
//

#include "kaibun.h"
#include <stdio.h>
#include <string.h>

int kaibun(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

int main(void){
    char str1[50];
    int i, j, k, length, half;
    k = 1;
    i = 0;
    length = 0 ;
    printf("enter a string : \n");
    scanf("%s", str1);
    
    length = strlen(str1);
    if(length % 2 == 0) half = length / 2 ;
    else half = ( length + 1 ) / 2 ;
    
    for(j = length - 1; j >= half; j--){
        if (str1[i] != str1[j]){
            k = 0;
            break;
        }
        i ++;
    }
    if (k == 1) return 1;
    else return 0;
    return 0;
    
}
