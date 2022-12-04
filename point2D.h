#ifdef POINT2D_H
#define POINT2D_H

#include <sstream>

class Point2D {
	private:
		int mx;
		int my;
	public:
		Point2D()
			:mx(0), my(0) {}
			
		Point2D(int x, int y)
			:mx(x), my(y) {}
			
			
		void setPoint(int x, int y){
		mx =x;
		my =y;
	}
		
		
		friend std::ostream& operator << (std::ostream& out, const Point2D& point) {
			out << "(" << point.mx << "," << point.my << ")";
			return out;
		}
		
};

#endif //POINT2_H
