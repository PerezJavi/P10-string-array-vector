/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P34279.cc
  * @author Javier Pérez alu0101566306@ull.edu.es
  * @date Oct 18, 2023
  * @brief The program add one second to a given time
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  
  int iteraciones;
  std::cin >> iteraciones;
  int numeros[iteraciones];
  
  //std::cin >> numeros;
  int suma = 0;
  for (int i = 1; i <= iteraciones; i++) {
    std::cin >> numeros[i];
    suma = numeros[i] + suma;
  }
    int suma2 = suma;
    for (int i = 1; i <= iteraciones; i++) {

    int comprobar = numeros[i];
    int resul = suma - comprobar;
    
    if (resul == comprobar) {
     std::cout << "YESX" << std::endl; 
     exit;  
    }
    suma = suma2;
  }
  

  //std::cout << "NOX" << std::endl;
  
return 0;
}
