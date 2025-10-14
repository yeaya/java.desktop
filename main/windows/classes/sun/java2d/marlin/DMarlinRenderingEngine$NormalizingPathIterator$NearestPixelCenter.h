#ifndef _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_h_
#define _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_h_
//$ class sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter
//$ extends sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator

#include <java/lang/Array.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter : public ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator {
	$class(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter, $NO_CLASS_INIT, ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator)
public:
	DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter();
	void init$($doubles* tmp);
	virtual double normCoord(double coord) override;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelCenter_h_