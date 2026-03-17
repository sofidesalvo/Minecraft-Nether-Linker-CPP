#include <iostream>
#include <string>

using namespace std;

struct Cordenadas {
    int x;
    int y;
    int z;
};

int main () {
   Cordenadas overworld, nether;
   int opcion;

   cout<< "calculador de bloques portal" << endl;
   cout<< "1. Overworld --  Nether." << endl;
   cout<< "2. Nether --  Overworld." << endl;
   cout<< "Selecciona una opcion:  ";
   cin  >> opcion;

   if (opcion == 1) {
    cout<< "ingresa coordenadas del overworld" << endl;
    cout << "x:  "; cin >> overworld.x;
   cout << "y:  "; cin >> overworld.y;
   cout << "z:  "; cin >> overworld.z;


   //-----------------------------------//
   nether.x = overworld.x / 8;
   nether.y = overworld.y;
   nether.z = overworld.z / 8;
//-------------------------------------//


  cout<<"[resultado] construye tu portal en el nether en  " << endl;
  cout << "X: " << nether.x << " | Y: " << nether.y << " | Z: " << nether.z << endl;


   } else if (opcion == 2){

    cout << "ingresa coordenadas del nether" << endl;
    cout << "x: "; cin >> nether.x;
    cout << "y: "; cin >> nether.y;
    cout << "z: "; cin >> nether.z;


    //--------------------------------------------------//
    overworld.x = nether.x * 8;
    overworld.y = nether.y;
    overworld.z = nether.z * 8;
//.....................................................//

cout << "\n[resultado] tu portal aparecera en el overworld en:  " << endl;
cout << "X: " << overworld.x << " | Y: " << overworld.y << " | Z: " << overworld.z << endl;


   } else {

    cout << "opcion no valida" << endl;

   }

   cout << "\n-----------------------------------------" << endl;
    system("pause");


    return 0;
}