import math
#Test Case 1
A, B = map(float, input().split())

alas = math.sqrt(pow(B,2) - pow(A,2))
tinggi = A
keliling = A + B + alas
luas = (alas*tinggi) / 2

print("Alas = %.f cm" % alas)
print("Tinggi = %.f cm" % tinggi)
print("Keliling = %.f cm" % keliling)
print("Luas = %.f cm\u00B2" % luas, "\n")