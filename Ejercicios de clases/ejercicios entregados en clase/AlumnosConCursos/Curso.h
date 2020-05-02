typedef struct
{
  int idCurso;//PK
  char descripcion[20];
  int duracion;
}eCurso;


void hardCodearCursos(eCurso listado[], int tam);
int cargarUnCurso(eCurso listado[], int tam);
void cargarTodosLosCursos (eCurso listado[], int tam);
void mostrarTodosLosCurso (eCurso listado[], int tam);
void mostrarUnCurso (eCurso miCurso);
eCurso crearUnCurso (void);
void ordenarCursosPorNombre (eCurso listado[], int tam);
void ordenarCursosPorId (eCurso listado[], int tam);
eCurso buscarCurso(eCurso listado[], int tam, int idCurso);
void menuCargarCurso();
