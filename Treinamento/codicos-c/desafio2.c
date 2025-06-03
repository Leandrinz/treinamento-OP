#include <stdio.h>

int main (){
    int ts,h,m,s, rh, rm;
    printf("Digite um valor em segundos, para que seja convertido em horas, minutos e segundos:");
    scanf("%i", &ts);
    h = (ts / 3600);
    rh = (ts - h*3600);
    m = (rh/60);
    rm = (rh - rh/60);
    s = (ts - 3600) - (m*60);
    printf("%i e igual a %i hora, %i minutos, %i segundos. \n",ts, h,m,s);

    return 0;


}
