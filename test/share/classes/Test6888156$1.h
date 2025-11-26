#ifndef _Test6888156$1_h_
#define _Test6888156$1_h_
//$ class Test6888156$1
//$ extends javax.swing.Icon

#include <javax/swing/Icon.h>

class Test6888156;
namespace java {
	namespace awt {
		class Component;
		class Graphics;
	}
}

class Test6888156$1 : public ::javax::swing::Icon {
	$class(Test6888156$1, $NO_CLASS_INIT, ::javax::swing::Icon)
public:
	Test6888156$1();
	void init$(::Test6888156* this$0);
	virtual int32_t getIconHeight() override;
	virtual int32_t getIconWidth() override;
	virtual void paintIcon(::java::awt::Component* c, ::java::awt::Graphics* g, int32_t w, int32_t h) override;
	::Test6888156* this$0 = nullptr;
};

#endif // _Test6888156$1_h_