#include <iostream>

class Box
{
public:
    virtual void paint() = 0;
};

class WBox : public Box
{
public:
    void paint (){
        std::cout << " Windows Box \n";
    }
};

class LinuxBox : public Box
{
public:
    void paint (){
        std::cout << " Linux Box \n";
    }
};

class ScrollBar
{
public:
    virtual void paint() = 0;
};

class WScrollBar : public ScrollBar
{
public:
    void paint (){
        std::cout << " Windows ScrollBar \n";
    }
};

class LinuxScrollBar : public ScrollBar {
public:

    void paint (){
        std::cout << " Linux ScrollBar \n";
    }
};


class GUIFactory
{
public:
    virtual Box* createButton () = 0;
    virtual ScrollBar* createScrollBar () = 0;
};

class WinFactory : public GUIFactory
{
public:
    Box* createButton (){
        return new WBox;
    }
    ScrollBar* createScrollBar (){
        return new WScrollBar;
    }
};

class LinuxFactory : public GUIFactory
{
public:
    Box* createButton (){
        return new LinuxBox;
    }
    ScrollBar* createScrollBar (){
        return new LinuxScrollBar;
    }
};

int main()
{
    GUIFactory* guiFactory;
    Box *btn;
    ScrollBar *sb;

    guiFactory = new LinuxFactory;
    btn = guiFactory->createButton();
    btn -> paint();
    sb = guiFactory->createScrollBar();
    sb -> paint();

    guiFactory = new WinFactory;
    btn = guiFactory->createButton();
    btn -> paint();
    sb = guiFactory->createScrollBar();
    sb -> paint();

    return 0;
}
