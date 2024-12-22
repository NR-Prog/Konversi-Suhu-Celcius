import os

def layar_bersih():
    os.system('cls' if os.name == 'nt' else 'clear')
    
def kelvin(celcius):
    return celcius + 273.15

def reamur(celcius):
    return (4 / 5) * celcius

def fahrenheit(celcius):
    return (9 / 5 * celcius) + 32

def menu():
    print("===============================")
    print(" Program Konversi Suhu Celcius ")
    print("===============================")
    print("c --> Kelvin (K)")
    print("c --> Reamur (R)")
    print("c --> Fahrenheit (F)")
    suhu = input("Masukkan suhu tujuan: ").strip().lower()
    return suhu
    
def milih():
    suhu = menu()
    if suhu in ('k', 'r', 'f'):
        try:
            celcius = float(input("Masukkan suhu dalam celcius: "))
            if suhu == 'k':
                print(f"Suhu {celcius} C sama dengan {kelvin(celcius):.2f} K")
            elif suhu == 'r':
                print(f"Suhu {celcius} C sama dengan {reamur(celcius):.2f} R")
            elif suhu == 'f':
                print(f"Suhu {celcius} C sama dengan {fahrenheit(celcius):.2f} F")
        except ValueError:
            print("Masukkan nilai suhu yang valid!")
    else:
        print("Karakter yang dimasukkan tidak sesuai.")

def main():
    ulang = "y"
    while ulang.lower() == "y":
        layar_bersih()
        milih()
        ulang = input("Coba lagi (Y/N)? ").strip().lower()
    print("Selesai!")
    
if __name__ == "__main__":
    main()