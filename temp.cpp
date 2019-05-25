#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

void printArr (  double array[5][6]){
	for (int i =0; i< 5; i++){
		cout<<"\t";
		for (int j = 0; j<6; j++){
			cout<<setw(8)<<array[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}


int main(){
	
	double arr1[5][6] = {
		{1.0347, .8884, 1.4384, -.1022, -.0301, -.8637},
		{0.7269, -1.1471, .3252, -.2414, -.1649, .0774},
		{-.3034, -1.0689, -0.7549, 0.3192, .6277, -1.2141},
		{.2939,-.8095, 1.3703, 0.3129, 1.0933, -1.1135},
		{-0.7873, -2.9443, -1.7115, -0.8649, 1.1093, -.0068}
	};
	cout<<"A = \n";
	for (int i =0; i< 5; i++){
		cout<<"\t";
		for (int j = 0; j<6; j++){
			cout<<setw(8)<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"b = \n";
	for (int k = 0; k<5 ; k++){
		cout<<"\t"<<setw(8)<<arr1[k][1]<<endl;
	}
	cout<<endl;
	cout<<"A# = \n";
	printArr( arr1);
	for(int diag = 0; diag<min(5, 6); diag++){
		
		if (arr1[diag][diag] != 1){
			double a = 1/arr1[diag][diag];
			for (int n =0; n<6; n++){
				arr1[diag][n] *= a;
			}
			printArr(arr1);
		}
		for (int m =0; m<5; m++){
			if (m!= diag){
				double b = -arr1[m][diag];
				for (int g =0; g<6; g++){
					arr1[m][g] += b*arr1[diag][g];
				}
			}
		}
		printArr(arr1);
		}
	
	return 0;
}






