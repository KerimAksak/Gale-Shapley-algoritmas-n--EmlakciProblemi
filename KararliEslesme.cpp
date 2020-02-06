//ABDÜLKERÝM AKSAK
//030117042
#include <iostream>
#include <stdio.h>
#include <fstream> 
#include <queue>

using namespace std; 

int satirSayisi();//.txt dosyasýndaki matrisin satýr sayýsýný hesaplayan fonksiyon.

int main(){

	int n=satirSayisi();//Satýr sayýsý.
	int satir=n;
	int sutun=n;
	int evSahibiTercihi[n][n];
	int kiraciTercihi[n][n];


	//#Hocam, gönül isterdi ki bu kýsmýda fonksiyon haline getirelim. Ama olmadý.. :)
	fstream dosya;
	
	int y;//evSahibiTercihi dizisini atama iþlemi.
	dosya.open("evsahibitercihi.txt");
	queue<int> evsahibi;
	while (dosya>>y){
		for(int i=0;i<n*n;i++){
		evsahibi.push(y);
		break;}	
	}
	dosya.close();
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			evSahibiTercihi[i][j]=evsahibi.front();
			evsahibi.pop();	
		}
	}
	//------------------------------------------
	int x;//kiraciTercihi dizisi atama iþlemi.
	
	dosya.open("kiracitercihi.txt");
	queue<int> kiracii;
	while (dosya>>x){
		for(int i=0;i<n*n;i++){
		kiracii.push(x);
		break;}	
	}
	dosya.close();
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			kiraciTercihi[i][j]=kiracii.front();
			kiracii.pop();	
		}
	}
	//#Dizilere atama iþleminin sonu. 
	
	
 	queue<int> bosEvSahibi;
 	for(int i=0;i<n;i++)
 		bosEvSahibi.push(i);
 	
 	int kiraci[n], EvSahibi[n]; //Kontrol dizileri.
 	for(int i=0;i<n;i++){
 		kiraci[i]=-1;
 		EvSahibi[i]=-1;
	 }
	 
	 int count[n];
	 for(int i=0;i<n;i++)
	 	count[i]=0;

	/* <ÖNEM SIRASI>
	
	Kiraci Tercihi;
	
	  0   1   2   3   4
	---------------------
   0| 4   0   1   3   2  |
   1| 2   1   3   0   4  |
   2| 1   2   3   4   0  |
   3| 0   4   3   2   1  |     
   4| 3   1   4   2   0  |
   -----------------------
   
   Kiraci tercihinde bulunan her bir satýrýn isteklerini yeni dizide 
   	indise gelecek þekilde yerkeþtirelim. 
	
   Yani, "kiraciTercihi[0][0];" da bulunan satýrý ele alýrsak.<4-0-1-3-2>
   	onemSirasi[n][n] dizisinde 4 numaralý indise 0 yazýlmasý gerekir.
   	onemSirasi[0][4]=0 þeklinde.
   	

	  0   1   2   3   4
	---------------------
   0| 1   2   4   3   0  |
   1| 3   1   0   2   4  |
   2| 4   0   1   2   3  |
   3| 0   4   3   2   1  |     
   4| 4   1   3   0   2  |
   -----------------------*/
	 		
	int onemSirasi[n][n]; //önem sýrasý
	 for(int i=0;i<n;i++)
	 	for(int j=0;j<n;j++)
	 		onemSirasi[i][kiraciTercihi[i][j]]=j; 		
	
	//-----				
	while(!bosEvSahibi.empty()){
		int e=bosEvSahibi.front();
		bosEvSahibi.pop();
		
		int k=evSahibiTercihi[e][count[e]];
		count[e]++;
	
		if(EvSahibi[k]<0){//Eðer ev sahibi boþ ise "EvSahibi" ile "kiraci" eþleþtiririz.
			EvSahibi[k]=e;
			kiraci[e]=k;
		}
		else{//Eðer ev sahibi daha önceden bir eþleþme yaptýysa.
			int z=EvSahibi[k];
			if(onemSirasi[k][e]<onemSirasi[k][z]){//Ev sahipleri arasýnda karþýlaþtýrma yapýlýr.
				EvSahibi[k]=e;
				kiraci[e]=k;
				kiraci[z]=-1;
				bosEvSahibi.push(z);
			}
			else
				bosEvSahibi.push(e);
		}
	}
	//-----
	
	for(int i=0;i<n;i++)
		cout<<i<<". Ev Sahibinin"<<" Kiracisi "<<"'"<<kiraci[i]<<"'"<<endl; 
		
	return 0;
}

// Satýr iþlemi için gerekli fonksiyon
int satirSayisi(){//n sayýsýný .txt dosyasýndaki satýr sayýsý ile elde ediyoruz.
	int ss=0;
	ifstream dosyam("evsahibitercihi.txt");
	while(!dosyam.eof()){
        string satir;
        getline(dosyam, satir);
		ss++;	    
    }
    return (ss);
}
