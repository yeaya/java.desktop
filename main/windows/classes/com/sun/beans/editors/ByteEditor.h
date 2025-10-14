#ifndef _com_sun_beans_editors_ByteEditor_h_
#define _com_sun_beans_editors_ByteEditor_h_
//$ class com.sun.beans.editors.ByteEditor
//$ extends com.sun.beans.editors.NumberEditor

#include <com/sun/beans/editors/NumberEditor.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class ByteEditor : public ::com::sun::beans::editors::NumberEditor {
	$class(ByteEditor, $NO_CLASS_INIT, ::com::sun::beans::editors::NumberEditor)
public:
	ByteEditor();
	void init$();
	virtual $String* getJavaInitializationString() override;
	virtual void setAsText($String* text) override;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_ByteEditor_h_