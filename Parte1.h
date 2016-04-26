#ifndef PARTE1_H
#define PARTE1_H

#include <iostream>
#include <fstream> 
#include <string> 
#include <string.h> 

using namespace std; 


/************************************************************************/

/* Esta classe sera responsavel pela primeira parte da Montagem 
que é o Pre-processamento da arquivo de entrada em assembly */

class Parte1{

	public: 

		char *ArqEntrada; 
		char *ArqSaida;

		PreProcessing(char *entrada, char *saida);
		bool PreProcess (char *ArqEntrada, char *ArqSaida);
		
};

#endif 

