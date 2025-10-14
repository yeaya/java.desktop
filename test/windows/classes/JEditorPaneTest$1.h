#ifndef _JEditorPaneTest$1_h_
#define _JEditorPaneTest$1_h_
//$ class JEditorPaneTest$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace io {
		class File;
	}
}

class JEditorPaneTest$1 : public ::java::lang::Runnable {
	$class(JEditorPaneTest$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JEditorPaneTest$1();
	void init$(::java::io::File* val$file);
	virtual void run() override;
	::java::io::File* val$file = nullptr;
};

#endif // _JEditorPaneTest$1_h_