//программа определяет во сколько раз велична целой части больше чем дробной
int main(){
//вводим переменные
double number = 123.656;
int sign = 0;
float rez;
float n1 = (int)number;
float n2 = number - n1; //6==6.56
// проверка делением на 0
  if (number != 0) {
      if ((int)(n2 * 10) == n2 * 10) {
      sign = 1;
       }
       else {
       if((int)(n2*100) == n2*100){
       sign = 2;
       }
       else {
       if ((int)(n2*1000) == n2*1000){
       sign = 3;
       }
        }
       }
// n1=123
// n2=0.656
   if (sign ==3){
   rez = n1/(n2*1000);
   // n1=123
   //n2*1000=656
   //rez=123/656*100
   //rez=18
   }
   if(sign == 2){
   rez = n1/(n2*100);
   }
   if(sign == 1){
   rez = n1/(n2*10);
   }
   } 
	return 0;
}
