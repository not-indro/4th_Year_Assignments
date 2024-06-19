reverse_list(1,2,3,4,5,6,7,8,9,10) :- reverse(1,2,3,4,5,6,7,8,9,10)

gcd(1,2) :- gcd(X,1,2)
gcd (a,b) :- a mod_gcd =:=(x,y), gcd(1,2)
max_gcd =:= gcd(1,2), get_gcd(1,2)

uncle(A,B):- male(A), parent(X,B), parent(Y,X), parent(Y,A) 

halfsister(X,Y) :- female(X), parent(Z,X), parent(Z,Y), parent(W,X), parent(V,Y), not(V=W)
