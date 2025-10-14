#ifndef _TitledBorder$1_h_
#define _TitledBorder$1_h_
//$ class TitledBorder$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

class TitledBorder;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TitledBorder$1 : public ::java::lang::Runnable {
	$class(TitledBorder$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TitledBorder$1();
	void init$(::TitledBorder* this$0);
	void lambda$run$0(::java::awt::event::ActionEvent* e);
	virtual void run() override;
	::TitledBorder* this$0 = nullptr;
};

#endif // _TitledBorder$1_h_