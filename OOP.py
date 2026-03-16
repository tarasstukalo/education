class Jivi():
    pass


class Bagatoklitinni(Jivi):
    pass


class Hordovi(Bagatoklitinni):
    pass


class Tvarini(Hordovi):
    def voise():
        print("VOISE")

class Korova(Tvarini):
    def voise():
        print("moo")


class Sobaka(Tvarini):
    def voise():
        print("woof")


class Kit(Tvarini):
    def voise():
        print("meow")


class Ssavtsi(Tvarini):
    pass


class Primati(Ssavtsi):
    pass


class Ludu(Primati):
    pass

if __name__ == "__main__":
    breakpoint()
