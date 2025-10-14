#ifndef _IconCoord$Test_h_
#define _IconCoord$Test_h_
//$ class IconCoord$Test
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
	}
}

class $export IconCoord$Test : public ::java::lang::Object {
	$class(IconCoord$Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IconCoord$Test();
	void init$();
	virtual ::javax::swing::JFrame* createTestFrame($String* name, ::java::awt::Component* topComponent, $String* instructions, int32_t instrHeight);
	virtual void pass();
	virtual void waitTestResult();
	bool pass$ = false;
};

#endif // _IconCoord$Test_h_