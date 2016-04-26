#include "PreProcessing.h"
#include <iostream>
#include <fstream> // biblioteca de leitura de arquivos
#include <string>  // biblioteca com funcoes para conversao 
#include <string.h>
#include <stdbool.h>
#include <algorithm>

/**************************************************************************/

PreProcessing::PreProcessing(char *entrada, char *saida){

	this->ArqEntrada = entrada; // Pega uma string que sera o nome do arquivo
	this->ArqSaida = saida; 
}

bool PreProcessing::PreProcess(char *ArqEntrada, char *ArqSaida){

	ArqEntrada = strcat(ArqEntrada, ".asm"); // Concatena a string de entrada do usuario com a extensao .asm

	ifstream ArqEntrLido; // Objeto que ira ler o arquivo de entrada 
	ofstream ArqSaida1("Saida1_Pre.pre"); // Objeto que ira gerar o arquivo sem linhas e tabulacoes 
	ofstream ArqSaida2("Saida2_Pre.pre "); //Objeto que ira gerar o arquivo 
	string str; 

	ArqEntrLido.open(ArqEntrada);

	
		if(ArqEntrLido.is_open()){ // Check se o arquivo foi aberto com sucesso 
	 
			while(!ArqEntrLido.eof()){

				getline(ArqEntrLido, str); // Le string

				if(!str.empty()){ /
					size_t encontrado = str.find_first_not_off("\t");
					cout<< encontrado << '\n'; 

					if(encontrado != string::npos){ // string::npos : o valor maximo que a variavel encontrado pode ter 

						string str2 == str.substr (encontrado);	
										}
	 			}



			}

		}


}