#ifndef _java_awt_geom_RoundRectangle2D$Double_h_
#define _java_awt_geom_RoundRectangle2D$Double_h_
//$ class java.awt.geom.RoundRectangle2D$Double
//$ extends java.awt.geom.RoundRectangle2D
//$ implements java.io.Serializable

#include <java/awt/geom/RoundRectangle2D.h>
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

class $import RoundRectangle2D$Double : public ::java::awt::geom::RoundRectangle2D, public ::java::io::Serializable {
	$class(RoundRectangle2D$Double, $NO_CLASS_INIT, ::java::awt::geom::RoundRectangle2D, ::java::io::Serializable)
public:
	RoundRectangle2D$Double();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::awt::geom::RoundRectangle2D::contains;
	using ::java::awt::geom::RoundRectangle2D::getPathIterator;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(double x, double y, double w, double h, double arcw, double arch);
	virtual double getArcHeight() override;
	virtual double getArcWidth() override;
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual double getHeight() override;
	virtual double getWidth() override;
	virtual double getX() override;
	virtual double getY() override;
	using ::java::awt::geom::RoundRectangle2D::intersects;
	virtual bool isEmpty() override;
	using ::java::awt::geom::RoundRectangle2D::setFrame;
	virtual void setRoundRect(double x, double y, double w, double h, double arcw, double arch) override;
	virtual void setRoundRect(::java::awt::geom::RoundRectangle2D* rr) override;
	virtual $String* toString() override;
	double x = 0.0;
	double y = 0.0;
	double width = 0.0;
	double height = 0.0;
	double arcwidth = 0.0;
	double archeight = 0.0;
	static const int64_t serialVersionUID = (int64_t)0x0E8E94C42B521A65;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_RoundRectangle2D$Double_h_