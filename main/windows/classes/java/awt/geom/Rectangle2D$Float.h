#ifndef _java_awt_geom_Rectangle2D$Float_h_
#define _java_awt_geom_Rectangle2D$Float_h_
//$ class java.awt.geom.Rectangle2D$Float
//$ extends java.awt.geom.Rectangle2D
//$ implements java.io.Serializable

#include <java/awt/geom/Rectangle2D.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		namespace geom {

class $export Rectangle2D$Float : public ::java::awt::geom::Rectangle2D, public ::java::io::Serializable {
	$class(Rectangle2D$Float, $NO_CLASS_INIT, ::java::awt::geom::Rectangle2D, ::java::io::Serializable)
public:
	Rectangle2D$Float();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::geom::Rectangle2D::contains;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(float x, float y, float w, float h);
	virtual ::java::awt::geom::Rectangle2D* createIntersection(::java::awt::geom::Rectangle2D* r) override;
	virtual ::java::awt::geom::Rectangle2D* createUnion(::java::awt::geom::Rectangle2D* r) override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual double getHeight() override;
	virtual double getWidth() override;
	virtual double getX() override;
	virtual double getY() override;
	using ::java::awt::geom::Rectangle2D::intersects;
	virtual bool isEmpty() override;
	using ::java::awt::geom::Rectangle2D::outcode;
	virtual int32_t outcode(double x, double y) override;
	using ::java::awt::geom::Rectangle2D::setFrame;
	virtual void setRect(float x, float y, float w, float h);
	virtual void setRect(double x, double y, double w, double h) override;
	virtual void setRect(::java::awt::geom::Rectangle2D* r) override;
	virtual $String* toString() override;
	float x = 0.0;
	float y = 0.0;
	float width = 0.0;
	float height = 0.0;
	static const int64_t serialVersionUID = (int64_t)0x34B7C0D33B2C0501;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_Rectangle2D$Float_h_