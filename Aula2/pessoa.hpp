#include <string>
#include <iostream>

using namespace std;

//modela a classe pessoa

class Pessoa
{
    //atributos da classe
    protected: //impedir acesso indevido
        string nome;
        int idade;
        Pessoa *filhoEsq;
        Pessoa *filhoDir;

    //Metodos da Classe
    public:

        //construtor
        Pessoa()
        {
            nome = "";
            idade = 0;
            filhoDir = NULL;
            filhoEsq = NULL;
        };

        //Construtor com Parametros Polimorfismo do tipo sobrecarga
        Pessoa(string nm, int idd)
        {
            nome = nm;
            idade = idd;
            filhoDir = NULL;
            filhoEsq = NULL;
        };

        //Metodo Destrutor
        ~Pessoa()
        {
            cout <<"deletando instancia da pessoa:" << endl;
        };

        //Metodo para retornar marca - acoplamento
        void setNome(string nm)
        {
            nome = nm;
        };

        string getNome()
        {

            return nome;
        };

        void setIdade(int idd)
        {
            idade = idd;
        };

        int getIdade()
        {
            return idade;
        }


        void insereNovoElemento(Pessoa *filho)
        {
        if(this->idade <= filho->idade)
            {
                if(this->filhoEsq == NULL)
                    {
                        this->filhoEsq = filho;
                    }
                    else
                        {
                            this->filhoEsq->insereNovoElemento(filho);
                        }
            }
            else
            {
                if(this->idade > filho->idade)
                    {

                        if(this->filhoDir == NULL)
                            {
                                this->filhoDir = filho;
                            }
                            else
                                {
                                    this->filhoDir->insereNovoElemento(filho);
                                }

                    }
            };
    };



};
