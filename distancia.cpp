#include <bits/stdc++.h>
using namespace std;

float distancia(float _x1,float _y1,float _x2,float _y2){
    return sqrt(pow((_x2-_x1),2)+pow((_y2-_y1),2));
}

int main(){
	float x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<fixed<<setprecision(6)<<distancia(x1,y1,x2,y2);
	return 0;
}
