#ifndef _JEditorPaneTest_h_
#define _JEditorPaneTest_h_
//$ class JEditorPaneTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class File;
	}
}

class $export JEditorPaneTest : public ::java::lang::Object {
	$class(JEditorPaneTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	JEditorPaneTest();
	void init$();
	static void main($StringArray* args);
	static void writeFile(::java::io::File* file);
};

#endif // _JEditorPaneTest_h_