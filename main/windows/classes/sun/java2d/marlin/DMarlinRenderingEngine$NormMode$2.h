#ifndef _sun_java2d_marlin_DMarlinRenderingEngine$NormMode$2_h_
#define _sun_java2d_marlin_DMarlinRenderingEngine$NormMode$2_h_
//$ class sun.java2d.marlin.DMarlinRenderingEngine$NormMode$2
//$ extends sun.java2d.marlin.DMarlinRenderingEngine$NormMode

#include <sun/java2d/marlin/DMarlinRenderingEngine$NormMode.h>

namespace java {
	namespace awt {
		namespace geom {
			class PathIterator;
		}
	}
}
namespace sun {
	namespace java2d {
		namespace marlin {
			class RendererContext;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class DMarlinRenderingEngine$NormMode$2 : public ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode {
	$class(DMarlinRenderingEngine$NormMode$2, $NO_CLASS_INIT, ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode)
public:
	DMarlinRenderingEngine$NormMode$2();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::awt::geom::PathIterator* getNormalizingPathIterator(::sun::java2d::marlin::RendererContext* rdrCtx, ::java::awt::geom::PathIterator* src) override;
};

		} // marlin
	} // java2d
} // sun

#endif // _sun_java2d_marlin_DMarlinRenderingEngine$NormMode$2_h_