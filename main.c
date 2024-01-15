#include <stdio.h>
#include <string.h>

int main() {
    int l, p; //casos, parâmetro

    printf ("type 'n' and 'k': ");
    scanf ("%d %d", &l, &p);
    getchar ();

    char entrada [l][81];

    for (int i = 0; i < l; i ++) {
        printf ("caso n (%d): ", i);
        fgets (entrada [i], sizeof (entrada [i]), stdin);
    }
    printf ("\nrespostas:\n");

    for (int i = 0; i < l; i ++) {
        int tam = strlen (entrada [i]) - 1;

        for (int i2 = 0; i2 < tam; i2 ++) {
            entrada [i][i2] = (entrada [i][i2] - 32 + p) % 95 + 32;
        }
        printf ("caso n (%d): %s", i, entrada [i]);
    }
    
    return 0;
}
