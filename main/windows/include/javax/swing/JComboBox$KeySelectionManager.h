#ifndef _javax_swing_JComboBox$KeySelectionManager_h_
#define _javax_swing_JComboBox$KeySelectionManager_h_
//$ interface javax.swing.JComboBox$KeySelectionManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {
		class ComboBoxModel;
	}
}

namespace javax {
	namespace swing {

class $import JComboBox$KeySelectionManager : public ::java::lang::Object {
	$interface(JComboBox$KeySelectionManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t selectionForKey(char16_t aKey, ::javax::swing::ComboBoxModel* aModel) {return 0;}
};

	} // swing
} // javax

#endif // _javax_swing_JComboBox$KeySelectionManager_h_