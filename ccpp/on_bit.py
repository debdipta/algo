import sys

def get_on_bits_rec(num):
	if num == 0:
		return 0
	return 	(num & 1) + get_on_bits_rec(num >> 1)

def get_on_bits(num):
	count = 0
	while num  > 0:
		count = count + (num & 1)
		num = num >> 1
	return count

def main():
	print("Hello!!!{0}\n".format(str(sys.argv)))
	print("On Bits: {0}".format(get_on_bits(int(sys.argv[1]))))
	print("On Bits: {0}".format(get_on_bits_rec(int(sys.argv[1]))))

if __name__ == '__main__':
	sys.exit(main())