**Autor de la resolución:**
  * Usuario github: *maticosen*
  * Legajo: *1410271*
  * Apellido: *Cosentino*
  * Nombre: *Matias*
  
---  

**Número y título del trabajo:** *04-Tipo Color*

---

#### Etapa #1: Análisis del Problema

* **Transcripción del problema:** *Diseñar un tipo Color basado en el modelo RGB1 , con tres canales de 8 bits. Todo color está compuesto por tres componentes: intensidad de red (rojo), de green (verde), y de blue (azul). Cada intensidad está en el rango [0, 255]. Definir los valores para rojo, azul, verde, cyan, magenta, amarillo, negro, y blanco. Dos colores se pueden mezclar, lo cual produce un nuevo color que tiene el promedio de intensidad para cada componente.*

* **Refinamiento del problema e hipótesis de trabajo:** *Se deberán considerar las siguientes restricciones:*

    - *Las operaciones de proyección para red, green, y blue se implementan con acceso directo a los componentes, no es necesario definir **getters** especiales. Por la misma razón, los **setters** no son necesarios.*  
    - *Utilizar el tipo **uint8_t** de **cstdint**, si no es posible, usar **unsigned char**.*   
    - *Los colores primarios, secundarios, negro y blanco deben implementarse como ocho variables declaradas fuera de main y de toda función, con el calificador const para que no puedan modificarse.*  
    - *Implementar la operación **IsIgual** que retorna **true** si un color es igual a otro,si no, **false**.*  

*Opcionalmente, se solicita implementar las siguientes funciones:*

  1. *La operación **Mezclar** mezcla en partes iguales; desarrollar una variante de la operación que permita indicar las proporciones de las partes.*
  2. *Desarrollar la operaciones **Sumar** y **Restar** que dados dos colores suma o resta la intensidad de cada canal, siempre dando resultados en el rango [0, 255]. Utilizá estas operaciones para incializar los colores secundarios, blanco, y negro.*
  3. *Desarrollar la operación **GetComplementario** que dado un color obtiene el complementario u opuesto. Por ejemplo, el complementario de rojo es cyan.*
  4. *Desarrollar la operación **GetHtmlHex** que genera un string con la representación hexadecimal para HTML de un color.Por ejemplo, **assert( "#0000ff" == GetHtmlHex(azul) );**.*
  5. *Desarrollar la operación **GetHtmlRgb** que genera un string con la representación rgb para HTML de un color. Por ejemplo **assert( "rgb(0,0,255)" ==GetHtmlRgb(azul) );**.*
  6. *Codificar la función **CrearSvgConTextoEscritoEnAltoContraste** que dado un nombre archivo sin extensión, un texto, y un color de letra genera un archivo SVG con el texto en un color y fondo en su complementario.*

  
* **Modelo IPO**

![](https://github.com/maticosen/AED/blob/master/Otros/04_IPO.JPG)
