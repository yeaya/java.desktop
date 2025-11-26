#ifndef _java_beans_PropertyEditorManager_h_
#define _java_beans_PropertyEditorManager_h_
//$ class java.beans.PropertyEditorManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyEditor;
	}
}

namespace java {
	namespace beans {

class $export PropertyEditorManager : public ::java::lang::Object {
	$class(PropertyEditorManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PropertyEditorManager();
	void init$();
	static ::java::beans::PropertyEditor* findEditor($Class* targetType);
	static $StringArray* getEditorSearchPath();
	static void registerEditor($Class* targetType, $Class* editorClass);
	static void setEditorSearchPath($StringArray* path);
};

	} // beans
} // java

#endif // _java_beans_PropertyEditorManager_h_