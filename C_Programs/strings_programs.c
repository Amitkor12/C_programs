// //program 8
// //charater to string
// #include <stdio.h>

// int main()
// {
//    char ch[40];
//    int i,n;
//    printf("enter the lenght of name");
//    scanf("%d",&n);
//    for(int i=0;i<=n;i++)
//    {
//        scanf("%c",&ch[i]);
//    }
   
//    printf("String:%s",ch);
   
//     return 0;
// }


// strcat
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//    char ch[40];
//    char ch2[]="SIEMENS";
//    char *ptr=ch;
//    char ch3[20];
//    int i,n;
//    printf("enter the lenght of name");
//    scanf("%d",&n);
//    for(int i=0;i<=n;i++)
//    {
//        scanf("%c",&ch[i]);
//    }
//    for(int i=0;i<=3;i++)
//    {
//        ch3[i] = ptr[i];
//    }
   
//    strcat(ch3,ch2);
//    printf("\nString:%s",ch3);
   
//     return 0;
// }


/* C Prog - Take Name as characters and add fixed string "SIEMENS" starting char 3 using pointers */
#include <stdio.h>
#include <stdint.h>
#include <string.h>
int main()
{
    char name[20],*str={"SIEMENS"},fname[30];
    int i=0,len=0,t=0,p = 0;
    char *str1=name, *str2=fname;
    int x,g,s,n,o;
    printf("enter your name: ");
    scanf("\n");
    scanf("%[^\n]%*c",&name);
    str1 += 3;
    printf("%s",str1);
    strcpy(str1,str);
    printf("%s",str1);
    printf("%s",name);
    strcat(name,fname);
    // n = strlen(name);
    // p = strlen(str);
    // len=n+p;
    // o=3+p; 
    // for(i=3;i<len;i++)
	// {
	// 	x = name[i];
	// 	if(t<strlen(str))
	// 	{
	// 		name[i] = str[t];
	// 		t=t+1;
	// 	}
	// 	name[o]=x;
	// 	o=o+1;
	// }
    // printf("%s", name);
    return 0;
}