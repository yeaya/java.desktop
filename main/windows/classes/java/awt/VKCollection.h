#ifndef _java_awt_VKCollection_h_
#define _java_awt_VKCollection_h_
//$ class java.awt.VKCollection
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace java {
	namespace awt {

class VKCollection : public ::java::lang::Object {
	$class(VKCollection, 0, ::java::lang::Object)
public:
	VKCollection();
	void init$();
	virtual ::java::lang::Integer* findCode($String* name);
	virtual $String* findName(::java::lang::Integer* code);
	virtual void put($String* name, ::java::lang::Integer* code);
	static bool $assertionsDisabled;
	::java::util::Map* code2name = nullptr;
	::java::util::Map* name2code = nullptr;
};

	} // awt
} // java

#endif // _java_awt_VKCollection_h_