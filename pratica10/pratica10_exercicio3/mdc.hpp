#ifndef MDC_HPP_
#define MDC_HPP_

class MDC{
    private:
        int _m;
        int _n;
    public:
        MDC(int m, int n);
        int get_m();
        int get_n();
        int calcula_mdc(int numero1, int numero2);
};

#endif