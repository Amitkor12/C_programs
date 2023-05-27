// Program to implement Array of structure

#include <stdio.h>
/* Initialization of structure 
    Name : student
*/
struct student{
    /* this are the data memebers of structure student 
       name : array of string of max size 30
       roll no of type integer
       p_Marks is for physics marks, Ch_marks is for Chemistry marks, M_marks is for maths Marks all are type of float
       percentage of type float 
    */
    char name[30];
    int Roll_no;
    float P_marks,Ch_marks,M_marks;
    float percentage;
};

int main()
{
    /* Creation of array of structure 
        Name : student 
        array name : info
        size of array (max) : 4
    */
	struct student info[4]; 
    
    /* assigning variables of type intergers */
    int n,temp;

    printf("Enter the number of students : ");
    /*the no of user input as no of student is passed*/
    scanf("%d",&n);

    /*iterate till no of student entered by user*/
    for(int i=0;i<n;i++)
    {
        /*this for loop will take the name roll no and marks 
          will calculate the perccentage and print
        */
        printf("enter student name:");
        scanf("%s",info[i].name);
        printf("enter roll_no:");
        scanf("%d",&info[i].Roll_no);
        printf("enter physic,chem and maths marks:");
        scanf("%f\t%f\t%f",&info[i].P_marks,&info[i].Ch_marks,&info[i].M_marks);
        info[i].percentage = ((info[i].P_marks+info[i].Ch_marks+info[i].M_marks)/300)*100;
        printf("the percentage is : %f\n",info[i].percentage);
    }
    /*this for loop will iterate till number of student entered by user 
      the implentation of this loop is to sort the students based on percentage
    */
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<4-1-i;j++)
        {
            if(info[j].percentage > info[j+1].percentage)
            {
                temp = info[j].percentage;
                info[j].percentage = info[j+1].percentage;
                info[j+1].percentage = temp;
            }
        }
    }
    /*this loop is to print the students based on sorted percentage*/
    for(int i=0;i<n;i++)
   {
        //printf("\n%f",info[i].percentage);
        printf("\nenter student name:%s",info[i].name);
        printf("\nenter roll_no:%d",info[i].Roll_no);
        printf("\nenter physic,chem and maths marks:%f\t%f\t%f",info[i].P_marks,info[i].Ch_marks,info[i].M_marks);
        printf("\nthe percentage is : %f\n",info[i].percentage);
   }

    return 0;
}