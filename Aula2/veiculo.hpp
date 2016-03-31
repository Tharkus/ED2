#include <string>
#include <iostream>

using namespace std;

//modela a classe veiculo

class Veiculo
{
	//atributos da classe
	protected: //impedir acesso indevido
		string marca;
		string modelo;
		float preco;

	private:
		int teste;

	//Metodos da Classe
	public:

		//construtor
		Veiculo()
		{
			marca = "";
			modelo = "";
			preco = 0.0;
		};

		//Construtor com Parametros Polimorfismo do tipo sobrecarga
		Veiculo(string mc, string md, float pr)
		{
			marca = mc;
			modelo = md;
			preco = pr;
		};

		//Metodo Destrutor
		~Veiculo()
		{
			cout <<"deletando instancia do veiculo:" << endl;
		};


		//Metodo para retornar marca - acoplamento
		void setMarca(string mc)
		{
			marca = mc;
		};
		
		string getMarca()
		{

			return marca;
		};

		//Metodo para retornar Modelo - Acoplamento
		string getModelo()
		{

			return modelo;
		};

		//Metodo para retornar valor do modelo - Acoplamento
		void setModelo(string md)
		{
			modelo = md;
		}

		//Metodo para retornar o preco - acoplamento
		float getPreco()
		{
			return preco;
		};

		//metodo para setar o preco - acoplamento
		float setPreco(float pr)
		{
			preco = pr;
		};



};
