#include <stdio.h>
#include "pico/stdlib.h"

void float_mul_gr_0_test(uint32_t iterations) {
	volatile float a = 100000.0f;
	iterations = iterations;
	uint32_t time_start = time_us_32();
	for (uint32_t i = 0; i < iterations; i++) { a *= 1.00001f; }
	uint32_t time_end = time_us_32();
	float time_taken = (float)(time_end - time_start) / 1000000.0f;
	float output = a;
	float iterations_per_second = (float)iterations / time_taken;
	printf("multiplication greater than zero test:\n");
	printf("output (should be 271826.824): %f\n", output);
	printf("time_taken: %f\n", time_taken);
	// printf("time per operation: %f\n", time_taken / (double)iterations);
	// printf("iterations: %d\n", iterations);
	printf("iterations_per_second: %f\n", iterations_per_second);
	printf("\n");
}

void float_mul_ls_0_test(uint32_t iterations) {
	volatile float a = 100000.0f;
	iterations = iterations;
	uint32_t time_start = time_us_32();
	for (uint32_t i = 0; i < iterations; i++) { a *= 0.99999f; }
	uint32_t time_end = time_us_32();
	float time_taken = (float)(time_end - time_start) / 1000000.0f;
	float output = a;
	float iterations_per_second = (float)iterations / time_taken;
	printf("multiplication less than zero test:\n");
	printf("output (should be 36787.76): %f\n", output);
	printf("time_taken: %f\n", time_taken);
	// printf("time per operation: %f\n", time_taken / (double)iterations);
	// printf("iterations: %d\n", iterations);
	printf("iterations_per_second: %f\n", iterations_per_second);
	printf("\n");
}

void float_div_ls_0_test(uint32_t iterations) {
	volatile float a = 100000.0f;
	iterations = iterations;
	uint32_t time_start = time_us_32();
	for (uint32_t i = 0; i < iterations; i++) { a /= 0.99999f; }
	uint32_t time_end = time_us_32();
	float time_taken = (float)(time_end - time_start) / 1000000.0f;
	float output = a;
	float iterations_per_second = (float)iterations / time_taken;
	printf("division less than zero test:\n");
	printf("output (should be 149182.589): %f\n", output);
	printf("time_taken: %f\n", time_taken);
	// printf("time per operation: %f\n", time_taken / (double)iterations);
	// printf("iterations: %d\n", iterations);
	printf("iterations_per_second: %f\n", iterations_per_second);
	printf("\n");
}

void float_div_gr_0_test(uint32_t iterations) {
	volatile float a = 100000.0f;
	iterations = iterations;
	uint32_t time_start = time_us_32();
	for (uint32_t i = 0; i < iterations; i++) { a /= 1.0001f; }
	uint32_t time_end = time_us_32();
	float time_taken = (float)(time_end - time_start) / 1000000.0f;
	float output = a;
	float iterations_per_second = (float)iterations / time_taken;
	printf("division greater than zero test:\n");
	printf("output (should be 4.542): %f\n", output);
	printf("time_taken: %f\n", time_taken);
	// printf("time per operation: %f\n", time_taken / (double)iterations);
	// printf("iterations: %d\n", iterations);
	printf("iterations_per_second: %f\n", iterations_per_second);
	printf("\n");
}

void float_add_gr_0_test(uint32_t iterations) {
	volatile float a = 100000.0f;
	iterations = iterations;
	uint32_t time_start = time_us_32();
	for (uint32_t i = 0; i < iterations; i++) { a += 0.005f; }
	uint32_t time_end = time_us_32();
	float time_taken = (float)(time_end - time_start) / 1000000.0f;
	float output = a;
	float iterations_per_second = (float)iterations / time_taken;
	printf("addition greater than zero test:\n");
	printf("output (should be 100500.0): %f\n", output);
	printf("time_taken: %f\n", time_taken);
	// printf("time per operation: %f\n", time_taken / (double)iterations);
	// printf("iterations: %d\n", iterations);
	printf("iterations_per_second: %f\n", iterations_per_second);
	printf("\n");
}

void float_add_ls_0_test(uint32_t iterations) {
	volatile float a = 100000.0f;
	iterations = iterations;
	uint32_t time_start = time_us_32();
	for (uint32_t i = 0; i < iterations; i++) { a -= 0.005f; }
	uint32_t time_end = time_us_32();
	float time_taken = (float)(time_end - time_start) / 1000000.0f;
	float output = a;
	float iterations_per_second = (float)iterations / time_taken;
	printf("addition less than zero test:\n");
	printf("output (should be 99500.0): %f\n", output);
	printf("time_taken: %f\n", time_taken);
	// printf("time per operation: %f\n", time_taken / (double)iterations);
	// printf("iterations: %d\n", iterations);
	printf("iterations_per_second: %f\n", iterations_per_second);
	printf("\n");
}

int main()
{
	set_sys_clock_khz(250000, true);
    stdio_init_all();
    
	sleep_ms(3000);

	float_mul_gr_0_test(100000);
	float_mul_ls_0_test(100000);
	float_div_gr_0_test(100000);
	float_div_ls_0_test(100000);
	float_add_gr_0_test(100000);
	float_add_ls_0_test(100000);

    return 0;
}
