#ifndef _java_awt_geom_CubicCurve2D$Double_h_
#define _java_awt_geom_CubicCurve2D$Double_h_
//$ class java.awt.geom.CubicCurve2D$Double
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

class $import CubicCurve2D$Double : public ::java::awt::geom::CubicCurve2D, public ::java::io::Serializable {
	$class(CubicCurve2D$Double, $NO_CLASS_INIT, ::java::awt::geom::CubicCurve2D, ::java::io::Serializable)
public:
	CubicCurve2D$Double();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(double x1, double y1, double ctrlx1, double ctrly1, double ctrlx2, double ctrly2, double x2, double y2);
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
	virtual $String* toString() override;
	double x1 = 0.0;
	double y1 = 0.0;
	double ctrlx1 = 0.0;
	double ctrly1 = 0.0;
	double ctrlx2 = 0.0;
	double ctrly2 = 0.0;
	double x2 = 0.0;
	double y2 = 0.0;
	static const int64_t serialVersionUID = (int64_t)0xC5AC16095901D161;
};

		} // geom
	} // awt
} // java

#endif // _java_awt_geom_CubicCurve2D$Double_h_