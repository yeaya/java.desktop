#ifndef _com_apple_laf_AquaTableUI$1_h_
#define _com_apple_laf_AquaTableUI$1_h_
//$ class com.apple.laf.AquaTableUI$1
//$ extends com.apple.laf.AquaFocusHandler

#include <com/apple/laf/AquaFocusHandler.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTableUI;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTableUI$1 : public ::com::apple::laf::AquaFocusHandler {
	$class(AquaTableUI$1, $NO_CLASS_INIT, ::com::apple::laf::AquaFocusHandler)
public:
	AquaTableUI$1();
	void init$(::com::apple::laf::AquaTableUI* this$0);
	virtual void propertyChange(::java::beans::PropertyChangeEvent* ev) override;
	::com::apple::laf::AquaTableUI* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTableUI$1_h_