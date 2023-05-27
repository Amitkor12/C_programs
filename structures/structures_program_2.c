// finding percentage for single student
// #include <stdio.h>
// struct student{
//     char name[30];
//     int Roll_no;
//     float P_marks,Ch_marks,M_marks;
//     float percentage;
// };

// int main()
// {
//     struct student info;
//     printf("enter student name:");
//     scanf("%s",info.name);
//     printf("enter roll_no:");
//     scanf("%d",&info.Roll_no);
//     printf("enter physic,chem and maths marks:");
//     scanf("%f\t%f\t%f",&info.P_marks,&info.Ch_marks,&info.M_marks);
//     info.percentage = ((info.P_marks+info.Ch_marks+info.M_marks)/300)*100;
//     printf("the percentage is : %f",info.percentage);
//     return 0;
// }


// program to print by variable and pointer
// #include <stdio.h>
// struct student{
//     char name[30];
//     int Roll_no;
//     float P_marks,Ch_marks,M_marks;
//     float percentage;
// };

// int main()
// {
//     struct student info;
//     struct student *ptr = &info;
    
    
//         printf("enter student name:");
//         scanf("%s",info.name);
//         printf("enter roll_no:");
//         scanf("%d",&info.Roll_no);
//         printf("enter physic,chem and maths marks:");
//         scanf("%f\t%f\t%f",&info.P_marks,&info.Ch_marks,&info.M_marks);
//         info.percentage = ((info.P_marks+info.Ch_marks+info.M_marks)/300)*100;
//         printf("the percentage is : %f\n",info.percentage);
        
        
//         printf("\n");
//         printf("\nenter student name:%s",ptr->name);
//         printf("\nenter roll_no:%d",ptr->Roll_no);
//         printf("\nenter physic,chem and maths marks:%f\t%f\t%f",ptr->P_marks,ptr->Ch_marks,ptr->M_marks);
//         printf("\nthe percentage is : %f\n",ptr->percentage);
        
//         printf("\n");
//         printf("\nenter student name:%s",info.name);
//         printf("\nenter roll_no:%d",info.Roll_no);
//         printf("\nenter physic,chem and maths marks:%f\t%f\t%f",info.P_marks,info.Ch_marks,info.M_marks);
//         printf("\nthe percentage is : %f\n",info.percentage);
// return 0;
// }