
typedef struct
{
    int legajo;
    char nombre[20];
    int primeraNota;
    int segundaNota;
    float promedio;

} eAlumno;


void MostrarAlumno(eAlumno parametroAlumno);
eAlumno CargarAlumno();
int CompararAlumnos(eAlumno primerParametro,eAlumno segundoParametro);
float calcularPromedio(eAlumno alumno);
