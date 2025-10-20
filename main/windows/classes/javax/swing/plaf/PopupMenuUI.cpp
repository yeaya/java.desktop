#include <javax/swing/plaf/PopupMenuUI.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _PopupMenuUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PopupMenuUI::*)()>(&PopupMenuUI::init$))},
	{"getPopup", "(Ljavax/swing/JPopupMenu;II)Ljavax/swing/Popup;", nullptr, $PUBLIC},
	{"isPopupTrigger", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PopupMenuUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.PopupMenuUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_PopupMenuUI_MethodInfo_
};

$Object* allocate$PopupMenuUI($Class* clazz) {
	return $of($alloc(PopupMenuUI));
}

void PopupMenuUI::init$() {
	$ComponentUI::init$();
}

bool PopupMenuUI::isPopupTrigger($MouseEvent* e) {
	return $nc(e)->isPopupTrigger();
}

$Popup* PopupMenuUI::getPopup($JPopupMenu* popup, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($PopupFactory, popupFactory, $PopupFactory::getSharedInstance());
	return $nc(popupFactory)->getPopup($($nc(popup)->getInvoker()), popup, x, y);
}

PopupMenuUI::PopupMenuUI() {
}

$Class* PopupMenuUI::load$($String* name, bool initialize) {
	$loadClass(PopupMenuUI, name, initialize, &_PopupMenuUI_ClassInfo_, allocate$PopupMenuUI);
	return class$;
}

$Class* PopupMenuUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax