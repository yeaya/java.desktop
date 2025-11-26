#ifndef _javax_swing_AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_h_
#define _javax_swing_AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_h_
//$ class javax.swing.AbstractButton$AccessibleAbstractButton$ButtonKeyBinding
//$ extends javax.accessibility.AccessibleKeyBinding

#include <javax/accessibility/AccessibleKeyBinding.h>

namespace javax {
	namespace swing {
		class AbstractButton$AccessibleAbstractButton;
	}
}

namespace javax {
	namespace swing {

class $export AbstractButton$AccessibleAbstractButton$ButtonKeyBinding : public ::javax::accessibility::AccessibleKeyBinding {
	$class(AbstractButton$AccessibleAbstractButton$ButtonKeyBinding, $NO_CLASS_INIT, ::javax::accessibility::AccessibleKeyBinding)
public:
	AbstractButton$AccessibleAbstractButton$ButtonKeyBinding();
	void init$(::javax::swing::AbstractButton$AccessibleAbstractButton* this$1, int32_t mnemonic);
	virtual $Object* getAccessibleKeyBinding(int32_t i) override;
	virtual int32_t getAccessibleKeyBindingCount() override;
	::javax::swing::AbstractButton$AccessibleAbstractButton* this$1 = nullptr;
	int32_t mnemonic = 0;
};

	} // swing
} // javax

#endif // _javax_swing_AbstractButton$AccessibleAbstractButton$ButtonKeyBinding_h_