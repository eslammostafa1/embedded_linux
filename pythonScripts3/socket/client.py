import socket

client = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
ip=socket.gethostbyname(socket.gethostname())
print('your ip is : '+ip)
client.connect((ip,5000))
print("----------------------------")

while True:
    msg=str(input('please enter the message you want to send: '))
    msg_enc=msg.encode('UTF-8')
    client.send(msg_enc)
    print("----------------------------")
    rodata= client.recv(1024)
    print(f"{ip} is sending to you this message {rodata.decode('UTF-8')}")
    client.close()