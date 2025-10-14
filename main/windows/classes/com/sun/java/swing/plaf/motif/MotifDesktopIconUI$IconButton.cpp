#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton.h>

#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton$1.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton$2.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef NOBUTTON

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifDesktopIconUI$IconButton$1 = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton$1;
using $MotifDesktopIconUI$IconButton$2 = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton$2;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopIconUI$IconButton_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconButton, this$0)},
	{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(MotifDesktopIconUI$IconButton, icon)},
	{}
};

$MethodInfo _MotifDesktopIconUI$IconButton_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;Ljavax/swing/Icon;)V", nullptr, 0, $method(static_cast<void(MotifDesktopIconUI$IconButton::*)($MotifDesktopIconUI*,$Icon*)>(&MotifDesktopIconUI$IconButton::init$))},
	{"forwardEventToParent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifDesktopIconUI$IconButton_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconButton", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$2", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MotifDesktopIconUI$IconButton_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton",
	"javax.swing.JButton",
	nullptr,
	_MotifDesktopIconUI$IconButton_FieldInfo_,
	_MotifDesktopIconUI$IconButton_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDesktopIconUI$IconButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
};

$Object* allocate$MotifDesktopIconUI$IconButton($Class* clazz) {
	return $of($alloc(MotifDesktopIconUI$IconButton));
}

void MotifDesktopIconUI$IconButton::init$($MotifDesktopIconUI* this$0, $Icon* icon) {
	$set(this, this$0, this$0);
	$JButton::init$(icon);
	$set(this, icon, icon);
	addMouseMotionListener($$new($MotifDesktopIconUI$IconButton$1, this, this$0));
	addMouseListener($$new($MotifDesktopIconUI$IconButton$2, this, this$0));
}

void MotifDesktopIconUI$IconButton::forwardEventToParent($MouseEvent* e) {
	$var($Component, var$0, static_cast<$Component*>(getParent()));
	int32_t var$1 = $nc(e)->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getX();
	int32_t var$5 = e->getY();
	int32_t var$6 = e->getXOnScreen();
	int32_t var$7 = e->getYOnScreen();
	int32_t var$8 = e->getClickCount();
	$var($MouseEvent, newEvent, $new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, e->isPopupTrigger(), $MouseEvent::NOBUTTON));
	$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
	$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(e));
	$nc($(getParent()))->dispatchEvent(newEvent);
}

bool MotifDesktopIconUI$IconButton::isFocusTraversable() {
	return false;
}

MotifDesktopIconUI$IconButton::MotifDesktopIconUI$IconButton() {
}

$Class* MotifDesktopIconUI$IconButton::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopIconUI$IconButton, name, initialize, &_MotifDesktopIconUI$IconButton_ClassInfo_, allocate$MotifDesktopIconUI$IconButton);
	return class$;
}

$Class* MotifDesktopIconUI$IconButton::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com