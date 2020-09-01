# Sum of Digits / Digital Root

## ��������

> �ڿ��� n �� �־�����, n�� �� �ڸ����� ���� ���Ѵ�. ���� �� �ڸ����� ���� �� ���� ����Ѵ�.

## ���� Ǯ�� ���

 ```python
def digital_root(n):
    list_a = [x for x in str(n)]
    result_a = sum(int(x) for x in list_a)

    if result_a >= 10:
        return digital_root(result_a)
    return result_a
 ```

> ó���ۼ� �ڵ��̴�.  �� �ڸ��� ����Ʈ�� ���ҷ� ����� ���� ���Ѵ�. 
>
> ����� ���� �Լ��� �ٽ� ����ϰų� �ٷ� ������.



```python
def digital_root(n):
    result_a = sum(int(x) for x in str(n))
    return result_a if result_a < 10 else digital_root(result_a)
```

>�� �ڵ忡�� ���� �� �κ��� �����ߴ�. 

1. ���� ����Ʈ�� ����� �ʿ䰡 �ֳ� �;� ���ݴ�.

2. if����  �����ϰ� �����ߴ�.




## �ٸ� ����� Ǯ�� ���

```python
# Best Practices 1
def digital_root(n):
    return n if n < 10 else digital_root(sum(map(int,str(n))))
```

> �� ���� �ڵ忡�� �� �����ϰ� ���� �����̴�.
>
> �۵� ����� �� �ڵ�� ����� �� ����.



```python
# Clever
def digital_root(n):
    return n%9 or n and 9 
```

 > �̰� ������ ȹ������ ����ΰ� ����.

> `return n%9`������ n�� 0�̰ų� 9�� ����� ��츦 �����ϰ� ����� ���� �� �� �� �ִ�.

> `n and 9`������ n�� 0�̸� 0�� 9�� ����̸� 9�� ��ȯ�Ѵ�.
>
> >  `A and B`�� �غ��� A�� B�߿��� ���� ���� ������ �� ����.



## ��� ��

>  `or` �� `and`�� ���� �˰� �Ǿ���.
>
>  > �� ������ ���� �����θ� �̿��ؼ� 0 �Ǵ� 0�� �ƴԿ� ���ؼ��� ��� �ߴµ�
>  >
>  > �̹� ������ ���� � ���� ��ȯ�Ǵ��� �˰� �� �� ����.



## �ݼ��� ��

> ���� ���� ������������ �̿� �� �� ������ �غ��ڶ�� �ߴµ�, �׷��� ���ߴ�.

## Action Item

> ���� ������ ������ �ִٸ� �Ϲݽ��� �ѹ� ��������. 