int solution(int number) {
  int result = 0;
  
  while (number-- > 3){
    if (number % 3 == 0 && number % 5 == 0){
      result += number;
    }else if(number % 3 == 0){
      result += number;
    }else if (number % 5 == 0){
      result += number;
    }
  }
  return result;
}