#ifndef _bug7013453$1$1_h_
#define _bug7013453$1$1_h_
//$ class bug7013453$1$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class bug7013453$1;
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}

class bug7013453$1$1 : public ::java::lang::Runnable {
	$class(bug7013453$1$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	bug7013453$1$1();
	void init$(::bug7013453$1* this$0, Object$* val$paintManager, ::java::lang::reflect::Field* val$showingField);
	virtual void run() override;
	::bug7013453$1* this$0 = nullptr;
	::java::lang::reflect::Field* val$showingField = nullptr;
	$Object* val$paintManager = nullptr;
};

#endif // _bug7013453$1$1_h_