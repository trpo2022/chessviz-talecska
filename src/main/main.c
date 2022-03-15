#include "../libchessviz/chessviz.h"

#include <stdio.h>
int main()
{
    char mas[9][9];
    int MoveNumber = 1;
    int flag = 1;
    mboard(mas);
    rboard(mas);
    while (flag == 1) {
        printf("%d. ", MoveNumber);
        WhiteTurn(mas);
        BlackTurn(mas);
        rboard(mas);
        MoveNumber += 1;
    }
    return 0;
}
