//
//  main.c
//  SHPP_Volkorezova
//
//  Created by Tatyana Volkorezova on 03.10.2017.
//  Copyright © 2017 shpp.com. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int height;
    printf("Please enter height of Christmas tree: ");
    scanf("%d", &height);
    
    if ((height<=0)||(height>9)){
        printf("Sorry but you've entered incorrect value of tree height. Pls enter digit from 1-9 \n");
        exit(0);
    }
    //implementation of Christmas tree
    for(int i = 1; i <= height; i++) {
        for(int j = 2; j <= (height+i); j++){
            if(j <= (height - i+1))
                printf(" ");
            else
                printf("*");
        }
       printf("\n");
    }
    //implementation of stump for tree (penek)
    for(int j = 1; j <= height-1; j++){
        printf(" ");
    }
    printf("*");
    
    printf("\n");
   //half of triangle (from min to max)
    for(int i = 0; i <=height; i++){
        for (int j = 0; j <= i-1; j++){
            printf("*");
        }
        printf("\n");
    }
   printf("\n");
   //half of triangle (from max to min)
    for(int i = 0; i <height; i++) {
        for(int j = 0; j < height-i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
    
