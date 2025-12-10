//  do not allocate memory for the result
//  write to pre-allocated pointer *camel

void to_camel_case(const char *text, char *camel) {
  int i = 0;
  int j = 0;
  int capitalize = 0;
  
  while (text[i] != '\0'){
    
    if (text[i] == '-' || text[i] == '_'){
      capitalize = 1;
      i++;
      continue;
    }
    
    if (capitalize && text[i] >= 'a' && text[i] <= 'z'){
      camel[j++] = text[i] - ('a' - 'A');
      capitalize = 0;
    }else {
      camel[j++] = text[i];
      capitalize = 0;
    }
    i++;
  }
  
  camel[j++] = '\0';

}