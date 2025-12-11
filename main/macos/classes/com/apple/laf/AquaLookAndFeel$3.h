#ifndef _com_apple_laf_AquaLookAndFeel$3_h_
#define _com_apple_laf_AquaLookAndFeel$3_h_
//$ class com.apple.laf.AquaLookAndFeel$3
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaLookAndFeel;
		}
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

class AquaLookAndFeel$3 : public ::javax::swing::UIDefaults$ActiveValue {
	$class(AquaLookAndFeel$3, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue)
public:
	AquaLookAndFeel$3();
	void init$(::com::apple::laf::AquaLookAndFeel* this$0);
	virtual $Object* createValue(::javax::swing::UIDefaults* defaultsTable) override;
	::com::apple::laf::AquaLookAndFeel* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaLookAndFeel$3_h_