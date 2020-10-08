#include<Library.h>
//void gotoxy (int x, int y)
//{
//coord.X = x; coord.Y = y; // X and Y coordinates
//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}

char password[10]={"pass"};
void main()
{
 int k;
k=password(password);
if(k==1)
{
printf("login unsuccessfull");
main();
}
}
//getch();


  
  

