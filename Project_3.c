#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
}
//working
struct PP { //working
    int px[8];
    int py[8];
    int rx[2];
    int ry[2];
    int kx[2];
    int ky[2];
    int bx[2];
    int by[2];
    int qx;
    int qy;
    int Kx;
    int Ky;

};

int main () {
start();
struct PP player1;
struct PP player2;
for (int i = 0; i < 8; i++) { //assigning initial player 1 pawn placement
    player1.px[i] = i+1;
    player1.py[i] = 2;
}
for (int i = 0; i < 1; i++) { //assigning initial player 1 piece placement (besides pawn)
player1.rx[0] = 1;
player1.rx[1] = 8;
player1.ry[0] = 1;
player1.ry[1] = 1;
player1.kx[0] = 2;
player1.kx[1] = 7;
player1.ky[0] = 1;
player1.ky[1] = 1;
player1.bx[0] = 3;
player1.bx[1] = 6;
player1.by[0] = 1;
player1.by[1] = 1;
player1.qx = 4;
player1.qy = 1;
player1.Kx = 5;
player1.Ky = 1;
}
for (int i = 0; i < 8; i++) { //assigning initial player 2 pawn placement
    player2.px[i] = i+1;
    player2.py[i] = 7;
}
for (int i = 0; i < 1; i++) { //assigning initial player 2 piece placement (besides pawn)
player2.rx[0] = 1;
player2.rx[1] = 8;
player2.ry[0] = 8;
player2.ry[1] = 8;
player2.kx[0] = 2;
player2.kx[1] = 7;
player2.ky[0] = 8;
player2.ky[1] = 8;
player2.bx[0] = 3;
player2.bx[1] = 6;
player2.by[0] = 8;
player2.by[1] = 8;
player2.qx = 5;
player2.qy = 8;
player2.Kx = 4;
player2.Ky = 8;
}
int turn = 1;
int x, mx;
int y, my;
int p1,p2,p3,p4,p5,p6,p7,p8,r1,r2,k1,k2,b1,b2,Q1,K1;
int p1k=0,p2k=0,p3k=0,p4k=0,p5k=0,p6k=0,p7k=0,p8k=0,r1k=0,r2k=0,k1k=0,k2k=0,b1k=0,b2k=0,Q1k=0,K1k=0;
int p9,p10,p11,p12,p13,p14,p15,p16,p17,p18,r3,r4,k3,k4,b3,b4,Q2,K2;
int p9k=0,p10k=0,p11k=0,p12k=0,p13k=0,p14k=0,p15k=0,p16k=0,r3k=0,r4k=0,k3k=0,k4k=0,b3k=0,b4k=0,Q2k=0,K2k=0;
while (1) {
printf("player 1 -What piece will you be moving (x y) - ");
scanf("%d %d", &x, &y);
printf("Where will it be moving (x y) - ");
scanf("%d %d", &mx, &my);
for (int i = 1; i <= 8; i++) { //cheking pawn//need to complete attacking movement
    if (x == player1.px[i-1]) {
        for (int n = 1; n <= 8; n++) {
            if (y == player1.py[n-1]) {
                if (((my-1 == y)&&(mx == x))||((turn == 1)&&(my-2 == y)&&(mx == x))) {
                player1.py[n-1] = my;
                player1.px[i-1] = mx;
                break;
                } else {
                    printf("Pawn Cannot make that move");
                    break;
                }
            }
        }
    }
}
for (int i = 1; i <= 2; i++) { //checking rook - complete
    if (x == player1.rx[i-1]) {
        for (int n = 1; n <= 2; n++) {
            if (y == player1.ry[n-1]) {
                if (((x != mx)&&(y == my))||((x == mx)&&(y != my))) {
                player1.ry[n-1] = my;
                player1.rx[i-1] = mx;
                break;
                } else {
                    printf("Rook cannot make this move");
                    break;
                }
            }
        }
    }
}
for (int i = 1; i <= 2; i++) { //checking knight - complete
    if (x == player1.kx[i-1]) {
        for (int n = 1; n <= 2; n++) {
            if (y == player1.ky[n-1]) {
                if ((((mx - x) == 2)&&(my - y) == 1)||(((mx - x) == 1)&&(my - y) == 2)||(((mx - x) == 2)&&(my - y) == -1)||(((mx - x) == -2)&&(my - y) == 1)||(((mx - x) == -1)&&(my - y) == 2)||(((mx - x) == 1)&&(my - y) == -2)||(((mx - x) == -1)&&(my - y) == -2)||(((mx - x) == -2)&&(my - y) == -1)) {
                player1.ky[n-1] = my;
                player1.kx[i-1] = mx;
                break;
                } else {
                    printf("Knight cannot make this move\n");
                    break;
                }
            }
        }
    }
}
for (int i = 1; i <= 2; i++) { //checking bishop - complete
    if (x == player1.bx[i-1]) {
        for (int n = 1; n <= 2; n++) {
            if (y == player1.by[n-1]) {
                if (((mx - x) == (my - y))||((0-(mx - x)) == (my - y))) {
                player1.by[n-1] = my;
                player1.bx[i-1] = mx;
                break;
                } else {
                    printf("Bishop cannot make this move");
                    break;
                }
            }
        }
    }
}
for (int i = 1; i <= 8; i++) { //checking queen - complete
    if ((x == player1.qx)&&(y == player1.qy)) {
        if (((mx - x) == (my - y))||((0-(mx - x)) == (my - y))||((x != mx)&&(y == my))||((x == mx)&&(y != my))) {
        player1.qx = mx;
        player1.qy = my;
        } else {
            printf("Queen cannot make this move");
            break;
        }
    }
}
for (int i = 1; i <= 8; i++) { //checking king - complete
    if ((x == player1.Kx)&&(y == player1.Ky)) {
        if ((((mx - x) == 1)&&((my - y) == 1))||(((mx - x) == -1)&&((my - y) == 1))||(((mx - x) == 1)&&((my - y) == -1))||(((mx - x) == -1)&&((my - y) == -1))||(((mx - x) == 0)&&((my - y) == 1))||(((mx - x) == 1)&&((my - y) == 0))||(((mx - x) == 0)&&((my - y) == -1))||(((mx - x) == -1)&&((my - y) == 0))) {
        player1.Kx = mx;
        player1.Ky = my;
        } else {
            printf("King cannot make this move");
            break;
        }
    }
}
if (p1k == 0) {p1 = position(player1.px[0], player1.py[0]);} else {p1 = 65;}
if (p2k == 0) {p2 = position(player1.px[1], player1.py[1]);} else {p2 = 65;}
if (p3k == 0) {p3 = position(player1.px[2], player1.py[2]);} else {p3 = 65;}
if (p4k == 0) {p4 = position(player1.px[3], player1.py[3]);} else {p4 = 65;}
if (p5k == 0) {p5 = position(player1.px[4], player1.py[4]);} else {p5 = 65;}
if (p6k == 0) {p6 = position(player1.px[5], player1.py[5]);} else {p6 = 65;}
if (p7k == 0) {p7 = position(player1.px[6], player1.py[6]);} else {p7 = 65;}
if (p8k == 0) {p8 = position(player1.px[7], player1.py[7]);} else {p8 = 65;}
if (r1k == 0) {r1 = position(player1.rx[0], player1.ry[0]);} else {r1 = 65;}
if (r2k == 0) {r2 = position(player1.rx[1], player1.ry[1]);} else {r2 = 65;}
if (k1k == 0) {k1 = position(player1.kx[0], player1.ky[0]);} else {k1 = 65;}
if (k2k == 0) {k2 = position(player1.kx[1], player1.ky[1]);} else {k2 = 65;}
if (b1k == 0) {b1 = position(player1.bx[0], player1.by[0]);} else {b1 = 65;}
if (b2k == 0) {b2 = position(player1.bx[1], player1.by[1]);} else {b2 = 65;}
if (Q2k == 0) {Q1 = position(player1.qx, player1.qy);} else {Q2 = 65;}
if (K1k == 0) {K1 = position(player1.Kx, player1.Ky);
} else {
    printf("Player 2 Wins");
    exit (0);
}
if (p9k == 0) {p9 = position(player2.px[0], player2.py[0]);} else {p9 = 65;}
if (p10k == 0) {p10 = position(player2.px[1], player2.py[1]);} else {p10 = 65;}
if (p11k == 0) {p11 = position(player2.px[2], player2.py[2]);} else {p11 = 65;}
if (p12k == 0) {p12 = position(player2.px[3], player2.py[3]);} else {p12 = 65;}
if (p13k == 0) {p13 = position(player2.px[4], player2.py[4]);} else {p13 = 65;}
if (p14k == 0) {p14 = position(player2.px[5], player2.py[5]);} else {p14 = 65;}
if (p15k == 0) {p15 = position(player2.px[6], player2.py[6]);} else {p15 = 65;}
if (p16k == 0) {p16 = position(player2.px[7], player2.py[7]);} else {p16 = 65;}
if (r3k == 0) {r3 = position(player2.rx[0], player2.ry[0]);} else {r3 = 65;}
if (r4k == 0) {r4 = position(player2.rx[1], player2.ry[1]);} else {r4 = 65;}
if (k3k == 0) {k3 = position(player2.kx[0], player2.ky[0]);} else {k3 = 65;}
if (k4k == 0) {k4 = position(player2.kx[1], player2.ky[1]);} else {k4 = 65;}
if (b3k == 0) {b3 = position(player2.bx[0], player2.by[0]);} else {b3 = 65;}
if (b4k == 0) {b4 = position(player2.bx[1], player2.by[1]);} else {b4 = 65;}
if (Q2k == 0) {Q2 = position(player2.qx, player2.qy);} else {Q2 == 65;}
if (K2k == 0) {K2 = position(player2.Kx, player2.Ky);
} else {
    printf("\nPlayer 1 Wins!!");
    exit (0);
}
printf("%d", p9);
boardprint(p1, p2, p3, p4, p5, p6, p7, p8, r1, r2, k1, k2, b1, b2, Q1, K1, p9, p10, p11, p12, p13, p14, p15, p16, r3, r4, k3, k4, b3, b4, Q2, K2);
printf("player 2 -What piece will you be moving (x y) - ");
scanf("%d %d", &x, &y);
printf("Where will it be moving (x y) - ");
scanf("%d %d", &mx, &my);
for (int i = 1; i <= 8; i++) { //cheking pawn//need to complete attacking movement
    if (x == player2.px[i-1]) {
        for (int n = 1; n <= 8; n++) {
            if (y == player2.py[n-1]) {
                if (((my+1 == y)&&(mx == x))||((turn == 1)&&(my+2 == y)&&(mx == x))) {
                player2.py[n-1] = my;
                player2.px[i-1] = mx;
                break;
                } else {
                    printf("Pawn Cannot make that move");
                    break;
                }
            }
        }
    }
}
for (int i = 1; i <= 2; i++) { //checking rook - complete
    if (x == player2.rx[i-1]) {
        for (int n = 1; n <= 2; n++) {
            if (y == player2.ry[n-1]) {
                if (((x != mx)&&(y == my))||((x == mx)&&(y != my))) {
                player2.ry[n-1] = my;
                player2.rx[i-1] = mx;
                break;
                } else {
                    printf("Rook cannot make this move");
                    break;
                }
            }
        }
    }
}
for (int i = 1; i <= 2; i++) { //checking knight - complete
    if (x == player2.kx[i-1]) {
        for (int n = 1; n <= 2; n++) {
            if (y == player2.ky[n-1]) {
                if ((((mx - x) == 2)&&(my - y) == 1)||(((mx - x) == 1)&&(my - y) == 2)||(((mx - x) == 2)&&(my - y) == -1)||(((mx - x) == -2)&&(my - y) == 1)||(((mx - x) == -1)&&(my - y) == 2)||(((mx - x) == 1)&&(my - y) == -2)||(((mx - x) == -1)&&(my - y) == -2)||(((mx - x) == -2)&&(my - y) == -1)) {
                    player1.ky[n-1] = my;
                    player1.kx[i-1] = mx;
                    break;
                } else {
                    printf("Knight cannot make this move\n");
                    break;
                }
            }
        }
    }
}
for (int i = 1; i <= 2; i++) { //checking bishop - complete
    if (x == player2.bx[i-1]) {
        for (int n = 1; n <= 2; n++) {
            if (y == player2.by[n-1]) {
                if (((mx - x) == (my - y))||((0-(mx - x)) == (my - y))) {
                player2.by[n-1] = my;
                player2.bx[i-1] = mx;
                break;
                } else {
                    printf("Bishop cannot make this move");
                    break;
                }
            }
        }
    }
}
for (int i = 1; i <= 8; i++) { //checking queen - complete
    if ((x == player2.qx)&&(y == player2.qy)) {
        if (((mx - x) == (my - y))||((0-(mx - x)) == (my - y))||((x != mx)&&(y == my))||((x == mx)&&(y != my))) {
        player2.qx = mx;
        player2.qy = my;
        } else {
            printf("Queen cannot make this move");
            break;
        }
    }
}
for (int i = 1; i <= 8; i++) { //checking king - complete
    if ((x == player2.Kx)&&(y == player2.Ky)) {
        if ((((mx - x) == 1)&&((my - y) == 1))||(((mx - x) == -1)&&((my - y) == 1))||(((mx - x) == 1)&&((my - y) == -1))||(((mx - x) == -1)&&((my - y) == -1))||(((mx - x) == 0)&&((my - y) == 1))||(((mx - x) == 1)&&((my - y) == 0))||(((mx - x) == 0)&&((my - y) == -1))||(((mx - x) == -1)&&((my - y) == 0))) {
        player2.Kx = mx;
        player2.Ky = my;
        } else {
            printf("King cannot make this move");
            break;
        }
    }
}
if (p1k == 0) {p1 = position(player1.px[0], player1.py[0]);} else {p1 = 65;}
if (p2k == 0) {p2 = position(player1.px[1], player1.py[1]);} else {p2 = 65;}
if (p3k == 0) {p3 = position(player1.px[2], player1.py[2]);} else {p3 = 65;}
if (p4k == 0) {p4 = position(player1.px[3], player1.py[3]);} else {p4 = 65;}
if (p5k == 0) {p5 = position(player1.px[4], player1.py[4]);} else {p5 = 65;}
if (p6k == 0) {p6 = position(player1.px[5], player1.py[5]);} else {p6 = 65;}
if (p7k == 0) {p7 = position(player1.px[6], player1.py[6]);} else {p7 = 65;}
if (p8k == 0) {p8 = position(player1.px[7], player1.py[7]);} else {p8 = 65;}
if (r1k == 0) {r1 = position(player1.rx[0], player1.ry[0]);} else {r1 = 65;}
if (r2k == 0) {r2 = position(player1.rx[1], player1.ry[1]);} else {r2 = 65;}
if (k1k == 0) {k1 = position(player1.kx[0], player1.ky[0]);} else {k1 = 65;}
if (k2k == 0) {k2 = position(player1.kx[1], player1.ky[1]);} else {k2 = 65;}
if (b1k == 0) {b1 = position(player1.bx[0], player1.by[0]);} else {b1 = 65;}
if (b2k == 0) {b2 = position(player1.bx[1], player1.by[1]);} else {b2 = 65;}
if (Q2k == 0) {Q1 = position(player1.qx, player1.qy);} else {Q2 = 65;}
if (K1k == 0) {K1 = position(player1.Kx, player1.Ky);
} else {
    printf("Player 2 Wins");
    exit (0);
}
if (p9k == 0) {p9 = position(player2.px[0], player2.py[0]);} else {p9 = 65;}
if (p10k == 0) {p10 = position(player2.px[1], player2.py[1]);} else {p10 = 65;}
if (p11k == 0) {p11 = position(player2.px[2], player2.py[2]);} else {p11 = 65;}
if (p12k == 0) {p12 = position(player2.px[3], player2.py[3]);} else {p12 = 65;}
if (p13k == 0) {p13 = position(player2.px[4], player2.py[4]);} else {p13 = 65;}
if (p14k == 0) {p14 = position(player2.px[5], player2.py[5]);} else {p14 = 65;}
if (p15k == 0) {p15 = position(player2.px[6], player2.py[6]);} else {p15 = 65;}
if (p16k == 0) {p16 = position(player2.px[7], player2.py[7]);} else {p16 = 65;}
if (r3k == 0) {r3 = position(player2.rx[0], player2.ry[0]);} else {r3 = 65;}
if (r4k == 0) {r4 = position(player2.rx[1], player2.ry[1]);} else {r4 = 65;}
if (k3k == 0) {k3 = position(player2.kx[0], player2.ky[0]);} else {k3 = 65;}
if (k4k == 0) {k4 = position(player2.kx[1], player2.ky[1]);} else {k4 = 65;}
if (b3k == 0) {b3 = position(player2.bx[0], player2.by[0]);} else {b3 = 65;}
if (b4k == 0) {b4 = position(player2.bx[1], player2.by[1]);} else {b4 = 65;}
if (Q2k == 0) {Q2 = position(player2.qx, player2.qy);} else {Q2 == 65;}
if (K2k == 0) {K2 = position(player2.Kx, player2.Ky);
} else {
    printf("\nPlayer 1 Wins!!");
    exit (0);
}
boardprint(p1, p2, p3, p4, p5, p6, p7, p8, r1, r2, k1, k2, b1, b2, Q1, K1, p9, p10, p11, p12, p13, p14, p15, p16, r3, r4, k3, k4, b3, b4, Q2, K2);
turn++;
}
}