#include <iostream>      // arquivo de inclu��o para usar o fluxo de entrada e sa�da de dados
#include "binario.h"   // arquivo de inclu��o para usar as fun��es de binario.h
#include "genetico.h" // arquivo de inclu��o para usar as fun��es de gen�tico.h
#include <windows.h>   // arquivo de inclu��o usado para criar a fun��o de alterar a cor do texto
using namespace std; 

// Usado para a elabora��o dos argumentos que ser�o usados na contru��o da fun�ao de alterar a cor do texto.
enum DOS_COLORS {  
	BLACK, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN,
	LIGHT_GRAY, DARK_GRAY, LIGHT_BLUE, LIGHT_GREEN, LIGHT_CYAN,
	LIGHT_RED, LIGHT_MAGENTA, YELLOW, WHITE
};

// Fun��o para alterar a cor do texto.
void textcolor(DOS_COLORS iColor)
{
	HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
	BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
	bufferInfo.wAttributes &= 0x00F0;
	SetConsoleTextAttribute(hl, bufferInfo.wAttributes |= iColor);
}


int main() 
{

	// declara��o das vari�veis que ir�o conter os valores das solu��es.
	unsigned short num1=0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0;
	// Recebendo os valores das vari�veis
	cout << "Entre com 6 solucoes iniciais (numeros entre 0 e 65535): " << endl; 
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
	cout << "" << endl;
	// Constru��o da tabela
	// linha 1
	cout << "Resultado da avaliacao" << endl;
	cout << "-----------------------" << endl;
	// Aqui � chamado a fun��o "avaliarSolucao", onde antes de retornar um bool ela exibi o valor e peso do objeto da solu��o,
	// depois o retorno � usado no if para construir a tabela exibindo de acordo com a condi��o "X" ou "OK" em cada solu��o.
	if (avaliarSolucao(num1)==true) {
		
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}
	// linha 2
	if (avaliarSolucao(num2) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}

	// linha 3
	if (avaliarSolucao(num3) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}

	// linha 4
	if (avaliarSolucao(num4) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}

	// linha 5
	if (avaliarSolucao(num5) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}

	// linha 6
	if (avaliarSolucao(num6) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}

	cout << "-----------------------" << endl;

	// linha 7
	if (avaliarSolucao(cruzamentoPU(num1,num2)) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}

	// linha 8
	if (avaliarSolucao(cruzamentoAT(num3,num4)) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}

	// linha 9
	if (avaliarSolucao(mutacaoS(num5)) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}

	// linha 10
	if (avaliarSolucao(mutacaoD(num6)) == true) {
		textcolor(GREEN);
		cout.width(2); cout << "OK" << endl;
		textcolor(WHITE);
	}
	else {
		textcolor(RED);
		cout.width(2); cout << "X" << endl;
		textcolor(WHITE);
	}


	system("pause");
	
	return 0;
}