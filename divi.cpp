//Divisi�n normal:

printf"%f", 7 + 0.0 / 3;   
//En este caso, en vez del truquito de sumar 0.0, podemos hacer algo un poco m�s f�cil de leer (aunque con el riesgo de pasarlo por alto por ser demasiado sutil):

printf("%f", 7.0/3);   /* Da 2.33333333333 */
//Divisi�n entera:

printf("%d", 7/3);  /* Da 2 */
//Resto de la divisi�n entera:

printf("%d", 7%3);  /* Da 1 */
