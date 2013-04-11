(define (merge-sort l gt?)
  (define (merge left right)
    (cond
     ((null? left)
      right)
     ((null? right)
      left)
     ((gt? (car left) (car right))
      (cons (car right)
            (merge left (cdr right))))
     (else
      (cons (car left)
            (merge (cdr left) right)))))
  (define (take l n)
    (if (zero? n)
      (list)
      (cons (car l)
            (take (cdr l) (- n 1)))))
  (let ((half (quotient (length l) 2)))
    (if (zero? half)
      l
      (merge (merge-sort (take      l half) gt?)
             (merge-sort (list-tail l half) gt?)))))