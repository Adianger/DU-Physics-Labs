function y=p(n, x)
y=0
if (modulo(n,2))==0 then
m=n/2
else
m=(n-1)/2
end
for k=0:m

y=y+(-1)^k*(factorial(n)*factorial(2*n-2*k)*x^(n-2*k))/(factorial(k)*factorial(n-k)*factorial(n)*factorial(n-2*k)*2^n)

end
endfunction
x=-1:0.01:1
for n=0:4
subplot(2,3,n+1)
plot2d(x,p(n))
end
function z=q(n, x) //derivative of p(x)
z=0
if (modulo(n,2))==0 then
m=n/2
else
m=(n-1)/2
end
for k=0:m

z=z+(-1)^k*(factorial(n)*factorial(2*n-2*k)*(n-2*k)*x^(n-2*k-1))/(factorial(k)*factorial(n-k)*factorial(n)*factorial(n-2*k)*2^n)
end
endfunction
for n=1:4
x0=1
x1=0
for i=1:100
x1=x0-p(n,x0)/q(n,x0)
x0=x1
i=i+1
end
disp("for n = "+string(n))
disp("root = "+string(x1))
end
