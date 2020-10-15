//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/15.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

void f(void);
int i;

int main(void)
{
    for(i=0;i<5;i++)
    {
        
        f();
    }
    return 0;
}

void f(void)
{
    
    for(i=0;i<10;i++)
        printf("#");

}
