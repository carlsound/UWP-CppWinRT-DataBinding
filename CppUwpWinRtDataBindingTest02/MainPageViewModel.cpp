#include "pch.h"
#include "MainPageViewModel.h"

namespace winrt::CppUwpWinRtDataBindingTest02::implementation
{
	MainPageViewModel::MainPageViewModel()
	{
		m_audio = winrt::make<CppUwpWinRtDataBindingTest02::implementation::Audio>(25.0);
	}

    CppUwpWinRtDataBindingTest02::Audio MainPageViewModel::Audio()
    {
		return m_audio;
        //throw hresult_not_implemented();
    }

    void MainPageViewModel::Audio(CppUwpWinRtDataBindingTest02::Audio const& value)
    {
		m_audio = value;
        //throw hresult_not_implemented();
    }
}
