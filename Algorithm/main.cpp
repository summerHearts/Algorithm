//
//  main.cpp
//  Algorithm
//
//  Created by Kenvin on 16/6/15.
//  Copyright © 2016年 Kenvin. All rights reserved.
//

#include <iostream>
using namespace std;  //命名空间

namespace AP {
    int c = 1;
    void fun(){
        cout << "A" <<endl;
    }
}

namespace BP {
    int c = 2;
    void fun(){
        cout << "B" <<endl;
    }
    void fun2(){
        cout << "2B" <<endl;
    }
}

namespace myNum{
    int p = 105;
}
using namespace BP;

int getMaxOrMin(int *arr,int count,bool isMax){
    int temp=arr[0];
    for(int i=1;i<count;i++){
        if(isMax){
            if(temp<arr[i])
                temp=arr[i];
            
        }else{
            if(temp>arr[i])
                temp=arr[i]; 
            
        }
    }
    return temp;
}

int main(int argc, const char * argv[]) {
    
//    std::cout << "Hello, World!\n"<<endl;
//    cout << "Hello, World!\n";
//    
    //当你使用std::时，则表明你在告诉编译器你正在调用标准命名空间（namespace standard）。
    //c++中的输出，如果在#include<iostream>下面加了using namespace std;就不用加std::了，只要写cout<< 后面跟输出的内容就可以了
    
//    int x = 200; // 复值初始化
//    int xy(200); // 直接初始化
//    
    
    /*
     随用随定义
     C语言   所有变量定义必须位于函数体的最前面
     C＋＋   所有变量随用随定义
     
     
     C++的I/O方式
     输入过程
         输入设备－－－－>输入流－－－－>cin－－－－>变量
     
     输出过程
         变量－－－－>cout－－－－>输出流－－－－>输出设备
     */
    
//    cin >> x;
//    cin >> x >> xy;
//    
    //优势是不用关注占位符   不用关注数据类型  不容易出问题

    /*
    @1 提示用户输入一个整数，  8进制，10进制，16进制
    @2 提示用户输入一个bool

     */
    
//    cout << "请输入一个整数："<<endl;
//    int m = 0;
//    cin  >>  m ;
//    cout << oct << m <<endl;
//    cout << dec << m <<endl;
//    cout << hex << m <<endl;
//
//    cout << "请输入一个布尔值（0/1）："<<endl;
//    bool  n = false;
//    cin >> n;
//    cout << boolalpha << n <<endl;
    
    /*
     1.using namespace std;
     //cin cout的命名空间（仅仅包含头文件include<iosream>是不够的,需要有“使用命名空间”的说明）
     
     2. 如果不直接使用using namespace std
     cin/cout也可以表示成 std::cin >>.. std::cout <<...
     对于只调用一次的时候很方便
     */
    
//    cout <<AP::c <<endl;
//    BP::fun();
//    BP::fun2();
//    fun2();//即使不加前置命名空间，可是可以访问的。
    
    // 使用bool类型定义isOdd，作为状态位
//    bool    isFlag = false;
//    
//    if(myNum::p % 2 == 0){
//        //改变状态位的值，使其为false
//        isFlag = false;
//    }else{
//        //改变状态位的值，使其为true
//        isFlag = true;
//    }
//    // 判断状态位的值
//    if(isFlag){
//        // 如果状态位的值为true，则打印变量x是奇数
//        cout <<myNum::p<<endl;
//    }else{
//        // 如果状态位的值为false，则打印变量x是偶数
//        cout <<myNum::p<<endl;
//    }
    
    int arr1[4]={3,1,4,7};//数组做形参，会退化为指针。数组做参数，没有副本机制，直接操作原数组。在形参里面，arr[]和*arr没有区别，都是指向arr的数组。在实参传数据的时候，arr[]，传人实际数组名，*arr，传人指向数组的指针。
    bool flag=false;
    cin>>flag;
    cout<<getMaxOrMin(arr1,4,flag)<<endl;
    return 0;
}
