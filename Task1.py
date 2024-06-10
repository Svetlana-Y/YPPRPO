import subprocess
import csv


def ping(host):
    command = ["ping", "-n", "1", host]
    result = subprocess.Popen(command, shell=True, stdout=subprocess.PIPE)
    result = result.stdout.read().decode('cp866')
    return result

def check_answer_ping(pingResult):
    return pingResult[8][9:] == 'Ответ'

with open('data.csv', 'w', newline='') as csvfile:
    listOfHosts = ["1", "ya.ru", "ru.wikipedia.org", "amazon.com", "youtube.com", "microsoft.com", "zoom.us", "spotify.com", "bbc.com", "cnn.com"]
    writer = csv.writer(csvfile, delimiter=';')
    writer.writerow(['NameOfPing', 'IP', 'Size', 'Time', 'CountOfPackages'])

    for host in listOfHosts:
        pingResult = ping(host)
        dividePingResult = pingResult.split(" ")

        if check_answer_ping(dividePingResult):
            writer.writerow([dividePingResult[3]] + [dividePingResult[4][1:-1]] + [dividePingResult[6]] + [dividePingResult[13][6:-2]] + [dividePingResult[24][:1]])
