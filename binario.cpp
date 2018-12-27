using namespace std; // usado para abreviar a chamada e usar apenas o cout
#include <iostream> // chama da biblioteca para usar suas funções

//Função para ligar um bit de um número numa determinada posição informada e retornar o resultado.
unsigned short ligarBit(unsigned short num, int pos) {

	unsigned short mascara = 1 << pos;
	num = num | mascara;
	return num;
}

//Função para desligar um bit de um número numa determinada posição informada e retornar o resultado.
unsigned short desligarBit(unsigned short num, int pos) {


	unsigned short mascara = ~(1 << pos);
	num = num & mascara;
	return num;

}
// problema estranho: eu coloco retorno bool ele não aceita, mas estou retornando bool, só aceita unsigned short.
//Função para testar se um bit está ligado ou desligado, de um número numa determinada posição informada e retornar o resultado.
bool testarBit(unsigned short num, int pos) {

	unsigned short mascara = 1 << pos;

	if (num & mascara) {
		return true;
	}
	else {
		return false;
	}
	
}
//Função para realizar a função lógica "AND" de dois números informados e retornar o resultado.
unsigned short andBi(unsigned short num, unsigned short num2) {

	return num&num2;
}

//Função para realizar a função lógica "OR" de dois números informados e retornar o resultado.
unsigned short orBi(unsigned short num, unsigned short num2) {

	return num|num2;
}

//Função para pegar os bit de mais baixar ordem e retornar o número formado.
unsigned short baixoBit(unsigned short num) {
	// teste
	// 0000000011111111  - mascara: 255
	// 0001100111101011  - numero: 6635
	// 0000000011101011   < - resultado 235
	unsigned short mascara = 255;
	num = num&mascara;
	return num;
	
}

//Função para pegar os bit de mais alta ordem e retornar o número formado.
unsigned short altoBit(unsigned short num) {
	// teste
	// 1111111100000000  - mascara: 65280
	// 0001100111101011  - numero: 6635
	// 0001100100000000   < - resultado 6400
	unsigned short mascara = 65280;
	num = num&mascara;
	return num;

}