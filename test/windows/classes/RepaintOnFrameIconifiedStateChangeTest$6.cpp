#include <RepaintOnFrameIconifiedStateChangeTest$6.h>

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
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $RepaintOnFrameIconifiedStateChangeTest = ::RepaintOnFrameIconifiedStateChangeTest;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _RepaintOnFrameIconifiedStateChangeTest$6_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(RepaintOnFrameIconifiedStateChangeTest$6::*)($String*)>(&RepaintOnFrameIconifiedStateChangeTest$6::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintOnFrameIconifiedStateChangeTest$6_EnclosingMethodInfo_ = {
	"RepaintOnFrameIconifiedStateChangeTest",
	"createGUI",
	"()V"
};

$InnerClassInfo _RepaintOnFrameIconifiedStateChangeTest$6_InnerClassesInfo_[] = {
	{"RepaintOnFrameIconifiedStateChangeTest$6", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintOnFrameIconifiedStateChangeTest$6_ClassInfo_ = {
	$ACC_SUPER,
	"RepaintOnFrameIconifiedStateChangeTest$6",
	"javax.swing.JLabel",
	nullptr,
	nullptr,
	_RepaintOnFrameIconifiedStateChangeTest$6_MethodInfo_,
	nullptr,
	&_RepaintOnFrameIconifiedStateChangeTest$6_EnclosingMethodInfo_,
	_RepaintOnFrameIconifiedStateChangeTest$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"RepaintOnFrameIconifiedStateChangeTest"
};

$Object* allocate$RepaintOnFrameIconifiedStateChangeTest$6($Class* clazz) {
	return $of($alloc(RepaintOnFrameIconifiedStateChangeTest$6));
}

void RepaintOnFrameIconifiedStateChangeTest$6::init$($String* arg0) {
	$JLabel::init$(arg0);
}

void RepaintOnFrameIconifiedStateChangeTest$6::paint($Graphics* g) {
	$JLabel::paint(g);
	$init($RepaintOnFrameIconifiedStateChangeTest);
	if ($RepaintOnFrameIconifiedStateChangeTest::compRedrawnFlagCanBeSet) {
		$nc($RepaintOnFrameIconifiedStateChangeTest::compRedrawn)->set(0, true);
	}
}

RepaintOnFrameIconifiedStateChangeTest$6::RepaintOnFrameIconifiedStateChangeTest$6() {
}

$Class* RepaintOnFrameIconifiedStateChangeTest$6::load$($String* name, bool initialize) {
	$loadClass(RepaintOnFrameIconifiedStateChangeTest$6, name, initialize, &_RepaintOnFrameIconifiedStateChangeTest$6_ClassInfo_, allocate$RepaintOnFrameIconifiedStateChangeTest$6);
	return class$;
}

$Class* RepaintOnFrameIconifiedStateChangeTest$6::class$ = nullptr;