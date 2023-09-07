import socket

srv = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
ip=socket.gethostbyname(socket.gethostname())
print('your ip is : '+ip)
print("----------------------------")
srv.bind((ip,5000))
srv.listen(5)
while True:
    client, address= srv.accept()
    rodata= client.recv(1024)
    print(f"{address} is sending to you this message {rodata.decode('UTF-8')}")
    print("----------------------------")
    msg=str(input('please enter the message you want to send: '))
    msg_enc=msg.encode('UTF-8')
    client.close()