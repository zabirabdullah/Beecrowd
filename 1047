#include <stdio.h>

int main(){
    int h1, m1, h2, m2, h, m;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
    double c;
    double S = (h1*60)+m1;
    double E = (h2*60)+m2;

    if(h1<h2)
    {
        c = E - S;
        m = fmod(c, 60);
        h = c/60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if(h1>h2)
    {
        c = 1440 - S + E;
        m = fmod(c, 60);
        h = c/60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if(h1==h2 && m1<m2)
    {
        m = E - S;
        h = 0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if(h1==h2 && m1>m2)
    {
        h = 23;
        m = 60-m1+m2;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
    }
    else if(S==E)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    return 0;
}
