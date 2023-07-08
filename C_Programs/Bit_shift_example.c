#include<stdio.h>

void main()
{
 int a = 9;
 a = a << 3;
 /**
  * in the above expression value of a is left shifted by 3
  * i.e 1001 << 3 --> shift 3 bytes to left -->1001000
  * in interger form the value of a is --> 72
  */

 printf("Left Shifted value: %d\n",a);      //72

}