#ifndef _sun_awt_geom_Order2_h_
#define _sun_awt_geom_Order2_h_
//$ class sun.awt.geom.Order2
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
namespace java {
	namespace util {
		class Vector;
	}
}

namespace sun {
	namespace awt {
		namespace geom {

class Order2 : public ::sun::awt::geom::Curve {
	$class(Order2, $NO_CLASS_INIT, ::sun::awt::geom::Curve)
public:
	Order2();
	using ::sun::awt::geom::Curve::getSubCurve;
	void init$(double x0, double y0, double cx0, double cy0, double x1, double y1, int32_t direction);
	virtual double TforY(double y) override;
	static double TforY(double y, double ycoeff0, double ycoeff1, double ycoeff2);
	virtual double XforT(double t) override;
	virtual double XforY(double y) override;
	virtual double YforT(double t) override;
	static void addInstance(::java::util::Vector* curves, double x0, double y0, double cx0, double cy0, double x1, double y1, int32_t direction);
	virtual $String* controlPointString() override;
	virtual double dXforT(double t, int32_t deriv) override;
	virtual double dYforT(double t, int32_t deriv) override;
	virtual void enlarge(::java::awt::geom::Rectangle2D* r) override;
	double getCX0();
	double getCY0();
	static int32_t getHorizontalParams(double c0, double cp, double c1, $doubles* ret);
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
	static void insert(::java::util::Vector* curves, $doubles* tmp, double x0, double y0, double cx0, double cy0, double x1, double y1, int32_t direction);
	virtual double nextVertical(double t0, double t1) override;
	static void split($doubles* coords, int32_t pos, double t);
	double x0 = 0.0;
	double y0 = 0.0;
	double cx0 = 0.0;
	double cy0 = 0.0;
	double x1 = 0.0;
	double y1 = 0.0;
	double xmin = 0.0;
	double xmax = 0.0;
	double xcoeff0 = 0.0;
	double xcoeff1 = 0.0;
	double xcoeff2 = 0.0;
	double ycoeff0 = 0.0;
	double ycoeff1 = 0.0;
	double ycoeff2 = 0.0;
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_Order2_h_