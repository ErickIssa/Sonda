#ifndef SONDAESPACIAL_H
#define SONDAESPACIAL_H

typedef enum{
    LIGADA = 1,
    DESLIGADA = 0
} StatusSonda;

typedef struct {
    int identificadorSonda;
    float latSonda;
    float longSonda;
    float capacidadeSonda;
    float velSonda;
    float combustivelSonda;
    StatusSonda status; //perguntar se os nomes do especificados no TP tem que ser os mesmos

    
} SondaMarte;

SondaMarte inicializaSonda(SondaMarte* sonda); 
void imprimeSonda(SondaMarte sonda);
void ligaSonda(SondaMarte* sonda);
void desligaSonda(SondaMarte* sonda);
void moveSonda(SondaMarte* sonda);


void setIdentificadorSonda(SondaMarte* sonda, int identificador);
void set_long(SondaMarte* sonda, float latSonda);
void set_lat(SondaMarte* sonda, float longSonda);
void set_status(SondaMarte* sonda, StatusSonda status);


void set_CapacidadeSonda(SondaMarte* sonda, float capacidadeSonda);
void set_VelSonda(SondaMarte* sonda, float vel);
void set_CombustivelSonda(SondaMarte* sonda, float combustivel);
int gerarNumeroAleatorio();



#endif // SONDAESPACIAL_H