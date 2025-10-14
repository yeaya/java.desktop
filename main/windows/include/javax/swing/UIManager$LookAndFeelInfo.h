#ifndef _javax_swing_UIManager$LookAndFeelInfo_h_
#define _javax_swing_UIManager$LookAndFeelInfo_h_
//$ class javax.swing.UIManager$LookAndFeelInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace swing {

class $import UIManager$LookAndFeelInfo : public ::java::lang::Object {
	$class(UIManager$LookAndFeelInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	UIManager$LookAndFeelInfo();
	void init$($String* name, $String* className);
	virtual $String* getClassName();
	virtual $String* getName();
	virtual $String* toString() override;
	$String* name = nullptr;
	$String* className = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_UIManager$LookAndFeelInfo_h_