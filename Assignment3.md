Part 1: (5 points)
Let S = it is sunny, C = camping is fun, H = the homework is done, and M = mathematics is easy.
  1.Translate into English: (M → H)∧(S →C)
    If mathematics is easy then the homework is done and if it is sunny then camping is fun.
    
  2.Translate into Propositional Logic: “Mathematics is easy or camping is fun, as long as it is sunny and the homework is done.”
    (S ^ H) -> (M v C). 
    
Part 2: (5 points)
  1.Use a truth table to determine whether this is a tautology, contradiction, or neither: (¬B → ¬A) → ((¬B → A) → B)
,,,
(¬B → ¬A) → ((¬B → A) → B)
```

| A | B | ¬A | ¬B | ¬B -> ¬A | ¬B -> A | ((¬B -> A) -> B
|---|---|--- |--- | -------- | ------- | ---------------
| T | T | F  | F  | T        | T       | T
| T | F | F  | T  | F        | T       | F
| F | T | T  | F  | T        | T       | T 
| F | F | T  | T  | T        | F       | T

  2. Use a truth table to determine whether this is a tautology, contradiction, or neither: ((A → B)∧(B → ¬A)) → A
,,,
((A → B)∧(B → ¬A)) → A
```

| A | B | ¬A |  A -> B  |  B -> ¬A | (A → B)∧(B → ¬A) | ((A → B)∧(B → ¬A)) → A
|---|---|--- |--------- | -------- | ---------------  | ----------------------
| T | T | F  | T        | F        | F                | T
| T | F | F  | F        | T        | F                | T
| F | T | T  | T        | T        | T                | F
| F | F | T  | T        | T        | T                | F

Part 3: (5 points)
For each of the following pairs of propositions, show that the
two propositions are logically equivalent by finding a chain of equivalences from one
to the other. State which definition or law of logic justifies each equivalence in the
chain.
PROVE:
  1. (p ^ q) → r    <==>  p → (q → r )
     (p ^ q)' v r   <==>  p' v (q' v r)  Implication Law
     (p' v q') v r  <==>  p' v (q' v r)  De Morgans Law
     (p' v q') v r  <==>  (p' v q') v r  Associative Law
     QED!
   
  2.  (q v r) → p    <==>   (q → p) ∧ (r → p)
      (q v r)' v p   <==>   (q' v p) ^ (r' v p)   Implication Law
      (q' ^ r') v p  <==>   (q' v p) ^ (r' v p)   De Morgans Law
      (q' ^ r') v p  <==>   (q' v r') v p         Distributive
      
Part 4: (5 points)
Let Loves(x,y) mean “x loves y,” Traveler(x) mean “x is a traveler,” City(x) mean “x is a city,” Lives(x,y) mean “x lives in y.”

  1. Translate into English: ∃x∀y∀z(City(x) ∧ Traveler(y) ∧ Lives(z,x)) → (Loves(y,x) ∧ ¬Loves(z,x)):
    "All travelers love some city and all residents don't love that city."   
  
  2.Translate into Predicate Logic: “No traveler loves the city they live in.”
    ∀x∀y(City(x) ^ Traveler(y) ^ Lives(y,x)) -> (¬Loves(y,x))
  
  
Extra Credit: (5 points)
 1.Assuming: p → (q ∧ r ) <==> s → r <==> r → p
  Prove: s → q.
  s is true        Assume
  r is true        Modus Ponen
  p is true        Modus Ponen 
  (q ^ r) is true  Modus Ponen
  q                 Both have to be true because the above says it's true
  s -> q        
        

 2.Assuming: ¬(r ∨ s), ¬p → s, p → q. 
  Prove: q
  ¬p → s           Given
  r' v s'          De Morgans Law
  if s' the (p')'  Modus Tollen  
  (p')' = p        Double Negation
  q                Modus Ponen
HINT:
Modus Ponen: If x -> q, and x, then q
Modus Tollens: If x -> q, and ~q, then ~x
