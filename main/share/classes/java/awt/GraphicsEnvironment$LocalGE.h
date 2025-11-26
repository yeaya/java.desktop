#ifndef _java_awt_GraphicsEnvironment$LocalGE_h_
#define _java_awt_GraphicsEnvironment$LocalGE_h_
//$ class java.awt.GraphicsEnvironment$LocalGE
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace java {
	namespace awt {
		class GraphicsEnvironment;
	}
}

namespace java {
	namespace awt {

class GraphicsEnvironment$LocalGE : public ::java::lang::Object {
	$class(GraphicsEnvironment$LocalGE, 0, ::java::lang::Object)
public:
	GraphicsEnvironment$LocalGE();
	void init$();
	static ::java::awt::GraphicsEnvironment* createGE();
	static ::java::awt::GraphicsEnvironment* INSTANCE;
};

	} // awt
} // java

#pragma pop_macro("INSTANCE")

#endif // _java_awt_GraphicsEnvironment$LocalGE_h_