#ifndef _sun_java2d_ReentrantContext_h_
#define _sun_java2d_ReentrantContext_h_
//$ class sun.java2d.ReentrantContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class Reference;
		}
	}
}

namespace sun {
	namespace java2d {

class ReentrantContext : public ::java::lang::Object {
	$class(ReentrantContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ReentrantContext();
	void init$();
	int8_t usage = 0;
	::java::lang::ref::Reference* reference = nullptr;
};

	} // java2d
} // sun

#endif // _sun_java2d_ReentrantContext_h_