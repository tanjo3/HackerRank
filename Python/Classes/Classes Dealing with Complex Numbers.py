class Complex(object):

    def __init__(self, real, imaginary):

        self.real = real
        self.imaginary = imaginary
        self.crepr = complex(real, imaginary)


    def __add__(self, no):

        sum = self.crepr + no.crepr
        return Complex(sum.real, sum.imag)


    def __sub__(self, no):

        diff = self.crepr - no.crepr
        return Complex(diff.real, diff.imag)


    def __mul__(self, no):

        prod = self.crepr * no.crepr
        return Complex(prod.real, prod.imag)


    def __truediv__(self, no):

        quot = self.crepr / no.crepr
        return Complex(quot.real, quot.imag)


    def mod(self):

        return Complex(abs(self.crepr), 0)


    def __str__(self):

        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result
