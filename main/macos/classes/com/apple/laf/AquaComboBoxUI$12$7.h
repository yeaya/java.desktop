#ifndef _com_apple_laf_AquaComboBoxUI$12$7_h_
#define _com_apple_laf_AquaComboBoxUI$12$7_h_
//$ class com.apple.laf.AquaComboBoxUI$12$7
//$ extends com.apple.laf.ClientPropertyApplicator

#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/lang/Array.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaComboBoxUI;
			class AquaComboBoxUI$12;
			class ClientPropertyApplicator$Property;
		}
	}
}
namespace javax {
	namespace swing {
		class JComboBox;
		class JComponent;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaComboBoxUI$12$7 : public ::com::apple::laf::ClientPropertyApplicator {
	$class(AquaComboBoxUI$12$7, $NO_CLASS_INIT, ::com::apple::laf::ClientPropertyApplicator)
public:
	AquaComboBoxUI$12$7();
	void init$(::com::apple::laf::AquaComboBoxUI$12* this$0, $Array<::com::apple::laf::ClientPropertyApplicator$Property>* propertyList);
	virtual ::com::apple::laf::AquaComboBoxUI* convertJComponentToTarget(::javax::swing::JComboBox* combo);
	virtual $Object* convertJComponentToTarget(::javax::swing::JComponent* combo) override;
	::com::apple::laf::AquaComboBoxUI$12* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaComboBoxUI$12$7_h_