#include<stdio.h>
#include<string.h>
struct employee{
    char name[20];
    char address[30];
    int phone;

};
void total(struct employee e[5]);
int main(){
    struct employee e[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter the name, address and phone of no. %d employee:\n");
        scanf("%s",&e[i].name);
        scanf("%s",&e[i].address);
        scanf("%d",&e[i].phone);
    }
    total(e);
    printf("Thank you!!!");
    return 0;
}
void total(struct employee e[5])
{
    int i,j;
    char temp[20];
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(strcmp((e[i].name),(e[i+1].name))>0)
            {
                strcpy(temp,e[i].name);
                strcpy(e[i].name,e[i+1].name);
                strcpy(e[i+1].name,temp);
            }
        }
    }
 for(i=0;i<5;i++){
printf("%s",e[i].name);
    
}