# Qt-Base-Custom-Window Note
A basic desktop window. It can customize the minimize window button, maximize window button, close button, title and icon. And it can minimize the window to the system status bar and will not disappear.

一個基本的桌面圖形應用。能夠設定最小化、最大化、關閉按鍵。可以設定窗口圖標，也可以設置窗口標題。另外，最小化窗口不會消失。

# How it work?
The program runs based on QT. 

Here, I hide the original program window button and set the form transparency.

# Step

1. Disable original window setting.

```
this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint);
```

2. Hide window to system status bar

```
void showMinimized();
```

3. Set window maximize

```
void showMaximized();
```

4. Set window full screen display

```
void showFullScreen();
```

5. Set window in nominal size

```
void showNormal();
```

6. Close window

```
void close();
```

# Result

![default interface](https://pic.rmb.bdstatic.com/bjh/e328b8e6fecef1f0aac5c0d1458e6a6b.png
)

![close button](https://pic.rmb.bdstatic.com/bjh/011de3b67ef3c56788845b28e2fd8fe7.jpeg)

## Tips: 

I only made the buttons to minimize and close the form. You can help yourself.

