#include <iostream>
using namespace std;
bool validacionnotas(int nota){
    if (nota < 1 and nota > 10){
        cout << "Error.....la nota ingresada esta fuera de los limites" << endl;
        return false;
    }
    return true;
}
string estadoacademico(int promedio){
    if (promedio >= 7 and promedio <= 10) {
        return "El estudiante esta aprobado.";
    } else if (promedio >= 5 and promedio < 7) {
        return "El estudiante esta suspendido.";
    } else{
        return "El estudiante esta reprobado.";
    }
}
int main() {
    int deber, trabajos, pruebas, examen, promedio;
    cout << "Ingrese la nota de deberes: ";
    cin >> deber;
    if (!validacionnotas(deber)) return 1;

    cout << "Ingrese la nota de trabajos: ";
    cin >> trabajos;
    if (!validacionnotas(trabajos)) return 1;

    cout << "Ingrese la nota de pruebas: ";
    cin >> pruebas;
    if (!validacionnotas(pruebas)) return 1;

    cout << "Ingrese la nota del examen: ";
    cin >> examen;
    if (!validacionnotas(examen)) return 1;

    promedio = (deber + trabajos + pruebas + examen) / 4;
    cout << "Promedio: " << promedio << endl;
    cout << estadoacademico(promedio);

    return 0;
}
