#include <iostream>   // chama da biblioteca para usar suas funções
#include "binario.h"; // chama da biblioteca para usar suas funções

using namespace std; // usado para abreviar a chamada e usar apenas o cout

// Função de avaliar soluções
bool avaliarSolucao(unsigned short num) {
	int peso = 0;
	int valor = 0;

	// Aqui há uma chamada de função que testa se o bit está ligado,  se ele estiver ligado, 
	//a condição soma o peso do objeto e valor respectivamente a váriáveis para pegar o total deles com a junção dos outros if's.
	if (testarBit(num,0) == true) {
		peso += 1;
		valor += 12;
	}

	if (testarBit(num, 1) == true) {
		peso += 4;
		valor += 4;
	}

	if (testarBit(num, 2) == true) {
		peso += 2;
		valor += 3;
	}

	if (testarBit(num, 3) == true) {
		peso += 5;
		valor += 10;
	}

	if (testarBit(num, 4) == true) {
		peso += 4;
		valor += 15;
	}

	if (testarBit(num, 5) == true) {
		peso += 2;
		valor += 20;
	}

	if (testarBit(num, 6) == true) {
		peso += 1;
		valor += 10;
	}

	if (testarBit(num, 7) == true) {
		peso += 4;
		valor += 2;
	}
	if (testarBit(num, 8) == true) {
		peso += 3;
		valor += 1;
	}

	if (testarBit(num, 9) == true) {
		peso += 2;
		valor += 1;
	}

	if (testarBit(num, 10) == true) {
		peso += 1;
		valor += 3;
	}

	if (testarBit(num, 11) == true) {
		peso += 9;
		valor += 15;
	}

	if (testarBit(num, 12) == true) {
		peso += 4;
		valor += 10;
	}

	if (testarBit(num, 13) == true) {
		peso += 5;
		valor += 8;
	}

	if (testarBit(num, 14) == true) {
		peso += 3;
		valor += 4;
	}

	if (testarBit(num, 15) == true) {
		peso += 12;
		valor += 4;
	}

	// Aqui é exibido o peso e valor na formatação de tabela.
	cout << left; cout.width(3); cout << num;
	cout << right; cout.width(2); cout << " - " << "$" << valor << " - ";
	cout.width(2); cout << peso << "KG" << " - ";
	// OBS: A exibição realizada aqui foi de acordo com as exigência do trabalho, 
	//pois a função ainda foi chamada no arquivo problema (principal), 
	//  assim, não havendo nenhuma violação.

	// Aqui é onde fica o retorno da função, onde true é para o limite de peso da bolsa que foi obedecido e false que extrapolou.
	if (peso<=20) {
		return true;
	}
	else {
		return false;
	}
	
}

// Função para realizar a operação de cruzamento de ponto único e retornar o resultado.
unsigned short cruzamentoPU(unsigned short num, unsigned short num2) {


	unsigned short resultado = altoBit(num) | baixoBit(num2);
	// teste
	// 0001100100000000   < - num: 6400
	// 0000000011101011   < - num2: 235
   //  0001100111101011   <- resultado: 6635
	return resultado;

}
// Função para realizar a operação de cruzamento aritmético e retornar o resultado.
	unsigned short cruzamentoAT(unsigned short num, unsigned short num2) {

		unsigned short resultado = num & num2;
		// teste
		// 0000000000001110   < - num: 14
		// 0000000000010110   < - num2: 22
		// 0000000000000110  <- resultado: 6
		return resultado;
	}

	// Função para realizar a operação de Mutação Simples e retornar o resultado.
	unsigned short mutacaoS(unsigned short num) {
		// teste
		// 0000010011101011   < -  num: 1259 
		// 0000011011101011   < -  resulado: 1771
		if (testarBit(num, 9) == true) {
		return desligarBit(num, 9);  
		}else {
		 return ligarBit(num,9);
		}
	}
	// Função para realizar a operação de Mutação Dupla e retornar o resultado.
	unsigned short mutacaoD(unsigned short num) {
		// teste
		// 0000001011011100   < - num: 732 
		// 0001001011010100  < -  resulado: 4820
		unsigned short resultado=0;
		// fazendo a mutação em cada bit na respectiva posição, no caso, o primeiro bit a alterar
		if (testarBit(num,3) == true) {
			resultado = desligarBit(num, 3);
			
		}
		else {
			resultado = ligarBit(num, 3);
		}
		//  O segundo bit
		if (testarBit(resultado, 12) == true) {
			resultado = desligarBit(resultado, 12);
			return resultado;
		}
		else {
			resultado = ligarBit(resultado, 12);
			return resultado;
		}

	}