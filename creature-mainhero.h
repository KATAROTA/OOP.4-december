#ifdef creature_H
#define creature_H

#include <iostream>
#include <string>
#include "point2D.h"

class creature() {
	private:
		std::string m_name;
		Point2D m_location;
	publicL
		Creature(const std::string & name, const Point2D& location)
				:m_name(name), m_location(location) {
					
					
				}
				
				
		void moveTo(int x, int y) {
			m_location.setPoint(x, y)
		}
		friend std::ostream& operator << (std::ostream& out, const Creature& creature) {
			out << "(" << creature.m_name << "is at" << creature.m_location << ")";
			return out;
		}
		
	
	
	public:
};

#endif 





