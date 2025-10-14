#include <RepaintOnFrameIconifiedStateChangeTest$7.h>

#include <RepaintOnFrameIconifiedStateChangeTest.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;

$MethodInfo _RepaintOnFrameIconifiedStateChangeTest$7_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(RepaintOnFrameIconifiedStateChangeTest$7::*)($String*)>(&RepaintOnFrameIconifiedStateChangeTest$7::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintOnFrameIconifiedStateChangeTest$7_EnclosingMethodInfo_ = {
	"RepaintOnFrameIconifiedStateChangeTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _RepaintOnFrameIconifiedStateChangeTest$7_InnerClassesInfo_[] = {
	{"RepaintOnFrameIconifiedStateChangeTest$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintOnFrameIconifiedStateChangeTest$7_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintOnFrameIconifiedStateChangeTest$7",
	"javax.swing.JButton",
	nullptr,
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest$7_MethodInfo_,
	nullptr,
	&_RepaintOnFrameIconifiedStateChangeTest$7_EnclosingMethodInfo_,
	_RepaintOnFrameIconifiedStateChangeTest$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintOnFrameIconifiedStateChangeTest"
};

$Object* allocate$RepaintOnFrameIconifiedStateChangeTest$7($Class* clazz) {
	return $of($alloc(RepaintOnFrameIconifiedStateChangeTest$7));
}

void RepaintOnFrameIconifiedStateChangeTest$7::init$($String* arg0) {
	$JButton::init$(arg0);
}

void RepaintOnFrameIconifiedStateChangeTest$7::paint($Graphics* g) {
	$JButton::paint(g);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	if ($RepaintOnFrameIconifiedStateChangeTest::compRedrawnFlagCanBeSet) {
		$nc($RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->set(1, true);
	}
}

RepaintOnFrameIconifiedStateChangeTest$7::RepaintOnFrameIconifiedStateChangeTest$7() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$7::load$($String* name, bool initialize) {
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$7, name, initialize, &_RepaintOnFrameIconifiedStateChangeTest$7_ClassInfo_, allocate$RepaintOnFrameIconifiedStateChangeTest$7);
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$7::class$ = nullptr;