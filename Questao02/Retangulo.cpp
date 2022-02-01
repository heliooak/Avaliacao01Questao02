#include "Retangulo.h"
#include <iostream>

using namespace std;

void Retangulo::setX(int x)
{
	this->x = x;
}

void Retangulo::setY(int y)
{
	this->y = y;
}

void Retangulo::setLargura(int largura)
{
	this->largura = largura;
}

void Retangulo::setAltura(int altura)
{
	this->altura = altura;
}

void Retangulo::transladar(int dx, int dy)
{
	x = x + dx;
	y = y + dy;
}

void Retangulo::imprimirDados()
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "Altura = " << altura << endl;
	cout << "Largura = " << largura << endl;
}

void Retangulo::cadastrarDados()
{
	cout << "Informe x: " << endl;
	cin >> x;
	cout << "Informe y: " << endl;
	cin >> y;
	cout << "Informe a altura: " << endl;
	cin >> altura;
	cout << "Informe a largura: " << endl;
	cin >> largura;

}
