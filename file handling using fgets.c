// using fgets()
#include<stdio.h>
void main()
{
    char name[30];
    FILE *fp;
    fp = fopen("Mahudoom.txt","r");
    if(fp == NULL)
    {
        printf("\n File could not be open");
    }else{
        // while(!feof(fp))
        // {
            fgets(name,30,fp);
            printf("\n %s",name);
        // }
    }
}
