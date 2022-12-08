#include "pch.h"
#include <microsoft.ui.xaml.window.h>
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI;
using namespace Microsoft::UI::Xaml::Media;
using namespace Microsoft::UI::Xaml::Controls;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Test2::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();

        auto windowNative{ this->try_as<::IWindowNative>() };
        HWND hWnd{ 0 };
        windowNative->get_WindowHandle(&hWnd);
        SetWindowPos(hWnd, NULL, 200, 200, 255, 315, NULL);
        this->Title(L"ListBox");
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainWindow::ListBox_SelectionChanged(IInspectable const& /*sender*/, SelectionChangedEventArgs const& /*e*/)
    {
        switch (lb1().SelectedIndex())
        {
        case 0:
            Control1Output().Fill(SolidColorBrush(Colors::Blue()));
            break;

        case 1:
            Control1Output().Fill(SolidColorBrush(Colors::Green()));
            break;

        case 2:
            Control1Output().Fill(SolidColorBrush(Colors::Red()));
            break;

        case 3:
            Control1Output().Fill(SolidColorBrush(Colors::Yellow()));
            break;
        }
    }
}