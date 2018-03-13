//#include <iostream>
//using namespace std;
//
//
//class Line{
//
//public:// 简单的构造函数
//    Line();
//    ~Line();
//    void setlength(int a);
//    int  getlength();
////friend Line operator+(const Line &a, const Line &b);  //友元函数
//public:
//    int length;
//
//};
//
//// 成员函数定义，包括构造函数
//// 成员函数定义，包括构造函数
//Line::Line() {
//
//
//}
//
//
//Line::~Line(void)
//{
//    cout << "释放内存" << endl;
//}
//int Line::getlength()
//{
//    return length;
//    //cout<<length;
//}
//
//void Line::setlength(int a )
//{
//  length=a;
//
//}
//
//
//Line operator+(const Line& a, const Line& b)
//{
//    Line sum;
//    //sum.setlength()=a.setlength()+b.setlength();
//    sum.length=a.length+b.length;
//    return sum;
//
//}
//
//int main() {
//
//
//    Line line1;
//    Line line2;
//
//    line1.setlength(10);
//    line2.setlength(10);
//
//    Line line3;
//    cout<<line1.getlength();
//    cout<<line2.getlength();
//    line3=line1+line2;
//    cout<<line3.getlength();
//
//
//   //display(line);  //1：对象以值传递的方式传入函数参数,隐士调用拷贝构造函数
//    return 0;     // 一个对象以值传递的方式从函数返回，一个对象需要通过另外一个对象进行初始化
//}
//demo has changed

