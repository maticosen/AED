* **Expresion matematica:**

![](https://github.com/maticosen/AED/blob/master/Otros/05_pol_lex.JPG)

* **Operaciones y Valores**
  - *SetColor:* Establece el color del poligono.
    * Poligono x Color -> Poligono*
  - *AddVertice:* Agrega un vertice al final del poligono.
    * Poligono x Punto -> Poligono*
  - *GetVertice:* Devuelve un vértice del poligono acorde al índice solicitado.
    * Poligono x N -> Punto
  - *SetVertice:* Establece nuevos valores de un vertice del poligono acorde al indice indicado.
    * Poligono x N x Punto -> Poligono*
  - *RemoveVertice:* Elmina el ultimo vertice del polígono.
    * Poligono -> Poligono*
  - *GetCantidadLados:* Retorna la cantidad de lados del poligono.
    * Poligono -> N
	  
	  ![](https://github.com/maticosen/AED/blob/master/Otros/05_pol_getcantidadlados.JPG)
	  
  - *GetPerimetro:* Retorna el perimetro del poligono.
    * Poligono -> R
  - *GetDistancia:* Retorna la distancia entre 2 puntos del poligono.
    * Punto x Punto -> R