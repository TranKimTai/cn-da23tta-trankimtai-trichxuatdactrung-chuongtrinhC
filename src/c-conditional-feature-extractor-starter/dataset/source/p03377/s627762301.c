int main(void) {
	int a, b, x;
	scanf("%d%d%d", &a, &b, &x);
	printf((a <= x && x <= a + b) ? "YES" : "NO");
}