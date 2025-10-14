#ifndef _java_awt_geom_Line2D$Float_h_
#define _java_awt_geom_Line2D$Float_h_
//$ class java.awt.geom.Line2D$Float
//$ extends java.awt.geom.Line2D
//$ implements java.io.Serializable

#include <java/awt/geom/Line2D.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace geom {
			class Point2D;
			class Rectangle2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $import Line2D$Float : public ::java::awt::geom::Line2D, public ::java::io::Serializable {
	$class(Line2D$Float, $NO_CLASS_INIT, ::java::awt::geom::Line2D, ::java::io::Serializable)
public:
	Line2D$Float();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(float x1, float y1, float x2, float y2);
	void init$(::java::awt::geom::Point2D* p1, ::java::awt::geom::Point2D* p2);
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual ::java::awt::geom::Point2D* getP1() override;
	virtual ::java::awt::geom::Point2D* getP2() override;
	virtual double getX1() override;
	virtual double getX2() override;
	virtual double getY1() override;
	virtual double getY2() override;
	using ::java::awt::geom::Line2D::setLine;
	virtual void setLine(double x1, double y1, double x2, double y2) override;
	virtual void setLine(float x1, float y1, float x2, float y2);
	virtual $String* toString() override;
	float x1 = 0.0;
	float y1 = 0.0;
	float x2 = 0.0;
	float y2 = 0.0;
	static const int64_t serialVersionUID = (int64_t)0x55830373EFA192BD;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Line2D$Float_h_