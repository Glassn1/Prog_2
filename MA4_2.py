#!/usr/bin/env python3

from integer import Integer

def main():
	f = Integer(2)
	print(f.get())
	f.set(7)
	print(f.get())
	print(f.fib())
	f.set(10)
	print(f.fib())

if __name__ == '__main__':
	main()