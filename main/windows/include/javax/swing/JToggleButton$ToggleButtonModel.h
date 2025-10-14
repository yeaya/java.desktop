#ifndef _javax_swing_JToggleButton$ToggleButtonModel_h_
#define _javax_swing_JToggleButton$ToggleButtonModel_h_
//$ class javax.swing.JToggleButton$ToggleButtonModel
//$ extends javax.swing.DefaultButtonModel

#include <javax/swing/DefaultButtonModel.h>

namespace javax {
	namespace swing {

class $import JToggleButton$ToggleButtonModel : public ::javax::swing::DefaultButtonModel {
	$class(JToggleButton$ToggleButtonModel, $NO_CLASS_INIT, ::javax::swing::DefaultButtonModel)
public:
	JToggleButton$ToggleButtonModel();
	void init$();
	virtual bool isSelected() override;
	virtual void setPressed(bool b) override;
	virtual void setSelected(bool b) override;
};

	} // swing
} // javax

#endif // _javax_swing_JToggleButton$ToggleButtonModel_h_