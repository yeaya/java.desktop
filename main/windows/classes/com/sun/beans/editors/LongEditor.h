#ifndef _com_sun_beans_editors_LongEditor_h_
#define _com_sun_beans_editors_LongEditor_h_
//$ class com.sun.beans.editors.LongEditor
//$ extends com.sun.beans.editors.NumberEditor

#include <com/sun/beans/editors/NumberEditor.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class LongEditor : public ::com::sun::beans::editors::NumberEditor {
	$class(LongEditor, $NO_CLASS_INIT, ::com::sun::beans::editors::NumberEditor)
public:
	LongEditor();
	void init$();
	virtual $String* getJavaInitializationString() override;
	virtual void setAsText($String* text) override;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_LongEditor_h_