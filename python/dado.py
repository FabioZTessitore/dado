# dado.py

# lancia un dado a N facce (N > 1)

import random

def lancia(N):
    """
        >>> from functools import reduce
        >>> N = 6
        >>> lanci = [lancia(N) for i in range(1000)]
        >>> inRange = [l >= 1 and l <= N for l in lanci]
        >>> allInRange = reduce(lambda x, y: x and y, inRange)
        >>> allInRange
        True
    """
    return random.randrange(1, N+1)


if __name__ == '__main__':
    import doctest
    doctest.testmod()
