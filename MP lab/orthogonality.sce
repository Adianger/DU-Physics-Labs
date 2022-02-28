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
for n=0:5
plot2d(x,p(n))
end
for i=1:5
I=integrate('p(i)*p(i+1)','x',-1,1)
disp("Integration of P("+string(i)+") * P("+string(i+1)+") = "+string(I))
end
