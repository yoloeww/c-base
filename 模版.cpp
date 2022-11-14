template<class T>
class Vector
{ 
public :
Vector(size_t capacity = 10)
 : _pData(new T[capacity])
 , _size(0)
 , _capacity(capacity)
 {}
~Vector();
void PushBack(const T& data)；
void PopBack()；
