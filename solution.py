for m in range(100,2,-1):
   found=False
    for n in range(m-1,1,-1):
        a=m**2-n**2
        b=2*m*n
        c=m**2+n**2

        if c**2==(a**2+b**2):
            if 1000==(a+b+c):
                print(a,",",b,",",c)
                print(a*b*c)
                found=True
                break
    if found: break
