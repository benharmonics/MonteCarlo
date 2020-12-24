from random import random
from time import time

MAX_ITER = 50_000_000
hit_count = 0
iter_count = 0

print('Estimating the value for pi with Monte Carlo integration.\n')
start = time()
for i in range(MAX_ITER):
    x = random()
    y = random()
    iter_count += 1
    if x**2 + y**2 < 1:
        hit_count += 1
    if iter_count % 2_000_000 == 0:
        estimate = 4*hit_count/iter_count
        if iter_count < MAX_ITER:
            print(f'Current estimate: {round(estimate, 8)} after {iter_count/1_000_000} million iterations.')
duration = round(time() - start, 3)
print(f'\nCompleted {MAX_ITER} iterations in {duration} seconds. ({round(MAX_ITER/duration, 2)} iterations per second)')
print(f'Final estimate: {estimate}')
