#ifndef _java_awt_GraphicsConfigTemplate_h_
#define _java_awt_GraphicsConfigTemplate_h_
//$ class java.awt.GraphicsConfigTemplate
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("PREFERRED")
#undef PREFERRED
#pragma push_macro("REQUIRED")
#undef REQUIRED
#pragma push_macro("UNNECESSARY")
#undef UNNECESSARY

namespace java {
	namespace awt {
		class GraphicsConfiguration;
	}
}

namespace java {
	namespace awt {

class $import GraphicsConfigTemplate : public ::java::io::Serializable {
	$class(GraphicsConfigTemplate, $NO_CLASS_INIT, ::java::io::Serializable)
public:
	GraphicsConfigTemplate();
	void init$();
	virtual ::java::awt::GraphicsConfiguration* getBestConfiguration($Array<::java::awt::GraphicsConfiguration>* gc) {return nullptr;}
	virtual bool isGraphicsConfigSupported(::java::awt::GraphicsConfiguration* gc) {return false;}
	static const int64_t serialVersionUID = (int64_t)0x90204359E8B62239;
	static const int32_t REQUIRED = 1;
	static const int32_t PREFERRED = 2;
	static const int32_t UNNECESSARY = 3;
};

	} // awt
} // java

#pragma pop_macro("PREFERRED")
#pragma pop_macro("REQUIRED")
#pragma pop_macro("UNNECESSARY")

#endif // _java_awt_GraphicsConfigTemplate_h_