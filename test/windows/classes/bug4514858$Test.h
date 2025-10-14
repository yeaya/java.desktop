#ifndef _bug4514858$Test_h_
#define _bug4514858$Test_h_
//$ class bug4514858$Test
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

class $export bug4514858$Test : public ::java::lang::Object {
	$class(bug4514858$Test, $NO_CLASS_INIT, ::java::lang::Object)
public:
	bug4514858$Test();
	void init$();
	virtual ::javax::swing::JFrame* createTestFrame($String* name, ::java::awt::Component* topComponent, $String* instructions, int32_t instrHeight);
	virtual void pass();
	virtual void waitTestResult();
	bool pass$ = false;
};

#endif // _bug4514858$Test_h_