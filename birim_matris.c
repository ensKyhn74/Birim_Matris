#include <stdio.h>
// BİRİM MATRİS Oluştur(Satır ve Sütun Sayısı kesinlikle aynı)
// 3 x 3 lük birim matris:
/* 1 0 0
   0 1 0
   0 0 1
*/

int main() 

{
    
  int i,j;  
  
  int ikiBoyutluDizi[5][5];
  
 for(i = 0 ; i < 5 ; i++) 
 {                                          
     
  for(j = 0 ; j < 5 ; j++)  
  {
   if(i == j)
   {
    ikiBoyutluDizi[i][j] = 1 ;  // asal köşegendeki elemanlar 1 olur.
   } 
      
   else
   {
    ikiBoyutluDizi[i][j] = 0 ;  // asal köşegen haricindeki elemanlar 0 olur.
   }
  }                              
     
 }
 
 // matris ekrana yazdırılıyor
 for(i = 0 ; i < 5 ; i++) 
 {                                               
   for(j = 0 ; j < 5 ; j++)  
  {
   printf("%d ",ikiBoyutluDizi[i][j]);
  }
   printf("\n");
 }
 
 return 0;
  
}