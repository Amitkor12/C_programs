#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>

#define True 1
#define False 0

void main()
{
    int option = 0;
    double num1,num2,result; //taking two value to store the data and storing the result in variable result
    char string[10]={0};
    printf("\t\t Calculator Application\n");
    printf("Enter the options for calculations\n");
    printf("\n\t1:\tAddition\
            \n\t2:\tSubtraction\
            \n\t2:\tMultiplication\
            \n\t3:\tDivision\n");

    while(True)
    {
        scanf("%d",&option);
        printf("Enter the value of NUM1:\t");
        scanf("%lf",&num1);
        printf("Enter the value of NUM2:\t");
        scanf("%lf",&num2);

        if(option == 0)
        {
            printf("enter only options from above");
        }

        else if(option == 1)
        {
            result = num1 + num2;
            printf("| %-10s | %-10s | %-10s |\n", "FirstNum", "SecNum", "Result");
            printf("|------------|------------|------------|\n");
            printf("| %-10.03lf | %-10.03lf | %-10.03lf |\n", num1, num2, result);
        }

        else if(option == 2)
        {
            result = num1 - num2;
            printf("| %-10s | %-10s | %-10s |\n", "FirstNum", "SecNum", "Result");
            printf("|------------|------------|------------|\n");
            printf("| %-10.03lf | %-10.03lf | %-10.03lf |\n", num1, num2, result);    }

        else if(option == 3)
        {
            result = num1 * num2;
            printf("| %-10s | %-10s | %-10s |\n", "FirstNum", "SecNum", "Result");
            printf("|------------|------------|------------|\n");
            printf("| %-10.03lf | %-10.03lf | %-10.03lf |\n", num1, num2, result);
        }

        else if(option == 4)
        {
            result = num1 / num2;
            printf("| %-10s | %-10s | %-10s |\n", "FirstNum", "SecNum", "Result");
            printf("|------------|------------|------------|\n");
            printf("| %-10.03lf | %-10.03lf | %-10.03lf |\n", num1, num2, result);
        }

        else
        {
            printf("Do you Want to Continue : ( Yes/No)");
            scanf("%s",string);
            if(string == "Yes")
            {
                continue;
            }
            else
                break;
        }

        printf("Do you Want to Continue : ( Yes/No)");
        scanf("%s",string);
        if(string == "Yes")
        {
                continue;
        }
        else
            break;
    }

}