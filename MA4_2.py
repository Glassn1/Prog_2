#!/usr/bin/env python3

from integer import Integer
from time import perf_counter as pc
import matplotlib.pyplot as pyp

py_time = []
cpp_time = []

def main():
	I = Integer(0)
	nlst = range(0,20)
	print(nlst)
	for i in nlst:
		I.set(i)

		start = pc()
		print(I.fib())
		end = pc()
		cpp_time.append(end - start)

		start = pc()
		print(fib_py(i))
		end = pc()
		py_time.append(end - start)

	I.set(47)
	start = pc()
	print("Test 47 cpp: ", I.fib())
	end = pc()
	print("Time for 47: ", end - start)

	pyp.plot(nlst, cpp_time, 'b.', nlst, py_time, 'r.')
	pyp.xlabel('n')
	pyp.ylabel("Time for fibonacci in sec")
	pyp.savefig('fib_test.png')

		
		



def fib_py(n):
	if n <= 1:
		return n
	else:
		return fib_py(n-1) + fib_py(n-2)

if __name__ == '__main__':
	main()


