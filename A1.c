#include<stdio.h>
struct DATE
{
    int yy;
    int mm;
    int dd;
};
void initDate(struct DATE *prtDate){

}
void printDateOnConsole(struct DATE *ptrDate){
    printf("Date :%d-%d-%d",ptrDate->dd,ptrDate->mm,ptrDate->yy);

}
void acceptDateFromConsole(struct DATE *ptrDate){
    printf("Enter date\n");
    scanf("%d",&ptrDate->dd);
    printf("Enter month\n");
    scanf("%d",&ptrDate->mm);
    printf("Enter year\n");
    scanf("%d",&ptrDate->yy);
}
int main()
{
    struct DATE d;
    int n;

    do
    {
    printf("0.Exit\n");
    printf("1.Accept Date:\n");
    printf("2.Display Date:\n");
    printf("Enter a your choice:\n");
    scanf("%d\n",&n);
    switch (n)
    {
    case 0: 
        d.printf("Thank You!!!");
        break;
    case 1:
        d.acceptDateFromConsole(&d);
        break;

    case 2:
        d.printDateOnConsole(&d);
        break;
    default:
        printf("You choose a wrong Choice!!!!!");
        break;
    }    
    } while (n!=0);
}
