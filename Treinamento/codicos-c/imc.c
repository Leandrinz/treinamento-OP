#include<stdio.h>

int main(){
    float imc =24.9;

    if (imc <18.5){
        printf("Magro que doi");

    }
    else if (imc < 25){
        printf("Normal");
    }
    else if (imc < 30 ){
        printf("Ta ficando gordo");
    }
    else if (imc < 35 ){
        printf("Colossal");
        
    }
    else{
        printf("Thais Carla");
    }



}