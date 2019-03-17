#include "pch.h"
#include "MainPage.h"

namespace winrt::CppUwpWinRtDataBindingTest02::implementation
{
	MainPage::MainPage()
	{
		m_mainPageViewModel = winrt::make<CppUwpWinRtDataBindingTest02::implementation::MainPageViewModel>();
		InitializeComponent();
	}

    CppUwpWinRtDataBindingTest02::MainPageViewModel MainPage::MainPageViewModel()
    {
		return m_mainPageViewModel;
        //throw hresult_not_implemented();
    }

    void MainPage::MainPageViewModel(CppUwpWinRtDataBindingTest02::MainPageViewModel const& value)
    {
		m_mainPageViewModel = value;
        //throw hresult_not_implemented();
    }
}
