#ifndef _TestFormViewNPE_h_
#define _TestFormViewNPE_h_
//$ class TestFormViewNPE
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JEditorPane;
		class JFrame;
	}
}

class $export TestFormViewNPE : public ::java::lang::Object {
	$class(TestFormViewNPE, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestFormViewNPE();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	static void setup();
	static ::javax::swing::JEditorPane* html;
	static ::javax::swing::JFrame* frame;
	static const int32_t width = 200;
	static const int32_t height = 100;
};

#endif // _TestFormViewNPE_h_