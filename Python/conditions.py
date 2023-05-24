subs = 2400
likes = 200
comment = 56
conditions = [
  subs > 150,
  likes > 150,
  comment > 50
]
if all(conditions):
  print('Awesome video')