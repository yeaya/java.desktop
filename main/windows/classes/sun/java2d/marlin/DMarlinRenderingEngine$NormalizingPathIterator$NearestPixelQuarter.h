#ifndef _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_h_
#define _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_h_
//$ class sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter
//$ extends sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator

#include <java/lang/Array.h>
#include <sun/java2d/marlin/DMarlinRenderingEngine$NormalizingPathIterator.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter : public ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator {
	$class(DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter, $NO_CLASS_INIT, ::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator)
public:
	DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter();
	void init$($doubles* tmp);
	virtual double normCoord(double coord) override;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator$NearestPixelQuarter_h_