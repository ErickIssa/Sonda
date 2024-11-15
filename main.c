#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ListaSondas.h"

SondaMarte inicializaSondaTexto(SondaMarte* sonda,float lat_i,float lon_i,float c_i,float v_i, float nc_i){
    int numeroAleatorio;
    numeroAleatorio = gerarNumeroAleatorio();
    setIdentificadorSonda(sonda, numeroAleatorio);
    set_status(sonda, 1); //Apartir da struct Status já inicio a sonda como ligada 
    set_lat(sonda,lat_i);
    set_long(sonda,lon_i);
    set_CapacidadeSonda(sonda,c_i);
    set_VelSonda(sonda,v_i);
    set_CombustivelSonda(sonda,nc_i);

    return *sonda;
}

int main(){

    srand(time(NULL));
    SondaMarte sonda1;
    listaSonda sondasL;
    iniciaListaSonda(&sondasL);

    FILE *arq = NULL;
    arq = fopen("testerocha.txt", "r");
    if(arq == NULL){
        printf("falha leitura");
        exit(0);
    }
    int N_Sondas; 
    float lat_i,lon_i,c_i,v_i,nc_i;
    fscanf(arq, "%d", &N_Sondas);

    for(int i = 0; i<N_Sondas;i++){
        fscanf(arq,"%f %f %f %f %f", &lat_i,&lon_i,&c_i,&v_i,&nc_i);
        insereSonda(&sondasL, inicializaSondaTexto(&sonda1,lat_i,lon_i,c_i,v_i,nc_i));
    }
    
    ImprimeListaSondas(&sondasL);

    return 0;
}