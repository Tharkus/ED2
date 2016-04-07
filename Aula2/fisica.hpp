class Fisica:public Pessoa
{
    //Atributos da Classe
    private:
        string cpf;

    //Metodos da Classe
    public:

        //Construtor
        Fisica()
        {

        };

        //Construtor com parametros - polimorfismo do tipo sobrecarga
        Fisica(string nome, int idade, string cp):Pessoa(nm,idd)
        {

            cpf = cp;

        };

        //Metodo destrutor
        ~Fisica()
        {

        };

        void setcpf(string cp)
        {
            cpf = cp;
        };

        int getcpf()
        {
            return cpf;
        };


};