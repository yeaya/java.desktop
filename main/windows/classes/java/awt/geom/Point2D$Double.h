#ifndef _java_awt_geom_Point2D$Double_h_
#define _java_awt_geom_Point2D$Double_h_
//$ class java.awt.geom.Point2D$Double
//$ extends java.awt.geom.Point2D
//$ implements java.io.Serializable

#include <java/awt/geom/Point2D.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace geom {

class $export Point2D$Double : public ::java::awt::geom::Point2D, public ::java::io::Serializable {
	$class(Point2D$Double, $NO_CLASS_INIT, ::java::awt::geom::Point2D, ::java::io::Serializable)
public:
	Point2D$Double();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(double x, double y);
	virtual double getX() override;
	virtual double getY() override;
	using ::java::awt::geom::Point2D::setLocation;
	virtual void setLocation(double x, double y) override;
	virtual $String* toString() override;
	double x = 0.0;
	double y = 0.0;
	static const int64_t serialVersionUID = (int64_t)0x555BF8CA09A31D5F;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Point2D$Double_h_