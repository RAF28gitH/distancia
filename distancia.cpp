#include <bits/stdc++.h>
using namespace std;

struct coordenadas{
    float x,y;
};
float distancia(coordenadas _c1,coordenadas _c2){
    return sqrt(pow((_c2.x-_c1.x),2)+pow((_c2.y-_c1.y),2));
}

int main(){
	coordenadas c1,c2;
	cin>>c1.x>>c1.y>>c2.x>>c2.y;
	cout<<fixed<<setprecision(6)<<distancia(c1,c2);
	return 0;
}
