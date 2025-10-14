#include <IconifyTest$1$1.h>

#include <IconifyTest$1.h>
#include <IconifyTest.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $IconifyTest = ::IconifyTest;
using $IconifyTest$1 = ::IconifyTest$1;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;

$FieldInfo _IconifyTest$1$1_FieldInfo_[] = {
	{"this$0", "LIconifyTest$1;", nullptr, $FINAL | $SYNTHETIC, $field(IconifyTest$1$1, this$0)},
	{}
};

$MethodInfo _IconifyTest$1$1_MethodInfo_[] = {
	{"<init>", "(LIconifyTest$1;)V", nullptr, 0, $method(static_cast<void(IconifyTest$1$1::*)($IconifyTest$1*)>(&IconifyTest$1$1::init$))},
	{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IconifyTest$1$1_EnclosingMethodInfo_ = {
	"IconifyTest$1",
	"run",
	"()V"
};

$InnerClassInfo _IconifyTest$1$1_InnerClassesInfo_[] = {
	{"IconifyTest$1", nullptr, nullptr, 0},
	{"IconifyTest$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IconifyTest$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"IconifyTest$1$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_IconifyTest$1$1_FieldInfo_,
	_IconifyTest$1$1_MethodInfo_,
	nullptr,
	&_IconifyTest$1$1_EnclosingMethodInfo_,
	_IconifyTest$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"IconifyTest"
};

$Object* allocate$IconifyTest$1$1($Class* clazz) {
	return $of($alloc(IconifyTest$1$1));
}

void IconifyTest$1$1::init$($IconifyTest$1* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void IconifyTest$1$1::windowIconified($WindowEvent* e) {
	$init($IconifyTest);
	$IconifyTest::windowIconifiedIsCalled = true;
	$var($RepaintManager, rm, $RepaintManager::currentManager(($JComponent*)nullptr));
	$nc(rm)->paintDirtyRegions();
	$nc($IconifyTest::button)->repaint();
	if (!$nc($(rm->getDirtyRegion($IconifyTest::button)))->isEmpty()) {
		$IconifyTest::frameIsRepainted = true;
	}
}

IconifyTest$1$1::IconifyTest$1$1() {
}

$Class* IconifyTest$1$1::load$($String* name, bool initialize) {
	$loadClass(IconifyTest$1$1, name, initialize, &_IconifyTest$1$1_ClassInfo_, allocate$IconifyTest$1$1);
	return class$;
}

$Class* IconifyTest$1$1::class$ = nullptr;