#ifndef _java_awt_geom_Point2D_h_
#define _java_awt_geom_Point2D_h_
//$ class java.awt.geom.Point2D
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

namespace java {
	namespace awt {
		namespace geom {

class $export Point2D : public ::java::lang::Cloneable {
	$class(Point2D, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	Point2D();
	void init$();
	virtual $Object* clone() override;
	static double distance(double x1, double y1, double x2, double y2);
	virtual double distance(double px, double py);
	virtual double distance(::java::awt::geom::Point2D* pt);
	static double distanceSq(double x1, double y1, double x2, double y2);
	virtual double distanceSq(double px, double py);
	virtual double distanceSq(::java::awt::geom::Point2D* pt);
	virtual bool equals(Object$* obj) override;
	virtual double getX() {return 0.0;}
	virtual double getY() {return 0.0;}
	virtual int32_t hashCode() override;
	virtual void setLocation(double x, double y) {}
	virtual void setLocation(::java::awt::geom::Point2D* p);
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Point2D_h_