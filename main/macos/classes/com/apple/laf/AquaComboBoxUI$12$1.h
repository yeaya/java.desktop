#ifndef _com_apple_laf_AquaComboBoxUI$12$1_h_
#define _com_apple_laf_AquaComboBoxUI$12$1_h_
//$ class com.apple.laf.AquaComboBoxUI$12$1
//$ extends com.apple.laf.ClientPropertyApplicator$Property

#include <com/apple/laf/ClientPropertyApplicator$Property.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
			class AquaComboBoxUI$12;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI$12$1 : public ::com::apple::laf::ClientPropertyApplicator$Property {
	$class(AquaComboBoxUI$12$1, $NO_CLASS_INIT, ::com::apple::laf::ClientPropertyApplicator$Property)
public:
	AquaComboBoxUI$12$1();
	void init$(::com::apple::laf::AquaComboBoxUI$12* this$0, $String* name);
	virtual void applyProperty(::com::apple::laf::AquaComboBoxUI* target, Object$* value);
	virtual void applyProperty(Object$* target, Object$* value) override;
	::com::apple::laf::AquaComboBoxUI$12* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$12$1_h_