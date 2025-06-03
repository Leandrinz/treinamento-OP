#include <stdio.h>

int main(){
    
    int atual, anterior = 1, ant_ant= 1, cd;
    printf("%d %d", ant_ant, anterior);
    for (int i= 0; i <= 5; i++){
        atual = anterior + ant_ant;
        if (cd = 2)
        {
            /* code */
        }
        
        printf("%d\n", atual);
        ant_ant = anterior;
        anterior = atual;
    }

    return 0;
    
}