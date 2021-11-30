import numpy as np, pandas as pd, glob, matplotlib.pyplot as plt

file=glob.glob("*.txt")

df1=pd.read_csv(file[1],sep='\s+',header=None)
df2=pd.read_csv(file[0],sep='\s+',header=None)

Vg, Psi = df1.iloc[:,0] , df1.iloc[:,1]
Vg, Ig = df2.iloc[:,0] , df2.iloc[:,1]

plt.plot(Vg, Psi, label=r"$\Psi_{s} \ NR $")
plt.plot(Vg, Ig,'--', label="Initial Guess")
plt.xlabel("Vg")
plt.ylabel(r"$\Psi_{s} \ (eV)$")
plt.legend()
plt.show()
