#ifndef _java_awt_geom_CubicCurve2D$Float_h_
#define _java_awt_geom_CubicCurve2D$Float_h_
//$ class java.awt.geom.CubicCurve2D$Float
//$ extends java.awt.geom.CubicCurve2D
//$ implements java.io.Serializable

#include <java/awt/geom/CubicCurve2D.h>
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

class $export CubicCurve2D$Float : public ::java::awt::geom::CubicCurve2D, public ::java::io::Serializable {
	$class(CubicCurve2D$Float, $NO_CLASS_INIT, ::java::awt::geom::CubicCurve2D, ::java::io::Serializable)
public:
	CubicCurve2D$Float();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(float x1, float y1, float ctrlx1, float ctrly1, float ctrlx2, float ctrly2, float x2, float y2);
	virtual ::java::awt::geom::Rectangle2D* getBounds2D() override;
	virtual ::java::awt::geom::Point2D* getCtrlP1() override;
	virtual ::java::awt::geom::Point2D* getCtrlP2() override;
	virtual double getCtrlX1() override;
	virtual double getCtrlX2() override;
	virtual double getCtrlY1() override;
	virtual double getCtrlY2() override;
	virtual ::java::awt::geom::Point2D* getP1() override;
	virtual ::java::awt::geom::Point2D* getP2() override;
	virtual double getX1() override;
	virtual double getX2() override;
	virtual double getY1() override;
	virtual double getY2() override;
	using ::java::awt::geom::CubicCurve2D::setCurve;
	virtual void setCurve(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2) override;
	virtual void setCurve(float x1, float y1, float ctrlx1, float ctrly1, float ctrlx2, float ctrly2, float x2, float y2);
	virtual $String* toString() override;
	float x1 = 0.0;
	float y1 = 0.0;
	float ctrlx1 = 0.0;
	float ctrly1 = 0.0;
	float ctrlx2 = 0.0;
	float ctrly2 = 0.0;
	float x2 = 0.0;
	float y2 = 0.0;
	static const int64_t serialVersionUID = (int64_t)0xEE58E48DE11746DF;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_CubicCurve2D$Float_h_