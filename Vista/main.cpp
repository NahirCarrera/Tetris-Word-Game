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
/*
  Este código genera un juego parecido a tetris
  
  PIEZAS
  Son palabras de 5 letras obtenidas de un archivo de texto
  Tienen 4 posiciones (rotaciones)
  
  REGLAS
  La eliminación de piezas se da cuando una igual (en palabra y rotación) le cae encima o alado.
  El juego termina cuando ya no haya espacio para generar más piezas (la ultima pieza 
  queda en primera posicon del tablero)
  
  CONTROLES
  El control de la rotación de las piezas se hace con la flecha de arriba del teclado
  La caida de las piezas se acelera con la flecha hacia abajo
  El movimiento horizontal se hace con las flechas izquierda y derecha
  Pausa con space
  Terminar con esc
  
  JUEGO
  Durante el juego se muestra la siguiente palabra que va a caer, el score y nivel
  Al finalizar el juego se muestra el score final
  
  EXTRA
  El juego tiene 3 niveles (la velocidad de caida es más rápida por nivel)
  El juego tiene música generada por tonos e hilos
*/
#include "../Herramientas/ControladorMenu.h"

int main(){
	ControladorMenu ctrl;
	ctrl.correrMenu();
}