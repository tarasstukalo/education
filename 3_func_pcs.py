def get_hello() -> str:
    return "Hello"

def get_wrld() ->str:
    return "wrld"

def get_hello_world() -> tuple:
    return get_hello(), get_wrld()

if __name__ == "__main__":
    first, second = get_hello_world()
    print(first, second)
