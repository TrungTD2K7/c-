#include <iostream>
using namespace std;

int main() {
    	int ngay , thang , nam ; 
                        	cout << " nhap nam : ";
                        	cin >> nam ;
                        	cout << " nhap thang : ";
                        	cin >> thang ;
                        	switch( thang ){
                        		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12 :
                        			ngay = 31;
                        		case 4 : case 6 : case 9 : case 11 :
                        			ngay = 30;
                        		case 2 :
                        			if( nam % 4 == 0 && nam % 100 != 0 ){
                        				ngay = 29;
									}
									else{
										ngay = 28;
									}
							}
							cout << " vao nam " << nam << " thang " << thang << " co " << ngay << " ngay ";
    return 0;
}
