#include <bug5074573.h>

#include <bug5074573$1.h>
#include <bug5074573$2.h>
#include <bug5074573$3.h>
#include <bug5074573$4.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef VK_ALT
#undef VK_BACK_SPACE
#undef VK_CONTROL
#undef VK_DELETE

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug5074573$1 = ::bug5074573$1;
using $bug5074573$2 = ::bug5074573$2;
using $bug5074573$3 = ::bug5074573$3;
using $bug5074573$4 = ::bug5074573$4;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JTextPane = ::javax::swing::JTextPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug5074573_FieldInfo_[] = {
	{"textComponent", "Ljavax/swing/text/JTextComponent;", nullptr, $PRIVATE | $STATIC, $staticField(bug5074573, textComponent)},
	{"testString", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug5074573, testString)},
	{"resultString", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug5074573, resultString)},
	{"textClasses", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;>;", $STATIC | $FINAL, $staticField(bug5074573, textClasses)},
	{}
};

$MethodInfo _bug5074573_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug5074573::*)()>(&bug5074573::init$))},
	{"getCtrlKey", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&bug5074573::getCtrlKey))},
	{"getText", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&bug5074573::getText)), "java.lang.Exception"},
	{"initialize", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&bug5074573::initialize))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug5074573::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;)Z", $STATIC, $method(static_cast<bool(*)($Class*)>(&bug5074573::test)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug5074573_InnerClassesInfo_[] = {
	{"bug5074573$4", nullptr, nullptr, 0},
	{"bug5074573$3", nullptr, nullptr, 0},
	{"bug5074573$2", nullptr, nullptr, 0},
	{"bug5074573$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug5074573_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug5074573",
	"java.lang.Object",
	nullptr,
	_bug5074573_FieldInfo_,
	_bug5074573_MethodInfo_,
	nullptr,
	nullptr,
	_bug5074573_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug5074573$4,bug5074573$3,bug5074573$2,bug5074573$1"
};

$Object* allocate$bug5074573($Class* clazz) {
	return $of($alloc(bug5074573));
}

$JTextComponent* bug5074573::textComponent = nullptr;
$String* bug5074573::testString = nullptr;
$String* bug5074573::resultString = nullptr;
$List* bug5074573::textClasses = nullptr;

void bug5074573::init$() {
}

void bug5074573::main($StringArray* args) {
	$init(bug5074573);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(info)->getClassName()));
				$init($System);
				$nc($System::out)->println($of(info));
				{
					$var($Iterator, i$, $nc(bug5074573::textClasses)->iterator());
					for (; $nc(i$)->hasNext();) {
						$Class* clazz = $cast($Class, i$->next());
						{
							bool res = test(clazz);
							$load($JPasswordField);
							if (!res && clazz != $JPasswordField::class$) {
								$throwNew($RuntimeException, "failed"_s);
							}
						}
					}
				}
			}
		}
	}
}

bool bug5074573::test($Class* textComponentClass) {
	$init(bug5074573);
	$var($Robot, robot, $new($Robot));
	robot->setAutoWaitForIdle(true);
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait($$new($bug5074573$1, textComponentClass));
	robot->waitForIdle();
	if ($instanceOf($JTextField, bug5074573::textComponent) && "Aqua"_s->equals($($nc($($UIManager::getLookAndFeel()))->getID()))) {
		$SwingUtilities::invokeAndWait($$new($bug5074573$2));
		robot->waitForIdle();
	}
	robot->keyPress(getCtrlKey());
	robot->keyPress($KeyEvent::VK_BACK_SPACE);
	robot->keyRelease($KeyEvent::VK_BACK_SPACE);
	robot->keyRelease(getCtrlKey());
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug5074573$3));
	robot->waitForIdle();
	robot->keyPress(getCtrlKey());
	robot->keyPress($KeyEvent::VK_DELETE);
	robot->keyRelease($KeyEvent::VK_DELETE);
	robot->keyRelease(getCtrlKey());
	robot->waitForIdle();
	return $nc(bug5074573::resultString)->equals($(getText()));
}

$String* bug5074573::getText() {
	$init(bug5074573);
	$var($StringArray, result, $new($StringArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug5074573$4, result));
	return result->get(0);
}

int32_t bug5074573::getCtrlKey() {
	$init(bug5074573);
	if ("Aqua"_s->equals($($nc($($UIManager::getLookAndFeel()))->getID()))) {
		return $KeyEvent::VK_ALT;
	}
	return $KeyEvent::VK_CONTROL;
}

void bug5074573::initialize($Class* textComponentClass) {
	$init(bug5074573);
	$beforeCallerSensitive();
	try {
		$var($JFrame, frame, $new($JFrame));
		$assignStatic(bug5074573::textComponent, $cast($JTextComponent, $nc(textComponentClass)->newInstance()));
		$nc(bug5074573::textComponent)->setText(bug5074573::testString);
		frame->add(static_cast<$Component*>(bug5074573::textComponent));
		frame->pack();
		frame->setLocationRelativeTo(nullptr);
		frame->setVisible(true);
		$nc(bug5074573::textComponent)->requestFocus();
		$var($Caret, caret, $nc(bug5074573::textComponent)->getCaret());
		$nc(caret)->setDot($nc($($nc(bug5074573::textComponent)->getDocument()))->getLength());
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void clinit$bug5074573($Class* class$) {
	$assignStatic(bug5074573::testString, "123 456 789"_s);
	$assignStatic(bug5074573::resultString, "456 "_s);
		$load($JTextArea);
		$load($JEditorPane);
		$load($JTextPane);
		$load($JTextField);
		$load($JFormattedTextField);
		$load($JPasswordField);
	$assignStatic(bug5074573::textClasses, $Arrays::asList($$new($ClassArray, {
		$JTextArea::class$,
		$JEditorPane::class$,
		$JTextPane::class$,
		$JTextField::class$,
		$JFormattedTextField::class$,
		$JPasswordField::class$
	})));
}

bug5074573::bug5074573() {
}

$Class* bug5074573::load$($String* name, bool initialize) {
	$loadClass(bug5074573, name, initialize, &_bug5074573_ClassInfo_, clinit$bug5074573, allocate$bug5074573);
	return class$;
}

$Class* bug5074573::class$ = nullptr;