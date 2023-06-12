//sorting 

// Bubble sorting

#include <stdio.h>

int main()
{
   int a[20],n,i,j,temp;
   printf("Enter no for sorting");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               temp = a[j];
               a[j] = a[j+1];
               a[j+1] = temp;
           }
       }
   }

    for(i=0;i<n;i++)
   {
       printf("\n%d",a[i]);
   }
    return 0;
}


// // selection sorting
// #include <stdio.h>

// int main()
// {
//     int a[20],n,i,j,temp,temp1;
//     printf("enter the no elements:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
    
//     for(i=0;i<n-1;i++)
//     {
//         temp = i;
//         for(j=i+1;j<n;j++)
//         {
//             if(a[j]<a[temp])
//             temp = j;
//         }
//         temp1 = a[temp];
//         a[temp] = a[i];
//         a[i] = temp1;
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     return 0;
// }

// //insertion sorting
// #include <stdio.h>

// int main()
// {
//     int a[20],n,i,j,temp,temp1;
//     printf("enter the no elements:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
    
//     for(i=1;i<n-1;i++)
//     {
//         temp = a[i];
//         for(j=i-1;j>=0&&a[j]<temp;j--)
//         {
//             a[j+1] = a[j];
            
//         }
//         a[j+1] = temp;
        
//     }
//     for(i=0;i<n;i++)
//     {
//         printf("%d\t",a[i]);
//     }

//     return 0;
// }