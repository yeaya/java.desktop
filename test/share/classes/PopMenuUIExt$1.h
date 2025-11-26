#ifndef _PopMenuUIExt$1_h_
#define _PopMenuUIExt$1_h_
//$ class PopMenuUIExt$1
//$ extends javax.swing.PopupFactory

#include <javax/swing/PopupFactory.h>

class PopMenuUIExt;
namespace java {
	namespace awt {
		class Component;
	}
}
namespace javax {
	namespace swing {
		class Popup;
	}
}

class PopMenuUIExt$1 : public ::javax::swing::PopupFactory {
	$class(PopMenuUIExt$1, $NO_CLASS_INIT, ::javax::swing::PopupFactory)
public:
	PopMenuUIExt$1();
	using ::javax::swing::PopupFactory::getPopup;
	void init$(::PopMenuUIExt* this$0);
	virtual ::javax::swing::Popup* getPopup(::java::awt::Component* owner, ::java::awt::Component* contents, int32_t x, int32_t y) override;
	::PopMenuUIExt* this$0 = nullptr;
};

#endif // _PopMenuUIExt$1_h_