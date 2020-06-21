from sys import stdin

a = [s[:-1].split() for s in stdin]

let = []
dig = []

for v in a:
  if v[1][0].isdigit():
    dig.append(v)
  else:
    v = [v[0], " ".join(v[1:])]
    let.append(v)

let.sort(key=lambda v : [v[1], v[0]])
for s in let:
  print(" ".join(s))
for s in dig:
  print(" ".join(s))
