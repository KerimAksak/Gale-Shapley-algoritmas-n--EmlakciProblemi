//ABD�LKER�M AKSAK
//030117042
#include <iostream>
#include <stdio.h>
#include <fstream> 
#include <queue>

using namespace std; 

int satirSayisi();//.txt dosyas�ndaki matrisin sat�r say�s�n� hesaplayan fonksiyon.

int main(){

	int n=satirSayisi();//Sat�r say�s�.
	int satir=n;
	int sutun=n;
	int evSahibiTercihi[n][n];
	int kiraciTercihi[n][n];


	//#Hocam, g�n�l isterdi ki bu k�sm�da fonksiyon haline getirelim. Ama olmad�.. :)
	fstream dosya;
	
	int y;//evSahibiTercihi dizisini atama i�lemi.
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
	int x;//kiraciTercihi dizisi atama i�lemi.
	
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
	//#Dizilere atama i�leminin sonu. 
	
	
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

	/* <�NEM SIRASI>
	
	Kiraci Tercihi;
	
	  0   1   2   3   4
	---------------------
   0| 4   0   1   3   2  |
   1| 2   1   3   0   4  |
   2| 1   2   3   4   0  |
   3| 0   4   3   2   1  |     
   4| 3   1   4   2   0  |
   -----------------------
   
   Kiraci tercihinde bulunan her bir sat�r�n isteklerini yeni dizide 
   	indise gelecek �ekilde yerke�tirelim. 
	
   Yani, "kiraciTercihi[0][0];" da bulunan sat�r� ele al�rsak.<4-0-1-3-2>
   	onemSirasi[n][n] dizisinde 4 numaral� indise 0 yaz�lmas� gerekir.
   	onemSirasi[0][4]=0 �eklinde.
   	

	  0   1   2   3   4
	---------------------
   0| 1   2   4   3   0  |
   1| 3   1   0   2   4  |
   2| 4   0   1   2   3  |
   3| 0   4   3   2   1  |     
   4| 4   1   3   0   2  |
   -----------------------*/
	 		
	int onemSirasi[n][n]; //�nem s�ras�
	 for(int i=0;i<n;i++)
	 	for(int j=0;j<n;j++)
	 		onemSirasi[i][kiraciTercihi[i][j]]=j; 		
	
	//-----				
	while(!bosEvSahibi.empty()){
		int e=bosEvSahibi.front();
		bosEvSahibi.pop();
		
		int k=evSahibiTercihi[e][count[e]];
		count[e]++;
	
		if(EvSahibi[k]<0){//E�er ev sahibi bo� ise "EvSahibi" ile "kiraci" e�le�tiririz.
			EvSahibi[k]=e;
			kiraci[e]=k;
		}
		else{//E�er ev sahibi daha �nceden bir e�le�me yapt�ysa.
			int z=EvSahibi[k];
			if(onemSirasi[k][e]<onemSirasi[k][z]){//Ev sahipleri aras�nda kar��la�t�rma yap�l�r.
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

// Sat�r i�lemi i�in gerekli fonksiyon
int satirSayisi(){//n say�s�n� .txt dosyas�ndaki sat�r say�s� ile elde ediyoruz.
	int ss=0;
	ifstream dosyam("evsahibitercihi.txt");
	while(!dosyam.eof()){
        string satir;
        getline(dosyam, satir);
		ss++;	    
    }
    return (ss);
}
