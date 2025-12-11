#ifndef _com_apple_laf_AquaUtils$RecyclableObject_h_
#define _com_apple_laf_AquaUtils$RecyclableObject_h_
//$ class com.apple.laf.AquaUtils$RecyclableObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace ref {
			class SoftReference;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$RecyclableObject : public ::java::lang::Object {
	$class(AquaUtils$RecyclableObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaUtils$RecyclableObject();
	void init$();
	virtual $Object* create() {return nullptr;}
	virtual $Object* get();
	::java::lang::ref::SoftReference* objectRef = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$RecyclableObject_h_