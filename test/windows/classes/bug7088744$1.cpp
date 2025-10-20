#include <bug7088744$1.h>

#include <bug7088744.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Event.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef ALT_DOWN_MASK
#undef ALT_MASK
#undef BUTTON1
#undef BUTTON1_DOWN_MASK
#undef BUTTON1_MASK
#undef BUTTON2
#undef BUTTON2_DOWN_MASK
#undef BUTTON2_MASK
#undef BUTTON3
#undef BUTTON3_DOWN_MASK
#undef BUTTON3_MASK
#undef META_DOWN_MASK
#undef META_MASK
#undef NOBUTTON

using $bug7088744 = ::bug7088744;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Event = ::java::awt::Event;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug7088744$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7088744$1::*)()>(&bug7088744$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7088744$1_EnclosingMethodInfo_ = {
	"bug7088744",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7088744$1_InnerClassesInfo_[] = {
	{"bug7088744$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7088744$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7088744$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7088744$1_MethodInfo_,
	nullptr,
	&_bug7088744$1_EnclosingMethodInfo_,
	_bug7088744$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7088744"
};

$Object* allocate$bug7088744$1($Class* clazz) {
	return $of($alloc(bug7088744$1));
}

void bug7088744$1::init$() {
}

void bug7088744$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($Component, source, $new($JLabel));
	$var($MouseEvent, mouseEventNoButtons, $new($MouseEvent, source, 0, $System::currentTimeMillis(), (($Event::ALT_MASK | $Event::META_MASK) | $InputEvent::ALT_DOWN_MASK) | $InputEvent::META_DOWN_MASK, 0, 0, 0, false, $MouseEvent::NOBUTTON));
	if ($SwingUtilities::isLeftMouseButton(mouseEventNoButtons)) {
		$throwNew($RuntimeException, "SwingUtilities.isLeftMouseButton fails 1"_s);
	}
	if (!$SwingUtilities::isLeftMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON1_MASK, 0, 0, 1, false, $MouseEvent::BUTTON1))) {
		$throwNew($RuntimeException, "SwingUtilities.isLeftMouseButton fails 2"_s);
	}
	if (!$SwingUtilities::isLeftMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON1_DOWN_MASK, 0, 0, 1, false, $MouseEvent::BUTTON1))) {
		$throwNew($RuntimeException, "SwingUtilities.isLeftMouseButton fails 3"_s);
	}
	if ($SwingUtilities::isMiddleMouseButton(mouseEventNoButtons)) {
		$throwNew($RuntimeException, "SwingUtilities.isMiddleMouseButton fails 1"_s);
	}
	if (!$SwingUtilities::isMiddleMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON2_MASK, 0, 0, 1, false, $MouseEvent::BUTTON2))) {
		$throwNew($RuntimeException, "SwingUtilities.isMiddleMouseButton fails 2"_s);
	}
	if (!$SwingUtilities::isMiddleMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON2_DOWN_MASK, 0, 0, 1, false, $MouseEvent::BUTTON2))) {
		$throwNew($RuntimeException, "SwingUtilities.isMiddleMouseButton fails 3"_s);
	}
	if ($SwingUtilities::isRightMouseButton(mouseEventNoButtons)) {
		$throwNew($RuntimeException, "SwingUtilities.isRightMouseButton fails 1"_s);
	}
	if (!$SwingUtilities::isRightMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON3_MASK, 0, 0, 1, false, $MouseEvent::BUTTON3))) {
		$throwNew($RuntimeException, "SwingUtilities.isRightMouseButton fails 2"_s);
	}
	if (!$SwingUtilities::isRightMouseButton($$new($MouseEvent, source, 0, $System::currentTimeMillis(), $InputEvent::BUTTON3_DOWN_MASK, 0, 0, 1, false, $MouseEvent::BUTTON3))) {
		$throwNew($RuntimeException, "SwingUtilities.isRightMouseButton fails 3"_s);
	}
}

bug7088744$1::bug7088744$1() {
}

$Class* bug7088744$1::load$($String* name, bool initialize) {
	$loadClass(bug7088744$1, name, initialize, &_bug7088744$1_ClassInfo_, allocate$bug7088744$1);
	return class$;
}

$Class* bug7088744$1::class$ = nullptr;