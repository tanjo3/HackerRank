# Your code here
def serial_average(string)
    s = string[0, 3]
    x = string[4, 5]
    y = string[10, 5]
    z = (x.to_f + y.to_f) / 2.0
    return "#{s}-#{z.round(2)}"
end
