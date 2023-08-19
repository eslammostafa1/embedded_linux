import subprocess 

choice = input('do you want to open you git repo? y(yes) n(no)')
if choice.lower() == 'y':
    subprocess.run(['code', 
                    '/home/eslam/embeddedLinux/workspace/embedded_linux/'])
