def print_formatted(number):
    bin_length = len("{0:b}".format(number))

    for i in range(1, number + 1):
        print("{0:d}".format(i).rjust(bin_length) +
              "{0:o}".format(i).rjust(bin_length + 1) +
              "{0:X}".format(i).rjust(bin_length + 1) +
              "{0:b}".format(i).rjust(bin_length + 1))
