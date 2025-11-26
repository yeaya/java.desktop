#ifndef _sun_java2d_marlin_CollinearSimplifier_h_
#define _sun_java2d_marlin_CollinearSimplifier_h_
//$ class sun.java2d.marlin.CollinearSimplifier
//$ extends sun.java2d.marlin.DPathConsumer2D

#include <sun/java2d/marlin/DPathConsumer2D.h>

#pragma push_macro("EPS")
#undef EPS

namespace sun {
	namespace java2d {
		namespace marlin {
			class CollinearSimplifier$SimplifierState;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class CollinearSimplifier : public ::sun::java2d::marlin::DPathConsumer2D {
	$class(CollinearSimplifier, 0, ::sun::java2d::marlin::DPathConsumer2D)
public:
	CollinearSimplifier();
	void init$();
	virtual void closePath() override;
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) override;
	void emitStashedLine();
	virtual int64_t getNativeConsumer() override;
	static double getSlope(double x1, double y1, double x2, double y2);
	::sun::java2d::marlin::CollinearSimplifier* init(::sun::java2d::marlin::DPathConsumer2D* delegate);
	virtual void lineTo(double x, double y) override;
	virtual void moveTo(double x, double y) override;
	virtual void pathDone() override;
	virtual void quadTo(double x1, double y1, double x2, double y2) override;
	static double EPS;
	::sun::java2d::marlin::DPathConsumer2D* delegate = nullptr;
	::sun::java2d::marlin::CollinearSimplifier$SimplifierState* state = nullptr;
	double px1 = 0.0;
	double py1 = 0.0;
	double px2 = 0.0;
	double py2 = 0.0;
	double pslope = 0.0;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("EPS")

#endif // _sun_java2d_marlin_CollinearSimplifier_h_