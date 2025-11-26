#ifndef _LostText$2_h_
#define _LostText$2_h_
//$ class LostText$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class LostText;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class LostText$2 : public ::java::lang::Runnable {
	$class(LostText$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LostText$2();
	void init$(::LostText* this$0);
	void lambda$run$0(::java::awt::event::ActionEvent* e);
	void lambda$run$1(::java::awt::event::ActionEvent* e);
	virtual void run() override;
	::LostText* this$0 = nullptr;
};

#endif // _LostText$2_h_