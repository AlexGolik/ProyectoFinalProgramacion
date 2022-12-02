//============================================================================
// Name        : Index.cpp
// Author      : Alex,Daniel,Leonardo
// Version     : 2.0
// Copyright   : Your copyright notice
// Description : Proyecto Final C++
//============================================================================

#include <ctime>//palabras al azar
#include <iostream>//estandar
#include<fstream>//guardar en txt
#include <string.h>//minuscula
using namespace std;

//Declaración de funciones.
char letrarandom();
void Reglas();
void DatosJuego();
void menu();
void mostrarArchivo();

int main() {

	menu();

}
//Estructura de funciones.
char letrarandom() {
    int r = rand() % 52;
    char base = (r < 26) ? 'a' : 'a';
    return (char) (base + r % 26);
}
void mostrarArchivo(){
	ifstream archivo;
	string texto;

	archivo.open("C://users//user//eclipse-workspace//practica//src//Txt//database.txt",ios::in);
	if (archivo.fail())
	{
		cout << "Error al intentar abrir el archvio";
	exit(1);
	}
	while (!archivo.eof())
	{
		getline(archivo, texto);
		cout << texto << endl;
	}
}
void menu(){

	//Reglas del juego
  Reglas();
  int opc1, opc2;

  //Menú
  	cout<<"Para continuar elije una opcion: "<< endl;
    cout << "1- Iniciar juego \n";
    cout << "2- Mostrar partidas guardadas \n";
    cout << "3- Salir del juego \n";


    cin >> opc1;


    switch (opc1) {

    case 1: cout << "\n Que bien, juguemos..."<<endl;
    	DatosJuego();
      break;

    case 2: mostrarArchivo();
      break;

    case 3:
      cout << "Seguro que quieres salir?\n";
      cout << "\n 1- SI";
      cout << "\n 2- NO" << endl;
      break;
      cin >> opc2;

      if (opc2 == 1) {
        cout << "\n Que mal, sera para la proxima" << endl;

      } else {
    	  menu();
       	   }
    	}
  	}
void Reglas() {
	cout << "------------------------" << endl;
	  cout << "¡BIENVENIDOS AL JUEGO! " << endl;
	  cout << "STOP STATION" << endl;
	  cout << "------------------------" << endl;
  cout << "------------------------" << endl;
  cout << "Reglas del juego" << endl;
  cout << "------------------------" << endl << endl;
  cout << "1) No puedes salirte de la categoría o escribir una palabra que no "
          "empiece por la letra generada."
       << endl;
  cout << "2) No puedes investigar o preguntarle a alguien mas, las respuestas "
          "tienen que venir de tu mente."
       << endl;
  cout << "3) Debe terminar el juego en el menor tiempo posible, ya que es un "
          "factor que determina un ganador."
       << endl;
  cout << "--------------------------------------------------------------------"
          "--------------------------------"
       << endl;
}
void DatosJuego(){
	  float tiempo;
	  float tiempoFinal = 0;

	  srand(time(NULL)); // se necesita para cerrar rand o siempre dara las mismas letras

		//Numero de partidas
		int n=0;
		cout<<endl<<"indique el numero de partidas: ";
		cin>>n;

	for (int i = 1; i <= n; ++i) {

		//Inicializa el temporizador
		tiempo = clock();
		//Letra random
		char letra = letrarandom();

		cout << "Letra generada es: " << letra << endl;
		cout<<"numero de partida:"<<i<<endl;
		ofstream archivo;
				string jug,fruta, nom, apellido, animal, objeto, ciudad,pais,color;
				 size_t fruta1,nom1, apellido1, animal1,objeto1, ciudad1, pais1, color1;
				 int v1,v2,v3,v4,v5,v6,v7,v8, totalv;

			archivo.open("./ArchivosTxt/database.txt", ios::app);
			if (archivo.fail())
			{
				cout << "Error al intentar abrir el archivo";
				exit(1);
			}
							//Datos para el juego
							fflush(stdin);
				   				cout<<endl<<"ingresa un nombre de jugador:";
				   				getline(cin, jug,'\n');
				   				//strlwr(jug);
				   				archivo<<"Jugador: "<<jug<<endl;
				   			fflush(stdin);
				   				cout<<"ingresa un nombre: ";
				   		        getline(cin,nom,'\n');
				   		        //strlwr(nom);
				   		        archivo <<"Nombre: "<<nom<<endl;
				   		        fflush(stdin);
				   		        cout << "Ingresa un apellido: ";
				   		     getline(cin,apellido,'\n');
				   		        //strlwr(apellido);
				   		        archivo<<"Apellido: "<<apellido<< endl;
				   		    fflush(stdin);
				   		        cout << "ingresa un animal: ";
				   		     getline(cin,animal,'\n');
				   		        //strlwr(animal);
				   		        archivo<<"Animal: "<<animal<< endl;
				   		    fflush(stdin);
				   		        cout << "ingresa un objeto: ";
				   		     getline(cin,objeto,'\n');
				   		        //strlwr(objeto);
				   		        archivo<<"objeto: "<<objeto<< endl;
				   		    fflush(stdin);
				   		        cout << "ingrese una fruta: ";
				   		     getline(cin,fruta,'\n');
				   		        //strlwr(fruta);
				   		        archivo <<"Fruta: "<<fruta<< endl;
				   		    fflush(stdin);
				   		        cout << "ingrese una ciudad: ";
				   		     getline(cin,ciudad,'\n');
				   		        //strlwr(ciudad);
				   		        archivo <<"Ciudad: "<<ciudad<< endl;
				   		    fflush(stdin);
				   		        cout << "ingrese una país: ";
				   		     getline(cin,pais,'\n');
				   		        //strlwr(pais);
				   		        archivo <<"Pais: "<<pais<< endl;
				   		    fflush(stdin);
				   		        cout << "ingrese una color: ";
				   		     getline(cin,color,'\n');
				   		        //strlwr_l(color, color);
				   				    archivo<<"Color: "<<color<<endl;
				   		    fflush(stdin);

				   		    //Validar las palabras
				   		      nom1=nom.find(letra);
				   		 	  apellido1=apellido.find(letra);
				   		 	  animal1=animal.find(letra);
				   		 	  objeto1=objeto.find(letra);
				   		 	  fruta1=fruta.find(letra);
				   		 	  ciudad1=ciudad.find(letra);
				   		 	  pais1=pais.find(letra);
				   		 	  color1=color.find(letra);

				   		 	  //Aplicando Puntage
				   		 	  if (nom1!=string::npos){
				   		 		  cout<<"Nombre correcto"<<endl;
				   		 	  v1=100;}
				   		 	  	  else {
				   		 	  	  	cout<<"Nombre incorrecto"<<endl;
				   		 	  v1=0;}
				   		 		   if (apellido1!=string::npos) {
				   		 		  	cout<<"correcto"<<endl;
				   		 	  v2=100;}
				   		 		    else {
				   		 		   	cout<<"incorrecto"<<endl;
				   		 	  v2=0;}
				   		 		  	if (animal1!=string::npos){
				   		 		  	cout<<"correcto"<<endl;
				   		 	  v3=100;}
				   		 		  	else {
				   		 		  	cout<<"incorrecto"<<endl;
				   		 	  v3=0;}
				   		 		  	if (objeto1!=string::npos){
				   		 		  	cout<<"correcto"<<endl;
				   		 	  v4=100;}
				   		 		  	else {
				   		 		  	cout<<"incorrecto"<<endl;
				   		 	  v4=0;}
				   		 		    if (fruta1!=string::npos){
				   		 		    cout<<"correcto"<<endl;
				   		 	  v5=100;}
				   		 		  	else {
				   		 		  	cout<<"incorrecto"<<endl;
				   		 	  v5=0;}
				   		 		  	if (ciudad1!=string::npos){
				   		 		  	cout<<"correcto"<<endl;
				   		 	  v6=100;}
				   		 		  	else {
				   		 		  	cout<<"incorrecto"<<endl;
				   		 	  v6=0;}
				   		 		  	if (pais1!=string::npos){
				   		 		  	cout<<"correcto"<<endl;
				   		 	  v7=100;}
				   		 		  	else {
				   		 		  	cout<<"incorrecto"<<endl;
				   		 	  v7=0;}
				   		 		  	if (pais1!=string::npos){
				   		 		  	cout<<"correcto"<<endl;
				   		 	  v8=100;}
				   		 		  	else {
				   		 		  	cout<<"incorrecto"<<endl;
				   		 	  v8=0;}
				   		 		totalv=v1+v2+v3+v4+v5+v6+v7+v8;
				   		 		cout<<"total puntos: "<<totalv;
				   		 		archivo <<"Puntaje de ronda: "<<totalv<<endl;

				   		 		//Finaliza el temporizador
				   		 	tiempo = (clock() - tiempo)/CLOCKS_PER_SEC;
				   		 	tiempoFinal += tiempo;
				   		 	cout << "\nTiempo de la ronda: "<<(float)tiempo << "\n\n";
				   		 	archivo<<"Tiempo: "<<tiempo<<endl;
				   		 fflush(stdin);
		  archivo.close();
	}
}