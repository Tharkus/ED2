class Juridica:public Pessoa
{
    //Atributos da Classe
    private:
        string cnpj;

    //Metodos da Classe
    public:

        //Construtor
        Juridica()
        {

        };

        //Construtor com parametros - polimorfismo do tipo sobrecarga
        Juridica(string nome, int idade, string cnp):Pessoa(nm,idd)
        {

            cnpj = cnp;

        };

        //Metodo destrutor
        ~Juridica()
        {

        };

        void setcnpj(string cnp)
        {
            cnpj = cnp;
        };

        int getcnpj()
        {
            return cnp;
        };


};