#ifndef SECPAL_H
#define SECPAL_H

#include <stdbool.h>
#include <Palabra.h>


typedef struct
{
    char* cursor;
    bool finSec;
}
SecPal; // Secuencia de Palabras


void secPalCrear(SecPal* secPal, const char* cad); // Crea la secuencia de palabras, apuntando a la cadena.
bool secPalLeer(SecPal* secPal, Palabra* pal); // Busca y retorna una nueva palabra en el par�metro de salida pal. Retorna true si ley� una palabra, false si no, debido a que lleg� al fin.
void secPalEscribir(SecPal* secPal, const Palabra* pal); // Escribe una palabra en la secuencia.
void secPalEscribirCar(SecPal* secPal, char c);
bool secPalFin(const SecPal* secPal); // Indica si se lleg� al fin de la secuencia (Similar a feof(), cuando una lectura no devuelve resultado por haber llegado al final).
void secPalCerrar(SecPal* secPal);


#endif // SECPAL_H
