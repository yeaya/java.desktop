#ifndef _DemandGTK_h_
#define _DemandGTK_h_
//$ class DemandGTK
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export DemandGTK : public ::java::lang::Object {
	$class(DemandGTK, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DemandGTK();
	void init$();
	static void createAndShow();
	static void lambda$main$0();
	static void main($StringArray* args);
	static ::javax::swing::JFrame* frame;
};

#endif // _DemandGTK_h_