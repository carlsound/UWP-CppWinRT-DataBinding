#include "pch.h"
#include "Audio.h"

namespace winrt::CppUwpWinRtDataBindingTest02::implementation
{
	Audio::Audio() : m_volume { 0.0 }
	{
	}

	Audio::Audio(double volumeValue) : m_volume { volumeValue }
	{
	}

    double Audio::Volume()
    {
		return m_volume;
        //throw hresult_not_implemented();
    }

    void Audio::Volume(double value)
    {
		if(value != m_volume)
		{
			m_volume = value;
			m_propertyChanged(*this, Windows::UI::Xaml::Data::PropertyChangedEventArgs{ L"Volume" });
		}
        //throw hresult_not_implemented();
    }

    winrt::event_token Audio::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
		return m_propertyChanged.add(handler);
        //throw hresult_not_implemented();
    }

    void Audio::PropertyChanged(winrt::event_token const& token) noexcept
    {
		m_propertyChanged.remove(token);
        //throw hresult_not_implemented();
    }
}
