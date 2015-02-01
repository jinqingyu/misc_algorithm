
/*
写一个PeekIterator，包装一个普通的Iterator，要实现peek()方法，
返回当前iterator指向的元素，但是不能移动它。除此之外也要实现hasNext()和next()方法

5. 实现一个带有peek() 的iterater. 写test case
答：记录下下一个值。

*/

template<T>
class PeekIterator {
  public:
    PeekIterator(iterator& iter){
      _it = iter;
      _data = iter.hasNext()? iter.next():NULL; 
    }
    T peek(){
      return *data;
    }
  privte:
    T*   _data;
    iteartor& _it;
}
