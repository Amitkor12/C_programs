#include <stdio.h>

int main()
{
    int a = 2;
    /**
     * @brief if an given nunber need to increase or decrease
     * eg : 
     * 2 --> 8
     * or 
     * 8 --> 4
     */
    a = (a<<2);         // 2 --> 8 //Left shift operator
    printf("%d\n",a);

    a = (a>>2);         //8 --> 2   //Right shift operator
    printf("%d\n",a);
    
    return 0;

}