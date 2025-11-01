#ifndef _sun_java2d_marlin_DMarlinRenderingEngine_h_
#define _sun_java2d_marlin_DMarlinRenderingEngine_h_
//$ class sun.java2d.marlin.DMarlinRenderingEngine
//$ extends sun.java2d.pipe.RenderingEngine
//$ implements sun.java2d.marlin.MarlinConst

#include <java/lang/Array.h>
#include <java/lang/Float.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/java2d/pipe/RenderingEngine.h>

#pragma push_macro("DISABLE_2ND_STROKER_CLIPPING")
#undef DISABLE_2ND_STROKER_CLIPPING
#pragma push_macro("DO_CLIP")
#undef DO_CLIP
#pragma push_macro("DO_CLIP_FILL")
#undef DO_CLIP_FILL
#pragma push_macro("DO_CLIP_RUNTIME_ENABLE")
#undef DO_CLIP_RUNTIME_ENABLE
#pragma push_macro("DO_TRACE_PATH")
#undef DO_TRACE_PATH
#pragma push_macro("LOWER_BND")
#undef LOWER_BND
#pragma push_macro("MIN_PEN_SIZE")
#undef MIN_PEN_SIZE
#pragma push_macro("RDR_CTX_PROVIDER")
#undef RDR_CTX_PROVIDER
#pragma push_macro("REF_TYPE")
#undef REF_TYPE
#pragma push_macro("SETTINGS_LOGGED")
#undef SETTINGS_LOGGED
#pragma push_macro("UPPER_BND")
#undef UPPER_BND
#pragma push_macro("USE_THREAD_LOCAL")
#undef USE_THREAD_LOCAL

namespace java {
	namespace awt {
		class BasicStroke;
		class Shape;
	}
}
namespace java {
	namespace awt {
		namespace geom {
			class AffineTransform;
			class PathIterator;
		}
	}
}
namespace sun {
	namespace awt {
		namespace geom {
			class PathConsumer2D;
		}
	}
}
namespace sun {
	namespace java2d {
		class ReentrantContextProvider;
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			class DMarlinRenderingEngine$NormMode;
			class DPathConsumer2D;
			class RendererContext;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace pipe {
			class AATileGenerator;
			class Region;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class DMarlinRenderingEngine : public ::sun::java2d::pipe::RenderingEngine, public ::sun::java2d::marlin::MarlinConst {
	$class(DMarlinRenderingEngine, 0, ::sun::java2d::pipe::RenderingEngine, ::sun::java2d::marlin::MarlinConst)
public:
	DMarlinRenderingEngine();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::awt::Shape* createStrokedShape(::java::awt::Shape* src, float width, int32_t caps, int32_t join, float miterlimit, $floats* dashes, float dashphase) override;
	virtual ::sun::java2d::pipe::AATileGenerator* getAATileGenerator(::java::awt::Shape* s, ::java::awt::geom::AffineTransform* at, ::sun::java2d::pipe::Region* clip, ::java::awt::BasicStroke* bs, bool thin, bool normalize, $ints* bbox) override;
	virtual ::sun::java2d::pipe::AATileGenerator* getAATileGenerator(double x, double y, double dx1, double dy1, double dx2, double dy2, double lw1, double lw2, ::sun::java2d::pipe::Region* clip, $ints* bbox) override;
	virtual float getMinimumAAPenSize() override;
	static ::sun::java2d::marlin::RendererContext* getRendererContext();
	static void logSettings($String* reClass);
	static bool nearZero(double num);
	static void pathTo(::sun::java2d::marlin::RendererContext* rdrCtx, ::java::awt::geom::PathIterator* pi, ::sun::java2d::marlin::DPathConsumer2D* pc2d);
	static void pathToLoop($doubles* coords, ::java::awt::geom::PathIterator* pi, ::sun::java2d::marlin::DPathConsumer2D* pc2d);
	static void returnRendererContext(::sun::java2d::marlin::RendererContext* rdrCtx);
	virtual void strokeTo(::java::awt::Shape* src, ::java::awt::geom::AffineTransform* at, ::java::awt::BasicStroke* bs, bool thin, bool normalize, bool antialias, ::sun::awt::geom::PathConsumer2D* consumer) override;
	virtual void strokeTo(::java::awt::Shape* src, ::java::awt::geom::AffineTransform* at, ::sun::java2d::pipe::Region* clip, ::java::awt::BasicStroke* bs, bool thin, bool normalize, bool antialias, ::sun::awt::geom::PathConsumer2D* consumer) override;
	void strokeTo(::sun::java2d::marlin::RendererContext* rdrCtx, ::java::awt::Shape* src, ::java::awt::geom::AffineTransform* at, ::java::awt::BasicStroke* bs, bool thin, ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode* normalize, bool antialias, ::sun::java2d::marlin::DPathConsumer2D* pc2d);
	void strokeTo(::sun::java2d::marlin::RendererContext* rdrCtx, ::java::awt::Shape* src, ::java::awt::geom::AffineTransform* at, double width, ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode* norm, int32_t caps, int32_t join, float miterlimit, $floats* dashes, float dashphase, ::sun::java2d::marlin::DPathConsumer2D* pc2d);
	virtual $String* toString() override;
	double userSpaceLineWidth(::java::awt::geom::AffineTransform* at, double lw);
	static const bool DISABLE_2ND_STROKER_CLIPPING = true;
	static const bool DO_TRACE_PATH = false;
	static bool DO_CLIP;
	static const bool DO_CLIP_FILL = true;
	static bool DO_CLIP_RUNTIME_ENABLE;
	static float MIN_PEN_SIZE;
	static double UPPER_BND;
	static double LOWER_BND;
	static bool USE_THREAD_LOCAL;
	static int32_t REF_TYPE;
	static ::sun::java2d::ReentrantContextProvider* RDR_CTX_PROVIDER;
	static bool SETTINGS_LOGGED;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("DISABLE_2ND_STROKER_CLIPPING")
#pragma pop_macro("DO_CLIP")
#pragma pop_macro("DO_CLIP_FILL")
#pragma pop_macro("DO_CLIP_RUNTIME_ENABLE")
#pragma pop_macro("DO_TRACE_PATH")
#pragma pop_macro("LOWER_BND")
#pragma pop_macro("MIN_PEN_SIZE")
#pragma pop_macro("RDR_CTX_PROVIDER")
#pragma pop_macro("REF_TYPE")
#pragma pop_macro("SETTINGS_LOGGED")
#pragma pop_macro("UPPER_BND")
#pragma pop_macro("USE_THREAD_LOCAL")

#endif // _sun_java2d_marlin_DMarlinRenderingEngine_h_