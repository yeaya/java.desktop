#ifndef _com_apple_laf_AquaTextFieldSearch$SearchFieldBorder$1_h_
#define _com_apple_laf_AquaTextFieldSearch$SearchFieldBorder$1_h_
//$ class com.apple.laf.AquaTextFieldSearch$SearchFieldBorder$1
//$ extends java.awt.BorderLayout

#include <java/awt/BorderLayout.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTextFieldSearch$SearchFieldBorder;
		}
	}
}
namespace java {
	namespace awt {
		class Container;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTextFieldSearch$SearchFieldBorder$1 : public ::java::awt::BorderLayout {
	$class(AquaTextFieldSearch$SearchFieldBorder$1, $NO_CLASS_INIT, ::java::awt::BorderLayout)
public:
	AquaTextFieldSearch$SearchFieldBorder$1();
	void init$(::com::apple::laf::AquaTextFieldSearch$SearchFieldBorder* this$0, int32_t hgap, int32_t vgap);
	virtual void layoutContainer(::java::awt::Container* target) override;
	::com::apple::laf::AquaTextFieldSearch$SearchFieldBorder* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTextFieldSearch$SearchFieldBorder$1_h_