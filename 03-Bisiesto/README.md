**Autor de la resolución:**
  * Usuario github: *maticosen*
  * Legajo: *1410271*
  * Apellido: *Cosentino*
  * Nombre: *Matias*
  
---  

**Número y título del trabajo:** *03-Precedencia de Operadores — Bisiesto*

---

#### Etapa #1: Análisis del Problema

* **Transcripción del problema:** *Dado un año, determinar si es bisiesto.*

* **Refinamiento del problema e hipótesis de trabajo:** *Se creará una función asumiendo como válido el algoritmo de Wikipedia y descartando cualquier año anterior al 1582. Además se deberán considerar las siguientes restricciones:*

  *1. Desarrollar la lógica en una función.*  
  *2. El nombre de la función debe ser IsBisiesto.*   
  *3. Aplicar operadores booleanos.*  
  *4. No aplicar el operador condicional.*  
  *5. No aplicar if ni switch.*  
  
* **Modelo IPO**

![](https://github.com/maticosen/AED/blob/master/Otros/03_IPO.jpg)

---

#### Etapa #2: Diseño de la solución

* **Léxico del Algoritmo:**

![](https://github.com/maticosen/AED/blob/master/Otros/03_Lex.jpg)

* **Pruebas**

*assert (not IsBisiesto (1582));*  
*assert (not IsBisiesto (1583));*  
*assert (IsBisiesto (1584));*  
*assert (IsBisiesto (1600));*  
*assert (not IsBisiesto (1700));*  
*assert (not IsBisiesto (1800));*  
*assert (not IsBisiesto (1900));*  
*assert (IsBisiesto (2000));*  
*assert (IsBisiesto (2004));*  
*assert (IsBisiesto (2400));*  

* **Prototipo**

*bool IsBisiesto (int);*

* **Definicion**

*bool IsBisiesto (int x) { return x>1582 and x%4==0 and (x%100!=0 or x%400==0); }*

* **Árbol de Expresión**

![](https://github.com/maticosen/AED/blob/master/Otros/03_Arbol.jpg)
