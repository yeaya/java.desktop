#ifndef _bug4865918_h_
#define _bug4865918_h_
//$ class bug4865918
//$ extends java.lang.Object

#include <java/lang/Array.h>

class bug4865918$TestScrollBar;
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export bug4865918 : public ::java::lang::Object {
	$class(bug4865918, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4865918();
	void init$();
	static void createAndShowGUI();
	static int32_t getValue();
	static void lambda$main$0();
	static void main($StringArray* argv);
	static ::bug4865918$TestScrollBar* sbar;
	static ::javax::swing::JFrame* frame;
};

#endif // _bug4865918_h_