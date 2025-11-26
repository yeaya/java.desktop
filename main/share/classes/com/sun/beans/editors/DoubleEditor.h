#ifndef _com_sun_beans_editors_DoubleEditor_h_
#define _com_sun_beans_editors_DoubleEditor_h_
//$ class com.sun.beans.editors.DoubleEditor
//$ extends com.sun.beans.editors.NumberEditor

#include <com/sun/beans/editors/NumberEditor.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class DoubleEditor : public ::com::sun::beans::editors::NumberEditor {
	$class(DoubleEditor, $NO_CLASS_INIT, ::com::sun::beans::editors::NumberEditor)
public:
	DoubleEditor();
	void init$();
	virtual void setAsText($String* text) override;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_DoubleEditor_h_