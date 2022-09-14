#include <iostream>
#include <cstdint>

#define SIZE 5

// Ejemplo sencillo de reserva de memoria para un array de 2 dimensiones
uint32_t** reservaMatriz() {
    std::cout << "Reservando" << "\n";
    uint32_t** matrix = new uint32_t*[4];
    std::cout << "Reservado puntero en " << matrix << "\n";
    for (uint32_t i=0; i<SIZE; i++) {
        matrix[i] = new uint32_t[4];
        std::cout << "Fila " << i << " reservada en" << matrix[i] << "\n";
    }
    return matrix;
}

void rellenaMatriz(uint32_t** const &m) {
    for (uint32_t i=0; i<SIZE; i++) {
        for (uint32_t j=0; j<SIZE; j++) {
            std::cout << "Iterando en " << i << " " << j << "\n";
            m[i][j] = i+j;
            std::cout << &m[i][j] << " ==> " << m[i][j] << "\n";
        }
    }

    std::cout <<"Rellenando" << "\n";

}

void dibujaMatriz(uint32_t** const &m) {
    std::cout <<"Dibujando" << "\n";
    for (uint32_t i=0; i<SIZE; i++) {
        for (uint32_t j=0; j<SIZE; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << "\n";
    }
}

void liberaMatriz(uint32_t** &m) {
    std::cout << "Liberando" << "\n";
    for (uint32_t i=0; i<SIZE; i++) {
        std::cout << "Liberando " << m[i] << " liberada" << "\n";
        delete [] m[i];
        m[i] = nullptr;
        std::cout << "Fila " << i << " liberada, contenido: " << m[i] << "\n";
    }
    delete [] *m;
    m = nullptr;
    std::cout << "Liberada" << "\n";
}

int main() {

    uint32_t **m = nullptr;
    std::cout << "Puntero en " << &m << " apuntando a " << m << "\n";
    m = reservaMatriz();
    std::cout << "Puntero en " << &m << " apuntando a " << m << "\n";
    rellenaMatriz(m);
    dibujaMatriz(m);
    liberaMatriz(m);

    return 0;
}
