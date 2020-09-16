* **Expresion matematica:**

![](https://github.com/maticosen/AED/blob/master/Otros/04_Lex.JPG)

* **Operaciones y Valores**
  - *IsIgual:* Compara los tres canales de ambos colores y devuelve true si son iguales o false en caso contrario. 
      * Color x Color -> B
  - *Mezclar:* Mezcla en partes iguales dos colores, retornando un nuevo color.
      * Color x Color -> Color
  - *Sumar:* Dado dos colores, suma la intensidad de cada canal, siempre dando resultados en el rango [0, 255], retornando un nuevo color.
      * Color x Color -> Color
  - *Restar:* Dado dos colores, resta la intensidad de cada canal, siempre dando resultados en el rango [0, 255], retornando un nuevo color.
      * Color x Color -> Color
  - *GetComplentario:* Se obtiene un nuevo color a partir de la diferencia entre la intensidad maxima y la de cada canal del color dado.
      * Color -> Color
  - *GetHtmlHex:* Dado un color, retorna un string con la representación hexadecimal para HTML, cuyo formato es "#AABBCC". Siendo AA, BB y CC la intensidad de cada canal.
    * Color -> Σ*
  - *GetHtmlRgb:* Dado un color, retorna un string con la representación rgb para para HTML, cuyo formato es "rgb(A,B,C)". Siendo A, B y C la intensidad de cada canal.
    * Color -> Σ*
  - *CrearSvgConTextoEscritoEnAltoContraste:* Dado un nombre archivo sin extensión, un texto, y un color de letra genera un archivo SVG con el texto en un color y fondo en su complementario.
    * Σ* x Σ* x Color -> .svg
