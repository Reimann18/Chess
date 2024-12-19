#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define DEAD 100

void start () { //working
    printf("\n");
    printf("8  |R'|k'|B'|Q'|K'|B'|k'|R'|\n");
    printf("7  |p'|p'|p'|p'|p'|p'|p'|p'|\n");
    printf("6  |  |  |  |  |  |  |  |  |\n");
    printf("5  |  |  |  |  |  |  |  |  |\n");
    printf("4  |  |  |  |  |  |  |  |  |\n");
    printf("3  |  |  |  |  |  |  |  |  |\n");
    printf("2  |p,|p,|p,|p,|p,|p,|p,|p,|\n");
    printf("1  |R,|k,|B,|Q,|K,|B,|k,|R,|\n");
    printf("    1  2  3  4  5  6  7  8\n");
}
int position (int px, int py) { //working
    int p = 56;
    for (int y = 1; y < 9; y++) {
        if (y == py) {
            for (int x = 1; x < 9; x++) {
                if (x == px) {
                    return p;
                }
                p++;
            }
        }
        p = p-8;
    }
}
int pcheck (int px, int py, int ppx, int ppy) { //working
    
    int p1 = position (px, py);
    int p2 = position (ppx, ppy);

    if (p1 == p2) {
        return 0;
    } else {
        return 1;
    }
}
int boardprint(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int r1, int r2, int k1, int k2, int b1, int b2, int Q1, int K1, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int r3, int r4, int k3, int k4, int b3, int b4, int Q2, int K2) {
    printf("\n");
    char player[64];
    char piece[64];
    for (int i = 0; i < 64; i++) {
        piece[i] = ' ';
    }
    for (int i = 0; i < 64; i++) {
        player[i] = ' ';
    }
    for (int i = 0; i < 64; i++) {
        if (p1 == i) {
            piece[i] = 'p';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p2 == i) {
            piece[i] = 'p';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p3 == i) {
            piece[i] = 'p';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p4 == i) {
            piece[i] = 'p';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p5 == i) {
            piece[i] = 'p';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p6 == i) {
            piece[i] = 'p';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p7 == i) {
            piece[i] = 'p';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p8 == i) {
            piece[i] = 'p';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (r1 == i) {
            piece[i] = 'R';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (r2 == i) {
            piece[i] = 'R';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (k1 == i) {
            piece[i] = 'k';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (k2 == i) {
            piece[i] = 'k';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (b1 == i) {
            piece[i] = 'B';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (b2 == i) {
            piece[i] = 'B';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (Q1 == i) {
            piece[i] = 'Q';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (K1 == i) {
            piece[i] = 'K';
            player[i] = ',';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p9 == i) {
            piece[i] = 'p';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p10 == i) {
            piece[i] = 'p';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p11 == i) {
            piece[i] = 'p';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p12 == i) {
            piece[i] = 'p';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p13 == i) {
            piece[i] = 'p';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p14 == i) {
            piece[i] = 'p';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p15 == i) {
            piece[i] = 'p';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (p16 == i) {
            piece[i] = 'p';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (r3 == i) {
            piece[i] = 'R';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (r4 == i) {
            piece[i] = 'R';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (k3 == i) {
            piece[i] = 'k';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (k4 == i) {
            piece[i] = 'k';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (b3 == i) {
            piece[i] = 'B';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (b4 == i) {
            piece[i] = 'B';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (Q2 == i) {
            piece[i] = 'Q';
            player[i] = ';';
        }
    }
    for (int i = 0; i < 64; i++) {
        if (K2 == i) {
            piece[i] = 'K';
            player[i] = ';';
        }
    }
    int x = 0;
    for (int i = 8; i > 0; i--) {
        printf("%d  |%c%c|%c%c|%c%c|%c%c|%c%c|%c%c|%c%c|%c%c|\n", i, piece[x], player[x], piece[x+1], player[x+1], piece[x+2], player[x+2], piece[x+3], player[x+3], piece[x+4], player[x+4], piece[x+5], player[x+5], piece[x+6], player[x+6], piece[x+7], player[x+7]);
        x = x+8;
    }
    printf("    1  2  3  4  5  6  7  8\n");
} //working
struct PP { //working
    int ppx[16]; // stands for piece position x 
    int ppy[16]; //stands for piece position y
    int pp[16]; // stands for piece position
    int pa[16]; // stands for piece availability
};

int main () {
start();
struct PP player1;
struct PP player2;
for (int i = 0; i < 8; i++) { //assigning row 2 player 1 initial piece placement
    player1.ppx[i] = i+1; //PAWN
    player1.ppy[i] = 2;
}
for (int i = 8; i < 16; i++) { //assigning row 1 player 1 initial piece placement
player1.ppx[8] = 1;//ROOK
player1.ppx[9] = 8;//ROOK
player1.ppx[10] = 2;//KNIGHT
player1.ppx[11] = 7;//KNIGHT
player1.ppx[12] = 3;//BISHOP
player1.ppx[13] = 6;//BISHOP
player1.ppx[14] = 4;//QUEEN
player1.ppx[15] = 5;//KING
player1.ppy[i] = 1;
}
for (int i = 0; i < 8; i++) { //assigning row 7 player 2 initial piece placement
    player2.ppx[i] = i+1; //PAWN
    player2.ppy[i] = 7;
}
for (int i = 8; i < 16; i++) { //assigning row 8 player 2 initial piece placement
player2.ppx[8] = 1; //ROOK
player2.ppx[9] = 8; //ROOK
player2.ppx[10] = 2; //KNIGHT
player2.ppx[11] = 7; //KNIGHT
player2.ppx[12] = 3; //BISHOP
player2.ppx[13] = 6; //BISHOP
player2.ppx[14] = 4; //QUEEN
player2.ppx[15] = 5; //KING
player2.ppy[i] = 8;
}
int turn = 1;
int x, mx;
int y, my;
while (1) { //main gameplay loop
    if ((turn%2)!=0) { // changing player 1 positions
        printf("player 1 -What piece will you be moving (x y) - ");
        scanf("%d %d", &x, &y);
        printf("Where will it be moving (x y) - ");
        scanf("%d %d", &mx, &my);
        for (int i = 0; i <= 7; i++) { //checking pawn - need to complete attacking movement
        if (x == player1.ppx[i]) {
            for (int n = 0; n <= 7; n++) {
                if (y == player1.ppy[n]) {
                    if ((((my-1 == y)&&(mx == x))||((turn == 1)&&(my-2 == y)&&(mx == x)))) {
                        player1.ppy[n] = my;
                        player1.ppx[i] = mx;
                        break;
                    } else {
                        printf("Pawn Cannot make that move");
                        break;
                    }   
                }
            }
        }
    }
        for (int i = 8; i <= 9; i++) { //checking rook - complete
        if (x == player1.ppx[i]) {
            for (int n = 8; n <= 9; n++) {
                if (y == player1.ppy[n]) {
                    if (((x != mx)&&(y == my))||((x == mx)&&(y != my))) {
                        player1.ppy[n] = my;
                        player1.ppx[i] = mx;
                        break;
                    } else {
                        printf("Rook cannot make this move");
                        break;
                    }
                }
            }
        }
    }
        for (int i = 10; i <= 11; i++) { //checking knight - complete
        if (x == player1.ppx[i]) {
            for (int n = 10; n <= 11; n++) {
                if (y == player1.ppy[n]) {
                    if ((((mx - x) == 2)&&(my - y) == 1)||(((mx - x) == 1)&&(my - y) == 2)||(((mx - x) == 2)&&(my - y) == -1)||(((mx - x) == -2)&&(my - y) == 1)||(((mx - x) == -1)&&(my - y) == 2)||(((mx - x) == 1)&&(my - y) == -2)||(((mx - x) == -1)&&(my - y) == -2)||(((mx - x) == -2)&&(my - y) == -1)) {
                        player1.ppy[n] = my;
                        player1.ppx[i] = mx;
                        break;
                    } else {
                        printf("Knight cannot make this move\n");
                        break;
                    }
                }
            }
        }
    }
        for (int i = 12; i <= 13; i++) { //checking bishop - complete
            if (x == player1.ppx[i]) {
                for (int n = 12; n <= 13; n++) {
                    if (y == player1.ppy[n]) {
                        if (((mx - x) == (my - y))||((0-(mx - x)) == (my - y))) {
                            player1.ppy[n] = my;
                            player1.ppx[i] = mx;
                            break;
                        } else {
                            printf("Bishop cannot make this move");
                            break;
                        }
                    }
                }
            }
        }
        if ((x == player1.ppx[14])&&(y == player1.ppy[14])) { //checking queen - complete
        if (((mx - x) == (my - y))||((0-(mx - x)) == (my - y))||((x != mx)&&(y == my))||((x == mx)&&(y != my))) {
            player1.ppx[14] = mx;
            player1.ppy[14] = my;
        } else {
            printf("Queen cannot make this move");
            break;
        }
        }
        if ((x == player1.ppx[15])&&(y == player1.ppy[15])) { //checking king - complete
        if ((((mx - x) == 1)&&((my - y) == 1))||(((mx - x) == -1)&&((my - y) == 1))||(((mx - x) == 1)&&((my - y) == -1))||(((mx - x) == -1)&&((my - y) == -1))||(((mx - x) == 0)&&((my - y) == 1))||(((mx - x) == 1)&&((my - y) == 0))||(((mx - x) == 0)&&((my - y) == -1))||(((mx - x) == -1)&&((my - y) == 0))) {
            player1.ppx[15] = mx;
            player1.ppy[15] = my;
            } else {
                printf("King cannot make this move");
                break;
            }
        }
        for (int i = 0; i < 16; i++) { //findign player 1 piece positions
            player1.pp[i] = position(player1.ppx[i], player1.ppy[i]);
        }
        for (int i = 0; i < 16; i++) { //findign player 2 piece positions
            player2.pp[i] = position(player2.ppx[i], player2.ppy[i]);
        }
        for (int i = 0; i < 16; i++) {
            for (int n = 0; n < 16; n++) {
                if (player1.pp[i] == player2.pp[n]) {
                    player2.pp[n] = DEAD;
                }
            }
        }
        boardprint(player1.pp[0],player1.pp[1],player1.pp[2],player1.pp[3],player1.pp[4],player1.pp[5],player1.pp[6],player1.pp[7],player1.pp[8],player1.pp[9],player1.pp[10],player1.pp[11],player1.pp[12],player1.pp[13],player1.pp[14],player1.pp[15],player2.pp[0],player2.pp[1],player2.pp[2],player2.pp[3],player2.pp[4],player2.pp[5],player2.pp[6],player2.pp[7],player2.pp[8],player2.pp[9],player2.pp[10],player2.pp[11],player2.pp[12],player2.pp[13],player2.pp[14],player2.pp[15]);
    } else {
        printf("player 2 -What piece will you be moving (x y) - ");
        scanf("%d %d", &x, &y);
        printf("Where will it be moving (x y) - ");
        scanf("%d %d", &mx, &my);
        for (int i = 0; i <= 7; i++) { //checking pawn - need to complete attacking movement
            if (x == player2.ppx[i]) {
                for (int n = 0; n <= 7; n++) {
                    if (y == player2.ppy[n]) {
                        if ((((my+1 == y)&&(mx == x))||((turn == 2)&&(my+2 == y)&&(mx == x)))) {
                            player2.ppy[n] = my;
                            player2.ppx[i] = mx;
                            break;
                        } else {
                            printf("Pawn Cannot make that move");
                            break;
                        }   
                    }
                }
            }
        }
        for (int i = 8; i <= 9; i++) { //checking rook - complete
            if (x == player2.ppx[i]) {
                for (int n = 8; n <= 9; n++) {
                    if (y == player2.ppy[n]) {
                        if (((x != mx)&&(y == my))||((x == mx)&&(y != my))) {
                            player2.ppy[n] = my;
                            player2.ppx[i] = mx;
                            break;
                        } else {
                            printf("Rook cannot make this move");
                            break;
                        }
                    }
                }
            }
        }
        for (int i = 10; i <= 11; i++) { //checking knight - complete
            if (x == player2.ppx[i]) {
                for (int n = 10; n <= 11; n++) {
                    if (y == player2.ppy[n]) {
                        if ((((mx - x) == 2)&&(my - y) == 1)||(((mx - x) == 1)&&(my - y) == 2)||(((mx - x) == 2)&&(my - y) == -1)||(((mx - x) == -2)&&(my - y) == 1)||(((mx - x) == -1)&&(my - y) == 2)||(((mx - x) == 1)&&(my - y) == -2)||(((mx - x) == -1)&&(my - y) == -2)||(((mx - x) == -2)&&(my - y) == -1)) {
                            player2.ppy[n] = my;
                            player2.ppx[i] = mx;
                            break;
                        } else {
                            printf("Knight cannot make this move\n");
                            break;
                        }
                    }
                }
            }
        }
        for (int i = 12; i <= 13; i++) { //checking bishop - complete
            if (x == player2.ppx[i]) {
                for (int n = 12; n <= 13; n++) {
                    if (y == player2.ppy[n]) {
                        if (((mx - x) == (my - y))||((0-(mx - x)) == (my - y))) {
                            player2.ppy[n] = my;
                            player2.ppx[i] = mx;
                            break;
                        } else {
                            printf("Bishop cannot make this move");
                            break;
                        }
                    }
                }
            }
        }
        if ((x == player2.ppx[14])&&(y == player2.ppy[14])) { //checking queen - complete
            if (((mx - x) == (my - y))||((0-(mx - x)) == (my - y))||((x != mx)&&(y == my))||((x == mx)&&(y != my))) {
                player2.ppx[14] = mx;
                player2.ppy[14] = my;
            } else {
                printf("Queen cannot make this move");
                break;
            }
        }
        if ((x == player2.ppx[15])&&(y == player2.ppy[15])) { //checking king - complete
            if ((((mx - x) == 1)&&((my - y) == 1))||(((mx - x) == -1)&&((my - y) == 1))||(((mx - x) == 1)&&((my - y) == -1))||(((mx - x) == -1)&&((my - y) == -1))||(((mx - x) == 0)&&((my - y) == 1))||(((mx - x) == 1)&&((my - y) == 0))||(((mx - x) == 0)&&((my - y) == -1))||(((mx - x) == -1)&&((my - y) == 0))) {
                player2.ppx[15] = mx;
                player2.ppy[15] = my;
            } else {
                printf("King cannot make this move");
                break;
        }
}
        for (int i = 0; i < 16; i++) { //findign player 1 piece positions
            player1.pp[i] = position(player1.ppx[i], player1.ppy[i]);
        }
        for (int i = 0; i < 16; i++) { //findign player 2 piece positions
            player2.pp[i] = position(player2.ppx[i], player2.ppy[i]);
        }
        for (int i = 0; i < 16; i++) {
            for (int n = 0; n < 16; n++) {
                if (player2.pp[i] == player1.pp[n]) {
                    player1.pp[n] = DEAD;
                }
            }
        }
        boardprint(player1.pp[0],player1.pp[1],player1.pp[2],player1.pp[3],player1.pp[4],player1.pp[5],player1.pp[6],player1.pp[7],player1.pp[8],player1.pp[9],player1.pp[10],player1.pp[11],player1.pp[12],player1.pp[13],player1.pp[14],player1.pp[15],player2.pp[0],player2.pp[1],player2.pp[2],player2.pp[3],player2.pp[4],player2.pp[5],player2.pp[6],player2.pp[7],player2.pp[8],player2.pp[9],player2.pp[10],player2.pp[11],player2.pp[12],player2.pp[13],player2.pp[14],player2.pp[15]);
    }
    turn++;
}
}