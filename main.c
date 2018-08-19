/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 18 de agosto de 2018, 07:52 PM
 */

#include <stdio.h>
#include <math.h>
#define pi 3.1416

/*
 * 
 */
int main() {
    printf("vamos a calcular el area de un circulo\ndame el radio\n");
    int radio = 0;
    scanf("%d",&radio);
    int radiosote = radio*radio;
    float area = radiosote*pi;
    printf("el area de tu circulo es de: %f",area);
    
    

    return 0;
}

