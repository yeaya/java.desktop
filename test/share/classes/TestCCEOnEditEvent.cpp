#include <TestCCEOnEditEvent.h>

#include <TestCCEOnEditEvent$1.h>
#include <TestCCEOnEditEvent$2.h>
#include <TestCCEOnEditEvent$3.h>
#include <TestCCEOnEditEvent$4.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Runnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/UndoableEditListener.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/undo/UndoManager.h>
#include <jcpp.h>

#undef HORIZONTAL_SCROLLBAR_ALWAYS
#undef VERTICAL_SCROLLBAR_ALWAYS
#undef VK_ENTER

using $TestCCEOnEditEvent$1 = ::TestCCEOnEditEvent$1;
using $TestCCEOnEditEvent$2 = ::TestCCEOnEditEvent$2;
using $TestCCEOnEditEvent$3 = ::TestCCEOnEditEvent$3;
using $TestCCEOnEditEvent$4 = ::TestCCEOnEditEvent$4;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UndoableEditListener = ::javax::swing::event::UndoableEditListener;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $UndoManager = ::javax::swing::undo::UndoManager;

$FieldInfo _TestCCEOnEditEvent_FieldInfo_[] = {
	{"contentPane", "Ljava/awt/Container;", nullptr, $PRIVATE, $field(TestCCEOnEditEvent, contentPane)},
	{"textArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE, $field(TestCCEOnEditEvent, textArea)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestCCEOnEditEvent, robot)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestCCEOnEditEvent, frame)},
	{}
};

$MethodInfo _TestCCEOnEditEvent_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TestCCEOnEditEvent::*)()>(&TestCCEOnEditEvent::init$))},
	{"createAndShowGUI", "()V", nullptr, $PUBLIC},
	{"createTextArea", "()V", nullptr, $PRIVATE, $method(static_cast<void(TestCCEOnEditEvent::*)()>(&TestCCEOnEditEvent::createTextArea))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TestCCEOnEditEvent::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TestCCEOnEditEvent_InnerClassesInfo_[] = {
	{"TestCCEOnEditEvent$4", nullptr, nullptr, 0},
	{"TestCCEOnEditEvent$3", nullptr, nullptr, 0},
	{"TestCCEOnEditEvent$2", nullptr, nullptr, 0},
	{"TestCCEOnEditEvent$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCCEOnEditEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TestCCEOnEditEvent",
	"java.lang.Object",
	nullptr,
	_TestCCEOnEditEvent_FieldInfo_,
	_TestCCEOnEditEvent_MethodInfo_,
	nullptr,
	nullptr,
	_TestCCEOnEditEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TestCCEOnEditEvent$4,TestCCEOnEditEvent$3,TestCCEOnEditEvent$3$1,TestCCEOnEditEvent$2,TestCCEOnEditEvent$1"
};

$Object* allocate$TestCCEOnEditEvent($Class* clazz) {
	return $of($alloc(TestCCEOnEditEvent));
}

$Robot* TestCCEOnEditEvent::robot = nullptr;
$JFrame* TestCCEOnEditEvent::frame = nullptr;

void TestCCEOnEditEvent::init$() {
	$set(this, contentPane, nullptr);
	$set(this, textArea, nullptr);
}

void TestCCEOnEditEvent::main($StringArray* arguments) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init(TestCCEOnEditEvent);
			$assignStatic(TestCCEOnEditEvent::robot, $new($Robot));
			$nc(TestCCEOnEditEvent::robot)->setAutoDelay(50);
			$var(TestCCEOnEditEvent, test, $new(TestCCEOnEditEvent));
			$SwingUtilities::invokeAndWait($$new($TestCCEOnEditEvent$1, test));
			$nc(TestCCEOnEditEvent::robot)->keyPress($KeyEvent::VK_ENTER);
			$nc(TestCCEOnEditEvent::robot)->keyRelease($KeyEvent::VK_ENTER);
			$nc(TestCCEOnEditEvent::robot)->waitForIdle();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$SwingUtilities::invokeLater($$new($TestCCEOnEditEvent$2));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void TestCCEOnEditEvent::createAndShowGUI() {
	$assignStatic(TestCCEOnEditEvent::frame, $new($JFrame));
	$set(this, contentPane, $nc(TestCCEOnEditEvent::frame)->getContentPane());
	createTextArea();
	$nc(TestCCEOnEditEvent::frame)->setSize(200, 200);
	$nc(TestCCEOnEditEvent::frame)->setVisible(true);
}

void TestCCEOnEditEvent::createTextArea() {
	$useLocalCurrentObjectStackCache();
	$set(this, textArea, $new($TestCCEOnEditEvent$3, this, "Text Area"_s));
	$nc($($nc(this->textArea)->getDocument()))->addUndoableEditListener($$new($TestCCEOnEditEvent$4, this));
	try {
		$nc(this->textArea)->setSelectionStart($nc(this->textArea)->getLineEndOffset(0));
	} catch ($BadLocationException& exception) {
	}
	$var($JScrollPane, scrollPane, $new($JScrollPane, this->textArea, $JScrollPane::VERTICAL_SCROLLBAR_ALWAYS, $JScrollPane::HORIZONTAL_SCROLLBAR_ALWAYS));
	$nc(this->contentPane)->add(static_cast<$Component*>(scrollPane));
}

TestCCEOnEditEvent::TestCCEOnEditEvent() {
}

$Class* TestCCEOnEditEvent::load$($String* name, bool initialize) {
	$loadClass(TestCCEOnEditEvent, name, initialize, &_TestCCEOnEditEvent_ClassInfo_, allocate$TestCCEOnEditEvent);
	return class$;
}

$Class* TestCCEOnEditEvent::class$ = nullptr;