#ifndef _java_awt_geom_Ellipse2D$Float_h_
#define _java_awt_geom_Ellipse2D$Float_h_
//$ class java.awt.geom.Ellipse2D$Float
//$ extends java.awt.geom.Ellipse2D
//$ implements java.io.Serializable

#include <java/awt/geom/Ellipse2D.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}

namespace java {
	namespace awt {
		namespace geom {

class $export Ellipse2D$Float : public ::java::awt::geom::Ellipse2D, public ::java::io::Serializable {
	$class(Ellipse2D$Float, $NO_CLASS_INIT, ::java::awt::geom::Ellipse2D, ::java::io::Serializable)
public:
	Ellipse2D$Float();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::geom::Ellipse2D::contains;
	using ::java::awt::geom::Ellipse2D::getPathIterator;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(float x, float y, float w, float h);
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual double getHeight() override;
	virtual double getWidth() override;
	virtual double getX() override;
	virtual double getY() override;
	using ::java::awt::geom::Ellipse2D::intersects;
	virtual bool isEmpty() override;
	using ::java::awt::geom::Ellipse2D::setFrame;
	virtual void setFrame(float x, float y, float w, float h);
	virtual void setFrame(double x, double y, double w, double h) override;
	virtual $String* toString() override;
	float x = 0.0;
	float y = 0.0;
	float width = 0.0;
	float height = 0.0;
	static const int64_t serialVersionUID = (int64_t)0xA3F02549C3968FB7;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Ellipse2D$Float_h_