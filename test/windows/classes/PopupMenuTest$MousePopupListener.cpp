#include <PopupMenuTest$MousePopupListener.h>

#include <PopupMenuTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $PopupMenuTest = ::PopupMenuTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$FieldInfo _PopupMenuTest$MousePopupListener_FieldInfo_[] = {
	{"this$0", "LPopupMenuTest;", nullptr, $FINAL | $SYNTHETIC, $field(PopupMenuTest$MousePopupListener, this$0)},
	{}
};

$MethodInfo _PopupMenuTest$MousePopupListener_MethodInfo_[] = {
	{"<init>", "(LPopupMenuTest;)V", nullptr, 0, $method(static_cast<void(PopupMenuTest$MousePopupListener::*)($PopupMenuTest*)>(&PopupMenuTest$MousePopupListener::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"showPopup", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(PopupMenuTest$MousePopupListener::*)($MouseEvent*)>(&PopupMenuTest$MousePopupListener::showPopup))},
	{}
};

$InnerClassInfo _PopupMenuTest$MousePopupListener_InnerClassesInfo_[] = {
	{"PopupMenuTest$MousePopupListener", "PopupMenuTest", "MousePopupListener", 0},
	{}
};

$ClassInfo _PopupMenuTest$MousePopupListener_ClassInfo_ = {
	$ACC_SUPER,
	"PopupMenuTest$MousePopupListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_PopupMenuTest$MousePopupListener_FieldInfo_,
	_PopupMenuTest$MousePopupListener_MethodInfo_,
	nullptr,
	nullptr,
	_PopupMenuTest$MousePopupListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PopupMenuTest"
};

$Object* allocate$PopupMenuTest$MousePopupListener($Class* clazz) {
	return $of($alloc(PopupMenuTest$MousePopupListener));
}

void PopupMenuTest$MousePopupListener::init$($PopupMenuTest* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void PopupMenuTest$MousePopupListener::mousePressed($MouseEvent* e) {
	showPopup(e);
}

void PopupMenuTest$MousePopupListener::mouseClicked($MouseEvent* e) {
	showPopup(e);
}

void PopupMenuTest$MousePopupListener::mouseReleased($MouseEvent* e) {
	showPopup(e);
}

void PopupMenuTest$MousePopupListener::showPopup($MouseEvent* e) {
	$init($PopupMenuTest);
	$var($Component, var$0, static_cast<$Component*>($PopupMenuTest::panel));
	int32_t var$1 = $nc(e)->getX();
	$nc(this->this$0->jpopup)->show(var$0, var$1, e->getY());
}

PopupMenuTest$MousePopupListener::PopupMenuTest$MousePopupListener() {
}

$Class* PopupMenuTest$MousePopupListener::load$($String* name, bool initialize) {
	$loadClass(PopupMenuTest$MousePopupListener, name, initialize, &_PopupMenuTest$MousePopupListener_ClassInfo_, allocate$PopupMenuTest$MousePopupListener);
	return class$;
}

$Class* PopupMenuTest$MousePopupListener::class$ = nullptr;