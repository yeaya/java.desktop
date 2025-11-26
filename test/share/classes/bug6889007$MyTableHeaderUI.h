#ifndef _bug6889007$MyTableHeaderUI_h_
#define _bug6889007$MyTableHeaderUI_h_
//$ class bug6889007$MyTableHeaderUI
//$ extends javax.swing.plaf.basic.BasicTableHeaderUI

#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>

class $export bug6889007$MyTableHeaderUI : public ::javax::swing::plaf::basic::BasicTableHeaderUI {
	$class(bug6889007$MyTableHeaderUI, $NO_CLASS_INIT, ::javax::swing::plaf::basic::BasicTableHeaderUI)
public:
	bug6889007$MyTableHeaderUI();
	void init$();
	static int32_t getTestValue();
	static void increaseTestValue(int32_t increment);
	virtual void rolloverColumnUpdated(int32_t oldColumn, int32_t newColumn) override;
	static int32_t testValue;
};

#endif // _bug6889007$MyTableHeaderUI_h_