#pragma once

#include "Audio.g.h"

namespace winrt::CppUwpWinRtDataBindingTest02::implementation
{
    struct Audio : AudioT<Audio>
    {
        Audio();
		Audio(double volumeValue);

		double Volume();
        void Volume(double value);
        winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

    private:
		double m_volume = 0.0;
		winrt::event<Windows::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;
    };
}
