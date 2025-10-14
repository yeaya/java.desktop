#ifndef _bug4816114_h_
#define _bug4816114_h_
//$ class bug4816114
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JSplitPane;
	}
}

class $export bug4816114 : public ::java::lang::Object {
	$class(bug4816114, 0, ::java::lang::Object)
public:
	bug4816114();
	void init$();
	virtual void createAndShowGUI();
	virtual void doTest(int32_t width, int32_t height);
	virtual bool isPassed();
	static void lambda$main$0();
	static void main($StringArray* args);
	virtual void setPassed(int32_t orientation, bool passed);
	static ::javax::swing::JFrame* fr;
	::javax::swing::JSplitPane* splitPane = nullptr;
	$booleans* resized = nullptr;
	static int32_t step;
	bool h_passed = false;
	bool v_passed = false;
	static ::bug4816114* test;
};

#endif // _bug4816114_h_