// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     int x = 0x01234567;
//     //char *ptr = (char *)(&x);
//     char *ptr;
//     *ptr = (char)x;

// if (ptr)
//     printf("Little Endian [LSB first]");  // or LED1 ON
// else
//     printf("Big Endian [MSB first]"); 

// return 0;
// }



#include <stdio.h>

/* function to show bytes in memory, from location start to start+n*/
// void show_mem_rep(char *start, int n)
// {
// 	int i;
// 	for (i = 0; i < n; i++)
// 		printf(" %.2x", start[i]);
// 	printf("\n");
// }

/*Main function to call above function for 0x01234567*/
int main()
{
int a = 0x01234567;
int n = sizeof(a);
char *ptr = (char *)(&a);
for(int i=0;i<n;i++)
{
    printf("%.2x\t",ptr[i]);
}
if (ptr)
{
    printf("\nLittle Endianess");
}
else
printf("Big endianess");

return 0;
}
