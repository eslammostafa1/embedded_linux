import os

for name, value in os.environ.items():
    print('{}: {}'.format(name, value))
    