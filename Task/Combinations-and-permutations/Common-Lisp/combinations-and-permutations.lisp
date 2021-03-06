(defun combinations (n k)
  (cond ((or (< n k) (< k 0) (< n 0)) 0)
	((= k 0) 1)
	(t (do* ((i 1 (1+ i))
		 (m n (1- m))
		 (a m (* a m))
		 (b i (* b i)))
	       ((= i k) (/ a b))))))

(defun permutations (n k)
  (cond ((or (< n k) (< k 0) (< n 0)) 0)
	((= k 0) 1)
	(t (do* ((i 1 (1+ i))
		 (m n (1- m))
		 (a m (* a m)))
	       ((= i k) a)))))
