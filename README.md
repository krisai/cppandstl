烫烫烫烫烫烫烫烫==使用了没有初始化的内存
build-in type
int,float,double,char
user-defined type
class,struct,union
primitive type
reference type

fields
parameters
local variables

declaration
definition


堆
堆栈
new malloc
全局数据区
全局变量
本地变量
成员变量

storage allocation

access specifiers
	public
		所以人可以访问
	private
		这个类的内部可以访问，
		这个类的对象可以访问,
		这一个类的对象间可以互相访问,
		子类中存在，但是不能直接访问，
		针对类不是针对对象
	protected 
		继承这个类的子类的内部可以访问，
		继承这个类的子类的对象不能直接访问，
	friend 申明别人是你的朋友，它就可以访问你的private member
	class defaults to private
	struct defaults to public

变量初始化要自己手动赋值
Initialization
	aggregate initialization

initialization list
	embed object
	Student::Student(string s):name(s){}
		initialization
		before constructor
	Student::Student(string s){name=s}
		assignment
		inside constructor
		string must have a default constructor


Classes
	default constructor
		ClassName ( ) ;	(1)	
		ClassName :: ClassName ( ){body} 	(2)	
		A a1 = 1;
		A a1(1);
	Destructor
		~ class_name ();
		virtual ~ class_name ();

	Copy constructor
		class_name ( const class_name & )	(1)	
		class_name ( const class_name & ) = default;	(2)	
		class_name ( const class_name & ) = delete;	(3)	
	Move constructors
		class_name ( class_name && )
	Converting constructor
		explicit specifier

dynamic memory allocation
	new 
		new int
		new int[]
	delete
		delete p;
		delete[] p;
	malloc
	free
OOP
	封装，继承，多态
软件重用
	继承
	组合 composition: construct new object with existing objects


不能主动调用constructor
所以member init都必须放在initializer list里
父类的constructor init也必须放在initializer list里

overload:
Function return type					No
Use of typedef names					No
Unspecified array bounds				No
Number of arguments						Yes
Type of arguments						Yes
Presence or absence of ellipsis			Yes
const or volatile 						Yes

override父类和子类有成员的名字相同



inline函数 申明／定义 都应该放在.h文件中
当函数只有几行时
当函数频繁调用loop循环时候
适合使用
当成员函数的body定义在class里面的时候默认就是inline的
inline类似macro的操作，但是inline做类型检查
macro不做类型检查
编译器将inline函数的的代码替换到调用函数的地方


reference:
是一个binding对象的地址
是一个const指针
```c
int i;
int * p;
int & p1 = i; //一般变量的别名
int *& p1 = p; //一个指针的别名	References to Pointers
int &* p2; //不存在 pointer to reference //error
```
polymorphism
	upcasting and downcasting 
	Override
	Member-wise Copy
	Bit-wise Copy
	virtual function specifier
	virtual  dynamic binding
	name hiding

只有c++有name hiding父类有overload，子类有override，
子类不能访问与父类同名overload的父类的方法，
此时子类只有自己的成员函数，父类的被隐藏起来了

upcast 和 dynamic binding 构成 polymorphism
通过virtual实现dynamic binding
父类的成员函数是virtual的，子类的同名函数就会是virtual，不管前面加不加virtual specifier
父类的引用或者指针指向子类对象  upcast
子类的引用或者指针指向父类对象  downcast
只有通过指针或者引用去调用virtual函数才能实现动态绑定
父类的destructor必需加上virtual

指针访问对象需要使用delete删除指针才会调用析构函数
用引用或者变量访问对象，离开变量作用域析构函数会自动被调用

只有c++默认是static binding 其他语言默认是dynamic binding
static binding 效率高
c++的Initialization和assignment是严格区分的

Local scope 
Function scope
File scope 
Class scope
Prototype scope


```c
const
	const pointer
	const argument
		void f(const int* x);
	const return value
		const int f4(){return 1;};
	const object
		const Currency the_raise(42,38);
	const member function  
	//成员函数末尾加const 是说这个函数不能修改任何成员变量,
	//this是const,即这个函数不能修改this的所有属性(即成员变量)
		int get_day() const;
		int get_day() const{return day;};
		int Date::get_day() const{}
	const char **cpp = &p; 
	char * const *pcp = &p;
	const char* const p= &p;
```
申明一个 const 对象要求所有成员变量必需有初始化
申明一个 const 成员变量必需有初始化
const对象会调用构成overload成员函数中结尾有const的那个成员函数

static 
	static 本地变量就是全局变量
	static void f（）只能在这个.c文件中能被访问
	static object
	static class member

Operator overloading

Stream extraction << and   insertion  >>

> dynamic_cast Used for conversion of polymorphic types.
> static_cast Used for conversion of nonpolymorphic types.
> const_cast Used to remove the const, volatile, and unaligned attributes.
> reinterpret_cast Used for simple reinterpretation of bits.

Conversions
  implicit - explicit - user-defined 


References
Thinking in C++ (B. Eckel) Free online edition!
Essential C++ (S. Lippman)
Effective C++ (S. Meyers)
C++ Programming Language (B. Stroustrup)
Design Patterns (Gamma, Helm, Johnson,Vlissides)
Object-Oriented Analysis and Design with Applications (G. Booch, et. al)

TCP/IP Illustrated, Volume 1: The Protocols by W. Richard Stevens.
Unix Network Programming: Networking APIs: Sockets and XTI (Volume 1) by W. Richard Stevens.
Advanced Programming in the Unix Environment by W. Richard Stevens, Addison-Wesley, 1993.
Computer Systems: A Programmer's Perspective by Randal E. Bryant and David R. O'Hallaron. Prentice Hall, 2003

15-721 Database Systems:
15-213 Introduction to Computer Systems
15-418 Parallel Computer Architecture and Programming
