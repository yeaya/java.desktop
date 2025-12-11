#ifndef _com_apple_laf_AquaKeyBindings$LateBoundInputMap_h_
#define _com_apple_laf_AquaKeyBindings$LateBoundInputMap_h_
//$ class com.apple.laf.AquaKeyBindings$LateBoundInputMap
//$ extends javax.swing.UIDefaults$LazyValue
//$ implements com.apple.laf.AquaKeyBindings$BindingsProvider

#include <com/apple/laf/AquaKeyBindings$BindingsProvider.h>
#include <java/lang/Array.h>
#include <javax/swing/UIDefaults$LazyValue.h>

namespace java {
	namespace util {
		class ArrayList;
	}
}
namespace javax {
	namespace swing {
		class UIDefaults;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaKeyBindings$LateBoundInputMap : public ::javax::swing::UIDefaults$LazyValue, public ::com::apple::laf::AquaKeyBindings$BindingsProvider {
	$class(AquaKeyBindings$LateBoundInputMap, $NO_CLASS_INIT, ::javax::swing::UIDefaults$LazyValue, ::com::apple::laf::AquaKeyBindings$BindingsProvider)
public:
	AquaKeyBindings$LateBoundInputMap();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<::com::apple::laf::AquaKeyBindings$BindingsProvider>* providerList);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	virtual $StringArray* getBindings() override;
	static void mergeBindings(::java::util::ArrayList* unifiedList, $StringArray* overrides);
	virtual $String* toString() override;
	$Array<::com::apple::laf::AquaKeyBindings$BindingsProvider>* providerList = nullptr;
	$StringArray* mergedBindings = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaKeyBindings$LateBoundInputMap_h_