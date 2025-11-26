#ifndef _bug7199708$2$2_h_
#define _bug7199708$2$2_h_
//$ class bug7199708$2$2
//$ extends bug7199708$ComponentAction

#include <bug7199708$ComponentAction.h>

class bug7199708$2;
namespace java {
	namespace awt {
		class Component;
	}
}

class bug7199708$2$2 : public ::bug7199708$ComponentAction {
	$class(bug7199708$2$2, $NO_CLASS_INIT, ::bug7199708$ComponentAction)
public:
	bug7199708$2$2();
	void init$(::bug7199708$2* this$0);
	virtual bool accept(::java::awt::Component* component) override;
	virtual void perform(::java::awt::Component* component) override;
	::bug7199708$2* this$0 = nullptr;
};

#endif // _bug7199708$2$2_h_