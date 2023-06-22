/* C Prog - Take Name as characters and add fixed string "SIEMENS" starting char 3 using pointers */

#include <stdio.h>
#include <stdint.h>
#include <string.h>
int main()
{
    char name[20],*str={"SIEMENS"};
    int len=0,p = 0;
    static int t = 0;
    int x,g,s,n,o;

    printf("enter your name: ");
    scanf("\n");
    scanf("%[^\n]%*c",&name);

    n = strlen(name);
    p = strlen(str);

    len=n+p;
    o=3+p;

    for(int i=3;i<len;i++)
	{
		x = name[i];
		if(t<p)
		{
			name[i] = str[t];
			t=t+1;
		}
		name[o]=x;
		o=o+1;
	}
    printf("%s", name);
    return 0;
}