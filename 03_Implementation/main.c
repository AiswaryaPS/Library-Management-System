#include <Library.h>
struct meroDate
{
int mm,dd,yy;
};

//switch(getch())
//{
//case '1':
//addbooks();
//break;
//case '2':
//deletebooks();
//break;
//case '3':
//searchbooks();
//break;
//case '4':
//issuebooks();
//break;
//case '5':
//viewbooks();
//break;
//case '6':
//editbooks();
//break;
//case '7':
//{
//system("cls");
//gotoxy(16,3);
//printf("\tLibrary Management System");
//gotoxy(16,4);
//printf("\tMini Project in C");
//gotoxy(16,5);
//printf("\tis brought to you by");
//gotoxy(16,7);
//printf("\tCode with C Team");
//gotoxy(16,8);
//printf("******************************************");
//gotoxy(16,10);
//printf("*******************************************");
//gotoxy(16,11);
//printf("*******************************************");
//gotoxy(16,13);
//printf("********************************************");
//gotoxy(10,17);
//printf("Exiting in 3 second...........>");
//flushall();
//Sleep(3000);
//exit(0);
//}
struct books
{
int id;
char stname[20];
char name[20];
char Author[20];
int quantity;
float Price;
int count;
int rackno;
char *cat;
struct meroDate issued;
struct meroDate duedate;
};
struct books a;






