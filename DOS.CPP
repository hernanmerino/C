#include<stdio.h>
#include<conio.h>

void main(void){
clrscr();
int tarea1,salir;
float a,b,c,d;
int a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3;
/* Menu de Inicio */
printf(".:: TAREA 26 DE AGOSTO DE 2015::.\n");
printf("Opcion 1 - Division con validacion \n");
printf("Opcion 2 - Ingresa Tres numeros e imprima el mayor\n");
printf("Opcion 3 - Ingresa Tres Numeros e imprima el menor\n");
printf("Opcion 4 - Ingresa 4 Numeros e Imprima el mayor y el menor\n");
/*Fin Menu de Inicio */

/* Ingreso de opciones */
scanf("%d",&tarea1);
/* If de seleccion de opcion y ejecucion de la primera tarea */

if(tarea1==1){
char pausa;
clrscr();
do
{
printf("Ingresa el Dividendo: \n");
scanf("%f",&a);
printf("Ingresa el Divisor: \n");
scanf("%f",&b);
if(b==0){
printf("Numero Ingresado en el divisor es Invalido\n");
}}while(b==0);
c=a/b;
printf("El resultado es:%.1f\nPresione una tecla para salir.",c);
cscanf("%c",&pausa);
}
else /* sino */
/* If de seleccion de opcion y ejecucion de la segunda tarea */
 if(tarea1==2){
clrscr();
char pausa;
printf("Ingresa el primer numero:\n");
scanf("%d",&a1);
printf("Ingresa el Segundo Numero:\n");
scanf("%d",&b1);
printf("Ingresa el Tercer numero:\n");
scanf("%d",&c1);
if((a1>b1)&&(a1>c1)){
printf("El Numero mayor es:%d\n",a1);
}else{
if((b1>a1)&&(b1>c1)){
printf("El Numero mayor es:%d\n",b1);
}else{
printf("El Numero Mayor es: %d\n",c1);
}}
printf("Presiona una tecla para cerrar");
cscanf("%c",&pausa);
}
else   /* sino */
/* If de seleccion de opcion y ejecucion de la tercera tarea */
if(tarea1==3){
clrscr();
char pausa;
printf("Ingresa el Primer numero:\n");
scanf("%d",&a2);
printf("Ingresa el Segundo numero:\n");
scanf("%d",&b2);
printf("Ingresa el Tercer numero:\n");
scanf("%d",&c2);
if((a2<b2)&&(a2<c2)){
printf("El Numero menor es:%d\n",a2);
}else {
if((b2<a2)&&(b2<c2)){
printf("El Numero Menor es: %d\n",b2);
}else{
printf("El Numero menor es: %d\n",c2);
}
}
printf("Presione una tecla para cerrar\n");
cscanf("%c",&pausa);
}
else /* sino */
{
/* If de seleccion de opcion y ejecucion de la cuarta tarea */
if(tarea1==4){

clrscr();
char pausa;
printf("Ingresa el Primer Numero: \n");
scanf("%d",&a3);
printf("Ingresa el segundo numero: \n");
scanf("%d",&b3);
printf("Ingresa el tercer numero: \n");
scanf("%d",&c3);
printf("Ingresa el Cuarto valor: \n");
scanf("%d",&d3);
if((a3>b3)&&(a3>c3)&&(a3>c3)){
printf("El Numero mayor es: %d\n",a3);
}
else
{
if((b3>a3)&&(b3>c3)&&(b3>d3)){
printf("El Numero Mayor es: %d\n",b3);
}
else
{
if((c3>a3)&&(c3>b3)&&(c3>d3)){
printf("El Numero mayor es: %d\n",c3);
}
else
{
printf("El numero mayor es: %d\n",d3);
}
}
}
if((a3<b3)&&(a3<c3)&&(a3<d3)){
printf("El Numero Menor es: %d\n",a3);
}
else
{
if((b3<a3)&&(b3<c3)&&(b3<d3)){
printf("El Numero Menor es: %d\n",b3);
}
else
{
if((c3<a3)&&(c3<b3)&&(c3<d3)){
printf("El Numero Menor es: %d\n",c3);
}
else
{
printf("El Numero Menor es: %d\n",d3);
}
}
}
cscanf("%c",&pausa);
}
}
}



