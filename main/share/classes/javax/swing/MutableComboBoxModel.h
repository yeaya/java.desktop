#ifndef _javax_swing_MutableComboBoxModel_h_
#define _javax_swing_MutableComboBoxModel_h_
//$ interface javax.swing.MutableComboBoxModel
//$ extends javax.swing.ComboBoxModel

#include <javax/swing/ComboBoxModel.h>

namespace javax {
	namespace swing {

class $export MutableComboBoxModel : public ::javax::swing::ComboBoxModel {
	$interface(MutableComboBoxModel, $NO_CLASS_INIT, ::javax::swing::ComboBoxModel)
public:
	virtual void addElement(Object$* item) {}
	virtual void insertElementAt(Object$* item, int32_t index) {}
	virtual void removeElement(Object$* obj) {}
	virtual void removeElementAt(int32_t index) {}
};

	} // swing
} // javax

#endif // _javax_swing_MutableComboBoxModel_h_