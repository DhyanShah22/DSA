include <string.h>

struct Employee
{
char name[20];
int employeeId;
double ex;
char g;

};

void main(){
struct Employee e;
scanf("%s",&e.name);
scanf("%d",&e.employeeId);
scanf("%f",&e.ex);
scanf("%s",&e.g);
printf("%s",&e.name);
printf("%d",&e.employeeId);
printf("%f",&e.ex);
printf("%s",&e.g);


}