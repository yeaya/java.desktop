#ifndef _com_apple_laf_AquaUtils$RecyclableSingleton_h_
#define _com_apple_laf_AquaUtils$RecyclableSingleton_h_
//$ class com.apple.laf.AquaUtils$RecyclableSingleton
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$RecyclableSingleton : public ::java::lang::Object {
	$class(AquaUtils$RecyclableSingleton, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaUtils$RecyclableSingleton();
	void init$();
	$Object* get();
	virtual $Object* getInstance() {return nullptr;}
	$Object* lambda$get$0();
	virtual void reset();
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$RecyclableSingleton_h_