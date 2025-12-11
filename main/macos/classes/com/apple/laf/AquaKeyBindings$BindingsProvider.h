#ifndef _com_apple_laf_AquaKeyBindings$BindingsProvider_h_
#define _com_apple_laf_AquaKeyBindings$BindingsProvider_h_
//$ interface com.apple.laf.AquaKeyBindings$BindingsProvider
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaKeyBindings$BindingsProvider : public ::java::lang::Object {
	$interface(AquaKeyBindings$BindingsProvider, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $StringArray* getBindings() {return nullptr;}
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaKeyBindings$BindingsProvider_h_