#ifndef CONSOLA_H
#define CONSOLA_H

	#include <shared/console.h>
	#include <commons/string.h>
	#include <pthread.h>
	#include "config/configKernel.h"

void consola();
void procesar_comando(char*);
void notificar_error_sintactico_comando(void);
void notificar_error_sintactico_parametros(void);

#endif