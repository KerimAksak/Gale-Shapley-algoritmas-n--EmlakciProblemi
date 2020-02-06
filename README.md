# Gale Shapley - Emlak�� Problemi

### Problem tan�m�:
-------------
Bir Emlak��, kiral�k ev bakan m��terilerine evleri dola�t�r�r ve ev sahipleriyle tan��t�r�r. Ard�ndan, kirac�lardan bakt�klar� evleri be�enilerine g�re s�ralamalar�n� ister; ev sahiplerinden de kirac�lar� g�z�n�n tutup tutmamas�na g�re s�ralamas�n� ister. Sonras�nda �ncelikle ev sahiplerinin tercihlerini g�z �n�nde bulundurarak, hem ev sahibinin hem de kirac�n�n memnun olaca�� (raz� olaca��) bir atama yapar. �niversitede Bilgisayar M�hendisli�i e�itimi alm�� olan bu Emlak�� her iki taraf� da memnun edebilmek i�in Gale Shapley algoritmas�n� uygular ve evleri bu �ekilde kiraya verir.

###Kodlama detaylar�:
-------------
1. Kirac� say�s� ile ev say�s� (yani ev sahibi say�s�) e�it olacakt�r. Her ev sahibinin yaln�zca bir evi vard�r. Dolay�s�yla Kirac�lar tutmak istedikleri evleri tercihlerine g�re s�ralarken asl�nda bir anlamda Ev sahiplerini s�ralam�� oluyorlar.

2. Kirac�lar�n tercih s�ralamas� ve ev sahiplerinin tercih s�ralamas� iki ayr� dosyada verilecektir. Bu dosyalar�n ad� �evsahibitercihi.txt� ve �kiracitercihi.txt� dir. Kodunuzun i�inde bu iki dosyay� okuyarak ki�ilerin tercihlerini ��renin. Kodunuzun i�inde dosyalar�n ad� aynen bu �ekilde ge�sin. Sak�n de�i�tirmeyin.

3. Ki�i say�s� de�i�ebilir. Kodunuz 3, 4, 5, 6, 7, ... �ift insan i�in de e�le�tirmeyi yapabilmeli.

4. Okuyaca��n�z dosyalar�n format� a�a��daki gibidir. A�a��da 3 kirac� ve 3 ev sahibinin yapm�� oldu�u tercih s�ralamalar�n� g�rebilirsiniz.
evsahibitercihi.txt: (Dosya tablarla ayr�lm��t�r. Her sat�r bir ev sahibini temsil etmektedir. Kirac�lar� en �ok istediklerinden en az istediklerine do�ru s�ralam��lard�r.)
0 1 2
1 0 2
0 1 2
Bu dosyay� yorumlarsak, 0. Ev sahibi evini en �ok 0. Kirac�ya, o olmazsa 1. Kirac�ya, o da olmazsa 2. Kirac�ya vermek istiyor. 1. Ev sahibi evini en �ok 1. Kirac�ya, o olmazsa 0. Kirac�ya, o da olmazsa 2. Kirac�ya vermek istiyor. 2. Ev sahibi evini en �ok 0. Kirac�ya, o olmazsa 1. Kirac�ya, o da olmazsa 2. Kirac�ya vermek istiyor.
kiracitercihi.txt: (Dosya tablarla ayr�lm��t�r. Her sat�r bir kirac�y� temsil etmektedir. Tutmak istedikleri evleri (dolay�s�yla ev sahiplerini) en �ok istediklerinden en az istediklerine do�ru s�ralam��lard�r.)
1 0 2
0 1 2
0 1 2
Bu dosyay� yorumlarsak, 0. Kirac� en �ok 1. Evi tutmay� istiyor, o olmazsa 0. Evi tutmay� istiyor, o da olmazsa 2. Evi tutmay� istiyor. 1. Kirac� en �ok 0. Evi tutmay� istiyor, o olmazsa 1. Evi tutmay� istiyor, o da olmazsa 2. Evi tutmay� istiyor. 2. Kirac� ise en �ok 0. Evi tutmay� istiyor, o olmazsa 1. Evi tutmay� istiyor, o da olmazsa 2. Evi tutmay� istiyor.

5. Kodunuzu C++ ile Dev C++ IDE�sinde yaz�n�z.

6. Kodunuz precompiled header i�ermesin.

7. C++ STL k�t�phanesini kullanabilirsiniz.