#include <bug6361367.h>

#include <bug6361367$1.h>
#include <bug6361367$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/FutureTask.h>
#include <java/util/concurrent/RunnableFuture.h>
#include <java/util/concurrent/atomic/AtomicReference.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTextPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef VK_BACK_SPACE
#undef VK_END
#undef VK_SHIFT

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug6361367$1 = ::bug6361367$1;
using $bug6361367$2 = ::bug6361367$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Callable = ::java::util::concurrent::Callable;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $RunnableFuture = ::java::util::concurrent::RunnableFuture;
using $AtomicReference = ::java::util::concurrent::atomic::AtomicReference;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JTextPane = ::javax::swing::JTextPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $Caret = ::javax::swing::text::Caret;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug6361367_FieldInfo_[] = {
	{"testString", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug6361367, testString)},
	{"resultString", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(bug6361367, resultString)},
	{"textClasses", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;>;", $STATIC | $FINAL, $staticField(bug6361367, textClasses)},
	{}
};

$MethodInfo _bug6361367_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6361367::*)()>(&bug6361367::init$))},
	{"initialize", "(Ljava/lang/Class;Ljava/util/concurrent/atomic/AtomicReference;)Ljavax/swing/text/JTextComponent;", "(Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;Ljava/util/concurrent/atomic/AtomicReference<Ljavax/swing/JFrame;>;)Ljavax/swing/text/JTextComponent;", $STATIC, $method(static_cast<$JTextComponent*(*)($Class*,$AtomicReference*)>(&bug6361367::initialize)), "java.lang.Exception"},
	{"invokeAndWait", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $STATIC, $method(static_cast<$Object*(*)($Callable*)>(&bug6361367::invokeAndWait)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6361367::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljavax/swing/text/JTextComponent;>;)Z", $STATIC, $method(static_cast<bool(*)($Class*)>(&bug6361367::test)), "java.lang.Exception"},
	{"waitForFocus", "(Ljavax/swing/JComponent;)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*)>(&bug6361367::waitForFocus)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6361367_InnerClassesInfo_[] = {
	{"bug6361367$2", nullptr, nullptr, 0},
	{"bug6361367$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6361367_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6361367",
	"java.lang.Object",
	nullptr,
	_bug6361367_FieldInfo_,
	_bug6361367_MethodInfo_,
	nullptr,
	nullptr,
	_bug6361367_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6361367$2,bug6361367$1"
};

$Object* allocate$bug6361367($Class* clazz) {
	return $of($alloc(bug6361367));
}

$String* bug6361367::testString = nullptr;
$String* bug6361367::resultString = nullptr;
$List* bug6361367::textClasses = nullptr;

void bug6361367::init$() {
}

void bug6361367::main($StringArray* args) {
	$init(bug6361367);
	$useLocalCurrentObjectStackCache();
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
					$var($Iterator, i$, $nc(bug6361367::textClasses)->iterator());
					for (; $nc(i$)->hasNext();) {
						$Class* clazz = $cast($Class, i$->next());
						{
							bool res = test(clazz);
							if (!res) {
								$throwNew($RuntimeException, "failed"_s);
							}
						}
					}
				}
			}
		}
	}
}

bool bug6361367::test($Class* textComponentClass) {
	$init(bug6361367);
	$useLocalCurrentObjectStackCache();
	$var($AtomicReference, ref, $new($AtomicReference));
	$var($JTextComponent, textComponent, $cast($JTextComponent, invokeAndWait($$new($bug6361367$1, textComponentClass, ref))));
	waitForFocus(textComponent);
	$var($Robot, robot, $new($Robot));
	robot->setAutoWaitForIdle(true);
	robot->setAutoDelay(100);
	robot->keyPress($KeyEvent::VK_END);
	robot->keyRelease($KeyEvent::VK_END);
	robot->keyPress($KeyEvent::VK_SHIFT);
	robot->keyPress($KeyEvent::VK_BACK_SPACE);
	robot->keyRelease($KeyEvent::VK_BACK_SPACE);
	robot->keyRelease($KeyEvent::VK_SHIFT);
	$var($String, str, $cast($String, invokeAndWait($$new($bug6361367$2, ref, textComponent))));
	return $nc(bug6361367::resultString)->equals(str);
}

$JTextComponent* bug6361367::initialize($Class* textComponentClass, $AtomicReference* ref) {
	$init(bug6361367);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($JFrame, frame, $new($JFrame, "bug6361367"_s));
	$nc(ref)->set(frame);
	$var($JTextComponent, textComponent, $cast($JTextComponent, $nc(textComponentClass)->newInstance()));
	$nc(textComponent)->setText(bug6361367::testString);
	frame->add(static_cast<$Component*>(textComponent));
	frame->pack();
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
	textComponent->requestFocus();
	$var($Caret, caret, textComponent->getCaret());
	$nc(caret)->setDot($nc($(textComponent->getDocument()))->getLength());
	return textComponent;
}

$Object* bug6361367::invokeAndWait($Callable* callable) {
	$init(bug6361367);
	$var($FutureTask, future, $new($FutureTask, callable));
	$SwingUtilities::invokeLater(future);
	return $of(future->get());
}

void bug6361367::waitForFocus($JComponent* component) {
	$init(bug6361367);
	$synchronized(component) {
		while (!$nc(component)->isFocusOwner()) {
			$of(component)->wait(100);
		}
	}
}

void clinit$bug6361367($Class* class$) {
	$assignStatic(bug6361367::testString, "123 456 789"_s);
	$assignStatic(bug6361367::resultString, "123 456 78"_s);
		$load($JTextArea);
		$load($JEditorPane);
		$load($JTextPane);
		$load($JTextField);
		$load($JFormattedTextField);
		$load($JPasswordField);
	$assignStatic(bug6361367::textClasses, $Arrays::asList($$new($ClassArray, {
		$JTextArea::class$,
		$JEditorPane::class$,
		$JTextPane::class$,
		$JTextField::class$,
		$JFormattedTextField::class$,
		$JPasswordField::class$
	})));
}

bug6361367::bug6361367() {
}

$Class* bug6361367::load$($String* name, bool initialize) {
	$loadClass(bug6361367, name, initialize, &_bug6361367_ClassInfo_, clinit$bug6361367, allocate$bug6361367);
	return class$;
}

$Class* bug6361367::class$ = nullptr;