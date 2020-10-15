
#ifndef SPORT_H_INCLUDED
#define SPORT_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[20];

} edeportes;

#endif // SPORT_H_INCLUDED

void mostarDeporte(edeportes sport);
int mostrarDeportes(edeportes sport[], int tam);
