
#include<stdio.h>
#include<conio.h>
void main(){

int i;
clrscr();
for(i=1;i<=7;i++){
if(i==1) printf("  *  *\n");
else if(i==2) printf("*      *\n");
else if(i==3) printf("*      *\n");
else if(i==4) printf("*   *  *\n");
else if(i==5) printf("*    * *\n");
else if(i==6) printf(" * *  * \n");
else printf("       *\n");
}

getch();
}