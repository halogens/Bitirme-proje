# Bitirme Proje

<b>Anıl Can SAATÇI 16060523 Makine Proje</b>

Bu sistemin amacı; ortamdaki ultraviyole radyasyonunun ölçülüp elde edilen veriyi, 
kullanıcının telefonuna ulaştırılıp, bir uygulama aracılığı ile kullanıcıya sergilenmesidir.

-Verini okunması ve iletilmesi görevini üstlenmesi için seçilen mikrodenetleyici <b>NodeMCU ESP8266</b>'dır.
 Bu cihaz Wi-Fi iletişim protokolüne sahip, Arduino IDE ile kodlanabilinmesi mümkün, analog inputu bulunan bir mikrodenetleyicidir.

-Ultraviyole radyasyonu ölçmek için seçilen cihaz <b>GUVA-S12SD</b>'dir. Güç girişi, toprak ve analog output olmak üzere toplamda 3 pine sahip bu cihaz,
 sensörünün üzerine düşen ultraviyole radyasyona bağlı olarak doğru ortantılı bir şekilde analog outputunu arttırmaktadır.

-Verilerin telefondan segilenmesi için seçilen uygulama <b>Blink</b>'dir. Bu uygulama Apple/Android fark etmeden Apple Store/Google Play aracılığı
 ile telefona yüklenebilir.Blink uygulaması ile ESP8266 internet üzerinden özel ve SSL sertifikalarına sahip güvenli bir kanal üzerinden verileri paylaşır.
 Bu veriler kullanıcının telefonunda/tabletinde/bilgisayarında istenilen anda sergilenebilinir. Blink uygulamasının seçilmesindeki en önemli gerekçe bu
 uygulamayı telefonuna indiren herkesin, bulunduğu şehirden bağımsız olarak yaptığım sensörün verisine erişebilmesidir, bu özelliği sayesinde benimle
 birlikte Çorum'da bulunan cihazın verilene Samsun'dan da istenilen kişinin erişebilmesidir.


