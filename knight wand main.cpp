

#include <stdio.h>
 
 
void nextmove(int move[]);
 
int getaccessibility(int x, int y);
 
int board [8][8];
 
int main() {
 

 
int x = 1;
 
int y = 3;
 
int moveNumber = 2;
 
int temp [2];
 
int move [2];
 
for (int i = 0; i < 8; i++) {
 
for (int j = 0; j < 8; j++) {
 
board[i][j] = 0;
 
}
 
}
 
board[x][y] = 1;
 
for (int i = 1; i < 64; i++) {
 
move[0] = x;
 
move[1] = y;
 
nextmove(move);
 
x = move[0];
 
y = move[1];
 
board[x][y] = moveNumber;
 
moveNumber++;
 
}
 
for (int i = 0; i < 8; i++) {
 
for (int j = 0; j < 8; j++) {
 
printf("%d    ",board[i][j]);

 
}
 
printf("\n\n");
 
}
 
return 0;
 
}
 
void nextmove(int move[]) {
 
int x = move[0];
 
int y = move[1];
 
int accessibility = 8;
 
if (((x + 2) < 8) && ((y + 1) < 8) && (board[x + 2][y + 1] == 0)) {
 
if((getaccessibility((x + 2), (y + 1)) < accessibility)) {
 
accessibility = getaccessibility((x + 2), (y + 1));
 
move[0] = x + 2;
 
move[1] = y + 1;
 
}
 
}
 
if(((x + 2) < 8) && ((y - 1) >= 0) && (board[x + 2][y - 1] == 0)) {
 
if((getaccessibility((x + 2), (y - 1)) < accessibility)) {
 
accessibility = getaccessibility((x + 2), (y - 1));
 
move[0] = x + 2;
 
move[1] = y - 1;
 
}
 
}
 
if(((x + 1) < 8) && ((y + 2) < 8) && (board[x + 1][y + 2] == 0)) {
 
if((getaccessibility((x + 1), (y + 2)) < accessibility)) {
 
accessibility = getaccessibility((x + 1), (y + 2));
 
move[0] = x + 1;
 
move[1] = y + 2;
 
}
 
}
 
if(((x + 1) < 8) && ((y - 2) >= 0) && (board[x + 1][y - 2] == 0)) {
 
if((getaccessibility((x + 1), (y - 2)) < accessibility)) {
 
accessibility = getaccessibility((x + 1), (y - 2));
 
move[0] = x + 1;
 
move[1] = y - 2;
 
}
 
}
 
if(((x - 1) >= 0) && ((y + 2) < 8) && (board[x - 1][y + 2] == 0)) {
 
if((getaccessibility((x - 1), (y + 2)) < accessibility)) {
 
accessibility = getaccessibility((x - 1), (y + 2));
 
move[0] = x - 1;
 
move[1] = y + 2;
 
}
 
}
 
if(((x - 1) >= 0) && ((y - 2) >= 0) && (board[x - 1][y - 2] == 0)) {
 
if((getaccessibility((x - 1), (y - 2)) < accessibility)) {
 
accessibility = getaccessibility((x - 1), (y - 2));
 
move[0] = x - 1;
 
move[1] = y - 2;
 
}
 
}
 
if(((x - 2) >= 0) && ((y + 1) < 8) && (board[x - 2][y + 1] == 0)) {
 
if((getaccessibility((x - 2), (y + 1)) < accessibility)) {
 
accessibility = getaccessibility((x - 2), (y + 1));
 
move[0] = x - 2;
 
move[1] = y + 1;
 
}
 
}
 
if(((x - 2) >= 0) && ((y - 1) >= 0) && (board[x - 2][y - 1] == 0)) {
 
if((getaccessibility((x - 2), (y - 1)) < accessibility)) {
 
accessibility = getaccessibility((x - 2), (y - 1));
 
move[0] = x - 2;
 
move[1] = y - 1;
 
}
 
}
 
}
 
int getaccessibility(int a, int b) {
 
int x = a;
 
int y = b;
 
int accessibility = 0;
 
if (((x + 2) < 8) && ((y + 1) < 8)
 
&& (board[x + 2][y + 1] == 0))
 
accessibility++;
 
if (((x + 2) < 8) && ((y - 1) >= 0)
 
&& (board[x + 2][y - 1] == 0))
 
accessibility++;
 
if (((x + 1) < 8) && ((y + 2) < 8)
 
&& (board[x + 1][y + 2] == 0))
 
accessibility++;
 
if (((x + 1) < 8) && ((y - 2) >= 0)
 
&& (board[x + 1][y - 2] == 0))
 
accessibility++;
 
if (((x - 1) >= 0) && ((y + 2) < 8)
 
&& (board[x - 1][y + 2] == 0))
 
accessibility++;
 
if (((x - 1) >= 0) && ((y - 2) >= 0) && (board[x
 
- 1][y - 2] == 0))
 
accessibility++;
 
if (((x - 2) >= 0) && ((y + 1) < 8)
 
&& (board[x - 2][y + 1] == 0))
 
accessibility++;
 
if (((x - 2) >= 0) && ((y - 1) >= 0) && (board[x
 
- 2][y - 1] == 0))
 
accessibility++;
 
return accessibility;
 
}


