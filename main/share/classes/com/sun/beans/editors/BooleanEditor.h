#ifndef _com_sun_beans_editors_BooleanEditor_h_
#define _com_sun_beans_editors_BooleanEditor_h_
//$ class com.sun.beans.editors.BooleanEditor
//$ extends java.beans.PropertyEditorSupport

#include <java/beans/PropertyEditorSupport.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class BooleanEditor : public ::java::beans::PropertyEditorSupport {
	$class(BooleanEditor, $NO_CLASS_INIT, ::java::beans::PropertyEditorSupport)
public:
	BooleanEditor();
	void init$();
	virtual $String* getAsText() override;
	virtual $String* getJavaInitializationString() override;
	virtual $StringArray* getTags() override;
	$String* getValidName(bool value);
	bool isValidName(bool value, $String* name);
	virtual void setAsText($String* text) override;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_BooleanEditor_h_