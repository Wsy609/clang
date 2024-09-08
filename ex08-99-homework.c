/* ex-08-99-homework.c

*
***
*****
*********
*******
*****
****

*/

#include <stdio.h>

int main(void)
{

    for(int i = 0; i < 7; i++) 
    {
        {
        for(int j = 0; j < 7; j++) {
            if(i < 4) { // 상단

            if(j < 3 - i){
                printf(" ");
            } else if (j > 3 + i){
                printf(" ");
            } else {
                printf("*");
            } 
        } 

        }
        printf("\n");
        
    
    }
    printf("    | | Merry Christmas~*")
    
     return 0;
}
    }
