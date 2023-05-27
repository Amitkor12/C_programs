 if (cb->size == cb->capacity) {
            cb->head = (cb->head + 1) % cb->capacity;
    } else {