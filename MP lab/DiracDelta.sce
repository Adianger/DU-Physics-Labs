//Simpson's (1/3)rd Rule
sig = 1
deff('y=f(x)','y=1/sqrt(2*%pi*sig^2)*exp(-((x-2)^2)/(2*sig^2))*(x+3)')
a= 0
b= 4
//n=input("Enter number of sum intervals: ")
//n=(b-a)/h
h = 0.1
add1=0
add2=0
add3=0
for i=0:n
    x=a+i*h
    y=f(x)
    disp([x y])
    if (i==0)|(i==n) then
        add1=add1+y
        else if (modulo(i,2)==0) then
        add2=add2+y
    else
        add3=add3+y
    end
end
end
I=(h/3)*(add1+2*add2+4*add3)
disp(I,"Integration by Simpsons (1/3)rd Rule is:")

