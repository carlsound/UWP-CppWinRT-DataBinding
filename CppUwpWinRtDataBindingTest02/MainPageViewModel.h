#pragma once

#include "MainPageViewModel.g.h"
#include "Audio.h"

namespace winrt::CppUwpWinRtDataBindingTest02::implementation
{
    struct MainPageViewModel : MainPageViewModelT<MainPageViewModel>
    {
		MainPageViewModel(); //= default;

        CppUwpWinRtDataBindingTest02::Audio Audio();
        void Audio(CppUwpWinRtDataBindingTest02::Audio const& value);

    private:
		CppUwpWinRtDataBindingTest02::Audio m_audio { nullptr };
    };
}

namespace winrt::CppUwpWinRtDataBindingTest02::factory_implementation
{
    struct MainPageViewModel : MainPageViewModelT<MainPageViewModel, implementation::MainPageViewModel>
    {
    };
}
