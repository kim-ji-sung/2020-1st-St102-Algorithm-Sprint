# Even or Odd

## ��������

> ���� �ϳ� �־����� ¦���̸� 'Even'�� Ȧ���̸� 'Odd'�� ����ϴ� �Լ��� ����

## ���� Ǯ�� ���

 ```python
def even_or_odd(number):
    x="Odd"
    y="Even"
    return x if(number%2) else y
 ```

> ó���ۼ� �ڵ��̴�.  Best Practices�� �� ���� �ڵ尡 ���� �� ���� ����غ������� 
>
> ���⼭ �� �̻� ȹ������ ����� �������� �ʾҴ�.




## �ٸ� ����� Ǯ�� ���

```python
# Best Practices

def even_or_odd(number):
    return 'Odd' if number % 2 else 'Even'
```

> �� �ڵ�� �����ϴ�.  ���� �̿ܿ� �ٷ� ���ڿ��� �� �� �ִ��� ��������.
>
> ���� �˾Ҵ���� �̷��� �߾��� �� ����.



```python
# Clever
def even_or_odd(number):
  return ["Even", "Odd"][number % 2]
```

 > list comprehension�� �̿��� �� ����. �ǰ� �ż��� ������� ������.



```python
# Clever
even_or_odd = lambda number: "Odd" if number % 2 else "Even"
```

> ���� ���� �����̾���. ������ Best Practices�� ���� ������.



## ��� ��

>  `return 'Odd'`ó��  return���� ������ �ƴ� ���ڿ��� ����  �� �ִٴ� ���� �˰� �Ǿ���.	

> `lambda`�� ���ؼ� �˰� �Ǿ���. `:` �տ��� ����(��)�� �ڿ��� `return` ���� �ۼ��Ѵ�.

## �ݼ��� ��

> Python�� �������� �κ� �߿��� ��ġ�� �ִ� �κе��� �ִ� �� ����. �����غ��� �ڴ�.

## Action Item

> generator & list comprehension�� �ͼ�������.