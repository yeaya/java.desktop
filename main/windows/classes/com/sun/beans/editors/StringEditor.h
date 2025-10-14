#ifndef _com_sun_beans_editors_StringEditor_h_
#define _com_sun_beans_editors_StringEditor_h_
//$ class com.sun.beans.editors.StringEditor
//$ extends java.beans.PropertyEditorSupport

#include <java/beans/PropertyEditorSupport.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class StringEditor : public ::java::beans::PropertyEditorSupport {
	$class(StringEditor, $NO_CLASS_INIT, ::java::beans::PropertyEditorSupport)
public:
	StringEditor();
	void init$();
	virtual $String* getJavaInitializationString() override;
	virtual void setAsText($String* text) override;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_StringEditor_h_