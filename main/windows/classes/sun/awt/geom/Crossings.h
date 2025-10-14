#ifndef _sun_awt_geom_Crossings_h_
#define _sun_awt_geom_Crossings_h_
//$ class sun.awt.geom.Crossings
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace geom {
			class PathIterator;
		}
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class Crossings : public ::java::lang::Object {
	$class(Crossings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Crossings();
	void init$(double xlo, double ylo, double xhi, double yhi);
	virtual bool accumulateCubic(double x0, double y0, $doubles* coords);
	virtual bool accumulateLine(double x0, double y0, double x1, double y1);
	virtual bool accumulateLine(double x0, double y0, double x1, double y1, int32_t direction);
	virtual bool accumulateQuad(double x0, double y0, $doubles* coords);
	virtual bool covers(double ystart, double yend) {return false;}
	static ::sun::awt::geom::Crossings* findCrossings(::java::util::Vector* curves, double xlo, double ylo, double xhi, double yhi);
	static ::sun::awt::geom::Crossings* findCrossings(::java::awt::geom::PathIterator* pi, double xlo, double ylo, double xhi, double yhi);
	double getXHi();
	double getXLo();
	double getYHi();
	double getYLo();
	bool isEmpty();
	virtual void print();
	virtual void record(double ystart, double yend, int32_t direction) {}
	static const bool debug = false;
	int32_t limit = 0;
	$doubles* yranges = nullptr;
	double xlo = 0.0;
	double ylo = 0.0;
	double xhi = 0.0;
	double yhi = 0.0;
	::java::util::Vector* tmp = nullptr;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_Crossings_h_