#include <stdio.h>
#include <stdlib.h>

typedef enum {
	R_RPS_T = 0, /* Rock */
	P_RPS_T,     /* Paper */
	S_RPS_T      /* Scissors */
} rps_t;

void print_rps(rps_t x) {
	switch (x) {
	case R_RPS_T:
		printf("Rock"); break;
	case P_RPS_T:
		printf("Paper"); break;
	case S_RPS_T:
		printf("Scissors"); break;
	}
}

rps_t rps_win_d(rps_t x) {
	switch (x) {
	case R_RPS_T:
		return P_RPS_T;
	case P_RPS_T:
		return S_RPS_T;
	case S_RPS_T:
		return R_RPS_T;
	default:
		abort();
	}
}

#define PACK(X,Y) ((X)<<4 | (Y))

rps_t rps_even_d(rps_t x, rps_t y) {
	switch (PACK(x, y)) {
	case PACK(P_RPS_T, R_RPS_T):
	case PACK(S_RPS_T, P_RPS_T):
	case PACK(R_RPS_T, S_RPS_T):
		return rps_win_d(x);
	default:
		abort();
	}
}

int main() {
	rps_t paper_d = P_RPS_T;
	rps_t win_d = rps_win_d (paper_d);
	print_rps(win_d); printf(" win "); print_rps(paper_d); printf(".\n");
	/* => Scissors win Paper. */
	rps_t even_d = rps_even_d(win_d, paper_d);
	print_rps(even_d); printf(" is even between "); print_rps(win_d); printf(" and "); print_rps(paper_d); printf(".\n");
	/* => Rock is even between Scissors and Paper. */
}
