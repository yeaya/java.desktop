#ifndef _bug7199708$2$1_h_
#define _bug7199708$2$1_h_
//$ class bug7199708$2$1
//$ extends bug7199708$ComponentAction

#include <bug7199708$ComponentAction.h>

class bug7199708$2;
namespace java {
	namespace awt {
		class Component;
	}
}

class bug7199708$2$1 : public ::bug7199708$ComponentAction {
	$class(bug7199708$2$1, $NO_CLASS_INIT, ::bug7199708$ComponentAction)
public:
	bug7199708$2$1();
	void init$(::bug7199708$2* this$0, $String* val$detailsTooltip);
	virtual bool accept(::java::awt::Component* component) override;
	virtual void perform(::java::awt::Component* component) override;
	::bug7199708$2* this$0 = nullptr;
	$String* val$detailsTooltip = nullptr;
};

#endif // _bug7199708$2$1_h_