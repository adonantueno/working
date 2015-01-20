#ifndef  ARCHIVOS_H
#define  ARCHIVOS_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
using namespace std;

/* FUNCION : CARGAR ALUMNO -ARCHIVO-
 * ENTRADA :  struct alumno
 * SALIDA  : int
 * DESCRIPCION : a partir de la información del alumno a que recibe como parametro,
 * los almacena en el archivo.
 */
int cargarAlumno_A (struct alumno* a);

/* FUNCION : LEER ALUMNO -ARCHIVO-
 * ENTRADA : struct alumno,  int
 * SALIDA  : void - modificación del parámetro alumno (a)
 * DESCRIPCION : lee el alumno ubicado en la posicion i del archivo.
 ADVERTENCA: si i es mayor al número de registros, devuelve el último registro.
 */
int leerAlumno_A (struct alumno* a, int i);

/* FUNCION : VALIDAR ALUMNO -ARCHIVO-
 * ENTRADA : user, pass
 * SALIDA  : 1 -> Encontro el alumno
             0 -> No encontro el alumno
 * DESCRIPCION : lee el archivo de alumnos y compara cada uno de los almacenados
 * con los parametros ingresados, si encuentra conincidencia retorna 1 informando
 * que los datos corresponden a algun registro.
*/

int validarAlumno_A (char* user,char* pass);

/* FUNCION : CARGAR EVALUACION -ARCHIVO-
 * ENTRADA :  struct evaluacion
 * SALIDA  : int
 * DESCRIPCION : a partir de la información de la evaluacion que recibe como parametro,
 * la almacena en el archivo.
 */

int cargarEvaluacion_A (struct evaluacion* e);

/* FUNCION : LEER EVALUACION -ARCHIVO-
 * ENTRADA : struct evaluacion,  int
 * SALIDA  : void - modificación del parámetro evaluacion (e)
 * DESCRIPCION : lee la evaluacion ubicada en la posicion i del archivo.
 ADVERTENCA: si i es mayor al número de registros, devuelve el último registro.
 */
int leerEvaluacion_A (struct evaluacion* e, int i);

#endif
