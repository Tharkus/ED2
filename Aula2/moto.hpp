class Moto:public Veiculo
{
	//Atributos da Classe
	private:
		int qntcilin;

	//Metodos da Classe
	public:

		//Construtor
		Moto()
		{

		};

		//Construtor com parametros - polimorfismo do tipo sobrecarga
		Moto(string mc, string md, float pr, int qc):Veiculo(mc, md, pr)
		{

			qntcilin = qc;

		};

		//Metodo destrutor
		~Moto()
		{

		};

		void setqntcilin(int qc)
		{
			qntcilin = qc;
		};

		int getqntcilin()
		{
			return qntcilin;
		};

		
};
