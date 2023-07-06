// finding percentage for single student
#include <stdio.h>
typedef struct student{                                //create struct using typedef
    char name[30];
    int Roll_no;
    float P_marks,Ch_marks,M_marks;
    float percentage;
}tstudent;                                          //name for typedef 

void main()
{
    tstudent sturct_info;                   //using name of typedef and creating object for structure
    printf("enter student name:");
    scanf("%s",sturct_info.name);           //through object of structure accessing the members of structure
    printf("enter roll_no:");
    scanf("%d",&sturct_info.Roll_no);
    printf("enter physics, chemistry and Maths marks:");
    scanf("%f\t%f\t%f",&sturct_info.P_marks,&sturct_info.Ch_marks,&sturct_info.M_marks);
    sturct_info.percentage = ((sturct_info.P_marks+sturct_info.Ch_marks+sturct_info.M_marks)/300)*100;
    printf("the percentage is : %f",sturct_info.percentage);
}