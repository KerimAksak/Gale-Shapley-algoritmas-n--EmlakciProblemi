# Gale Shapley - Emlakçı Problemi

### Problem tanımı:
-------------
Bir Emlakçı, kiralık ev bakan müşterilerine evleri dolaştırır ve ev sahipleriyle tanıştırır. Ardından, kiracılardan baktıkları evleri beğenilerine göre sıralamalarını ister; ev sahiplerinden de kiracıları gözünün tutup tutmamasına göre sıralamasını ister. Sonrasında öncelikle ev sahiplerinin tercihlerini göz önünde bulundurarak, hem ev sahibinin hem de kiracının memnun olacağı (razı olacağı) bir atama yapar. Üniversitede Bilgisayar Mühendisliği eğitimi almış olan bu Emlakçı her iki tarafı da memnun edebilmek için Gale Shapley algoritmasını uygular ve evleri bu şekilde kiraya verir.

### Kodlama detayları:
-------------
1. Kiracı sayısı ile ev sayısı (yani ev sahibi sayısı) eşit olacaktır. Her ev sahibinin yalnızca bir evi vardır. Dolayısıyla Kiracılar tutmak istedikleri evleri tercihlerine göre sıralarken aslında bir anlamda Ev sahiplerini sıralamış oluyorlar.

2. Kiracıların tercih sıralaması ve ev sahiplerinin tercih sıralaması iki ayrı dosyada verilecektir. Bu dosyaların adı “evsahibitercihi.txt” ve “kiracitercihi.txt” dir. Kodunuzun içinde bu iki dosyayı okuyarak kişilerin tercihlerini öğrenin. Kodunuzun içinde dosyaların adı aynen bu şekilde geçsin. Sakın değiştirmeyin.

3. Kişi sayısı değişebilir. Kodunuz 3, 4, 5, 6, 7, ... çift insan için de eşleştirmeyi yapabilmeli.

4. Okuyacağınız dosyaların formatı aşağıdaki gibidir. Aşağıda 3 kiracı ve 3 ev sahibinin yapmış olduğu tercih sıralamalarını görebilirsiniz.
evsahibitercihi.txt: (Dosya tablarla ayrılmıştır. Her satır bir ev sahibini temsil etmektedir. Kiracıları en çok istediklerinden en az istediklerine doğru sıralamışlardır.)
0 1 2
1 0 2
0 1 2
Bu dosyayı yorumlarsak, 0. Ev sahibi evini en çok 0. Kiracıya, o olmazsa 1. Kiracıya, o da olmazsa 2. Kiracıya vermek istiyor. 1. Ev sahibi evini en çok 1. Kiracıya, o olmazsa 0. Kiracıya, o da olmazsa 2. Kiracıya vermek istiyor. 2. Ev sahibi evini en çok 0. Kiracıya, o olmazsa 1. Kiracıya, o da olmazsa 2. Kiracıya vermek istiyor.
kiracitercihi.txt: (Dosya tablarla ayrılmıştır. Her satır bir kiracıyı temsil etmektedir. Tutmak istedikleri evleri (dolayısıyla ev sahiplerini) en çok istediklerinden en az istediklerine doğru sıralamışlardır.)
1 0 2
0 1 2
0 1 2
Bu dosyayı yorumlarsak, 0. Kiracı en çok 1. Evi tutmayı istiyor, o olmazsa 0. Evi tutmayı istiyor, o da olmazsa 2. Evi tutmayı istiyor. 1. Kiracı en çok 0. Evi tutmayı istiyor, o olmazsa 1. Evi tutmayı istiyor, o da olmazsa 2. Evi tutmayı istiyor. 2. Kiracı ise en çok 0. Evi tutmayı istiyor, o olmazsa 1. Evi tutmayı istiyor, o da olmazsa 2. Evi tutmayı istiyor.

5. Kodunuzu C++ ile Dev C++ IDE’sinde yazınız.

6. Kodunuz precompiled header içermesin.

7. C++ STL kütüphanesini kullanabilirsiniz.
