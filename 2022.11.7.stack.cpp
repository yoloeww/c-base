# include <iostream>
using namespace std;
typedef int DataType;
class Stack
{
    public:
    void Init()
    {
      _array = (DataType*)malloc(sizeof(DataType)*3);
      if(_array == NULL)
      {
        perror("malloc申请空间失败");
        return ;
      }
      _capacity = 3;
      _size = 0;
    }
    void Push(DataType data)
    {
      CheckCapacity();
      _array[_size] = data;
      _size++;
    }
    void Pop()
    {
      if(Empty())
        return ;
        _size--;
    }
    DataType Top()
    {
      return _array[_size-1];
    }
    int Empty()
    {
       return _size == 0;
    }
    int Size()
    {
        return _size;
    }
    void Destory()
    {
        if(_array)
        {
          free(_array);
          _array = NULL;
          _size = 0;
          _capacity = 0;
        }
    }
    private:
        void CheckCapacity()
        {
             int _newcapacity = _capacity *2;
             DataType *temp =(DataType*)realloc(_array,_newcapacity*sizeof(DataType));
             if(temp == NULL)
             {
              perror("realloc fail\n");
             }
             _array = temp;
             _capacity = _newcapacity;
        }
    private:
        DataType * _array;
        int _capacity;
        int _size;
};
int main()
{
  Stack s;
  s.Init();
  s.Push(1);
  s.Push(2);
  cout<< s.Top() <<endl;
  cout<< s.Size() <<endl;
  s.Pop();
  s.Destory();
  return 0;
  }
