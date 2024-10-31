/*
Sample Input:
4
5
Sample Output:
9
1

a' = a+b
b' = |a-b|
*/
#include <stdio.h>
#include<math.h>
void update(int *a,int *b) {
    // Complete this function  
    int tg1 = *a + *b;
    int tg2 = abs(*a - *b);
    // Update the values through pointers
    *a = tg1;
    *b = tg2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}