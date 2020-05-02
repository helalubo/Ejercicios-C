#define LIBRE 0
#define OCUPADO 1
#include "Curso.h"
typedef struct
{
  int dia;
  int mes;
  int anio;
}eFecha;


typedef struct
{
  int legajo;//PK
  int nota1;
  int nota2;
  float promedio;
  char nombre[20];
  char email[20];
  eFecha fechaNacimiento;
  // eFecha fechaIngreso;
  int estado;
  int idCurso;//FK

} eAlumno;

void hardCodearAlumnos(eAlumno listado[], int tam);

int buscarLibre(eAlumno listado[], int tam);
int cargarUnAlumno(eAlumno listado[], int tam);
void inicializarAlumnos(eAlumno listado[], int tam);


void cargarTodosLosAlumnos (eAlumno listado[], int tam);
void mostrarTodosLosAlumnos (eAlumno listado[], int tam ,eCurso arrayCursos[], int tamCursos);
void mostrarAlumnosPromocionados (eAlumno listado[], int tam, int aprobado);


void mostrarUnAlumno (eAlumno miAlumno , eCurso arrayCursos[], int tamCursos);



eAlumno crearUnAlumno (void);
float promediarNotasAlumno (int nota1, int nota2);
void ordenarAlumnosPorNombre (eAlumno listado[], int tam);
float buscarPromedioMaximo (eAlumno listado[], int tam);
void mostrarAlumnosConMaximoPromedio (eAlumno listado[], int tam);
void ordenarAlumnosPorPromedio_Nombre (eAlumno listado[], int tam);
void listarCursosConAlumnos(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos);
void listarCursosYAlumnos(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos);
void alumnosJava(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos);
void SumatoriaDeHorasPorCurso(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos);
void promedioDeCurso(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos);
void cursoMasElegido(eAlumno listado[], int tam, eCurso listadoCursos[], int tamCursos);
int retornarMayor(int numeros[], int cant);
