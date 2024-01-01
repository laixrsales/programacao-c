#ifndef SOMA_HPP_
#define SOMA_HPP_

class Soma {
    private:
        int _m;
        int _n;
        int _resultado;
    public:
        Soma(int m, int n);
        int get_m();
        int calcula_soma(int numero);
};

#endif
