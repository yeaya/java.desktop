#ifndef _sun_java2d_marlin_TransformingPathConsumer2D_h_
#define _sun_java2d_marlin_TransformingPathConsumer2D_h_
//$ class sun.java2d.marlin.TransformingPathConsumer2D
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CLIP_RECT_PADDING")
#undef CLIP_RECT_PADDING

namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class Path2D$Double;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			class DPathConsumer2D;
			class RendererContext;
			class TransformingPathConsumer2D$ClosedPathDetector;
			class TransformingPathConsumer2D$DeltaScaleFilter;
			class TransformingPathConsumer2D$DeltaTransformFilter;
			class TransformingPathConsumer2D$Path2DWrapper;
			class TransformingPathConsumer2D$PathClipFilter;
			class TransformingPathConsumer2D$PathTracer;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class TransformingPathConsumer2D : public ::java::lang::Object {
	$class(TransformingPathConsumer2D, 0, ::java::lang::Object)
public:
	TransformingPathConsumer2D();
	void init$(::sun::java2d::marlin::RendererContext* rdrCtx);
	static double adjustClipInverseDelta($doubles* clipRect, double mxx, double mxy, double myx, double myy);
	static double adjustClipScale($doubles* clipRect, double mxx, double myy);
	::sun::java2d::marlin::DPathConsumer2D* deltaTransformConsumer(::sun::java2d::marlin::DPathConsumer2D* out, ::java::awt::geom::AffineTransform* at);
	::sun::java2d::marlin::DPathConsumer2D* detectClosedPath(::sun::java2d::marlin::DPathConsumer2D* out);
	::sun::java2d::marlin::DPathConsumer2D* inverseDeltaTransformConsumer(::sun::java2d::marlin::DPathConsumer2D* out, ::java::awt::geom::AffineTransform* at);
	::sun::java2d::marlin::DPathConsumer2D* pathClipper(::sun::java2d::marlin::DPathConsumer2D* out);
	::sun::java2d::marlin::DPathConsumer2D* traceClosedPathDetector(::sun::java2d::marlin::DPathConsumer2D* out);
	::sun::java2d::marlin::DPathConsumer2D* traceDasher(::sun::java2d::marlin::DPathConsumer2D* out);
	::sun::java2d::marlin::DPathConsumer2D* traceFiller(::sun::java2d::marlin::DPathConsumer2D* out);
	::sun::java2d::marlin::DPathConsumer2D* traceInput(::sun::java2d::marlin::DPathConsumer2D* out);
	::sun::java2d::marlin::DPathConsumer2D* traceStroker(::sun::java2d::marlin::DPathConsumer2D* out);
	::sun::java2d::marlin::DPathConsumer2D* wrapPath2D(::java::awt::geom::Path2D$Double* p2d);
	static double CLIP_RECT_PADDING;
	::sun::java2d::marlin::RendererContext* rdrCtx = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$ClosedPathDetector* cpDetector = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$PathClipFilter* pathClipper$ = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$Path2DWrapper* wp_Path2DWrapper = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$DeltaScaleFilter* dt_DeltaScaleFilter = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$DeltaTransformFilter* dt_DeltaTransformFilter = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$DeltaScaleFilter* iv_DeltaScaleFilter = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$DeltaTransformFilter* iv_DeltaTransformFilter = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$PathTracer* tracerInput = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$PathTracer* tracerCPDetector = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$PathTracer* tracerFiller = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$PathTracer* tracerStroker = nullptr;
	::sun::java2d::marlin::TransformingPathConsumer2D$PathTracer* tracerDasher = nullptr;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("CLIP_RECT_PADDING")

#endif // _sun_java2d_marlin_TransformingPathConsumer2D_h_