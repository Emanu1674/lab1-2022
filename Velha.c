#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>
void cls(){
    #ifdef WINDOWS
        system("cls");
    #else
        // Assume POSIX
        system ("clear");
    #endif
}
void imprime_mat(int R, int C, float M3[R][C]){
    int i, j;
    for (i = 0; i < R; ++i)
        for (j = 0; j < C; ++j) {
            printf("%c   ", M3[i][j]);
                if (j == C - 1) {
                    printf("\n\n");
                }
        }
}
int main(){
    //setlocale(LC_ALL, "Portuguese");
    char Coord[3];
    char C;
    char M3[3][3] = { {'X','X','X'}, {'X','X','X'}, {'X','X','X'} };
    int X, Y;
    imprime_mat(3, 3, M3);
    printf("Teste");
    scanf("%c", C);
    if (Coord[1] == '-'){
        Coord[0] = Y;
        Coord[2] = X;
    }
}
