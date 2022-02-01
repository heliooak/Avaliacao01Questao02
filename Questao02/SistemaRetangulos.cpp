#include<iostream>
#include "SistemaRetangulos.h"


void SistemaRetangulos::menu()
{
	int opcao = -1;
	while (opcao != 0)
	{
		cout << "-- Menu de opcoes --" << endl;
		cout << "1 - Incluir" << endl;
		cout << "2 - Listar" << endl;
		cout << "3 - Excluir" << endl;
		cout << "4 - Alterar dimensoes" << endl;
		cout << "5 - Transladar" << endl;
		cout << "0 - Sair" << endl;
		cin >> opcao;

		switch (opcao)
		{
		case 1: incluir();
			break;
		case 2: listar();
			break;
		case 3: excluir();
			break;
		case 4: alterarDimensoes();
			break;
		case 5: transladar();
			break;
		}

		system("pause");
		system("cls");

	}
}

void SistemaRetangulos::incluir()
{
	Retangulo* novoRetangulo = new Retangulo();
	novoRetangulo->cadastrarDados();
	retangulos.push_back(novoRetangulo);
	cout << "Cadastro realizado com sucesso" << endl;
}

void SistemaRetangulos::excluir()
{
	listar();
	int posicao;
	cout << "Informe a posicao do retangulo a excluir: " << endl;
	cin >> posicao;
	retangulos.erase(retangulos.begin() + posicao);
	cout << "Retangulo excluido com sucesso." << endl;
}

void SistemaRetangulos::listar()
{
	cout << "Relacao dos retangulos" << endl;
	for (int i = 0; i < retangulos.size(); i++)
	{
		cout << "Posicao " << i << endl;
		retangulos[i]->imprimirDados();
	}
}

void SistemaRetangulos::alterarDimensoes()
{
	listar();
	int posicao;
	cout << "Informe a posicao do retangulo a alterar: " << endl;
	cin >> posicao;

	int altura, largura;
	cout << "Informe a nova altura: " << endl;
	cin >> altura;
	cout << "Informe a nova largura: " << endl;
	cin >> largura;
	retangulos[posicao]->setAltura(altura);
	retangulos[posicao]->setLargura(largura);

	cout << "Dimensoes alteradas com sucesso. " << endl;
}

void SistemaRetangulos::transladar()
{
	listar();
	int posicao;
	cout << "Informe a posicao do retangulo a transladar: " << endl;
	cin >> posicao;

	int dx, dy;
	cout << "Informe a distancia em x: " << endl;
	cin >> dx;
	cout << "Informe a distancia em y: " << endl;
	cin >> dy;
	retangulos[posicao]->transladar(dx, dy);

	cout << "Translacao realizada com sucesso." << endl;
}
