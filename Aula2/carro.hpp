class Carro:public Veiculo
{
	//Atributos da Classe
	private:
		int tipoCambio;
		int numeroAssentos;

	//Metodos da Classe
	public:

		//Construtor
		Carro()
		{

		};

		//Construtor com parametros - polimorfismo do tipo sobrecarga
		Carro(string mc, string md, float pr, int tc, int na):Veiculo(mc, md, pr)
		{

			tipoCambio = tc;
			numeroAssentos = na;

			// teste = "teste";
			// settest(10);
		};

		// Metodo destrutor
		~Carro()
		{

		};

		void setTipoCambio(int tc)
		{
			tipoCambio = tc;
		};

		int getTipoCambio()
		{
			return tipoCambio;
		};

		void setNumeroAssentos(int na)
		{
			numeroAssentos = na;
		};

		int getNumeroAssentos()
		{
			return numeroAssentos;
		};

};
