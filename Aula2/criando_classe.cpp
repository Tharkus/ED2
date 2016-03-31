#include "veiculo.hpp"
#include "carro.hpp"
#include "moto.hpp"
int main(int argc, char **argv)
{
	//Variaveis Locais
	string texto;
	float valor;
	int numero;
	string marca;
	string modelo;
	float preco;
	int qntcilin;
	
	//Exemplo de manipulacao de objetos - estatica
	/*Veiculo veiculo;
	cout <<"informe a marca do veiculo:" << endl;
	cin >> texto;
	veiculo.setMarca(texto);

	cout <<"informe a modelo do veiculo:" << endl;
	cin >> texto;
	veiculo.setModelo(texto);

	cout <<"informe a preço do veiculo:" << endl;
	cin >> valor;
	veiculo.setPreco(valor);

	cout << "Dados do Veiculo: ";
	cout <<veiculo.getMarca() << " - ";
	cout <<veiculo.getModelo() << " - ";
	cout <<veiculo.getPreco() << endl << endl;



	//Exemplo de manipulação de objetos - DINAMICA + herança
	Carro *carro;
	carro = new Carro();

	cout << "Informe a marca do carro:" << endl;
	cin >> texto;
	carro->setMarca(texto);

	cout << "Informe a modelo do carro:" << endl;
	cin >> texto;
	carro->setModelo(texto);

	cout << "Informe a preço do carro:" << endl;
	cin >> valor;
	carro->setPreco(valor);

	cout << "Informe o tipo de cambio do carro:" << endl;
	cin >> numero;
	carro->setTipoCambio(numero);

	cout << "Informe o numero de assentos do carro:" << endl;
	cin >> numero;
	carro->setNumeroAssentos(numero);

	cout << "Dados do carro: ";
	cout << carro->getMarca() << " - ";
	cout << carro->getModelo() << " - ";
	cout << carro->getPreco() << " - ";
	cout << carro->getTipoCambio() << " - ";
	cout << carro->getNumeroAssentos() << endl << endl;
	delete carro;*/
	
	/*Moto *moto;
	moto = new Moto("Honda", "BIZ 125", 10000, 125);
	
	cout <<endl;
	cout << "Dados da Moto: " << endl;
	cout << moto->getMarca() << " - ";
	cout << moto->getModelo() << " - ";
	cout << moto->getPreco() << " - ";
	cout << moto->getqntcilin() << " - ";
	cout <<endl;
	delete moto;*/
	
	//Exemplo de alocação/desalocação dinamica de arrays de objetos
	/*Moto *vetor_motos;
	vetor_motos = new Moto[10];
	delete [] vetor_motos;
	return 0;*/
	Moto *vetor_motos;
	vetor_motos = new Moto[10];
	
	int i;
	for (i = 0; i < 2; i++){
	cout << "Informe o modelo da Moto: " << endl;
	cin >> modelo;
	vetor_motos[i].setModelo(modelo);
	
	cout << "Informe a Marca da Moto: " << endl;
	cin >> marca;
	vetor_motos[i].setMarca(marca);
	
	cout << "Informe o Preço da Moto: " << endl;
	cin >> preco;
	vetor_motos[i].setPreco(preco);
	
	cout << "informe a cilindradas da Moto: " << endl;
	cin >> qntcilin;
	vetor_motos[i].setqntcilin(qntcilin);
	
	cin.clear();	
	}
	delete [] vetor_motos;
}
