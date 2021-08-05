#include <iostream>
using namespace std;
// https://www.it.uc3m.es/pbasanta/asng/course_notes/input_output_getline_es.html



//LIBRERIA PARA TRABAJAR CON ARCHIVOS
#include <fstream>



int main()
{

    // ----- ESCRITURA DE UN ARCHIVO -------------

      // VARIABLE DE TIPO OFSTREAM
      ofstream archivoprueba;

      int edad;
      // CREAR UN NUEVO ARCHIVO 
      archivoprueba.open("BDD/demo.txt",ios::app);
      // ALMACENAR DATOS EN EL ARCHIVO
      archivoprueba<<"BYRON"<<endl;
      archivoprueba<<"LOARTE"<<endl;
      // SOLICITAR DATOS AL USUARIO
      cout<<"INGRESA LA EDAD: ";
      cin>>edad;
      // ALMACENAR DATOS EN EL ARCHIVO
      archivoprueba<<edad;
      // CRERRAR EL ARCHIVO
      archivoprueba.close();



    // ----- LECTURA DE UN ARCHIVO -------------
  
      // VARIABLE DE TIPO IFSTREAM 
      ifstream archivolectura;
      string texto;
      // REALIZAR LA APERTURA DEL ARCHIVO 
      archivolectura.open("BDD/demo.txt",ios::in);
      // VALIDACIÓN PARA VERIFICAR LA EXISTENCIA DEL ARCHIVO
      if (archivolectura.fail() )
      {
        cout<<"EL ARCHIVO NO SE PUDO LEER, O EL MISMO NO SE ENCUENTRA CREADO";
      }
      else
      {
        cout<<"La información del archivo es: \n";
        // SENTENCIA DE REPETICIÓN PARA LEER HASTA EL ULTIMO CARACTER
        while(!archivolectura.eof())
        {
          // FUNCION PARA LEER EL TEXTO DEL ARCHIVO Y ALMACENAR EN LA VARIABLE
          getline(archivolectura,texto);
          // IMPRIMIR EL CONTENIDO DEL VARIABLE
          cout<<texto<<endl;
        }
      }
      // CRERRAR EL ARCHIVO
      archivolectura.close();

    return 0;
}