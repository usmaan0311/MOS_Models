import numpy as np, pandas as pd, glob, matplotlib.pyplot as plt
Vt=1.305 + 0.1
Vgs=float(input("Enter value of Vgs\nNote plot will show Vgs+Vt label\n"))
Vg=np.linspace(Vt,Vt+Vgs,5)
file=glob.glob("*.txt")
for i in range(len(file)):
    df=pd.read_csv(file[i], delimiter='\s+', header=None)
    V,I=df.iloc[:,0], df.iloc[:,1]
    plt.plot(V,I, label=f"Vgs = {round(Vg[i],2)}")
    plt.title("I-V plot in strong Inversion using Square Law model")
    plt.ylabel("Ids (A)")
    plt.xlabel("Vds (V)")

plt.legend()
plt.show()
