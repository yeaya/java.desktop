#ifndef _java_awt_geom_Point2D$Float_h_
#define _java_awt_geom_Point2D$Float_h_
//$ class java.awt.geom.Point2D$Float
//$ extends java.awt.geom.Point2D
//$ implements java.io.Serializable

#include <java/awt/geom/Point2D.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace geom {

class $export Point2D$Float : public ::java::awt::geom::Point2D, public ::java::io::Serializable {
	$class(Point2D$Float, $NO_CLASS_INIT, ::java::awt::geom::Point2D, ::java::io::Serializable)
public:
	Point2D$Float();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(float x, float y);
	virtual double getX() override;
	virtual double getY() override;
	using ::java::awt::geom::Point2D::setLocation;
	virtual void setLocation(double x, double y) override;
	virtual void setLocation(float x, float y);
	virtual $String* toString() override;
	float x = 0.0;
	float y = 0.0;
	static const int64_t serialVersionUID = (int64_t)0xD829AD90DABAE342;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Point2D$Float_h_