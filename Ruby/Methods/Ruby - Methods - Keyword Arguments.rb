# Your code here
def convert_temp (temperature, input_scale:, output_scale: 'celsius')
    if input_scale == 'celsius'
        if output_scale == 'fahrenheit'
            return temperature * (9.0 / 5.0) + 32
        else
            return temperature + 273.15
        end
    elsif input_scale == 'fahrenheit'
        if output_scale == 'celsius'
            return (temperature - 32) * (5.0 / 9.0)
        else
            return (temperature + 459.67) * (5.0 / 9.0)
        end
    else
        if output_scale == 'celsius'
            return temperature - 273.15
        else
            return temperature * (9.0 / 5.0) - 459.67
        end
    end
end
