//
//  main.c
//  project
//
//  Created by 이유진 on 2020/10/15.
//  Copyright © 2020 이유진. All rights reserved.
//

#include <stdio.h>

int all_files;

extern void sub();

int main(void) {
    
sub();
printf("%d\n", all_files);
    return 0;
}

