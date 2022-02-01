#pragma once
class Retangulo
{
private:
	int x;
	int y;
	int altura;
	int largura;

public:
	void setX(int x);
	void setY(int y);
	void setLargura(int largura);
	void setAltura(int altura);
	void transladar(int dx, int dy);
	void imprimirDados();
	void cadastrarDados();
};