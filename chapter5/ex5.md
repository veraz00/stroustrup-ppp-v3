# Grammar for bitwise logical expression 
tighter: & > ^  > | 
!, ~ is unary operators 


Expression: | -> Term 
Term: ^ -> Secondary 
Secondary: , ~ -> Primary 
Primary: &