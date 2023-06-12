 #include <stdio.h>
 #include <string.h>
 int main()
 {
     char ch[10];
     char ch2[] = "Siemens";
     int n;
     char *ptr = ch;
     char *ptr1 = ch2;
     printf("Enter the size of name:");
     scanf("%d",&n);
     for ( int i = 0; i <= n; i++)
     {
         /* code */
         scanf("%c",&ch[i]);
     } 
     for(int i=0;i<3;i++)
     {
        printf("%s",*(ptr+3));
        strcat((ptr+3),ptr1);
     }
    
    // ptr = ch+3;
    // ptr1 = ch2;

    //  strcat(ptr,ptr1);
     printf("%s",ptr);
     return 0;
 }