#ifndef _com_sun_beans_editors_IntegerEditor_h_
#define _com_sun_beans_editors_IntegerEditor_h_
//$ class com.sun.beans.editors.IntegerEditor
//$ extends com.sun.beans.editors.NumberEditor

#include <com/sun/beans/editors/NumberEditor.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class IntegerEditor : public ::com::sun::beans::editors::NumberEditor {
	$class(IntegerEditor, $NO_CLASS_INIT, ::com::sun::beans::editors::NumberEditor)
public:
	IntegerEditor();
	void init$();
	virtual void setAsText($String* text) override;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_IntegerEditor_h_