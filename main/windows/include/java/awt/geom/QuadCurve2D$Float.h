#ifndef _java_awt_geom_QuadCurve2D$Float_h_
#define _java_awt_geom_QuadCurve2D$Float_h_
//$ class java.awt.geom.QuadCurve2D$Float
//$ extends java.awt.geom.QuadCurve2D
//$ implements java.io.Serializable

#include <java/awt/geom/QuadCurve2D.h>
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

class $import QuadCurve2D$Float : public ::java::awt::geom::QuadCurve2D, public ::java::io::Serializable {
	$class(QuadCurve2D$Float, $NO_CLASS_INIT, ::java::awt::geom::QuadCurve2D, ::java::io::Serializable)
public:
	QuadCurve2D$Float();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(float x1, float y1, float ctrlx, float ctrly, float x2, float y2);
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual ::java::awt::geom::Point2D* getCtrlPt() override;
	virtual double getCtrlX() override;
	virtual double getCtrlY() override;
	virtual ::java::awt::geom::Point2D* getP1() override;
	virtual ::java::awt::geom::Point2D* getP2() override;
	virtual double getX1() override;
	virtual double getX2() override;
	virtual double getY1() override;
	virtual double getY2() override;
	using ::java::awt::geom::QuadCurve2D::setCurve;
	virtual void setCurve(double x1, double y1, double ctrlx, double ctrly, double x2, double y2) override;
	virtual void setCurve(float x1, float y1, float ctrlx, float ctrly, float x2, float y2);
	virtual $String* toString() override;
	float x1 = 0.0;
	float y1 = 0.0;
	float ctrlx = 0.0;
	float ctrly = 0.0;
	float x2 = 0.0;
	float y2 = 0.0;
	static const int64_t serialVersionUID = (int64_t)0x89E22F3E1292EC87;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_QuadCurve2D$Float_h_