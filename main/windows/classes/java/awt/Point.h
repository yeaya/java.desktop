#ifndef _java_awt_Point_h_
#define _java_awt_Point_h_
//$ class java.awt.Point
//$ extends java.awt.geom.Point2D
//$ implements java.io.Serializable

#include <java/awt/geom/Point2D.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {

class $export Point : public ::java::awt::geom::Point2D, public ::java::io::Serializable {
	$class(Point, $NO_CLASS_INIT, ::java::awt::geom::Point2D, ::java::io::Serializable)
public:
	Point();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::awt::Point* p);
	void init$(int32_t x, int32_t y);
	virtual bool equals(Object$* obj) override;
	virtual ::java::awt::Point* getLocation();
	virtual double getX() override;
	virtual double getY() override;
	virtual void move(int32_t x, int32_t y);
	using ::java::awt::geom::Point2D::setLocation;
	virtual void setLocation(::java::awt::Point* p);
	virtual void setLocation(int32_t x, int32_t y);
	virtual void setLocation(double x, double y) override;
	virtual $String* toString() override;
	virtual void translate(int32_t dx, int32_t dy);
	int32_t x = 0;
	int32_t y = 0;
	static const int64_t serialVersionUID = (int64_t)0xB6C48A72347EC826;
};

	} // awt
} // java

#endif // _java_awt_Point_h_