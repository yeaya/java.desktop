#ifndef _com_apple_laf_AquaTableHeaderUI$1$2_h_
#define _com_apple_laf_AquaTableHeaderUI$1$2_h_
//$ class com.apple.laf.AquaTableHeaderUI$1$2
//$ extends com.apple.laf.ClientPropertyApplicator$Property

#include <com/apple/laf/ClientPropertyApplicator$Property.h>

namespace com {
	namespace apple {
		namespace laf {
			class AquaTableHeaderUI$1;
		}
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class JTableHeader;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class AquaTableHeaderUI$1$2 : public ::com::apple::laf::ClientPropertyApplicator$Property {
	$class(AquaTableHeaderUI$1$2, $NO_CLASS_INIT, ::com::apple::laf::ClientPropertyApplicator$Property)
public:
	AquaTableHeaderUI$1$2();
	void init$(::com::apple::laf::AquaTableHeaderUI$1* this$0, $String* name);
	virtual void applyProperty(::javax::swing::table::JTableHeader* target, Object$* value);
	virtual void applyProperty(Object$* target, Object$* value) override;
	::com::apple::laf::AquaTableHeaderUI$1* this$0 = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_AquaTableHeaderUI$1$2_h_