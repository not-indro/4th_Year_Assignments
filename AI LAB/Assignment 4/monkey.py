class Monkey:
    def __init__(self):
        self.position = 'entrance'
        self.box_position = 'window'
        self.banana_position = 'center'
        self.on_box = False

    def walk_to_box(self):
        print("Monkey walks towards the box.")
        self.position = self.box_position

    def push_box_to_center(self):
        print("Monkey pushes the box towards the center.")
        self.position = 'entrance'
        self.position = True

    def climb_box(self):
        print("Monkey climbs the box.")
        self.box_position = 'center'

        self.on_box = True


    def align_with_banana(self):
        print("Monkey aligns itself with the banana.")

    def grasp_banana(self):
        print("Monkey grasps the banana.")

    def obtain_banana(self):
        if self.position == 'entrance':
            self.walk_to_box()

        self.climb_box()

        if self.position != 'center':
            self.push_box_to_center()

        self.align_with_banana()
        self.grasp_banana()

# Create a Monkey instance
monkey = Monkey()

# Execute the strategy to obtain the banana
monkey.obtain_banana()
