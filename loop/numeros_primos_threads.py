import threading
import time





class PRIMOS(threading.Thread):
    def __init__(self, lock,numero,):
        super(PRIMOS, self).__init__(daemon=True)
        self.lock     = lock
        self.numero = numero 
        
    
    
    def run(self):
            cont_resto = 1
            for divisor in range(1, self.numero):
                if self.numero  % divisor == 0:
                    cont_resto += 1
            if cont_resto == 2:
                print(f"{self.numero} é Primo")

def start_threads(lock, limit,numero,):
    threads = [PRIMOS(lock,numero,) for _ in range(limit)]
    for t in threads: t.start()
    return threads

def stop_threads(threads):
    for t in threads:
        t.join()
def main():
    limit = 1
    numero = 0
    try:
        while True:
            numero+=1
            threads = start_threads(threading.Lock(), limit,numero,)
            stop_threads(threads)
    except KeyboardInterrupt:
        print('Tchau :D')

if __name__ == '__main__':
    main()
