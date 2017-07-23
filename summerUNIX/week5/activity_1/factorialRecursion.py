# This function implements a factorial function in python

#!/usr/bin/python
#def main():

def factorial(num):
	if (num > 1):
		m = lambda x: x - 1
		return (num * factorial(m(num)))
	elif (num == 1 or num == 0):
		return 1
	else:
		print('The factorial function only accepts nonnegative arguments.')
		return -1

num = int(raw_input('Enter a number: '))
print factorial(num)

