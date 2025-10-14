#ifndef _com_sun_beans_editors_NumberEditor_h_
#define _com_sun_beans_editors_NumberEditor_h_
//$ class com.sun.beans.editors.NumberEditor
//$ extends java.beans.PropertyEditorSupport

#include <java/beans/PropertyEditorSupport.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class NumberEditor : public ::java::beans::PropertyEditorSupport {
	$class(NumberEditor, $NO_CLASS_INIT, ::java::beans::PropertyEditorSupport)
public:
	NumberEditor();
	void init$();
	virtual $String* getJavaInitializationString() override;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_NumberEditor_h_