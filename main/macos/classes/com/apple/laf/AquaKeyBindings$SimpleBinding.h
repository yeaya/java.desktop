#ifndef _com_apple_laf_AquaKeyBindings$SimpleBinding_h_
#define _com_apple_laf_AquaKeyBindings$SimpleBinding_h_
//$ class com.apple.laf.AquaKeyBindings$SimpleBinding
//$ extends com.apple.laf.AquaKeyBindings$BindingsProvider

#include <com/apple/laf/AquaKeyBindings$BindingsProvider.h>
#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace laf {

class AquaKeyBindings$SimpleBinding : public ::com::apple::laf::AquaKeyBindings$BindingsProvider {
	$class(AquaKeyBindings$SimpleBinding, $NO_CLASS_INIT, ::com::apple::laf::AquaKeyBindings$BindingsProvider)
public:
	AquaKeyBindings$SimpleBinding();
	void init$($StringArray* bindings);
	virtual $StringArray* getBindings() override;
	$StringArray* bindings = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaKeyBindings$SimpleBinding_h_