#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int** generate2DArray(int arrayDimensions){
	srand(time(0));
	//
	int** twoDArray;
    twoDArray = new int*[arrayDimensions];
    for (int i = 0;i < arrayDimensions; i++)
        twoDArray[i] = new int[arrayDimensions];
    //
	for(int x = 0; x< arrayDimensions; x++){
		for(int y = 0; y < arrayDimensions; y++){
			twoDArray[x][y] = 1 + rand() % 500;
		}
	}
	//
    return twoDArray;
}

void showArray(int** twoDArray, int arrayDimensions){
	cout<<endl<<"******** Printing Random Numbers Array ******** "<<endl;
	for(int i=0; i< arrayDimensions; i++){
        for(int j=0; j< arrayDimensions; j++){
            cout<<twoDArray[i][j]<<endl;
        }
    }
}

void findEvenNumber(int** twoDArray, int arrayDimensions){
	cout<<endl<<"******** Event Numbers Section ******** "<<endl;
	for(int i=0; i< arrayDimensions; i++){
        for(int j=0; j< arrayDimensions; j++){
            if(twoDArray[i][j] % 2 == 0){
            	cout<<twoDArray[i][j]<<endl;
			}
        }
    }
}

void releaseResources(int** twoDArray, int arrayDimensions){
	for(int k=0; k < arrayDimensions; k++){
        delete(twoDArray[k]);
    }
    delete(twoDArray);
}

int main(int argc, char** argv) {	
	//
    cout<<endl<<" ** Program Started ** "<<endl;
    //
    int arrayDimensions = 10;
    //
    int** twoDArray = generate2DArray(arrayDimensions);
    //
    showArray(twoDArray,arrayDimensions);
    //
    findEvenNumber(twoDArray, arrayDimensions);
    //
	releaseResources(twoDArray, arrayDimensions);
    //
    cout<<endl<<" ** Program Ended   ** "<<endl;
    //
    getch();
    return 0;
}
