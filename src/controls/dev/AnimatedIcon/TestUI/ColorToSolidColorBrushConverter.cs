﻿using System;
using System.Collections.Generic;
using System.Text;
using Windows.UI;
using Microsoft.UI.Xaml.Data;
using Microsoft.UI.Xaml.Media;

namespace MUXControlsTestApp
{
    partial class ColorToSolidColorBrushConverter : IValueConverter
    {
        public object Convert(object value, Type targetType, object parameter, string language)
        {
            return new SolidColorBrush((Color)value);
        }

        public object ConvertBack(object value, Type targetType, object parameter, string language)
        {
            return ((SolidColorBrush)value).Color;
        }
    }
}
