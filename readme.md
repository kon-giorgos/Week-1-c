**Problem solve**

Initial population : $a$

Target Population : $b$

current population : $c$

---

change between year (n-1) and year (n) : 

$ c_n=c_{n-1}+c_{n-1} \cdot \frac{1}{3}-c_{n-1} \cdot \frac{1}{4}=c_{n-1}+c_{n-1} \cdot \frac{1}{12} $

let $ p = \frac{1}{12} $, so if we rewrite we get:

$c_n= c_{n-1}+c_{n-1} \cdot p$

---

For each of n years we have:

**End of 1st Year :**

$a+a \cdot p=a(1+p)$

**End of 2nd Year:** 

$a(1+p)+a(1+p)\cdot p=a(1+p)^2$

**End nth Year:**

$a(1+p)^n$

  So we have to solve 

$a(1+p)^n=b \rightarrow n = \frac{\log(\frac{b}{a})}{\log(1+p)}$

---
