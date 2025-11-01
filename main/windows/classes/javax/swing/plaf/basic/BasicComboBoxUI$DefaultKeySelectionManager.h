#ifndef _javax_swing_plaf_basic_BasicComboBoxUI$DefaultKeySelectionManager_h_
#define _javax_swing_plaf_basic_BasicComboBoxUI$DefaultKeySelectionManager_h_
//$ class javax.swing.plaf.basic.BasicComboBoxUI$DefaultKeySelectionManager
//$ extends javax.swing.JComboBox$KeySelectionManager
//$ implements javax.swing.plaf.UIResource

#include <javax/swing/JComboBox$KeySelectionManager.h>
#include <javax/swing/plaf/UIResource.h>

namespace javax {
	namespace swing {
		class ComboBoxModel;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {
				class BasicComboBoxUI;
			}
		}
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboBoxUI$DefaultKeySelectionManager : public ::javax::swing::JComboBox$KeySelectionManager, public ::javax::swing::plaf::UIResource {
	$class(BasicComboBoxUI$DefaultKeySelectionManager, $NO_CLASS_INIT, ::javax::swing::JComboBox$KeySelectionManager, ::javax::swing::plaf::UIResource)
public:
	BasicComboBoxUI$DefaultKeySelectionManager();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::plaf::basic::BasicComboBoxUI* this$0);
	virtual int32_t selectionForKey(char16_t aKey, ::javax::swing::ComboBoxModel* aModel) override;
	virtual $String* toString() override;
	::javax::swing::plaf::basic::BasicComboBoxUI* this$0 = nullptr;
	$String* prefix = nullptr;
	$String* typedString = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxUI$DefaultKeySelectionManager_h_