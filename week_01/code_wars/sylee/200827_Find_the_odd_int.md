#### Find the odd int

## ��������

�� ���� ����Ʈ�� �־�����, ����Ʈ�߿��� ������ Ȧ������ ��Ҹ� ����Ѵ�.

(��, ������ Ȧ������ ��Ҵ� �� �ϳ��̴�.)

## ���� Ǯ�� ���

 ```python
def find_it(seq):
    list_of_Odd_element = []
    for element in seq:
        if element in list_of_Odd_element:
            list_of_Odd_element.remove(element)
        else:
            list_of_Odd_element.append(element)
    return list_of_Odd_element[0]
 ```

> ó���ۼ� �ڵ��̴�. 

1. ������ Ȧ������ ��Ҹ� ������ ����Ʈ `list_of_Odd_element` �� �����Ѵ�.

2. for�� �� ���� ����Ʈ `seq`�� ��ҵ��� ���ʴ�� ���Ѵ�.

3. �ش� `element`�� ����Ʈ `list_of_Odd_element`�� ������ �߰�, ������ ���� �Ѵ�.

   ( ������ Ȧ������� `list_of_Odd_element`�� ���Եȴ�.)

> ���������� �� �۵��ߴ�. �� �ڵ带 ¥�鼭 ����Ʈ���� Ư�� ����� ������ ��ȯ���ִ� �Լ��� ������ ���ڴٰ� �����ߴ�.



```python
def find_it(seq):
    return [element for element in seq if seq.count(element) % 2 != 0][0]
```

>���ͳݿ� �˻��غ��� `count()`��� Method �� �߰��ߴ�.

>  list�� index�� �̿��Ͽ� Ǯ����. (Ȧ������ ��Ҵ� �ϳ��̹Ƿ� index�� 0�̴�. )




## �ٸ� ����� Ǯ�� ���

```python
# Best Practices 1
def find_it(seq):
    return [x for x in seq if seq.count(x) % 2][0]
```

> ���� § �ڵ�� ����ϴ�. if���� ǥ������ �� ���� �״�� ����Ͽ��ٴ� ���� �ٸ���.



```python
# Best Practices 2
def find_it(seq):
    return next(x for x in set(seq) if seq.count(x) % 2)
```

 > set()�̶�� ó�� ���� �޼ҵ尡 �־���.  �ߺ��� �����ϰ� ������ �������ش�. (��������)
 >
 > set()�� ����ϰ� �Ǹ� ���ʿ��� ������ ���� �� �־ ���� �� ����.



```python
# Clever	
import operator

def find_it(xs):
    return reduce(operator.xor, xs)
```

> reduce() �޼ҵ�� xor �����ڸ� ����Ͽ� �Լ��� �������.

> �̰� ��� �۵��Ǵ��� �� �����µ�, ��� �� ������ ���� ����� �־ �����ߴ�.

> ` xor is communicative so you don't have to worry about the order of the values. A list like [1, 2, 3, 1, 2, 3, 4] can be thought of as [1, 1, 2, 2, 3, 3, 4]` 

> �̷��� �Ǹ� ��������� Ȧ������ ��� �ϳ��� ���� �ȴ�.

## ��� ��

>  count(), set(), reduce(), operator(xor)�� ���� �˰� �Ǿ���.

	

## �ݼ��� ��

> ���� �𸣴� �Լ�, method���� ����. ���� ���̰� ������ �͵��� �� ������� �ڴ�.



## Action Item

> ��� ���׵��� �̿��ϰ�, ���� �𸣴� ��ɵ��� ���� ������ Ǯ�ٰ� ������ ���ڴٶ�� �����ϴ� ��ɵ��� �˻��ؼ� �˾ƺ����� �ؾ߰ڴ�.