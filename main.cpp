#include <iostream>
#include <string>

using namespace std;
class Point2D {
	private:
		int mx;
		int my;
	public:
		Point2D()
			:mx(0), my(0) {}
			
		Point2D(int x, int y)
			:mx(x), my(y) {}
		~Point2D() {
			cout << "point is destruct" << endl;
		}
			
			
		void setPoint(int x, int y){
		mx =x;
		my =y;
	}
		
		
		friend std::ostream& operator << (std::ostream& out, const Point2D& point) {
			out << "(" << point.mx << "," << point.my << ")";
			return out;
		}
		
};

class Creature {
	private:
		std::string m_name;
		Point2D m_location;
	public:
		Creature(const std::string & name, const Point2D& location)
				:m_name(name), m_location(location) {
					
					
				}
				
		~Creature() {
			cout << "creature is destruct" << endl;
		}
			
				
		void moveTo(int x, int y) {
			m_location.setPoint(x, y);
		}
		friend std::ostream& operator << (std::ostream& out, const Creature& creature) {
			out << "(" << creature.m_name << " is at " << creature.m_location << ")";
			return out;
		}
		
	
	
	
};

int main() {
	cout << "Input your name: " << endl;
	string name;
	cin >> name;
	Creature p1 (name, Point2D(5, 7));
	cout << p1 << endl;
	
}


