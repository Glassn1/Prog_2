#!/usr/bin/env python3
from integer import Integer
from fib import fib_cpp

def main():
	n = 10
	f = Integer(1)
	print(f.get())
	f.set(8)
	print(f.get())
	print(fib_cpp(n))

if __name__ == '__main__':
	main()