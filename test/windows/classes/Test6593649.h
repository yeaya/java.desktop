#ifndef _Test6593649_h_
#define _Test6593649_h_
//$ class Test6593649
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
		class JTextArea;
		class Timer;
	}
}

class $export Test6593649 : public ::java::lang::Object {
	$class(Test6593649, 0, ::java::lang::Object)
public:
	Test6593649();
	void init$();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextArea* textArea;
	static ::javax::swing::Timer* timer;
};

#endif // _Test6593649_h_