#include <JMenuItemToolTipKeyBindingsTest$1.h>

#include <JMenuItemToolTipKeyBindingsTest.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $JMenuItemToolTipKeyBindingsTest = ::JMenuItemToolTipKeyBindingsTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _JMenuItemToolTipKeyBindingsTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JMenuItemToolTipKeyBindingsTest$1::*)()>(&JMenuItemToolTipKeyBindingsTest$1::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JMenuItemToolTipKeyBindingsTest$1_EnclosingMethodInfo_ = {
	"JMenuItemToolTipKeyBindingsTest",
	"createAndShowGUI",
	"()V"
};

$InnerClassInfo _JMenuItemToolTipKeyBindingsTest$1_InnerClassesInfo_[] = {
	{"JMenuItemToolTipKeyBindingsTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JMenuItemToolTipKeyBindingsTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"JMenuItemToolTipKeyBindingsTest$1",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	nullptr,
	_JMenuItemToolTipKeyBindingsTest$1_MethodInfo_,
	nullptr,
	&_JMenuItemToolTipKeyBindingsTest$1_EnclosingMethodInfo_,
	_JMenuItemToolTipKeyBindingsTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JMenuItemToolTipKeyBindingsTest"
};

$Object* allocate$JMenuItemToolTipKeyBindingsTest$1($Class* clazz) {
	return $of($alloc(JMenuItemToolTipKeyBindingsTest$1));
}

void JMenuItemToolTipKeyBindingsTest$1::init$() {
}

void JMenuItemToolTipKeyBindingsTest$1::actionPerformed($ActionEvent* e) {
	$init($JMenuItemToolTipKeyBindingsTest);
	$JMenuItemToolTipKeyBindingsTest::testResult = true;
	$JMenuItemToolTipKeyBindingsTest::completeTest();
}

JMenuItemToolTipKeyBindingsTest$1::JMenuItemToolTipKeyBindingsTest$1() {
}

$Class* JMenuItemToolTipKeyBindingsTest$1::load$($String* name, bool initialize) {
	$loadClass(JMenuItemToolTipKeyBindingsTest$1, name, initialize, &_JMenuItemToolTipKeyBindingsTest$1_ClassInfo_, allocate$JMenuItemToolTipKeyBindingsTest$1);
	return class$;
}

$Class* JMenuItemToolTipKeyBindingsTest$1::class$ = nullptr;