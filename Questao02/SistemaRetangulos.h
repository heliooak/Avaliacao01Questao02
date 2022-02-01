#pragma once

#include<vector>
#include"Retangulo.h"

using namespace std;

class SistemaRetangulos
{
private:
	vector<Retangulo*> retangulos;
public:
	void menu();
	void incluir();
	void excluir();
	void listar();
	void alterarDimensoes();
	void transladar();
};

