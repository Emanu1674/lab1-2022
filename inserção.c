#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleat(int min, int max) {
    return rand()%(max-min+1)+min;
}

void preencher(int n, int vet[n]) {
    for(int i=0; i<n; i++) {
        vet[i] = aleat(1,1250);
    }
}

void inser(int V[], int n) {
    int key = 0;
    int j = 0;
    for(int i=0; i<n; i++) {
        key = V[i];
        j = i-1;
        while(j >= 0 && V[j] > key) {
            V[j+1] = V[j];
            j-=1;
        }
        V[j+1] = key;
    }
}

int main() {
    int T = 1000000;
    int V[T], A;
    preencher(T, V);
    int n = sizeof(V) / sizeof(V[0]);

    inser(V, n);
    for(int i=0; i<n; i++) {
        printf("%d ", V[i]);
    }
    return 0;
}
