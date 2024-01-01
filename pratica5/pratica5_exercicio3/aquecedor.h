class Aquecedor {
    private:
        double _temperatura;
        double _temperaturaMinima;
        double _temperaturaMaxima;
        double _fatorIncremento;
    public:
        //Construtor e destrutor
        Aquecedor();
        Aquecedor(double temperaturaInicial);
        Aquecedor(double temperaturaInicial, double fatorIncremento);
        ~Aquecedor();

        //Get
        double get_temperatura();

        //Set
        void set_fatorIncremento(double fatorIncremento);

        //Funções-membro
        void aquecer();
        void esfriar();
};
