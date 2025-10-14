#include <PopupMenuTest$PopupListener.h>

#include <PopMenuUIExt.h>
#include <PopupMenuTest.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/Popup.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/PopupMenuUI.h>
#include <jcpp.h>

using $PopMenuUIExt = ::PopMenuUIExt;
using $PopupMenuTest = ::PopupMenuTest;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $Popup = ::javax::swing::Popup;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;
using $PopupMenuListener = ::javax::swing::event::PopupMenuListener;
using $PopupMenuUI = ::javax::swing::plaf::PopupMenuUI;

$FieldInfo _PopupMenuTest$PopupListener_FieldInfo_[] = {
	{"this$0", "LPopupMenuTest;", nullptr, $FINAL | $SYNTHETIC, $field(PopupMenuTest$PopupListener, this$0)},
	{}
};

$MethodInfo _PopupMenuTest$PopupListener_MethodInfo_[] = {
	{"<init>", "(LPopupMenuTest;)V", nullptr, 0, $method(static_cast<void(PopupMenuTest$PopupListener::*)($PopupMenuTest*)>(&PopupMenuTest$PopupListener::init$))},
	{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PopupMenuTest$PopupListener_InnerClassesInfo_[] = {
	{"PopupMenuTest$PopupListener", "PopupMenuTest", "PopupListener", 0},
	{}
};

$ClassInfo _PopupMenuTest$PopupListener_ClassInfo_ = {
	$ACC_SUPER,
	"PopupMenuTest$PopupListener",
	"java.lang.Object",
	"javax.swing.event.PopupMenuListener",
	_PopupMenuTest$PopupListener_FieldInfo_,
	_PopupMenuTest$PopupListener_MethodInfo_,
	nullptr,
	nullptr,
	_PopupMenuTest$PopupListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"PopupMenuTest"
};

$Object* allocate$PopupMenuTest$PopupListener($Class* clazz) {
	return $of($alloc(PopupMenuTest$PopupListener));
}

void PopupMenuTest$PopupListener::init$($PopupMenuTest* this$0) {
	$set(this, this$0, this$0);
}

void PopupMenuTest$PopupListener::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
}

void PopupMenuTest$PopupListener::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
	$var($Popup, popup, $nc(($cast($PopMenuUIExt, $($cast($PopupMenuUI, $nc(this->this$0->jpopup)->getUI())))))->getPopup());
	if (popup != nullptr) {
		$init($PopupMenuTest);
		$PopupMenuTest::isLightWeight = !$nc($($of(popup)->getClass()->toString()))->contains("HeavyWeightPopup"_s);
	}
}

void PopupMenuTest$PopupListener::popupMenuCanceled($PopupMenuEvent* e) {
}

PopupMenuTest$PopupListener::PopupMenuTest$PopupListener() {
}

$Class* PopupMenuTest$PopupListener::load$($String* name, bool initialize) {
	$loadClass(PopupMenuTest$PopupListener, name, initialize, &_PopupMenuTest$PopupListener_ClassInfo_, allocate$PopupMenuTest$PopupListener);
	return class$;
}

$Class* PopupMenuTest$PopupListener::class$ = nullptr;