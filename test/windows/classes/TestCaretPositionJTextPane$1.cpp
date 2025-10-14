#include <TestCaretPositionJTextPane$1.h>

#include <TestCaretPositionJTextPane.h>
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
#include <javax/swing/JTextPane.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TestCaretPositionJTextPane = ::TestCaretPositionJTextPane;
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
using $JTextPane = ::javax::swing::JTextPane;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _TestCaretPositionJTextPane$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(TestCaretPositionJTextPane$1::*)()>(&TestCaretPositionJTextPane$1::init$))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestCaretPositionJTextPane$1_EnclosingMethodInfo_ = {
	"TestCaretPositionJTextPane",
	"createUI",
	"()V"
};

$InnerClassInfo _TestCaretPositionJTextPane$1_InnerClassesInfo_[] = {
	{"TestCaretPositionJTextPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCaretPositionJTextPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestCaretPositionJTextPane$1",
	"java.lang.Object",
	"java.awt.event.MouseListener",
	nullptr,
	_TestCaretPositionJTextPane$1_MethodInfo_,
	nullptr,
	&_TestCaretPositionJTextPane$1_EnclosingMethodInfo_,
	_TestCaretPositionJTextPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestCaretPositionJTextPane"
};

$Object* allocate$TestCaretPositionJTextPane$1($Class* clazz) {
	return $of($alloc(TestCaretPositionJTextPane$1));
}

void TestCaretPositionJTextPane$1::init$() {
}

void TestCaretPositionJTextPane$1::mouseClicked($MouseEvent* e) {
}

void TestCaretPositionJTextPane$1::mousePressed($MouseEvent* e) {
	try {
		$init($TestCaretPositionJTextPane);
		$var($Caret, caret, $nc($TestCaretPositionJTextPane::textPane)->getCaret());
		$var($Rectangle2D, rect, $nc($TestCaretPositionJTextPane::textPane)->modelToView2D($nc(caret)->getDot()));
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

void TestCaretPositionJTextPane$1::mouseReleased($MouseEvent* e) {
}

void TestCaretPositionJTextPane$1::mouseEntered($MouseEvent* e) {
}

void TestCaretPositionJTextPane$1::mouseExited($MouseEvent* e) {
}

TestCaretPositionJTextPane$1::TestCaretPositionJTextPane$1() {
}

$Class* TestCaretPositionJTextPane$1::load$($String* name, bool initialize) {
	$loadClass(TestCaretPositionJTextPane$1, name, initialize, &_TestCaretPositionJTextPane$1_ClassInfo_, allocate$TestCaretPositionJTextPane$1);
	return class$;
}

$Class* TestCaretPositionJTextPane$1::class$ = nullptr;