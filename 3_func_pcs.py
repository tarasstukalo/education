def get_len(enter_string: str, _obj: str) -> int: #krok5
    print(_obj)
    return len(enter_string) #krok6, krok7
def get_hello(word: str) -> str:
    return word

def get_wrld(word2: str) ->str:
    return word2[::-1]

def get_hello_world(word3, word4) -> tuple: #krok3
    print(word3)
    return get_hello(word3, ), get_wrld(word3), get_len(word3, _str2) #krok4 krok8

if __name__ == "__main__":
    _str = "3vidramylyaki" #krok1
    _str2 = "4vidramulyaki"
    first, second, thitd = get_hello_world(_str, _str2) #krok2 krok9
    print(first, second, thitd) #krok10
