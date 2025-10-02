def get_len(enter_string: str) -> int:
    return len(enter_string)
def get_hello(word: str) -> str:
    return word

def get_wrld(word2: str) ->str:
    return word2[::-1]

def get_hello_world(word3) -> tuple:
    print(word3)
    return get_hello(word3), get_wrld(word3), get_len(word3)

if __name__ == "__main__":
    _str = "3vidramylyaki"
    first, second, thitd = get_hello_world(_str)
    print(first, second, thitd)
