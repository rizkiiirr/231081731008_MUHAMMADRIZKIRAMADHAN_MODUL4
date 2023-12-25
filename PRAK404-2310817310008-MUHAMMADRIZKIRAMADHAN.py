while (1) :
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    a = int(input("Masukkan pilihan:"))
    if (a > 5):
        print("Input Anda salah, silahkan coba lagi")
        break
    elif (a == 5):
        print("Terima kasih, telah menggunakan kalkulator MUHAMMAD RIZKI RAMADHAN")
        break


    b = int(input("Masukkan nilai pertama:"))
    c = int(input("Masukkan nilai kedua:"))

    if (a == 1) : print(f"Hasil penjumlahan antara {b:.2f} dan {c:.2f} adalah {b + c:.2f}")
    elif (a == 2) : print(f"Hasil pengurangan antara {b:.2f} dan {c:.2f} adalah { b - c:.2f}")
    elif (a == 3) : print(f"Hasil perkalian antara {b:.2f} dan {c:.2f} adalah {b * c:.2f}")
    elif (a == 4) : print(f"Hasil pembagian antara {b:.2f} dan {c:.2f} adalah {b / c:.2f}")