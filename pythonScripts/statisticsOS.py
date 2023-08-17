import psutil
import datetime

process = psutil.Process()



print('number of logical CPUs in the system ')
print(psutil.cpu_count())

print('CPU statistics ')
print(psutil.cpu_stats())

print('system memory usage ')
print(psutil.virtual_memory())

print('all mounted disk partitions ')
print(psutil.disk_partitions())
 

print('disk usage statistics about the partition which contains the given path  ')
print(psutil.disk_usage('/'))


print('system-wide socket connections ')
print(psutil.net_connections())

print('addresses associated to each NIC ')
print(psutil.net_if_addrs())


print('hardware temperatures ')
print(psutil.sensors_temperatures())


print('system boot time expressed in seconds since the epoch ')
print(psutil.boot_time())
print(datetime.datetime.fromtimestamp(psutil.boot_time()).strftime("%Y-%m-%d %H:%M:%S"))

print('sorted list of current running PIDs. ')
print(psutil.pids())


print('oneshot data')
with process.oneshot():
    print(process.name())
    print(process.cpu_times())
    print(process.cpu_percent())
    print(process.create_time())
    print(process.ppid())
    print(process.gids())
    print(process.num_threads())
    print(process.memory_full_info())