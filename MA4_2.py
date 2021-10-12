#!/usr/bin/env python3

from integer import Integer

def main():
	f = Integer(4)
	print(f.get())
	f.set(8)
	print(f.get())

if __name__ == '__main__':
	main()