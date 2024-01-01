/* INF112 - PROGRAMAÇÃO II
   Prática 2 - Alocação Dinâmica e Valgrind
   Exercício 2 - Imagens pbm
   Laís Reis de Sales - 96862
*/

#include <iostream>

struct Imagem {
    int **pixels;
    int nrows;
    int ncolumns;
};

void leImagem(Imagem &im) {
    char codigoMagico[3];
    std::cin >> codigoMagico;
    std::cin >> im.ncolumns >> im.nrows;

    im.pixels = new int *[im.nrows];
    for (int i = 0; i < im.nrows; i++){
        im.pixels[i] = new int [im.ncolumns];
    }

    for (int i = 0; i < im.nrows; i++){
        for (int j = 0; j < im.ncolumns; j++){
            std::cin >> im.pixels[i][j];
        }
    }
}

void deletaImagem(Imagem &im) {
    for (int i = 0; i < im.nrows; i++){
        delete[] im.pixels[i];
    }

    delete[] im.pixels;
}

void imprimeImagem(Imagem &im) {
    std::cout << "P1\n";
    std::cout << im.ncolumns << ' ' << im.nrows << std::endl;
    for (int i = 0; i < im.nrows; i++){
        for (int j = 0; j < im.ncolumns; j++){
            std::cout << im.pixels[i][j] << ' ';
        }
        std::cout << std::endl;
    }

}

void inverteCorImagem(Imagem &im) {
    for (int i = 0; i < im.nrows; i++){
        for (int j = 0; j < im.ncolumns; j++){
            if (im.pixels[i][j] == 0){
                im.pixels[i][j] = 1;
            } else {
                im.pixels[i][j] = 0;
            }
        }
    }
}

int main() {
    Imagem im;
    leImagem(im);
    inverteCorImagem(im);
    imprimeImagem(im);
    deletaImagem(im);

    return 0;
}
