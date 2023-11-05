//
//  main.c
//  09-3
//
//  Created by MacBook Air on 2023/11/05.
//

#include <stdio.h>
#include <stdlib.h>
#define N_STUDENT 5

int main(int argc, const char * argv[]) {
    int i;
    int grade[N_STUDENT];
    int score[N_STUDENT];
    
    for (i=0; i<N_STUDENT; i++)
        grade[i]=rand() % 100;
    
    for(i=0; i<N_STUDENT; i++)
        score[i] = grade[i];
    
    for(i=0; i<N_STUDENT; i++)
        printf("score[%d] = %d (grade:%i) \n",i,score[i],grade[i]);
    
    return 0;
}
