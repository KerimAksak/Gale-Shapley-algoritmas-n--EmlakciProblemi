# Gale Shapley - Emlakçý Problemi

### Problem tanýmý:
-------------
Bir Emlakçý, kiralýk ev bakan müþterilerine evleri dolaþtýrýr ve ev sahipleriyle tanýþtýrýr. Ardýndan, kiracýlardan baktýklarý evleri beðenilerine göre sýralamalarýný ister; ev sahiplerinden de kiracýlarý gözünün tutup tutmamasýna göre sýralamasýný ister. Sonrasýnda öncelikle ev sahiplerinin tercihlerini göz önünde bulundurarak, hem ev sahibinin hem de kiracýnýn memnun olacaðý (razý olacaðý) bir atama yapar. Üniversitede Bilgisayar Mühendisliði eðitimi almýþ olan bu Emlakçý her iki tarafý da memnun edebilmek için Gale Shapley algoritmasýný uygular ve evleri bu þekilde kiraya verir.

###Kodlama detaylarý:
-------------
1. Kiracý sayýsý ile ev sayýsý (yani ev sahibi sayýsý) eþit olacaktýr. Her ev sahibinin yalnýzca bir evi vardýr. Dolayýsýyla Kiracýlar tutmak istedikleri evleri tercihlerine göre sýralarken aslýnda bir anlamda Ev sahiplerini sýralamýþ oluyorlar.

2. Kiracýlarýn tercih sýralamasý ve ev sahiplerinin tercih sýralamasý iki ayrý dosyada verilecektir. Bu dosyalarýn adý “evsahibitercihi.txt” ve “kiracitercihi.txt” dir. Kodunuzun içinde bu iki dosyayý okuyarak kiþilerin tercihlerini öðrenin. Kodunuzun içinde dosyalarýn adý aynen bu þekilde geçsin. Sakýn deðiþtirmeyin.

3. Kiþi sayýsý deðiþebilir. Kodunuz 3, 4, 5, 6, 7, ... çift insan için de eþleþtirmeyi yapabilmeli.

4. Okuyacaðýnýz dosyalarýn formatý aþaðýdaki gibidir. Aþaðýda 3 kiracý ve 3 ev sahibinin yapmýþ olduðu tercih sýralamalarýný görebilirsiniz.
evsahibitercihi.txt: (Dosya tablarla ayrýlmýþtýr. Her satýr bir ev sahibini temsil etmektedir. Kiracýlarý en çok istediklerinden en az istediklerine doðru sýralamýþlardýr.)
0 1 2
1 0 2
0 1 2
Bu dosyayý yorumlarsak, 0. Ev sahibi evini en çok 0. Kiracýya, o olmazsa 1. Kiracýya, o da olmazsa 2. Kiracýya vermek istiyor. 1. Ev sahibi evini en çok 1. Kiracýya, o olmazsa 0. Kiracýya, o da olmazsa 2. Kiracýya vermek istiyor. 2. Ev sahibi evini en çok 0. Kiracýya, o olmazsa 1. Kiracýya, o da olmazsa 2. Kiracýya vermek istiyor.
kiracitercihi.txt: (Dosya tablarla ayrýlmýþtýr. Her satýr bir kiracýyý temsil etmektedir. Tutmak istedikleri evleri (dolayýsýyla ev sahiplerini) en çok istediklerinden en az istediklerine doðru sýralamýþlardýr.)
1 0 2
0 1 2
0 1 2
Bu dosyayý yorumlarsak, 0. Kiracý en çok 1. Evi tutmayý istiyor, o olmazsa 0. Evi tutmayý istiyor, o da olmazsa 2. Evi tutmayý istiyor. 1. Kiracý en çok 0. Evi tutmayý istiyor, o olmazsa 1. Evi tutmayý istiyor, o da olmazsa 2. Evi tutmayý istiyor. 2. Kiracý ise en çok 0. Evi tutmayý istiyor, o olmazsa 1. Evi tutmayý istiyor, o da olmazsa 2. Evi tutmayý istiyor.

5. Kodunuzu C++ ile Dev C++ IDE’sinde yazýnýz.

6. Kodunuz precompiled header içermesin.

7. C++ STL kütüphanesini kullanabilirsiniz.