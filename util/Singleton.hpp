#pragma once

class Single
{
private:
    Single() 
    {

    }
    Single (const Single&) = delete;    //delete 告诉编译器不要生成默认拷贝构造
    Single operator=(const Single&) = delete;
};