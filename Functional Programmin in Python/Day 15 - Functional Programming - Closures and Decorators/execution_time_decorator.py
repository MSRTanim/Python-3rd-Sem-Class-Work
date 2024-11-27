import time

def log_time(func):
    def wrapper(*args): 
        start = time.time(); res = func(*args)
        print(f"{func.__name__} time: {time.time() - start:.4f}s")
        return res
    return wrapper

@log_time
def calc_sum(n): return sum(range(n))

print("Sum:", calc_sum(1000000))
