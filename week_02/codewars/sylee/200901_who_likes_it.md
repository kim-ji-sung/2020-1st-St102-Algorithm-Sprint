# Who likes it?

## ��������

> ���� �� `likes :: [String] -> String`��� ������ �ִµ� �̰� ���� ������ �� �𸣰ڴ�.

## ���� Ǯ�� ���

 ```python
def likes(names):
    how_many = len(names)
    if how_many >= 4:
        return (
            "{}, {}".format(names[0], names[1])
            + " and "
            + "{} others like this".format(how_many - 2)
        )
    elif how_many == 3:
        return "{}, {} and {} like this".format(names[0], names[1], names[2])
    elif how_many == 2:
        return "{} and {} like this".format(names[0], names[1])
    return "{} likes this".format(names[0]) if how_many  else "no one likes this"
 ```

> ���̽����� ��������. ��ȯ������ ���̽����� �� �޶� ���Ⱑ ������� �� ����.

> �� ��� �ܿ��� Ư���� �������� �� ������.




## �ٸ� ����� Ǯ�� ���

```python
# Best Practices 1
def likes(names):
    n = len(names)
    return {
        0: 'no one likes this',
        1: '{} likes this', 
        2: '{} and {} like this', 
        3: '{}, {} and {} like this', 
        4: '{}, {} and {others} others like this'
    }[min(4, n)].format(*names[:3], others=n-2)
```

> ��ųʸ��� format�� �̿��� Ǯ����.
>
> {others} �� �ۼ��ѵ� others�� ���� ���� �� �� �ִٴ� ���� �˰� �Ǿ���.

> �̿ܿ� �߰������� ������ �ڵ�� ���� �� ����. 



## ��� ��

>  `"".format()` ���ĸ� ��Դµ� Best Practiceó�� `{��ųʸ�}[].format()` ���� ��ųʸ� ���� format ���Ŀ� ���߾� ����� �� �ִ� ���� �˰� �Ǿ���.

> `*names[:3]`�� ����ϰ� �Ǹ� ��½� `[` `]`�� ���� �� �ִ�.



>  ```python
>  def likes(names):
>    n = len(names)
>    return [
>        'no one likes this',
>        '{} likes this', 
>        '{} and {} like this', 
>        '{}, {} and {} like this', 
>        '{}, {} and {others} others like this'
>    ][min(4, n)].format(*names[:3], others=n-2)
>  ```
>
>  ��ųʸ��� �ƴϴ��� ����Ʈ�� �ε����� �̿��� �� �� �ִ�.



## �ݼ��� ��

> Ư���� �ݼ� �� ���� �������� �ʴ´�.

## Action Item

> �̷��� ���̽����� �������� �ִ� ���, if������ ������ ������ �ʰ� ��ųʸ��� ����Ʈ�� �����ѵ�, �����ϴ� ����� �ִ�. 