**Autor de la resolución:**
  * Usuario github: *maticosen*
  * Legajo: *1410271*
  * Apellido: *Cosentino*
  * Nombre: *Matias*
  
---  

**Número y título del trabajo:** *06-Geometria II*

---

#### Etapa #1: Análisis del Problema

* **Transcripción del problema:** *Dado un archivo con polígonos, copiar a un nuevo archivos los polígonos que tienen un perímetro mayor a un valor x.*

* **Refinamiento del problema e hipótesis de trabajo:** *Los poligonos deberan tener un minimo de 3 vertices y un maximo de 12, ademas se delimitaran con un salto de linea (\n). Se deberán considerar las siguientes restricciones:*

    - *La conexión a los archivos debe ser mediante streams.*
    - *Si fuese necesario utilizar in.clear() para limpiar el estado erróneo y volver a leer de un stream.*
    - *A los tipos deben agregarse operaciones de extracción e inserción según los siguientes prototipos, donde T es el nombre del tipo:*
      - bool ExtraerT(istream& in, T& v);
      - bool InsertarT(ostream& out, const T& v);
    - *La solución debe desarrollarse en una función:*
      - void CopiarPolígonosConPerímetrosMayoresA(double x, string nombreArchivoIn, string nombreArchivoOut);