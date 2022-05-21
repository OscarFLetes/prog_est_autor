/*Autor: Oscar Eduardo Fletes Ixta, realizado: 13/02/2022
	Programa que calcula e imprime, que el autor inserte el numero de ejemplares que el considere
	que podria llegar a vender, la estimacion de las regalias y le ayudamos aelegir la mejor opcion
	
	Programa en lenguaje c que calcula las regalias con base a los ejemplares y le ayudamos a elegir la mejor opcion, con el uso
	de scanf, condicones, y operaciones aritméticas
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float, int
		* Uso del scanf
		* Uso de condicones 
		* Operaciones aritmeticas
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float y int, uso del scanf, uso de condiciones realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 2 variable del tipo int, float (ejemplares, precio de los ejemplares)
	El programa calcula e imprime, que el autor inserte el numero de ejemplares que el considere que podria llegar a vender, 
	la estimacion de las regalias y le ayudamos a elegir la mejor opcion
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//Variables 
	int ejemplares, ejemplares2;//variables de enteros
	float vendido,opcion1,opcion2,opcion3,opcion4,opcion5,neto=25000,precioejemp,mayor;//variable con decimales
	//Entrada 
	printf("1.pago de manuscrito mas el pago de la publicacion\n");//imprime mensaje 
	printf("2.Pago de un 12.5 del precio neto\n");//imprime mensaje 
	printf("3.Pago de un 10 del precio neto de los primeros 4000 ejemplares mas 14 por encima de los 4000 ejemplares\n\n");//imprime mensaje 
	//Proceso 
	printf("En la opcion 1, se sumara lo que son los 5000 dolares, mas 20000 por la publicacion, por lo tanto es un total de: \n");//imprime mensaje 
	opcion1=5000+20000;//operacion de la opcion 1
	//Salida
	printf("Total de la opcion 1:\t $%.2f\n\n", opcion1);//imprime la salida de la opcion 1
	
	printf("Introduce los ejemplares vendidos: "); //precio de los ejemplares, poner el if hasta el final y que salgan todas las opciones
	scanf("%d",&ejemplares);//lee el numero insertado por el teclado
	printf("Introduce el precio de los ejemplares: ");//imprime mensaje 
	scanf("%f",&precioejemp);//lee el numero insertado por el teclado
	opcion2=ejemplares*precioejemp*neto*12.5;//calcula la opcion 2
	//Salida
	printf("Total:\t $%.2f\n\n", opcion2);//imprime la salida de la opcion 2
		
	printf("En la opcion tres, primero se sumara el 10 de los primeros 4000 ejemplares vendidos, mas el precio de los ejemplares ya establecidos, por lo tanto seria un total de: \n");//imprime mensaje 
	opcion3=4000*precioejemp*neto*10;//calcula la opcion 3
	printf("Total de los primeros 4000:\t $%.2f\n\n", opcion3);//imprime la salida de la opcion 3
	
	printf("Introduce los ejemplares vendidos que sean mayor de los 4000 ya vendidos (Se usara el precio de los ejemplares ya establecido): ");//imprime mensaje 
	scanf ("%d",&ejemplares2);//lee el numero insertado por el teclado
		if(ejemplares2>4000){//condicon, si los ejemplearos son mayor que 4000
			opcion4=ejemplares2*precioejemp*neto*14;//realiza la siguiente ecuacion
		}
	//Salida
	printf("Total por encima de los 4000:\t $%.2f\n", opcion4);//imprime la salida de la opcion 4
	printf("la Suma total de la opcion 3 es:\n");//imprime mensaje
	opcion5=opcion3+opcion4;//suma la opcion 3 y 4 para el total de la opcion 3
	printf("Total:\t $%.2f\n",opcion5);//imprime la salida de la suma
	
	//hacemos diferencias para saber que opcion es la mejor
	mayor=opcion1;//declarando opcion1
	if(opcion2>mayor){//si opcion 2 es mayor que opcion 1
		mayor=opcion2;//el mayor es igual a la opcion 2
	}
		if(opcion5>mayor){//si opcion5 es mayor
			mayor=opcion5;//el mayor es la opcion 5	
	}
	printf("La mejor opcion que puede tomar es: \n");//imprime mensaje
	if(opcion1==mayor){//si opcion 1 es igual a mayor
		printf("la opcion 1");//imprime mensaje
	}
	if(opcion2==mayor){//si opcion 2 es igual a mayor
		printf("La opcion 2");//imprime mensaje
	}
	if(opcion5==mayor){//si opcion 5 es igual a mayor
		printf("La opcion 3");//imprime mensaje
	}
	 
	return 0;
}
