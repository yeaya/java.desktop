#ifndef _javax_swing_ComboBoxModel_h_
#define _javax_swing_ComboBoxModel_h_
//$ interface javax.swing.ComboBoxModel
//$ extends javax.swing.ListModel

#include <javax/swing/ListModel.h>

namespace javax {
	namespace swing {

class $import ComboBoxModel : public ::javax::swing::ListModel {
	$interface(ComboBoxModel, $NO_CLASS_INIT, ::javax::swing::ListModel)
public:
	virtual $Object* getSelectedItem() {return nullptr;}
	virtual void setSelectedItem(Object$* anItem) {}
};

	} // swing
} // javax

#endif // _javax_swing_ComboBoxModel_h_