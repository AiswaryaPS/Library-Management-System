#include<Library.h>
//void gotoxy (int x, int y)
//{
//coord.X = x; coord.Y = y; // X and Y coordinates
//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}
int Password(char password[10]) //for password option
{

system("cls");
char d[25]="Password Protected";
char ch,pass[10];
int i=0,j;
//textbackground(WHITE);
//textcolor(RED);
gotoxy(10,4);
for(j=0;j<20;j++)
{
Sleep(50);
printf("*");
}
for(j=0;j<20;j++)
{
Sleep(50);
printf("%c",d[j]);
}
for(j=0;j<20;j++)
{
Sleep(50);
printf("*");
}
gotoxy(10,10);
gotoxy(15,7);
printf("Enter Password:");

while(ch!=13)
{
ch=getch();

if(ch!=13 && ch!=8){
putch('*');
pass[i] = ch;
i++;
}
}
pass[i] = '\0';
if(strcmp(pass,password)==0)
{

gotoxy(15,9);
//textcolor(BLINK);
printf("Password match");
gotoxy(17,10);
printf("Press any key to countinue.....");
getch();
//mainmenu();
p=1;
}
else
{
gotoxy(15,16);
printf("\aWarning!! Incorrect Password");
getch();
//Password();
p=0;
}
return p;
}
void issuerecord()  //display issued book's information
{
system("cls");
gotoxy(10,8);
printf("The Book has taken by Mr. %s",a.stname);
gotoxy(10,9);
printf("Issued Date:%d-%d-%d",a.issued.dd,a.issued.mm,a.issued.yy);
gotoxy(10,10);
printf("Returning Date:%d-%d-%d",a.duedate.dd,a.duedate.mm,a.duedate.yy);
}

//char password[10]={"pass"};
//void main()
//{
 //int k;
//k=password(password);
//if(k==1)
//{
//printf("login unsuccessfull");
//main();
//}
//}
//getch();


  
  

