#include <vector>
class Builder
{
public:
    class builder;
    Builder(int prop1, bool prop2, bool prop3, std::vector<int> prop4)
            : prop1{prop1}, prop2{prop2}, prop3{prop3}, prop4{prop4}
    { }
    int prop1;
    bool prop2;
    bool prop3;
    std::vector<int> prop4;
};
class Builder::builder
{
public:
    builder& set_prop1(int value) { prop1 = value; return *this; };
    builder& set_prop2(bool value) { prop2 = value; return *this; };
    builder& set_prop3(bool value) { prop3 = value; return *this; };
    builder& set_prop4(std::vector<int> value) { prop4 = value; return *this; };
    Builder build() const
    {
        return Builder{prop1, prop2, prop3, prop4};
    }
private:
    int prop1 = 0;
    bool prop2 = false;
    bool prop3 = false;
    std::vector<int> prop4 = {};
};
int main()
{
    Builder f = Builder::builder{}.set_prop1(5)
            .set_prop3(true)
            .set_prop2(false)
            .set_prop4({1,2,3,4})
            .build();
}
