from collections import deque

def is_valid_state(state):
    f, t, g, c = state
    if t == g and f != t: return False
    if g == c and f != g: return False
    return True

def get_next_states(current_state):
    next_states = []
    f, t, g, c = current_state
    new_f = 1 - f
    next_states.append((new_f, t, g, c))
    if f == t: next_states.append((new_f, new_f, g, c))
    if f == g: next_states.append((new_f, t, new_f, c))
    if f == c: next_states.append((new_f, t, g, new_f))
    return [state for state in next_states if is_valid_state(state)]

def bfs_farmer():
    initial_state = (0, 0, 0, 0)
    goal_state = (1, 1, 1, 1)
    frontier = deque([(initial_state, [])])
    explored = set()

    while frontier:
        current_state, path = frontier.popleft()
        if current_state == goal_state:
            return path + [current_state]
        explored.add(current_state)
        for next_state in get_next_states(current_state):
            if next_state not in explored:
                frontier.append((next_state, path + [current_state]))

def describe_step(prev_state, current_state):
    f1, t1, g1, c1 = prev_state
    f2, t2, g2, c2 = current_state
    if f1 != f2:
        if t1 != t2: return "Farmer takes the tiger across the river."
        elif g1 != g2: return "Farmer takes the goat across the river."
        elif c1 != c2: return "Farmer takes the cabbage across the river."
        else: return "Farmer crosses the river alone."
    return "Invalid move"

solution_farmer = bfs_farmer()

if solution_farmer:
    verbose_solution = [describe_step(solution_farmer[i-1], solution_farmer[i]) for i in range(1, len(solution_farmer))]
    for step in verbose_solution:
        print(step)
else:
    print("No solution found.")