#include "Menu.h"

void gotoxy(int x, int y){
    HANDLE hcon;
    hcon =GetStdHandle(STD_OUTPUT_HANDLE);

    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}
void Menu::pintar_portada(int &x){
char portada[18][80] =
   {
   "                                                                              ",
   " xxxxxxxxxxxxxxxxxxxxxxxx                   1.- HUMANO VS HUMANO              ",
   " xxxxxxxxxxxxxxxxxxxxxxxxx                  2.- HUMANO VS CPU                 ",
   "      xxx                                                                     ",
   "      xxx   xxxxxx        xx  xxx                                             ",
   "      xxx   xx   xxx      xx  xxxx                           xx               ",
   "      xxx   xx     x      xx  xxxxx        xx                xx    xxx        ",
   "      xxx   xx     x      xx  xxxxx       xxx      xxxxx     xx   xxxx        ",
   "      xxx   xx    xx      xx  xxxxxx    xxxxx     xxxxxxxx   xx  xxx          ",
   "      xxx   xx  xxx       xx  xxx xxx  xx  xx    xxx     xx  xxxxx            ",
   "      xxx   xxxx          xx  xxx  xxxxx   xx  xxx        x  xxx              ",
   "      xxx   xxxxxxx       xx  xxx    xx   xxx xxx         xx xx               ",
   "      xxx   xx    xx      xx  xxx         xxx xxx        xxx xxxxx            ",
   "      xxx   xxx    xxx    xx  xxx         xxx xxx        xx  xx  xxx          ",
   "      xxx   xxx     xx    xx  xxx         xxx xxxx     xxx   xx    xxx        ",
   "      xxx   xxx     xxx   xx  xxx         xxx   xxxxxxxxx    xx      xx       ",
   "             xx       xx  xx  xxx         xxx                xx               ",
   "             xx                xx         xx                                  "

};
for(int i= 0; i<16 ; i++){
    for(int j=0; j<70; j++){
        gotoxy(j + 5,i + 5);
        printf("%c",portada[i][j]);
    }
}
for(int j=0; j<78; j++){
    gotoxy(j + 2,3);
    printf("%c",'-');
    gotoxy(j + 2,25);
    printf("%c",'-');
    if(j< 23){
        gotoxy(2,j+3);
        printf("%c",'-');
        gotoxy(79,j+3);
        printf("%c",'-');
    }
}

x= getch();

for(int i = 0; i<25 ; i++){
    for(int j=0; j<78; j++){
        gotoxy(j +2,i +3);
        printf(" ");
        }
    }

}

