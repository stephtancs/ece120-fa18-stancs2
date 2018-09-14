#include <stdio.h>
 
int main()
{
    int val1 = 12;
    int val2 = -11;
    int val3 = 3;
    
    int res1,res2;
 
    res1 = val1%val3;
    res2 = val2%val3;
 
    printf("%i\n%i\n", res1, res2);
 
    return 0;
}

