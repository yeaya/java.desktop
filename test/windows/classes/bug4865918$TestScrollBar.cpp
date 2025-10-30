#include <bug4865918$TestScrollBar.h>

#include <bug4865918.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/Date.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef MOUSE_PRESSED

using $bug4865918 = ::bug4865918;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Date = ::java::util::Date;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;

$MethodInfo _bug4865918$TestScrollBar_MethodInfo_[] = {
	{"<init>", "(IIIII)V", nullptr, $PUBLIC, $method(static_cast<void(bug4865918$TestScrollBar::*)(int32_t,int32_t,int32_t,int32_t,int32_t)>(&bug4865918$TestScrollBar::init$))},
	{"pressMouse", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4865918$TestScrollBar_InnerClassesInfo_[] = {
	{"bug4865918$TestScrollBar", "bug4865918", "TestScrollBar", $STATIC},
	{}
};

$ClassInfo _bug4865918$TestScrollBar_ClassInfo_ = {
	$ACC_SUPER,
	"bug4865918$TestScrollBar",
	"javax.swing.JScrollBar",
	nullptr,
	nullptr,
	_bug4865918$TestScrollBar_MethodInfo_,
	nullptr,
	nullptr,
	_bug4865918$TestScrollBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug4865918"
};

$Object* allocate$bug4865918$TestScrollBar($Class* clazz) {
	return $of($alloc(bug4865918$TestScrollBar));
}

void bug4865918$TestScrollBar::init$(int32_t orientation, int32_t value, int32_t extent, int32_t min, int32_t max) {
	$JScrollBar::init$(orientation, value, extent, min, max);
}

void bug4865918$TestScrollBar::pressMouse() {
	$useLocalCurrentObjectStackCache();
	$init($bug4865918);
	$var($Component, var$0, static_cast<$Component*>($bug4865918::sbar));
	int64_t var$1 = ($$new($Date))->getTime();
	int32_t var$2 = 3 * getWidth() / 4;
	$var($MouseEvent, me, $new($MouseEvent, var$0, $MouseEvent::MOUSE_PRESSED, var$1, $MouseEvent::BUTTON1_MASK, var$2, getHeight() / 2, 1, true));
	processMouseEvent(me);
}

bug4865918$TestScrollBar::bug4865918$TestScrollBar() {
}

$Class* bug4865918$TestScrollBar::load$($String* name, bool initialize) {
	$loadClass(bug4865918$TestScrollBar, name, initialize, &_bug4865918$TestScrollBar_ClassInfo_, allocate$bug4865918$TestScrollBar);
	return class$;
}

$Class* bug4865918$TestScrollBar::class$ = nullptr;