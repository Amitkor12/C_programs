// sorting as per percentage
#include <stdio.h>
#include <string.h>

struct student{
    char name[30];
    int Roll_no;
    float P_marks,Ch_marks,M_marks;
    float percentage;
};

int main()
{
	struct student info[4];
    char tempName[30];
    int temp;
    for(int i=0;i<2;i++)
    {
        printf("enter student name:");
        scanf("%s",info[i].name);
        printf("enter roll_no:");
        scanf("%d",&info[i].Roll_no);
        printf("enter physic,chem and maths marks:");
        scanf("%f\t%f\t%f",&info[i].P_marks,&info[i].Ch_marks,&info[i].M_marks);
        info[i].percentage = ((info[i].P_marks+info[i].Ch_marks+info[i].M_marks)/300)*100;
        printf("the percentage is : %f\n",info[i].percentage);
    }
    for(int i=0;i<2-1;i++)
    {
        for(int j=0;j<2-1-i;j++)
        {
            if(info[j].percentage > info[j+1].percentage)
            {
                temp = info[j].percentage;
                info[j].percentage = info[j+1].percentage;
                info[j+1].percentage = temp;
                strcpy(tempName,info[j].name);
                strcpy(info[j].name,info[j+1].name);
                strcpy(info[j+1].name,tempName);
            }
        }
    }
    
    for(int i=0;i<2;i++)
   {
        printf("\n%s",info[i].name);
        printf("\ntotal percentage is : %.3f\n",info[i].percentage);
   }

    return 0;
}