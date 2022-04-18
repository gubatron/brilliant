from random import randint
'''
This module tries to solve the 8 queens problem.
'''


def queens_attack_each_other(queen_a, queen_b):
    '''True if 2 queens face each other'''
    if queen_a[0] == queen_b[0] or queen_a[1] == queen_b[1]:
        return True
    return abs(queen_a[0] - queen_b[0]) == abs(queen_a[1] - queen_b[1])


def solution_found(state):
    return count_collision(state) == 0


def count_collision(state):
    '''Checks current queens, if one attacks another it returns False'''
    hits = 0
    for queen_a in state:
        for queen_b in state:
            if queen_a != queen_b and queens_attack_each_other(queen_a, queen_b):
                hits += 1
    return hits


def generate_random_state():
    '''Generates a random state'''
    state = []
    for i in range(8):
        state.append([i, randint(0, 7)])
    return state


def generate_states():
    '''Generates N possible states'''
    states = []
    for x in range(2000000):
        states.append(generate_random_state())
    return states


if __name__ == '__main__':
    print('Generating states...')
    states = generate_states()
    print(f'Done generating {len(states)} states')

    print('Searching for solution...')
    for s in states:
        hits = count_collision(s)
        if hits == 0:
            print('Solution found!')
            print(s)
            print()
