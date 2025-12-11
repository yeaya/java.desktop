#include <sun/lwawt/LWListPeer$ScrollableJList$JListDelegate.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/List.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWListPeer$ScrollableJList.h>
#include <sun/lwawt/LWListPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef KEY_PRESSED
#undef MOUSE_CLICKED
#undef VK_ENTER

using $AWTEvent = ::java::awt::AWTEvent;
using $List = ::java::awt::List;
using $Point = ::java::awt::Point;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $JList = ::javax::swing::JList;
using $ListModel = ::javax::swing::ListModel;
using $LWListPeer = ::sun::lwawt::LWListPeer;
using $LWListPeer$ScrollableJList = ::sun::lwawt::LWListPeer$ScrollableJList;

namespace sun {
	namespace lwawt {

$FieldInfo _LWListPeer$ScrollableJList$JListDelegate_FieldInfo_[] = {
	{"this$1", "Lsun/lwawt/LWListPeer$ScrollableJList;", nullptr, $FINAL | $SYNTHETIC, $field(LWListPeer$ScrollableJList$JListDelegate, this$1)},
	{}
};

$MethodInfo _LWListPeer$ScrollableJList$JListDelegate_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/LWListPeer$ScrollableJList;)V", nullptr, 0, $method(static_cast<void(LWListPeer$ScrollableJList$JListDelegate::*)($LWListPeer$ScrollableJList*)>(&LWListPeer$ScrollableJList$JListDelegate::init$))},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC},
	{"hasFocus", "()Z", nullptr, $PUBLIC},
	{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED},
	{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _LWListPeer$ScrollableJList$JListDelegate_InnerClassesInfo_[] = {
	{"sun.lwawt.LWListPeer$ScrollableJList", "sun.lwawt.LWListPeer", "ScrollableJList", $FINAL},
	{"sun.lwawt.LWListPeer$ScrollableJList$JListDelegate", "sun.lwawt.LWListPeer$ScrollableJList", "JListDelegate", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _LWListPeer$ScrollableJList$JListDelegate_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.LWListPeer$ScrollableJList$JListDelegate",
	"javax.swing.JList",
	nullptr,
	_LWListPeer$ScrollableJList$JListDelegate_FieldInfo_,
	_LWListPeer$ScrollableJList$JListDelegate_MethodInfo_,
	"Ljavax/swing/JList<Ljava/lang/String;>;",
	nullptr,
	_LWListPeer$ScrollableJList$JListDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.LWListPeer"
};

$Object* allocate$LWListPeer$ScrollableJList$JListDelegate($Class* clazz) {
	return $of($alloc(LWListPeer$ScrollableJList$JListDelegate));
}

void LWListPeer$ScrollableJList$JListDelegate::init$($LWListPeer$ScrollableJList* this$1) {
	$set(this, this$1, this$1);
	$JList::init$(static_cast<$ListModel*>(this$1->model));
}

bool LWListPeer$ScrollableJList$JListDelegate::hasFocus() {
	return $nc(($cast($List, $($nc(this->this$1->this$0)->getTarget()))))->hasFocus();
}

void LWListPeer$ScrollableJList$JListDelegate::processMouseEvent($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$JList::processMouseEvent(e);
	bool var$0 = $nc(e)->getID() == $MouseEvent::MOUSE_CLICKED;
	if (var$0 && e->getClickCount() == 2) {
		int32_t index = locationToIndex($(e->getPoint()));
		if (0 <= index && index < $nc($(getModel()))->getSize()) {
			$var($Object, var$1, $of($nc(this->this$1->this$0)->getTarget()));
			$var($String, var$2, $cast($String, $nc($(getModel()))->getElementAt(index)));
			int64_t var$3 = e->getWhen();
			$nc(this->this$1->this$0)->postEvent($$new($ActionEvent, var$1, $ActionEvent::ACTION_PERFORMED, var$2, var$3, e->getModifiers()));
		}
	}
}

void LWListPeer$ScrollableJList$JListDelegate::processKeyEvent($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$JList::processKeyEvent(e);
	bool var$0 = $nc(e)->getID() == $KeyEvent::KEY_PRESSED;
	if (var$0 && e->getKeyCode() == $KeyEvent::VK_ENTER) {
		$var($String, selectedValue, $cast($String, getSelectedValue()));
		if (selectedValue != nullptr) {
			$var($Object, var$1, $of($nc(this->this$1->this$0)->getTarget()));
			$var($String, var$2, selectedValue);
			int64_t var$3 = e->getWhen();
			$nc(this->this$1->this$0)->postEvent($$new($ActionEvent, var$1, $ActionEvent::ACTION_PERFORMED, var$2, var$3, e->getModifiers()));
		}
	}
}

$Point* LWListPeer$ScrollableJList$JListDelegate::getLocationOnScreen() {
	return $nc(this->this$1->this$0)->getLocationOnScreen();
}

LWListPeer$ScrollableJList$JListDelegate::LWListPeer$ScrollableJList$JListDelegate() {
}

$Class* LWListPeer$ScrollableJList$JListDelegate::load$($String* name, bool initialize) {
	$loadClass(LWListPeer$ScrollableJList$JListDelegate, name, initialize, &_LWListPeer$ScrollableJList$JListDelegate_ClassInfo_, allocate$LWListPeer$ScrollableJList$JListDelegate);
	return class$;
}

$Class* LWListPeer$ScrollableJList$JListDelegate::class$ = nullptr;

	} // lwawt
} // sun