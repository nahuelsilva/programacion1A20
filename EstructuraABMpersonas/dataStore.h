
#ifndef DATASTORE_H_INCLUDED
#define DATASTORE_H_INCLUDED

//#include "fechas.h"


char nombres[][20] =
{
    "Juan",
    "Maria",
    "Fani",
    "Lucas",
    "Analia",
    "Pedro",
    "Susana",
    "Luis",
    "Bianca",
    "Camila"

};

char sexo[] = {'m', 'f', 'f', 'm', 'f', 'm', 'f', 'm', 'f', 'f'};
int legajos[] = {1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009};
float alturas[] = {1.89, 1.55, 1.49, 1.70, 1.58, 1.97, 1.62, 1.76, 1.58, 1.73};
/*
int dias[] = {5, 12, 22, 30, 19, 4, 25, 27, 9, 10};
int meses[] = {12, 3, 5, 8, 2, 1, 11, 10, 4, 8};
int anios[] = {1997, 2000, 1992, 2001, 1995, 2004, 1993, 2002, 1999, 2000};
*/

eFecha fechas[10] = {
    {7,3,1999},
    {18,8,2000},
    {31,12,1995},
    {15,7,2001},
    {3,1,2001},
    {9,6,1992},
    {21,5,1990},
    {30,11,2002},
    {1,1,2000},
    {24,10,1989},
};

int idDeportes[] = {1005, 1001 , 1000 , 1001, 1003, 1002 , 1001, 1000, 1004, 1005};


#endif // DATASTORE_H_INCLUDED

