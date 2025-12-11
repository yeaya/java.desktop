#include <bug4506788.h>

#include <bug4506788$1.h>
#include <bug4506788$2.h>
#include <bug4506788$3.h>
#include <java/awt/AWTException.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/CaretListener.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/DefaultStyledDocument.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef VK_HOME
#undef VK_RIGHT
#undef VK_X

using $PointArray = $Array<::java::awt::Point>;
using $bug4506788$1 = ::bug4506788$1;
using $bug4506788$2 = ::bug4506788$2;
using $bug4506788$3 = ::bug4506788$3;
using $AWTException = ::java::awt::AWTException;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $CaretListener = ::javax::swing::event::CaretListener;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $DefaultStyledDocument = ::javax::swing::text::DefaultStyledDocument;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;

$FieldInfo _bug4506788_FieldInfo_[] = {
	{"passed", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug4506788, passed)},
	{"jep", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE, $field(bug4506788, jep)},
	{}
};

$MethodInfo _bug4506788_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4506788::*)()>(&bug4506788::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4506788::*)()>(&bug4506788::createAndShowGUI))},
	{"getJEPLocOnScreen", "()Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(bug4506788::*)()>(&bug4506788::getJEPLocOnScreen)), "java.lang.Exception"},
	{"init", "()V", nullptr, $PUBLIC},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4506788::main))},
	{"start", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug4506788_InnerClassesInfo_[] = {
	{"bug4506788$3", nullptr, nullptr, 0},
	{"bug4506788$2", nullptr, nullptr, 0},
	{"bug4506788$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4506788_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4506788",
	"java.lang.Object",
	nullptr,
	_bug4506788_FieldInfo_,
	_bug4506788_MethodInfo_,
	nullptr,
	nullptr,
	_bug4506788_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4506788$3,bug4506788$2,bug4506788$1"
};

$Object* allocate$bug4506788($Class* clazz) {
	return $of($alloc(bug4506788));
}

void bug4506788::init$() {
	this->passed = false;
}

void bug4506788::main($StringArray* args) {
	$var(bug4506788, app, $new(bug4506788));
	app->init();
	app->start();
}

void bug4506788::init() {
	try {
		$SwingUtilities::invokeAndWait($$new($bug4506788$1, this));
	} catch ($InterruptedException& ex) {
		ex->printStackTrace();
		$throwNew($RuntimeException, "FAILED: SwingUtilities.invokeAndWait method failed then creating and showing GUI"_s);
	} catch ($InvocationTargetException& ex) {
		ex->printStackTrace();
		$throwNew($RuntimeException, "FAILED: SwingUtilities.invokeAndWait method failed then creating and showing GUI"_s);
	}
}

void bug4506788::start() {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, nullptr);
	try {
		$assign(robot, $new($Robot));
		robot->setAutoDelay(100);
	} catch ($AWTException& e) {
		$throwNew($RuntimeException, "Robot could not be created"_s);
	}
	$nc(robot)->waitForIdle();
	$var($Point, p, nullptr);
	try {
		$assign(p, getJEPLocOnScreen());
	} catch ($Exception& e) {
		$throwNew($RuntimeException, "Could not get JEditorPane location on screen"_s);
	}
	robot->mouseMove($nc(p)->x, p->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->keyPress($KeyEvent::VK_HOME);
	robot->keyRelease($KeyEvent::VK_HOME);
	robot->keyPress($KeyEvent::VK_RIGHT);
	robot->keyRelease($KeyEvent::VK_RIGHT);
	robot->keyPress($KeyEvent::VK_X);
	robot->keyRelease($KeyEvent::VK_X);
	robot->keyPress($KeyEvent::VK_RIGHT);
	robot->keyRelease($KeyEvent::VK_RIGHT);
	robot->waitForIdle();
	if (!this->passed) {
		$throwNew($RuntimeException, "Test failed."_s);
	}
}

$Point* bug4506788::getJEPLocOnScreen() {
	$useLocalCurrentObjectStackCache();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug4506788$2, this, result));
	return result->get(0);
}

void bug4506788::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$set(this, jep, $new($JEditorPane));
	$var($String, text, "abc"_s);
	$var($JFrame, f, $new($JFrame));
	$nc(this->jep)->setEditorKit($$new($StyledEditorKit));
	$nc(this->jep)->setText(text);
	$nc(this->jep)->addCaretListener($$new($bug4506788$3, this));
	$var($DefaultStyledDocument, doc, $cast($DefaultStyledDocument, $nc(this->jep)->getDocument()));
	$var($MutableAttributeSet, atr, $new($SimpleAttributeSet));
	$StyleConstants::setBold(atr, true);
	$nc(doc)->setCharacterAttributes(1, 1, atr, false);
	$nc($(f->getContentPane()))->add(static_cast<$Component*>(this->jep));
	f->setSize(100, 100);
	f->setLocationRelativeTo(nullptr);
	f->setVisible(true);
}

bug4506788::bug4506788() {
}

$Class* bug4506788::load$($String* name, bool initialize) {
	$loadClass(bug4506788, name, initialize, &_bug4506788_ClassInfo_, allocate$bug4506788);
	return class$;
}

$Class* bug4506788::class$ = nullptr;