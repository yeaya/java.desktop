#ifndef _ProvokeGTK_h_
#define _ProvokeGTK_h_
//$ class ProvokeGTK
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export ProvokeGTK : public ::java::lang::Object {
	$class(ProvokeGTK, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ProvokeGTK();
	void init$();
	static void createAndShow();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
};

#endif // _ProvokeGTK_h_