#ifndef _sun_awt_SunGraphicsCallback_h_
#define _sun_awt_SunGraphicsCallback_h_
//$ class sun.awt.SunGraphicsCallback
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("HEAVYWEIGHTS")
#undef HEAVYWEIGHTS
#pragma push_macro("LIGHTWEIGHTS")
#undef LIGHTWEIGHTS
#pragma push_macro("TWO_PASSES")
#undef TWO_PASSES

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Rectangle;
		class Shape;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace awt {

class $import SunGraphicsCallback : public ::java::lang::Object {
	$class(SunGraphicsCallback, 0, ::java::lang::Object)
public:
	SunGraphicsCallback();
	void init$();
	virtual void constrainGraphics(::java::awt::Graphics* g, ::java::awt::Rectangle* bounds);
	virtual void run(::java::awt::Component* comp, ::java::awt::Graphics* cg) {}
	void runComponents($Array<::java::awt::Component>* comps, ::java::awt::Graphics* g, int32_t weightFlags);
	void runOneComponent(::java::awt::Component* comp, ::java::awt::Rectangle* bounds, ::java::awt::Graphics* g, ::java::awt::Shape* clip, int32_t weightFlags);
	static const int32_t HEAVYWEIGHTS = 1;
	static const int32_t LIGHTWEIGHTS = 2;
	static const int32_t TWO_PASSES = 4;
	static ::sun::util::logging::PlatformLogger* log;
};

	} // awt
} // sun

#pragma pop_macro("HEAVYWEIGHTS")
#pragma pop_macro("LIGHTWEIGHTS")
#pragma pop_macro("TWO_PASSES")

#endif // _sun_awt_SunGraphicsCallback_h_