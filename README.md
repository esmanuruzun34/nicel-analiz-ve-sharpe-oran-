# nicel-analiz-ve-sharpe-oran-
# 📊 Sharpe Oranı Hesaplayıcı (C Programı)

Bu proje, yatırımın risk-getiri dengesini ölçmek için kullanılan *Sharpe oranını* hesaplayan basit bir C programıdır.  
Program, kullanıcıdan yatırım getirisi, risksiz faiz oranı ve portföyün standart sapması (risk) değerlerini alarak Sharpe oranını hesaplar ve sonucu yorumlar.

---

## 🧾 Proje Açıklaması

Sharpe oranı, bir yatırımın *aldığı risk karşılığında ne kadar fazla getiri sağladığını* ölçer.  
Bu oran, yatırım performansını değerlendirirken sadece getiriyi değil, *risk faktörünü* de hesaba katar.

Formül:
\[
Sharpe\ Oranı = \frac{Yatırım\ Getirisi - Risksiz\ Faiz\ Oranı}{Standart\ Sapma}
\]

Program, standart sapma 0 girilmesi durumunda hata verir ve kullanıcıyı uyarır.  
Bu sayede *bölme hatası (division by zero)* oluşması engellenir.

---

## ⚙ Özellikler

- Kullanıcıdan verileri *yüzde olarak* alır (örneğin: 15, 5, 12).  
- Sharpe oranını otomatik hesaplar.  
- Oran değerine göre yatırımın performansını yorumlar.  
- Standart sapma değeri 0 girilirse, *hata mesajı* verir.  

---

## 📈 Sharpe Oranı Yorumlama Tablosu

| Sharpe Oranı | Yorum |
|---------------|--------|
| < 0 | Kötü – Risksiz yatırımdan bile düşük performans |
| 0 – 1 | Zayıf – Aldığın riske göre düşük getiri |
| 1 – 2 | İyi – Dengeli risk-getiri oranı |
| 2 – 3 | Çok İyi – Yüksek performans |
| ≥ 3 | Mükemmel – Risk başına çok yüksek getiri |

---

## 💻 Kullanım

1. Kodu bir dosyaya kaydet:  
   bash
   sharpe.c
   

2. Derle:  
   bash
   gcc sharpe.c -o sharpe
   

3. Çalıştır:  
   bash
   ./sharpe
   

4. Terminalde istenen değerleri gir:  
   
   Yatirimin getirisi (% cinsinden): 15
   Risksiz faiz orani (% cinsinden): 5
   Portfoyun standart sapmasi (% cinsinden): 12
   

5. Çıktı örneği:
   
   Sharpe Orani: 0.83
   Yorum: Zayif. Risk basina az getiri.
   

---

## 🧮 Örnek Hesaplama

*Veriler:*
- Yatırım getirisi: %15  
- Risksiz faiz oranı: %5  
- Standart sapma: %12  

*Formül:*
\[
(15 - 5) / 12 = 0.83
\]

*Sonuç:*  
Sharpe Oranı = *0.83* → Bu yatırım, riskine göre zayıf bir performans göstermektedir.

---

## 🎯 Amaç

Bu proje, finansal piyasalarda kullanılan *kantitatif (nicel) analiz* kavramlarına giriş yapmak isteyenler için hazırlanmıştır.  
Kod, temel düzeyde C bilgisiyle finansal bir metriği hesaplamayı öğretir ve gerçek dünya yatırım analizlerinde kullanılan bir mantığı uygular.

---

## 👨‍💻 Geliştirici

Proje sahibi: *[Adını buraya yaz]*  
Yazılım dili: *C*  
Konu: *Finansal Analiz / Risk Yönetimi*

-
