#ifndef _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator_h_
#define _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator_h_
//$ class sun.java2d.marlin.DMarlinRenderingEngine$NormalizingPathIterator
//$ extends java.awt.geom.PathIterator

#include <java/awt/geom/PathIterator.h>
#include <java/lang/Array.h>

namespace sun {
	namespace java2d {
		namespace marlin {

class DMarlinRenderingEngine$NormalizingPathIterator : public ::java::awt::geom::PathIterator {
	$class(DMarlinRenderingEngine$NormalizingPathIterator, $NO_CLASS_INIT, ::java::awt::geom::PathIterator)
public:
	DMarlinRenderingEngine$NormalizingPathIterator();
	void init$($doubles* tmp);
	virtual int32_t currentSegment($doubles* coords) override;
	virtual int32_t currentSegment($floats* coords) override;
	void dispose();
	virtual int32_t getWindingRule() override;
	::sun::java2d::marlin::DMarlinRenderingEngine$NormalizingPathIterator* init(::java::awt::geom::PathIterator* src);
	virtual bool isDone() override;
	virtual void next() override;
	virtual double normCoord(double coord) {return 0.0;}
	::java::awt::geom::PathIterator* src = nullptr;
	double curx_adjust = 0.0;
	double cury_adjust = 0.0;
	double movx_adjust = 0.0;
	double movy_adjust = 0.0;
	$doubles* tmp = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DMarlinRenderingEngine$NormalizingPathIterator_h_