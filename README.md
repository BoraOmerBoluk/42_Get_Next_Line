# 42_Get_Next_Line

Bu proje, bir dosyadaki satırları okumak için basit ve etkili bir fonksiyon olan `get_next_line`'ı içerir. Bu fonksiyon, verilen bir dosya tanıtıcısından okuma yapar ve her çağrıldığında dosyadaki bir sonraki satırı döndürür.

## Nasıl Kullanılır

1. Projeyi klonlayın:
   ```sh
   git clone https://github.com/BoraOmerBoluk/42_Get_Next_Line.git
   ```
   
2. **_get_next_line_** işlevini kullanmak istediğiniz C programınıza ekleyin:
   ```C
   #include "get_next_line.h"
   ```
   
3. **_get_next_line_** işlevini çağırarak dosyadaki satırları çalıştırın:
   ```C
   int   main(void)
   {
   int   fd;
   char  *line;

   fd = open("dosya.txt", O_RDONLY);
   while ((line = get_next_line(fd)) != NULL)
   {
   // Okunan satırı kullanın
   printf("%s\n", line);
   free(line);
   }
   close(fd);
   return (0);
   }
   ```
   _Not: Daha fazla çalıştırma örneği klasör içindedir._
   
## 4. Proje Özellikleri 
- Dosyalardan satır okumak için kullanışlı bir işlev sağlar.
- Çok dosyalı okumayı destekler. Birden çok dosyadan okuma yapabilirsiniz.
- Bellek sızıntısı olmadan ve minimum kaynak kullanımıyla çalışır.
- Tampon boyutunu ayarlamak için derleme sırasında tanımlanabilir (**_'BUFFER_SIZE'_**).
- Fonksiyon İmzası
   ```C
   char	*get_next_line(int fd);
   ```
- **fd**: Okunacak dosyanın dosya tanıtıcısı.

## 5. Geri Dönüş Değeri  
- İşlem başarılıysa, dosyadan okunan bir satırın heap üzerindeki adresini döndürür.
- Dosya sonuna ulaşıldığında **_NULL_** döndürür.
- Bir hata oluşursa veya dosya okunamazsa **_-1_** döndürür.

## 6. İşlevin Çalışma Mantığı  
1. Get_next_line işlevi çağırıldığında, belirtilen dosyadan bir tampon boyutu (varsayılan olarak 32 KB) kadar veri okur.  
2. Okunan veri içindeki satırları (satır sonu karakteri '\n' ile ayrılan) ayırır.  
3. Eğer tamponun sonuna gelinmediyse, okuma işlemine devam eder.  
4. Her çağrıda bir sonraki satırı döndürür.  
5. İşlem tamamlandığında dosya kapandığında veya bir hata oluştuğunda **_NULL_** veya **_-1_** döndürür.  

## Kaynaklar  
Bu proje, 42 School tarafından verilen görevlerden biridir. Proje ile ilgili daha fazla bilgi ve detaylı açıklamalar için klasör içindeki en.subject.pdf dosyasını inceleyebilirsiniz.
