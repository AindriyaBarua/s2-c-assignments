

#include<stdio.h>
struct st 
{ 
    int x; 
    static int y; 
}; 
int main() 
{ 
    printf("%d", sizeof(struct st)); 
    return 0; 
} 
/*out1.c:28:5: error: expected specifier-qualifier-list before ‘static’
 *      static int y;
 */
