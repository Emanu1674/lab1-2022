#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleat(int max, int min) {
    return rand()%(max-min)+min;
}

float media(int t, int w[t], float ACC){
    return ACC / t;
}

int maior(int t, int w[t]) {
    int m = w[0];
    for (int i=1; i<t; i++) {
        if (w[i] > m) {
            m = w[i];
        }
    }
    return m
}

int ind_maior(int t, int w[t]) {
    int im = 0;
    for (int i=1; i<t; i++) {
        if (w[i] > w[im]) {
            im = wi;
        }
    }
    return m
}

int ord(int t, int w[t]) {

}

int main() {
    float v[10], ACC=0, SUM=0;
    srand(time(0));
    //Lê os números
    for (int i=0; i<10; i++) {
        v[i] = aleat(0, 10000);
        ACC += v[i];
    }
    for (int i=0; i<10; i++) {
        printf("%f2 \n", v[i]);
    }
    SUM = media(10, v, ACC);
    printf("\nA média é de %f2", SUM);
    return 0;
}
