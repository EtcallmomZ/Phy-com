#include <stdio.h>

int main()
{
    char name[30];
    char surname[30];
    char id[9];
    char dob[11];
    float gpa;

    int day,month,year;

    scanf("%s",name);
    scanf("%s",surname);
    scanf("%s",id);
    scanf("%s",dob);
    scanf("%f",&gpa);

    /* how to convert a dob format
     1. use sscanf(read) to separate them into 3 var
    */
    sscanf(dob,"%d/%d/%d",&day,&month,&year);

    // 2. use sprintf convert them(write) in format do you want (and it will be back to string)
    sprintf(dob,"%02d-%02d-%04d",day,month,year);
    
    printf("Fullname: %s %s\n",name,surname);
    printf("ID: %s\n",id);
    printf("DOB: %s\n",dob);
    printf("GPA: %.2f\n",gpa);

    return 0;
}