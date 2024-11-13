# set

set内元素默认按照升序进行排序，set内元素不重复，可利用set进行去重操作。

multiset内元素默认按照升序进行排序，multiset内元素可重复。



```cpp
//基本操作
set<int> s;//定义一个set
s.insert(1);//插入元素
s.erase(1);//删除等于1的元素
s.erase(s.begin());//删除第一个元素
s.erase(s.begin(),s.end());//删除区间内的元素
s.clear();//清空set
s.size();//返回set大小
s.empty();//判断set是否为空
s.count(1);//返回set中元素1的个数
s.begin();//返回set中第一个元素的迭代器
s.end();//返回set中最后一个元素的迭代器

//set只能用迭代器访问
auto it =s.begin();

//set也可以截取数组中的一段元素，需要用指针进行截取
int arr[5] = {1,2,3,4,5};
set<int> s(arr,arr+3);//将数组arr的前三个元素插入set

//set也可以直接拷贝另一个set
set<int> s1;
s1=move(s);//将s中的元素移动到s1中

//set中的查找
set.find(n);//返回set中元素n的迭代器，找不到返回s.end()
set.lower_bound(n);//返回set中第一个大于等于n的元素的迭代器
set.upper_bound(n);//返回set中第一个大于1的元素的迭代器
set.equal_range(n);//返回一个pair，first是lower_bound，second是upper_bound

//set的遍历
for(auto it=s.begin();it!=s.end();it++)
{
    cout<<*it<<endl;
}

//set的insert函数返回值是一个pair,第一个元素是一个迭代器，指向插入的元素，第二个元素是一个bool值，表示是否插入成功
auto check = set.inset(1);//插入1
if (check.second) {
    cout << "insert success" << endl;
} else {
    cout << "insert fail! The Repetitive element is" <<*check.first<< endl;
}

//set的自定义排序
struct cmp
{
    bool operator()(int a,int b)
    {
        return a>b;
    }
};
set<int,cmp> s;//定义一个set，按照cmp排序

```

### multiset的用法和set一样，只是multiset中元素可重复。



### set和multiset的底层实现是红黑树，所以插入和查找的时间复杂度都是O(logn)。

### 如果仅需要去重，不需要排序，可以使用unordered_set和unordered_multiset，底层实现是哈希表，插入和查找的时间复杂度都是O(1)。
