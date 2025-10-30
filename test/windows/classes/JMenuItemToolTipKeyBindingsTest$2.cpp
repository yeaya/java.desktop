#include <JMenuItemToolTipKeyBindingsTest$2.h>

#include <JMenuItemToolTipKeyBindingsTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $JMenuItemToolTipKeyBindingsTest = ::JMenuItemToolTipKeyBindingsTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _JMenuItemToolTipKeyBindingsTest$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JMenuItemToolTipKeyBindingsTest$2::*)()>(&JMenuItemToolTipKeyBindingsTest$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JMenuItemToolTipKeyBindingsTest$2_EnclosingMethodInfo_ = {
	"JMenuItemToolTipKeyBindingsTest",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _JMenuItemToolTipKeyBindingsTest$2_InnerClassesInfo_[] = {
	{"JMenuItemToolTipKeyBindingsTest$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMenuItemToolTipKeyBindingsTest$2_ClassInfo_ = {
	$ACC_SUPER,
	"JMenuItemToolTipKeyBindingsTest$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_JMenuItemToolTipKeyBindingsTest$2_MethodInfo_,
	nullptr,
	&_JMenuItemToolTipKeyBindingsTest$2_EnclosingMethodInfo_,
	_JMenuItemToolTipKeyBindingsTest$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JMenuItemToolTipKeyBindingsTest"
};

$Object* allocate$JMenuItemToolTipKeyBindingsTest$2($Class* clazz) {
	return $of($alloc(JMenuItemToolTipKeyBindingsTest$2));
}

void JMenuItemToolTipKeyBindingsTest$2::init$() {
}

void JMenuItemToolTipKeyBindingsTest$2::actionPerformed($ActionEvent* e) {
	$init($JMenuItemToolTipKeyBindingsTest);
	$JMenuItemToolTipKeyBindingsTest::testResult = false;
	$JMenuItemToolTipKeyBindingsTest::completeTest();
}

JMenuItemToolTipKeyBindingsTest$2::JMenuItemToolTipKeyBindingsTest$2() {
}

$Class* JMenuItemToolTipKeyBindingsTest$2::load$($String* name, bool initialize) {
	$loadClass(JMenuItemToolTipKeyBindingsTest$2, name, initialize, &_JMenuItemToolTipKeyBindingsTest$2_ClassInfo_, allocate$JMenuItemToolTipKeyBindingsTest$2);
	return class$;
}

$Class* JMenuItemToolTipKeyBindingsTest$2::class$ = nullptr;