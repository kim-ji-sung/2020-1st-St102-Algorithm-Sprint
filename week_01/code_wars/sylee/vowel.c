ECHO�� �����Ǿ� �ֽ��ϴ�.
#include <stddef.h>

size_t get_count(const char *s)
{
  int vow=0; //������ ������ ������ ����
  int len=0; //�Է¹��� ���ڿ��� ���̸� ������ ����
  
  //���ڿ��� ���� ���ϱ�
  while(s[len]!=0){
    len++;
  }
  
  //������ ������ ���ϱ� (switch-case ���)
  for (int i=0;i<len;i++){
    switch(s[i]){
        case 'a' : vow+=1;  break;
        case 'e' : vow+=1;  break;
        case 'i' : vow+=1;  break;
        case 'o' : vow+=1;  break;
        case 'u' : vow+=1;  break;
        default: break;
    }
  }
  
  return vow;
}