

# Disemvowel Trolls

## ��������

> �־��� ���ڿ����� �������ڸ� ���� ���ڿ��� ����ϱ�.

## ���� Ǯ�� ���

```python
# ó��Ǯ��
def disemvowel(string):
    string = list(string)

    for elem in string:
        if elem in "aeiouAEIOU":
            string.remove(elem)
    string = "".join(string)
    return string

```

> Test case�� ���������� ���⿡�� �����ߴ�. �����غ��� ������ �������� ���� ���, �����ϴ� �� ���Ҵ�.



 ```python
# ���⼺��
def disemvowel(string):
    string = list(string)

    for element in "aeiouAEIOU":
        while element in string:
            string.remove(element)
    string = "".join(string)
    return string

 ```

> ���� �ǵ������ remove() �޼ҵ����� �����϶�� �ϼ̴µ�,  �ٸ� ����� ������ �������� �ʾҴ�.
>
> �׸��� ó�� ����� �ۼ����� ��, ó�� ����� ��ȿ�����ΰ� ���ų� �� ������ ������� �ۼ��ϱ� ���� �ٸ������ �����غ���. ������ ��� ó�� ��ĸ� �������� �ٸ� ����� �����ϱ� ��ƴ�.
>
> ��� ���ѵǴ� �� ����.




## �ٸ� ����� Ǯ�� ���

```python
# Best Practices 1
def disemvowel(string):
    return string.translate(None, "aeiouAEIOU")
```

> `translate() ` ��� �޼ҵ带 �̿��ߴ�. Python3���� �����ô��� error�� ����. 
>
> 1���� argument�� �Է¹޴µ� �� ���� �޾Ƽ� error�� ��µǾ���. �ٸ� �����ΰ� ����.
>
> �߰������� `maketrans()`�޼ҵ带 �˾ƺ��� �׳� �Ѿ��.



```python
# Best Practices 2
def disemvowel(s):
    for i in "aeiouAEIOU":
        s = s.replace(i,'')
    return s
```

> `replace()`�޼ҵ带 �̿��� ������ �������� ġȯ�Ѵ�. ġȯ �� �ٽ� �����Ͽ� ��� ������ ���� �����Ѵ�.



```python
# Best Practices 3
def disemvowel(string):
    return "".join(c for c in string if c.lower() not in "aeiou")
```

 > �� Ǯ�̰� Best��� �����Ѵ�.  ���ڰ� ������ �ƴҰ�쿡 join�ϰ� �ƴҰ�쿣 �׳� �Ѿ�� ����ΰŰ���.
 >
 > `c.lower()`�� ����� `aeiouAEIOU` ��� `aeiou` �� ���ߴ�.
 >
 > ���� `remove()`���� �޼ҵ峪 `maketrans()`���� �޼ҵ带 ����� ������ ġȯ�ϴ� ���� �ƴ϶� ������ ���� ������ �����.



## ��� ��

>  `maketrans()`, `lower()`, `replace()` �޼ҵ忡 ���� �˰� �Ǿ���

> `return a new string with all vowels removed.` ��� �������� �����ִµ�,
>
> `return a new string without vowels`��� ������ �� �־�� �ڴ�.



## �ݼ��� ��

> �˰� �ִ� �⺻ ������ �����Ͽ�, �ٸ� ������� �����ϴ� �͵� ���ѵǴ� �� ����.

## Action Item

> ������ �ǹ̸� ���ؼ�(?) �غ���.