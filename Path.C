#include <stdio.h>
#include <string.h>

/*Scrivere un sottoprogramma calcolaNumero che riceve in ingresso una matrice bidimensionale di interi m (dichiarata nel chiamante con un
numero di colonne pari a NCOL), una stringa per e qualsiasi altro parametro strettamente necessario. La stringa per rappresenta un percorso ed
è organizzata in coppie di caratteri, dove il primo indica una direzione (’U’: alto, ’D’: basso, ’L’: sinistra, ’R’: destra) mentre il secondo è una
cifra che indica la lunghezza dello spostamento in numero di celle; si assuma che la stringa sia ben formata. Considerando come punto iniziale la
cella in alto a sinistra, il sottoprogramma esegue il percorso descritto da per sulla matrice m e calcola la somma di tutti i valori delle celle in cui si
ferma. Al termine dell’elaborazione del percorso il sottoprogramma restituisce la somma ottenuta al chiamante. Nel caso il percorso finisca oltre il
perimetro della matrice, il sottoprogramma restituisce -1.*/


int calcolaNumero(int m[][NCOL], int nr, int nc, char *per){
    int sum, n, i, j, k, len, segno, c, r;
    j=0;
    k=0;
    sum=m[0][0];
    len=strlen(per);
    for(i=0; i<len, sum!=-1; i+=2){
        n=per[i+1]-'0';
        if(per[i]=='U'||per[i]=='L'){
            segno=-1;
        } else{
            segno=1;
        }
        if(per[i]=='D'||per[i]=='U'){
            c=1;
            r=0;
        } else{
            c=0;
            r=1;
        }

        j=j+((n*segno)*r);
        k=k+((n*segno)*c);
        sum+=m[j][k];

        if(k<0||k>=nc||j<0||j>=nr){
            sum=-1;
        }
    }

    return sum;
}
