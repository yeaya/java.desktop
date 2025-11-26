#ifndef _sun_java2d_marlin_DMarlinRenderingEngine$NormMode_h_
#define _sun_java2d_marlin_DMarlinRenderingEngine$NormMode_h_
//$ class sun.java2d.marlin.DMarlinRenderingEngine$NormMode
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("OFF")
#undef OFF
#pragma push_macro("ON_NO_AA")
#undef ON_NO_AA
#pragma push_macro("ON_WITH_AA")
#undef ON_WITH_AA

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

class DMarlinRenderingEngine$NormMode : public ::java::lang::Enum {
	$class(DMarlinRenderingEngine$NormMode, 0, ::java::lang::Enum)
public:
	DMarlinRenderingEngine$NormMode();
	static $Array<::sun::java2d::marlin::DMarlinRenderingEngine$NormMode>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual ::java::awt::geom::PathIterator* getNormalizingPathIterator(::sun::java2d::marlin::RendererContext* rdrCtx, ::java::awt::geom::PathIterator* src) {return nullptr;}
	static ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode* valueOf($String* name);
	static $Array<::sun::java2d::marlin::DMarlinRenderingEngine$NormMode>* values();
	static ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode* ON_WITH_AA;
	static ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode* ON_NO_AA;
	static ::sun::java2d::marlin::DMarlinRenderingEngine$NormMode* OFF;
	static $Array<::sun::java2d::marlin::DMarlinRenderingEngine$NormMode>* $VALUES;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("OFF")
#pragma pop_macro("ON_NO_AA")
#pragma pop_macro("ON_WITH_AA")

#endif // _sun_java2d_marlin_DMarlinRenderingEngine$NormMode_h_