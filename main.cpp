#include <iostream>
#include <fstream>
#include <string>
#include <cstddef> 
#include <cstdlib>
#include <string.h> 
#include "PreProcessing.h"

using namespace std; 

int main(int argc, char *argv[])
{
	// string outF(argv[3]);
	char arquivo[500]; 
    int i =  10; 
    char *entrada, *saida;
    

               entrada = (char*) malloc (i+1);
               saida = (char*) malloc (i+1); 

                cout << "Nome do arquivo de entrada: " << endl;
                cin >> entrada ;

                cout << "\nNome do arquivo de saida: " << endl;
                cin >> saida ; 

    			cout<< "\n Teste Pre-Process ..." << endl; 
    			cout<< "input: "<< / entrada << ".asm " << " Output:" <<  saida << ".pre" << endl;
    			char *ArqEntrada =  entrada; 

    			strcpy(arquivo, saida);
    			strcat(arquivo,".pre");
    			char *ArqSaida = arquivo; 

                cout<< "\nTeste Pre- Processamento" << endl; 

    			PreProcessing prePro(ArqEntrada, ArqSaida); 

    			prePro.PreProcess(ArqEntrada,ArqSaida);

                free(entrada);
                free(saida); 
                
              

    	//	}



    	//}


}