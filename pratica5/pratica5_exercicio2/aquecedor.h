class Aquecedor {
    private:
        double _temperatura;
    public:
        //Construtor e destrutor
        Aquecedor();
        ~Aquecedor();

        //Get
        double get_temperatura();

        //Funções-membro
        void aquecer();
        void esfriar();
};
