# Program to find the maximum of three numbers using lambda function
max_num = lambda a, b, c: a if a > b and a > c else (b if b > c else c)
print("Maximum of 3, 5, 7 is:", max_num(3, 5, 7))
