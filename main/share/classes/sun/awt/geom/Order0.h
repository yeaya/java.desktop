#ifndef _sun_awt_geom_Order0_h_
#define _sun_awt_geom_Order0_h_
//$ class sun.awt.geom.Order0
//$ extends sun.awt.geom.Curve

#include <java/lang/Array.h>
#include <sun/awt/geom/Curve.h>

namespace java {
	namespace awt {
		namespace geom {
			class Rectangle2D;
		}
	}
}
namespace sun {
	namespace awt {
		namespace geom {
			class Crossings;
		}
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class Order0 : public ::sun::awt::geom::Curve {
	$class(Order0, $NO_CLASS_INIT, ::sun::awt::geom::Curve)
public:
	Order0();
	using ::sun::awt::geom::Curve::getSubCurve;
	void init$(double x, double y);
	virtual double TforY(double y) override;
	virtual double XforT(double t) override;
	virtual double XforY(double y) override;
	virtual double YforT(double t) override;
	virtual bool accumulateCrossings(::sun::awt::geom::Crossings* c) override;
	virtual int32_t crossingsFor(double x, double y) override;
	virtual double dXforT(double t, int32_t deriv) override;
	virtual double dYforT(double t, int32_t deriv) override;
	virtual void enlarge(::java::awt::geom::Rectangle2D* r) override;
	virtual int32_t getOrder() override;
	virtual ::sun::awt::geom::Curve* getReversedCurve() override;
	virtual int32_t getSegment($doubles* coords) override;
	virtual ::sun::awt::geom::Curve* getSubCurve(double ystart, double yend, int32_t dir) override;
	virtual double getX0() override;
	virtual double getX1() override;
	virtual double getXBot() override;
	virtual double getXMax() override;
	virtual double getXMin() override;
	virtual double getXTop() override;
	virtual double getY0() override;
	virtual double getY1() override;
	virtual double getYBot() override;
	virtual double getYTop() override;
	virtual double nextVertical(double t0, double t1) override;
	double x = 0.0;
	double y = 0.0;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_Order0_h_