#ifndef _com_sun_beans_editors_ShortEditor_h_
#define _com_sun_beans_editors_ShortEditor_h_
//$ class com.sun.beans.editors.ShortEditor
//$ extends com.sun.beans.editors.NumberEditor

#include <com/sun/beans/editors/NumberEditor.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class ShortEditor : public ::com::sun::beans::editors::NumberEditor {
	$class(ShortEditor, $NO_CLASS_INIT, ::com::sun::beans::editors::NumberEditor)
public:
	ShortEditor();
	void init$();
	virtual $String* getJavaInitializationString() override;
	virtual void setAsText($String* text) override;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_ShortEditor_h_