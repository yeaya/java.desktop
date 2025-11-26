#ifndef _javax_swing_plaf_basic_BasicLookAndFeel$2_h_
#define _javax_swing_plaf_basic_BasicLookAndFeel$2_h_
//$ class javax.swing.plaf.basic.BasicLookAndFeel$2
//$ extends javax.swing.UIDefaults$ActiveValue

#include <javax/swing/UIDefaults$ActiveValue.h>

namespace javax {
	namespace swing {
		class UIDefaults;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicLookAndFeel;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class BasicLookAndFeel$2 : public ::javax::swing::UIDefaults$ActiveValue {
	$class(BasicLookAndFeel$2, $NO_CLASS_INIT, ::javax::swing::UIDefaults$ActiveValue)
public:
	BasicLookAndFeel$2();
	void init$(::javax::swing::plaf::basic::BasicLookAndFeel* this$0);
	virtual $Object* createValue(::javax::swing::UIDefaults* table) override;
	::javax::swing::plaf::basic::BasicLookAndFeel* this$0 = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicLookAndFeel$2_h_