#include <stdio.h>

int main(void) {
    int n=0, nprimo=0;
    printf("inserisci un numero:");
    scanf("%d", &n);
    for(int i=2; i<n; i++) {
        if(n % i==0) {
            nprimo=1;
        }
    }
    if (nprimo == 1) {
        printf("il numero inserito (%d) non e' un numero primo \n", n);
    }
    else {
        printf("il numero inserito (%d) e' un numero primo \n", n);
    }
}

