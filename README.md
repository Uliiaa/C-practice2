*Занятие 2*

*26.09.2024*

***Объявление - declaration***
***Определение - definition***

**Фундаментальные типы (база):**

- Целочисленные типы: int, long, lomg long, char,
  
- size_t(для хранения размеров контейнеров) – всегда unsigned
  
- С плавающей точкой: float, double
  
- Булевый тип: bool

  Целое число лежит в памяти как набор ноликов и единиц
  Число с плавающей точкой: часть байт уходит под целую часть, часть - под мантису
  Соответсвенно точность мантисы зависит от того, какое количество байт под ее хранение мы выделяем

  Обычно используется тип double, он позволяет сохранять более высокую точность, нежели float, потому что занимает большее количество байт в памяти

  В стандарте не описано, какое количество байт в памяти отводится для определенного типа данных. Поэтому этот момент зависит от разрядности ПК(64 бит) и компилятора
  
  *Переполнение int – это UB*
  Тип char ведет себя как int (и является целочисленным типом), но может сохранять в себя символы ASCII-таблицы. 

  1 байт – минимальный размер памяти, который может быть выделен под переменную, потому что к битам мы обратиться не можем. Поэтому bool весит 1 байт. 

  **Идентификаторы – это все типы данных + cpp.reference**
  
  **Литералы: 5, ‘ф’, «str», 0.6, 0.7f,**
  Где 5 – int, ‘ф’ – char, “str” – string, 0.6 – double, 0.7f – float
  
  По дефолту число с плавающей точкой имеет тип double, поэтому если мы хотим использовать именно тип float, мы должны явно это указать, написав f в конце числа
  *Большие числа для удобства чтения можно писать через апостроф: 1’023’892’000*
  
  Неявный каст – зло, могут возникнуть проблемы в дальнейшем, например переполнение int и UB.
  Неявный каст – норм, только если это каст из int в bool.

