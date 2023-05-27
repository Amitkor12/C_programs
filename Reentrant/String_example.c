#include<stdio.h>
#include<string.h>
#include<stdint.h>

void main()
{
    uint8_t temp,temp3;
    char temp2[] = "amit";
    for(int i=0;i<sizeof(temp2);i++)
    {

     printf("%c",temp2[i]);
    }
	// temp = temp2;
    // temp3 = temp ;
	
}