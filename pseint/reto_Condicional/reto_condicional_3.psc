Algoritmo reto_condicional_3
	Definir num_usuario como Entero
	Mostrar "Ingrese un número entero (positivo o negativo): "
	Leer num_usuario
	
	si num_usuario > 0 Entonces
		si num_usuario mod 2 = 0 Entonces
			Mostrar "El número entero es par positivo"
		SiNo
			Mostrar "El número es impar negativo"
		FinSi
	SiNo
		si num_usuario mod 2 = 0 Entonces
			Mostrar "El número entero es par negativo"
		SiNo
			Mostrar "El número entero es impar negativo"
		FinSi
	FinSi
FinAlgoritmo
