#include <ContextualMenuClearsTextSelectionTest$1.h>

#include <ContextualMenuClearsTextSelectionTest.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $ContextualMenuClearsTextSelectionTest = ::ContextualMenuClearsTextSelectionTest;
using $Component = ::java::awt::Component;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JPopupMenu = ::javax::swing::JPopupMenu;

$MethodInfo _ContextualMenuClearsTextSelectionTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ContextualMenuClearsTextSelectionTest$1::*)()>(&ContextualMenuClearsTextSelectionTest$1::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"showPopupMenu", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(ContextualMenuClearsTextSelectionTest$1::*)($MouseEvent*)>(&ContextualMenuClearsTextSelectionTest$1::showPopupMenu))},
	{}
};

$EnclosingMethodInfo _ContextualMenuClearsTextSelectionTest$1_EnclosingMethodInfo_ = {
	"ContextualMenuClearsTextSelectionTest",
	"createPopup",
	"(Ljavax/swing/JTextField;)V"
};

$InnerClassInfo _ContextualMenuClearsTextSelectionTest$1_InnerClassesInfo_[] = {
	{"ContextualMenuClearsTextSelectionTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ContextualMenuClearsTextSelectionTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ContextualMenuClearsTextSelectionTest$1",
	"java.awt.event.MouseAdapter",
	nullptr,
	nullptr,
	_ContextualMenuClearsTextSelectionTest$1_MethodInfo_,
	nullptr,
	&_ContextualMenuClearsTextSelectionTest$1_EnclosingMethodInfo_,
	_ContextualMenuClearsTextSelectionTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ContextualMenuClearsTextSelectionTest"
};

$Object* allocate$ContextualMenuClearsTextSelectionTest$1($Class* clazz) {
	return $of($alloc(ContextualMenuClearsTextSelectionTest$1));
}

void ContextualMenuClearsTextSelectionTest$1::init$() {
	$MouseAdapter::init$();
}

void ContextualMenuClearsTextSelectionTest$1::mousePressed($MouseEvent* e) {
	if ($nc(e)->isPopupTrigger()) {
		showPopupMenu(e);
	}
}

void ContextualMenuClearsTextSelectionTest$1::mouseReleased($MouseEvent* e) {
	if ($nc(e)->isPopupTrigger()) {
		showPopupMenu(e);
	}
}

void ContextualMenuClearsTextSelectionTest$1::showPopupMenu($MouseEvent* e) {
	$init($ContextualMenuClearsTextSelectionTest);
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	int32_t var$1 = e->getX();
	$nc($ContextualMenuClearsTextSelectionTest::popupMenu)->show(var$0, var$1, e->getY());
}

ContextualMenuClearsTextSelectionTest$1::ContextualMenuClearsTextSelectionTest$1() {
}

$Class* ContextualMenuClearsTextSelectionTest$1::load$($String* name, bool initialize) {
	$loadClass(ContextualMenuClearsTextSelectionTest$1, name, initialize, &_ContextualMenuClearsTextSelectionTest$1_ClassInfo_, allocate$ContextualMenuClearsTextSelectionTest$1);
	return class$;
}

$Class* ContextualMenuClearsTextSelectionTest$1::class$ = nullptr;