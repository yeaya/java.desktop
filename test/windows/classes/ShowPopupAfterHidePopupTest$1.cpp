#include <ShowPopupAfterHidePopupTest$1.h>

#include <ShowPopupAfterHidePopupTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ShowPopupAfterHidePopupTest = ::ShowPopupAfterHidePopupTest;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;

$MethodInfo _ShowPopupAfterHidePopupTest$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ShowPopupAfterHidePopupTest$1::*)()>(&ShowPopupAfterHidePopupTest$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ShowPopupAfterHidePopupTest$1_EnclosingMethodInfo_ = {
	"ShowPopupAfterHidePopupTest",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _ShowPopupAfterHidePopupTest$1_InnerClassesInfo_[] = {
	{"ShowPopupAfterHidePopupTest$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ShowPopupAfterHidePopupTest$1_ClassInfo_ = {
	$ACC_SUPER,
	"ShowPopupAfterHidePopupTest$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_ShowPopupAfterHidePopupTest$1_MethodInfo_,
	nullptr,
	&_ShowPopupAfterHidePopupTest$1_EnclosingMethodInfo_,
	_ShowPopupAfterHidePopupTest$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ShowPopupAfterHidePopupTest"
};

$Object* allocate$ShowPopupAfterHidePopupTest$1($Class* clazz) {
	return $of($alloc(ShowPopupAfterHidePopupTest$1));
}

void ShowPopupAfterHidePopupTest$1::init$() {
}

void ShowPopupAfterHidePopupTest$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($ShowPopupAfterHidePopupTest);
	$assignStatic($ShowPopupAfterHidePopupTest::frame, $new($JFrame, "Popup Menu of JComboBox"_s));
	$assignStatic($ShowPopupAfterHidePopupTest::comboBox, $new($JComboBox, $$new($StringArray, {
		"Item1"_s,
		"Item2"_s,
		"Item3"_s
	})));
	$nc($($nc($ShowPopupAfterHidePopupTest::frame)->getContentPane()))->add(static_cast<$Component*>($ShowPopupAfterHidePopupTest::comboBox));
	$nc($ShowPopupAfterHidePopupTest::frame)->pack();
	$nc($ShowPopupAfterHidePopupTest::frame)->setVisible(true);
}

ShowPopupAfterHidePopupTest$1::ShowPopupAfterHidePopupTest$1() {
}

$Class* ShowPopupAfterHidePopupTest$1::load$($String* name, bool initialize) {
	$loadClass(ShowPopupAfterHidePopupTest$1, name, initialize, &_ShowPopupAfterHidePopupTest$1_ClassInfo_, allocate$ShowPopupAfterHidePopupTest$1);
	return class$;
}

$Class* ShowPopupAfterHidePopupTest$1::class$ = nullptr;