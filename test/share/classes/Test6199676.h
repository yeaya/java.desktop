#ifndef _Test6199676_h_
#define _Test6199676_h_
//$ class Test6199676
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}
namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class $export Test6199676 : public ::java::lang::Runnable {
	$class(Test6199676, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	Test6199676();
	void init$();
	static ::java::awt::Component* getPreview(::java::awt::Container* container);
	static bool isShowing(::java::awt::Component* component);
	static void main($StringArray* args);
	virtual void run() override;
	static void setLookAndFeel(::javax::swing::UIManager$LookAndFeelInfo* laf);
};

#endif // _Test6199676_h_