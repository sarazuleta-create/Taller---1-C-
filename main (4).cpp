
#include<iostream>
#include<string>
using namespace std;


int main() {
 cout<<"INGRESA DATOS DEL PACIENTE:\n";
 
   // VARIABLES DATOS BASICOS 
  string nombre;
  string direccion;
  string telefono;
  string correo;
  
  //VARIABLES ENTERAS
  int edad;
  
  //VARIABLES DE CARACTERES 
  char genero;
  char estrato;
  
  // VARIABLES FLOTANTES 
  float peso;
  float altura;
  float IMC;
  
  //VARIABLES BOOLEANAS
  bool tieneAlergias;
  
  //===== 1. CAPTURAR DATOS DEL PACIENTE=====
  
  cout <<"ingrese su nombre completo:";
  getline(cin, nombre);
  
  cout<<"ingrese su edad:";
  cin>> edad;
  
  cout<<"ingrese  su genero (M/F/O):";
  cin>>genero;
  
   
  cout<<"ingrese su estrato socioeconomico:";
  cin>>estrato;
  
   
  cout<<"ingrese su peso en kg:";
  cin>> peso;
  
   
  cout<<"ingrese su altura en metros:";
  cin>>altura;
  
  
 cout<<"tiene alergias el paciente?( 1=SI, 0=NO):";
 cin>>tieneAlergias;
 
 cin.ignore();//limpiar el espacio
  cout<< "ingrese su direccion:";
  getline (cin, direccion);
  
  cout<<"ingrese su telefono:";
  cin>> telefono;
  
  cout<<"ingrese su correo: ";
  cin>> correo;
  
  
  //===== 2 CALCULO DEL IMC=====
  
  IMC= peso/(altura*altura);
  
  //===== 3 MOSTRAR FICHA MEDICA=====
  
  cout<< endl;
  cout<<"================================"<<endl;
  cout<<"       FICHA MEDICA"<<endl;
  cout<<"================================"<<endl;
  
    cout<< " -   NOMBRE: "<< nombre << "\n";
    cout<< " -   EDAD: "<< edad << "años\n";
    cout<< " -   GENERO: "<< genero << "\n";
    cout<< " -   ESTRATO: "<< estrato << "\n";
    cout<< " -   PESO : "<< peso << "kg\n";
    cout<< " -   ALTURA: "<< altura << "metros\n";
    cout<< " -   ALERGIAS: "<< tieneAlergias << "\n";
    cout<< " -   DIRECCION: "<< direccion << "\n";
    cout<< " -   TELEFONO: "<< telefono << "\n";
    cout<< " -   CORREO: "<< correo << "\n";
    cout<< " -   IMC: "<< IMC<< "\n";
  
  //===== CLASIFICACION DE IMC=====
  
  if(IMC<18.5){
      cout<< "    -clasificacion: Bajo Peso\n";
  }
  else if(IMC <=24.9){
      cout<< "   -clasificacon: Normal\n";
  }
  else if (IMC > 25){
      cout<<"    -clasificacon: sobrepeso\n";
  }
      
  
  
 return 0;
}