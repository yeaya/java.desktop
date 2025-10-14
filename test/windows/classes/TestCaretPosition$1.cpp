#include <TestCaretPosition$1.h>

#include <TestCaretPosition.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TestCaretPosition = ::TestCaretPosition;
using $Point = ::java::awt::Point;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextArea = ::javax::swing::JTextArea;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _TestCaretPosition$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestCaretPosition$1::*)()>(&TestCaretPosition$1::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestCaretPosition$1_EnclosingMethodInfo_ = {
	"TestCaretPosition",
	"createUI",
	"()V"
};

$InnerClassInfo _TestCaretPosition$1_InnerClassesInfo_[] = {
	{"TestCaretPosition$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCaretPosition$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestCaretPosition$1",
	"java.lang.Object",
	"java.awt.event.MouseListener",
	nullptr,
	_TestCaretPosition$1_MethodInfo_,
	nullptr,
	&_TestCaretPosition$1_EnclosingMethodInfo_,
	_TestCaretPosition$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestCaretPosition"
};

$Object* allocate$TestCaretPosition$1($Class* clazz) {
	return $of($alloc(TestCaretPosition$1));
}

void TestCaretPosition$1::init$() {
}

void TestCaretPosition$1::mouseClicked($MouseEvent* e) {
}

void TestCaretPosition$1::mousePressed($MouseEvent* e) {
	try {
		$init($TestCaretPosition);
		$var($Caret, caret, $nc($TestCaretPosition::jTextArea1)->getCaret());
		$var($Rectangle2D, rect, $nc($TestCaretPosition::jTextArea1)->modelToView2D($nc(caret)->getDot()));
		int32_t var$0 = $nc($($nc(e)->getPoint()))->x;
		if ($Math::abs(var$0 - $nc(rect)->getX()) > 5) {
			$init($System);
			$nc($System::out)->println($$str({"mouse point "_s, $($nc(e)->getPoint())}));
			$nc($System::out)->println($$str({"caret position "_s, rect}));
			$throwNew($RuntimeException, " Wrong caret position"_s);
		}
	} catch ($BadLocationException&) {
		$catch();
	}
}

void TestCaretPosition$1::mouseReleased($MouseEvent* e) {
}

void TestCaretPosition$1::mouseEntered($MouseEvent* e) {
}

void TestCaretPosition$1::mouseExited($MouseEvent* e) {
}

TestCaretPosition$1::TestCaretPosition$1() {
}

$Class* TestCaretPosition$1::load$($String* name, bool initialize) {
	$loadClass(TestCaretPosition$1, name, initialize, &_TestCaretPosition$1_ClassInfo_, allocate$TestCaretPosition$1);
	return class$;
}

$Class* TestCaretPosition$1::class$ = nullptr;