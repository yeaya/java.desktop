#ifndef _com_apple_laf_AquaUtils$LazyKeyedSingleton_h_
#define _com_apple_laf_AquaUtils$LazyKeyedSingleton_h_
//$ class com.apple.laf.AquaUtils$LazyKeyedSingleton
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaUtils$LazyKeyedSingleton : public ::java::lang::Object {
	$class(AquaUtils$LazyKeyedSingleton, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AquaUtils$LazyKeyedSingleton();
	void init$();
	virtual $Object* get(Object$* key);
	virtual $Object* getInstance(Object$* key) {return nullptr;}
	::java::util::Map* refs = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaUtils$LazyKeyedSingleton_h_