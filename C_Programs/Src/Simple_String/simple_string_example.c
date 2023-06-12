#include <stdio.h>

void main()
{
    int n = 6;
    char ch[6]={}; //with this declaration we have null charater appended

    /*  
     * char ch[10]; // this will not have null charater
    */

    for(int i = 0;i<n;i++)
    {
        scanf("%c",&ch[i]);
    }
    
    printf("%s\n",ch);
}