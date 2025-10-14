#ifndef _sun_java2d_marlin_DPathConsumer2D_h_
#define _sun_java2d_marlin_DPathConsumer2D_h_
//$ interface sun.java2d.marlin.DPathConsumer2D
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class DPathConsumer2D : public ::java::lang::Object {
	$interface(DPathConsumer2D, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void closePath() {}
	virtual void curveTo(double x1, double y1, double x2, double y2, double x3, double y3) {}
	virtual int64_t getNativeConsumer() {return 0;}
	virtual void lineTo(double x, double y) {}
	virtual void moveTo(double x, double y) {}
	virtual void pathDone() {}
	virtual void quadTo(double x1, double y1, double x2, double y2) {}
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DPathConsumer2D_h_