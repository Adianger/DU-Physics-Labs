n1= input("enter the order of first polynomial")
n2= input("enter the order of second polynomial")
function y1= g(x)
    y1= legendre (n,0,x) 
endfunction
function y2 =f1 (a,b)
    if(g(a)*g(b)>=0)
        y2=0
    else
        m=(a+b)/2
        while(abs(g(m))>=0.00001)
            if(g(a)*g(m)<0)
                b=m
            else
                a=m
            end
            m=(a+b)/2
        end
        y2=m
        end
endfunction
function y=f (x)
    y=legendre(n1,0,x)*legendre (n2,0,x)
endfunction
function y4=f4 (a, i)
    p=1
    for j=1:n
        if(r(i)~=r(j))
            p=p*((a-r(j))/(r(i)-r(j)))
    end
end
y4=p
endfunction
function y3 =f2(i)
a=-1;b=1    
n1=1000
h1=(b-a)/n1
ya= f4 (a,1) ; yb= f4(b,1) ; sum1=0 ; sum2=0
for j=2:n1-1
    a=a+h1
    if(modulo(j,2)==0)
        sum1=sum1+f4(a,i)
    else
        sum2=sum2+f4(a,i)
    end
end
y3=(h1/3)*(ya+yb+4*sum1+2*sum2)
endfunction
h=0.0001;j=1
n=input("enter the order")
r=zeros(1,n)
for i=-1:h:1-h
    if(f1(i,i+h)~=0)
        r(j)=f1(i,i+h)
        j=j+1
    end
end
disp(r)
w=zeros(1,n)
for i=1:n
    w(i)=f2(i)
end
disp(w)
in=0
for i=1:n
    in=in+w(i)*f(r(i))
end
disp(in)
