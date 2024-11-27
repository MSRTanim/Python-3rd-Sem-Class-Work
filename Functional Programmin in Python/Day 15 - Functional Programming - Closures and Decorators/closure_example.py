def multiplier(factor): return lambda n: n * factor
double, triple = multiplier(2), multiplier(3)
print("Double:", double(5), "| Triple:", triple(5))
