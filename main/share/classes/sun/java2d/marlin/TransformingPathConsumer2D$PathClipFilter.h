#ifndef _sun_java2d_marlin_TransformingPathConsumer2D$PathClipFilter_h_
#define _sun_java2d_marlin_TransformingPathConsumer2D$PathClipFilter_h_
//$ class sun.java2d.marlin.TransformingPathConsumer2D$PathClipFilter
//$ extends sun.java2d.marlin.DPathConsumer2D

#include <java/lang/Array.h>
#include <sun/java2d/marlin/DPathConsumer2D.h>

namespace sun {
	namespace java2d {
		namespace marlin {
			class Helpers$IndexStack;
			class RendererContext;
			class TransformingPathConsumer2D$CurveClipSplitter;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class TransformingPathConsumer2D$PathClipFilter : public ::sun::java2d::marlin::DPathConsumer2D {
	$class(TransformingPathConsumer2D$PathClipFilter, $NO_CLASS_INIT, ::sun::java2d::marlin::DPathConsumer2D)
public:
	TransformingPathConsumer2D$PathClipFilter();
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	void clip(int32_t sideCode, int32_t outcode0, int32_t outcode1);
	virtual void closePath() override;
	virtual void curveTo(double x1, double y1, double x2, double y2, double xe, double ye) override;
	void dispose();
	void finish();
	void finishPath();
	virtual int64_t getNativeConsumer() override;
	::sun::java2d::marlin::TransformingPathConsumer2D$PathClipFilter* init(::sun::java2d::marlin::DPathConsumer2D* out);
	virtual void lineTo(double xe, double ye) override;
	virtual void moveTo(double x0, double y0) override;
	virtual void pathDone() override;
	virtual void quadTo(double x1, double y1, double xe, double ye) override;
	::sun::java2d::marlin::DPathConsumer2D* out = nullptr;
	$doubles* clipRect = nullptr;
	$doubles* corners = nullptr;
	bool init_corners = false;
	::sun::java2d::marlin::Helpers$IndexStack* stack = nullptr;
	int32_t cOutCode = 0;
	int32_t gOutCode = 0;
	bool outside = false;
	double sx0 = 0.0;
	double sy0 = 0.0;
	double cx0 = 0.0;
	double cy0 = 0.0;
	double cox0 = 0.0;
	double coy0 = 0.0;
	bool subdivide = false;
	::sun::java2d::marlin::TransformingPathConsumer2D$CurveClipSplitter* curveSplitter = nullptr;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_TransformingPathConsumer2D$PathClipFilter_h_