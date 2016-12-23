def isMirror(x, y):
	if x == '(' and y == ')':
		return True
	elif x == '[' and y == ']':
		return True
	elif x == '{' and y == '}':
		return True
	else:
		return False

def is_matched(s):
	is_balanced = True
	stack = []
	def push(data):
		stack.append(data)
	def pop():
		if len(stack) > 0:
			return stack.pop()
	for x in s:
		if x in ['(', '{', '[']:
			push(x)
		elif x in [')', '}', ']']:
			if isMirror(pop(), x) == False:
				is_balanced = False
				break
	if len(stack) == 0:
		return is_balanced
	else:
		return False


t = int(input().strip())
for a0 in range(t):
	expression = input().strip()
	if is_matched(expression) == True:
		print("YES")
	else:
		print("NO")

