#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif
#include "winrt/MyUIComponents.h"

using namespace winrt;
using namespace Microsoft::UI::Xaml;

namespace winrt::App2::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        MyUIComponents::CustomButton c = MyUIComponents::CustomButton();
        MyUIComponents::CustomStackPanel p = MyUIComponents::CustomStackPanel();
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
