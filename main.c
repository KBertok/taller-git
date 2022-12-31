/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  31/12/22 11:25:09
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<stdio.h>

int sumar(int a, int b) {
  return a + b;
}


int restar(int a, int b) {
  return a - b;
}

int main() {
  int resultado = sumar(1, 4);
  printf("El resultado es %i\n", resultado);
  return 0;
}


