words = set()

def load(dictionary):
  file = open(dictionary, "r")
  for line in file:
      words.add(line.rstrip()) //Remove any white spaces at the end of the string
  file.close()
  return True

def check(word):
    if word.lower() in words:
        return True
    else:
        return False

def size():
    return len(words)

def unload():
    return True
