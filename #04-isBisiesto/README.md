## Etapa #1: Analisis del problema.
-Transcripcion del problea: Dado un año, verificar si este es bisiesto o no.
-Refinamiento e hipotesis: Atravez de un conjunto de condiciones, verificaremos si el año ingresado es bisiesto, para eso se tiene que cumplir lo siguiente:
   - Anio >= 1582, Anio%4==0, Anio%100==0, Anio%400==0.
   
## Etapa #2:Diseño de la solucion.
  - Lexico: Anio ϵ R ,isBisiesto  ϵ Bool
  ##   Z  ----> B/ isBisiesto(Anio)= P and ( S and( not R or V) )
       - (Anio >= 1584)=P
       - (Anio%4==0)=S
       - (Anio%100==0)=R
       - (Anio%400==0)=V
  -Arbol Binario: ![](https://github.com/mlopex8/AED/blob/master/%2304-isBisiesto/ArbolBinario.jpg).
