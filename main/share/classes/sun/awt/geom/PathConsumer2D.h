#ifndef _sun_awt_geom_PathConsumer2D_h_
#define _sun_awt_geom_PathConsumer2D_h_
//$ interface sun.awt.geom.PathConsumer2D
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace geom {

class PathConsumer2D : public ::java::lang::Object {
	$interface(PathConsumer2D, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void closePath() {}
	virtual void curveTo(float x1, float y1, float x2, float y2, float x3, float y3) {}
	virtual int64_t getNativeConsumer() {return 0;}
	virtual void lineTo(float x, float y) {}
	virtual void moveTo(float x, float y) {}
	virtual void pathDone() {}
	virtual void quadTo(float x1, float y1, float x2, float y2) {}
};

		} // geom
	} // awt
} // sun

#endif // _sun_awt_geom_PathConsumer2D_h_