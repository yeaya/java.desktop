#include <javax/swing/MenuElement.h>

#include <java/awt/Component.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/MenuSelectionManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _MenuElement_MethodInfo_[] = {
	{"getComponent", "()Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSubElements", "()[Ljavax/swing/MenuElement;", nullptr, $PUBLIC | $ABSTRACT},
	{"menuSelectionChanged", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;[Ljavax/swing/MenuElement;Ljavax/swing/MenuSelectionManager;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _MenuElement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.MenuElement",
	nullptr,
	nullptr,
	nullptr,
	_MenuElement_MethodInfo_
};

$Object* allocate$MenuElement($Class* clazz) {
	return $of($alloc(MenuElement));
}

$Class* MenuElement::load$($String* name, bool initialize) {
	$loadClass(MenuElement, name, initialize, &_MenuElement_ClassInfo_, allocate$MenuElement);
	return class$;
}

$Class* MenuElement::class$ = nullptr;

	} // swing
} // javax