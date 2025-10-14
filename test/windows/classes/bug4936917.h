#ifndef _bug4936917_h_
#define _bug4936917_h_
//$ class bug4936917
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Point;
	}
}
namespace java {
	namespace util {
		class Timer;
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JEditorPane;
		class JFrame;
	}
}

class $export bug4936917 : public ::java::lang::Object {
	$class(bug4936917, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4936917();
	void init$();
	virtual void blockTillDisplayed(::javax::swing::JComponent* comp);
	virtual void destroy();
	virtual void init();
	void lambda$blockTillDisplayed$0(::javax::swing::JComponent* comp);
	static void lambda$destroy$1();
	static void main($StringArray* args);
	bool passed = false;
	::java::util::Timer* timer = nullptr;
	::javax::swing::JEditorPane* editorPane = nullptr;
	static ::javax::swing::JFrame* f;
	$volatile(::java::awt::Point*) p = nullptr;
	$String* text = nullptr;
};

#endif // _bug4936917_h_