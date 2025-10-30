#include <com/sun/java/swing/plaf/motif/MotifMenuUI.h>

#include <com/sun/java/swing/plaf/motif/MotifMenuUI$MotifChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifMenuUI$MouseInputHandler.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/MenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuUI$ChangeHandler.h>
#include <javax/swing/plaf/basic/BasicMenuUI.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $MotifMenuUI$MotifChangeHandler = ::com::sun::java::swing::plaf::motif::MotifMenuUI$MotifChangeHandler;
using $MotifMenuUI$MouseInputHandler = ::com::sun::java::swing::plaf::motif::MotifMenuUI$MouseInputHandler;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JMenu = ::javax::swing::JMenu;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuElement = ::javax::swing::MenuElement;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $MenuItemUI = ::javax::swing::plaf::MenuItemUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;
using $BasicMenuUI = ::javax::swing::plaf::basic::BasicMenuUI;
using $BasicMenuUI$ChangeHandler = ::javax::swing::plaf::basic::BasicMenuUI$ChangeHandler;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$MethodInfo _MotifMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifMenuUI::*)()>(&MotifMenuUI::init$))},
	{"createChangeListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifMenuUI::createUI))},
	{"popupIsOpen", "(Ljavax/swing/JMenu;[Ljavax/swing/MenuElement;)Z", nullptr, $PRIVATE, $method(static_cast<bool(MotifMenuUI::*)($JMenu*,$MenuElementArray*)>(&MotifMenuUI::popupIsOpen))},
	{}
};

$InnerClassInfo _MotifMenuUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifMenuUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifMenuUI", "MouseInputHandler", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifMenuUI$MotifChangeHandler", "com.sun.java.swing.plaf.motif.MotifMenuUI", "MotifChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _MotifMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifMenuUI",
	"javax.swing.plaf.basic.BasicMenuUI",
	nullptr,
	nullptr,
	_MotifMenuUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifMenuUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifMenuUI$MouseInputHandler,com.sun.java.swing.plaf.motif.MotifMenuUI$MotifChangeHandler"
};

$Object* allocate$MotifMenuUI($Class* clazz) {
	return $of($alloc(MotifMenuUI));
}

void MotifMenuUI::init$() {
	$BasicMenuUI::init$();
}

$ComponentUI* MotifMenuUI::createUI($JComponent* x) {
	$init(MotifMenuUI);
	return $new(MotifMenuUI);
}

$ChangeListener* MotifMenuUI::createChangeListener($JComponent* c) {
	return $new($MotifMenuUI$MotifChangeHandler, this, $cast($JMenu, c), this);
}

bool MotifMenuUI::popupIsOpen($JMenu* m, $MenuElementArray* me) {
	int32_t i = 0;
	$var($JPopupMenu, pm, $nc(m)->getPopupMenu());
	for (i = $nc(me)->length - 1; i >= 0; --i) {
		if ($equals($nc(me->get(i))->getComponent(), pm)) {
			return true;
		}
	}
	return false;
}

$MouseInputListener* MotifMenuUI::createMouseInputListener($JComponent* c) {
	return $new($MotifMenuUI$MouseInputHandler, this);
}

MotifMenuUI::MotifMenuUI() {
}

$Class* MotifMenuUI::load$($String* name, bool initialize) {
	$loadClass(MotifMenuUI, name, initialize, &_MotifMenuUI_ClassInfo_, allocate$MotifMenuUI);
	return class$;
}

$Class* MotifMenuUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com