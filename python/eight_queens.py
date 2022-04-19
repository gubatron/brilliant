from random import shuffle
'''
This module tries to solve the 8 queens problem.
'''
identity_rows = [0, 1, 2, 3, 4, 5, 6, 7]


def queens_attack_each_other(queen_a, queen_b):
    '''True if 2 queens face each other'''
    if queen_a[0] == queen_b[0] or queen_a[1] == queen_b[1]:
        return True
    return abs(queen_a[0] - queen_b[0]) == abs(queen_a[1] - queen_b[1])


def solution_found(state):
    return count_collision(state) == 0


def count_collision(state, breakOnFirstCollision=True):
    '''Checks current queens, if one attacks another it returns False'''
    hits = 0
    for queen_a in state:
        for queen_b in state:
            if queen_a != queen_b and queens_attack_each_other(queen_a, queen_b):
                hits += 1
                if breakOnFirstCollision:
                    return hits
    return hits


def generate_random_state():
    '''Generates a random state'''
    unsorted_rows = identity_rows.copy()
    shuffle(unsorted_rows)
    state = []
    for i in range(8):
        state.append([i, unsorted_rows.pop()])
    return state


if __name__ == '__main__':
    solutions_found = []
    generated_states = 0
    print('Searching for solution...')
    while len(solutions_found) < 92:
        s = generate_random_state()
        generated_states += 1
        if solution_found(s) and s not in solutions_found:
            solutions_found.append(s)
            print(
                f'Solution {len(solutions_found)}. {generated_states} random states generated.')
            print(s)
            print()
        if len(solutions_found) >= 92:
            break
