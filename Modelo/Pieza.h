/*******************************************************************************
 * UNIVERSIDAD DE LAS FUERZAS ARMADAS - ESPE
 * Estructura de Datos 9686
 * Nombres: Carrera Nahir, Drouet Stephen
 * Fecha de creacion: 12/08/23 19:40
 * Fecha de modificacion: 12/08/23 19:40
 * Enunciado:
 * Realizar el juego del tetris con palabras en consola (Solo caida horizontal)
 * EXTRA: Realizar la rotación de las piezas
 *******************************************************************************/
 
#ifndef PIEZA_H
#define PIEZA_H
#include <string>
#include <iostream>
class Pieza
{
	public:
		//Constructores
		Pieza();
		Pieza(std::string);
		//Getters y Setters
		std::string getPalabra() const;
		int getRotacion()const;
		int getFila() const;
		int getColumna()const;
		void setRotacion(int);
		void setFila(int);
		void setColumna(int);
		//Funciones
		void reiniciarRotacion();
		//Sobrecarga de operadores
		friend std::ostream& operator<<(std::ostream& os, const Pieza& pieza);
	private:
		std::string palabra;
		int rotacion;
		int fila;
		int columna;
		
};

#endif