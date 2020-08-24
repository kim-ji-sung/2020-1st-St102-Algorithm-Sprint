ECHO�� �����Ǿ� �ֽ��ϴ�.
# vowel count

## ���� ����

* 1���� : �־��� ���ڿ����� ������ ������ ���

## ���� Ǯ�� ���

```c
//����Ǯ��

#include <stddef.h>

size_t get_count(const char *s)
{
  int vow=0; //������ ������ ������ ����
  
  
  //������ ������ ���ϱ� (switch-case ���)
  for (int i=0;i<sizeof(s)/sizeof(char);i++){
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
```
-for������ warning: comparison of integers of different signs: 'int' and 'unsigned long' ��� ������ �߻��ߴ�.
	-int�� signed�� ���ֵǰ� unsigned long���� ���ϸ� �ȵȴٴ� �� �˰ڴµ�, ����κп��� unsigned long���� �߻��ϴ��� �𸣰ڴ�.
	-**int i=0** ��ſ� **unsigned long i=0**��� �ϴ� **warning**�� ���������� �׽�Ʈ�ڵ� ����� �ȵȴ�.
	-**sizeof(s)/sizeof(char)** ��ſ� �׽�Ʈ ���̽����� **abracadabra**������ **11**�� ������ ����Ǵµ� **50**�� �ȵȴ�. �� �̷� ����� �������� �� �𸣰ڴ�.

```c
//���� �� ������ ���
#include <stddef.h>

size_t get_count(const char *s)
{
  int vow=0; //������ ������ ������ ����
  int len=0; //�Է¹��� �迭�� ���̸� ������ ����
  
  //�迭�� ���� ���ϱ�
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
```
-***len***�̶� ������ �޾� ���� ���̸� ���ߴ�.
-30�оȿ� �����ؼ� ���� �����ߴ�.

## �ٸ� ����� Ǯ�� ���

```c
//Best Practices
#include <stddef.h>

size_t get_count(const char *s)
{
    size_t cnt = 0ul;
    if (!s)
        return 0ul;
    while (*s)
        switch (*s++) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            ++cnt;
            break;
        }
    return cnt;
}
```
-�ϴ� ���� `while(*s){ switch(*s++) ~~` �� ���� �����. �� �ڵ� ���� ������ ������.
	-�׸��� `if(!s)	return 0ul;` �̰� �׽�Ʈ�ڵ�(?)�ΰ� �ʹ�.
-���� vow�� **int**�� �����ߴµ� ���⼱ **size_t**�� �ߴ�.
	-signed �� unsigned �� ���� �� �𸣴°� ���Ƽ� �� �����ؾ߰ڴ�.
- �׷��� '0ul'�� ���� �������� �� �𸣰ڴ�.
	

```c
///clever
#include <string.h>

#define VOWELS "aeiou"
size_t get_count(const char *s)
{
    int count = 0;
    for (; *s != '\0'; s++)
        if (strchr(VOWELS, *s) != NULL) count++;
    return (count);
}
```
-��ũ�θ� �̿��� ���ڿ� �񱳸� �ߴ�. ���� switch-case�� �ۿ� �������� ���ߴµ� ���ο� �ع��� �˰� �� �� ����.
-`for (; *s != '\0'; s++){if (strchr(VOWELS, *s) != NULL) count++;}` �� `while(*s){if (strchr(VOWELS, *s++) != NULL) count++;}`�� �ٲ㵵 ���� �� ����.


## ���(��) ��

* ���ǹ��ȿ��� ���� '0'�̸� ���� '0�� �ƴϸ�' �� �̶�� ���� �̿��� �ڵ尡 �� ������ �� �� �ִ�.
* signed �� unsigned , size_t �� ���� �� �˾ƺ��ƾ� �ڴ�. (�ڷ���, ��ȯ��)
* ���� ù��° Ǯ�̰� �� ������� �ʴ����� �˾ƺ��� ���ڴ�.
* �׽�Ʈ�ڵ忡 ���� �� �˾ƺ���

## �ݼ��� ��

* �ڷ����� �� ���缭 �ؾ߰ڴ�.
* ������� �ݼ��� ���� ����� �� ����.

## Action Item

> `��� ��` �� `�ݼ��� ��` �� ����, ���� ������ Ǯ �� � ���� �� ����ؼ� ���� �����

* �ڵ� �ۼ��� �� ������ ���� �� ������ �ѹ� �� ����غ���. 
* �׽�Ʈ�ڵ� �� �� ������ �־��(?)