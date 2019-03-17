#pragma once

#include "MainPage.g.h"
#include "MainPageViewModel.h"

namespace winrt::CppUwpWinRtDataBindingTest02::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
		MainPage(); //= delete;

        CppUwpWinRtDataBindingTest02::MainPageViewModel MainPageViewModel();
        void MainPageViewModel(CppUwpWinRtDataBindingTest02::MainPageViewModel const& value);

    private:
		CppUwpWinRtDataBindingTest02::MainPageViewModel m_mainPageViewModel{ nullptr };
    };
}

namespace winrt::CppUwpWinRtDataBindingTest02::factory_implementation
{
	struct MainPage : MainPageT<MainPage, implementation::MainPage>
	{
	};
}