def get_hello(word: str) -> str:
    return word

def get_wrld(word2: str) ->str:
    return word2[::-1]

def get_hello_world(word3) -> tuple:
    return get_hello(word3), get_wrld(word3)

if __name__ == "__main__":
    first, second = get_hello_world("3vidramylyaki")
    print(first, second)
