from collections import deque

class State:
    def __init__(self, missionaries_left, cannibals_left, boat, missionaries_right, cannibals_right):
        self.missionaries_left = missionaries_left
        self.cannibals_left = cannibals_left
        self.boat = boat
        self.missionaries_right = missionaries_right
        self.cannibals_right = cannibals_right

    def is_valid(self):
        # Check if the state is valid
        if (self.missionaries_left < 0 or self.cannibals_left < 0 or
            self.missionaries_right < 0 or self.cannibals_right < 0 or
            (self.missionaries_left != 0 and self.missionaries_left < self.cannibals_left) or
            (self.missionaries_right != 0 and self.missionaries_right < self.cannibals_right)):
            return False
        return True

    def is_goal(self):
        # Check if the state is the goal state
        return self.missionaries_left == 0 and self.cannibals_left == 0

    def __eq__(self, other):
        return (self.missionaries_left == other.missionaries_left and
                self.cannibals_left == other.cannibals_left and
                self.boat == other.boat and
                self.missionaries_right == other.missionaries_right and
                self.cannibals_right == other.cannibals_right)

    def __hash__(self):
        return hash((self.missionaries_left, self.cannibals_left, self.boat, self.missionaries_right, self.cannibals_right))

def get_next_states(current_state):
    states = []

    # Possible boat passengers: 0, 1, or 2 people
    for missionaries in range(3):
        for cannibals in range(3):
            if 0 < missionaries + cannibals <= 2:
                # Calculate new state based on passengers in the boat
                if current_state.boat == 'left':
                    new_state = State(
                        current_state.missionaries_left - missionaries,
                        current_state.cannibals_left - cannibals,
                        'right',
                        current_state.missionaries_right + missionaries,
                        current_state.cannibals_right + cannibals
                    )
                else:
                    new_state = State(
                        current_state.missionaries_left + missionaries,
                        current_state.cannibals_left + cannibals,
                        'left',
                        current_state.missionaries_right - missionaries,
                        current_state.cannibals_right - cannibals
                    )

                # Check if the new state is valid and add to the list of possible next states
                if new_state.is_valid():
                    states.append(new_state)

    return states

def bfs():
    initial_state = State(3, 3, 'left', 0, 0)
    goal_state = State(0, 0, 'right', 3, 3)

    queue = deque([([initial_state], [])])

    while queue:
        path, actions = queue.popleft()
        current_state = path[-1]

        if current_state.is_goal():
            return path, actions

        for next_state in get_next_states(current_state):
            if next_state not in path:
                queue.append((path + [next_state], actions + [(next_state.boat, next_state.missionaries_left, next_state.cannibals_left)]))

    return None, None

def print_solution(path, actions):
    for i in range(len(path)):
        state = path[i]
        action = actions[i] if i < len(actions) else None

        print(f"Step {i + 1}:")
        print(f"Missionaries Left: {state.missionaries_left}, Cannibals Left: {state.cannibals_left}, Boat: {state.boat}")
        print(f"Missionaries Right: {state.missionaries_right}, Cannibals Right: {state.cannibals_right}")
        if action:
            print(f"Action: Move {action[1]} missionaries and {action[2]} cannibals to the {action[0]} side.")
        print()

def main():
    path, actions = bfs()

    if path:
        print("Solution found:")
        print_solution(path, actions)
    else:
        print("No solution found.")

if __name__ == "__main__":
    main()

    