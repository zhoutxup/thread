#pragma once

#include <pthread.h>

namespace yazi {
namespace thread {
    class Mutex {
        public:
            Mutex();
            ~Mutex();
            int try_lock();
            int lock();
            int unlock();
        private:
            pthread_mutex_t m_mutex;
    };
}
}