#include <iostream>
#include <cstdint>

#define SIZE 5

// Ejemplo avanzado de reserva de memoria para un array de 2 dimensiones
// Solo llamamos a new y delete una sola vez
uint32_t** reservaMatriz() {
    std::cout << "Reservando" << "\n";
    // Reservamos espacio para el total del array (SIZE*SIZE)
    // Reservamos espacio para los punteros (de 64bits) con SIZE*2
    // porque ocuparán dos posiciones de 32 bits del array para simular
    // una sola de 64
    uint32_t size = SIZE*2 + SIZE*SIZE;
    uint32_t** matrix = new uint32_t*[size];
    std::cout << "Reservado puntero en " << matrix << "Con tamaño " << size << "\n";
    std::cout << sizeof(uint32_t*) << "\n";
    uint32_t* temp = *matrix;
    std::cout << " Puntero temp en " << temp << "\n";
    // Nos movemos usando aritmética de punteros (al sumarle X nos movemos
    // x*sizeof(tipo)) por lo que no hay que calcular los bytes, solo
    // las posiciones en relación al tipo
    temp += SIZE * 2;
    std::cout << " Puntero temp en " << temp << "\n";
    for (uint32_t i=0; i<SIZE; i++) {
        temp += SIZE;
        matrix[i] = temp;
        std::cout << "Fila " << i << " reservada en" << matrix[i] << "\n";
    }
    return matrix;
}

void rellenaMatriz(uint32_t** const &m) {
    for (uint32_t i=0; i<SIZE; i++) {
        for (uint32_t j=0; j<SIZE; j++) {
            std::cout << "Iterando en " << i << " " << j << "\n";
            m[i][j] = i+j;
        }
    }

    std::cout <<"Rellenado" << "\n";

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
    delete [] m;
    std::cout << m << "\n";
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
