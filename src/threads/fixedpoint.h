#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

typedef int fixed_point_t;

#define F (1 << 16)

#define fix_int(n) (n * F)
#define fix_trunc(x) (x / F)
#define fix_round(x) (x >= 0 ? (( x + F / 2) / F) : (( x - F / 2) / F))

#define fix_add(x,y) (x + y)
#define fix_sub(x,y) (x - y)
#define fix_add_int(x,n) (x + fix_int(n))
#define fix_sub_int(x,n) (x - fix_int(n))
#define fix_mul(x,y) (((int64_t) x) * y / F)
#define fix_scale(x,n) (x * n)
#define fix_unscale(x,n) (x / n)
#define fix_div(x,y) (((int64_t) x) * F / y)

#endif
