class Coordinate {
private:
	int x;
	int y;
public:
	static int count;
	Coordinate();
	void set_x(int);
	void set_y(int);
	void set_xy(int, int);
	int get_x(void);
	int get_y(void);
	int getDiff(void);
};
