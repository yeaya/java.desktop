#include <bug6917744.h>

#include <bug6917744$1.h>
#include <bug6917744$2.h>
#include <bug6917744$3.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef VK_PAGE_DOWN
#undef VK_PAGE_UP

using $bug6917744$1 = ::bug6917744$1;
using $bug6917744$2 = ::bug6917744$2;
using $bug6917744$3 = ::bug6917744$3;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug6917744$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(bug6917744$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComponent* comp) {
		$set(this, comp, comp);
	}
	virtual void run() override {
		bug6917744::lambda$blockTillDisplayed$0(comp);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6917744$$Lambda$lambda$blockTillDisplayed$0>());
	}
	$JComponent* comp = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug6917744$$Lambda$lambda$blockTillDisplayed$0::fieldInfos[2] = {
	{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(bug6917744$$Lambda$lambda$blockTillDisplayed$0, comp)},
	{}
};
$MethodInfo bug6917744$$Lambda$lambda$blockTillDisplayed$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(bug6917744$$Lambda$lambda$blockTillDisplayed$0::*)($JComponent*)>(&bug6917744$$Lambda$lambda$blockTillDisplayed$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6917744$$Lambda$lambda$blockTillDisplayed$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6917744$$Lambda$lambda$blockTillDisplayed$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug6917744$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$loadClass(bug6917744$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6917744$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

$FieldInfo _bug6917744_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6917744, frame)},
	{"editorPane", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug6917744, editorPane)},
	{"scrollPane", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug6917744, scrollPane)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6917744, robot)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(bug6917744, p)},
	{}
};

$MethodInfo _bug6917744_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6917744::*)()>(&bug6917744::init$))},
	{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, $STATIC, $method(static_cast<void(*)($JComponent*)>(&bug6917744::blockTillDisplayed)), "java.lang.Exception"},
	{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($JComponent*)>(&bug6917744::lambda$blockTillDisplayed$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6917744::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6917744_InnerClassesInfo_[] = {
	{"bug6917744$3", nullptr, nullptr, 0},
	{"bug6917744$2", nullptr, nullptr, 0},
	{"bug6917744$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6917744_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6917744",
	"java.lang.Object",
	nullptr,
	_bug6917744_FieldInfo_,
	_bug6917744_MethodInfo_,
	nullptr,
	nullptr,
	_bug6917744_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6917744$3,bug6917744$2,bug6917744$1"
};

$Object* allocate$bug6917744($Class* clazz) {
	return $of($alloc(bug6917744));
}

$JFrame* bug6917744::frame = nullptr;
$JEditorPane* bug6917744::editorPane = nullptr;
$JScrollPane* bug6917744::scrollPane = nullptr;
$Robot* bug6917744::robot = nullptr;
$Point* bug6917744::p = nullptr;

void bug6917744::init$() {
}

void bug6917744::blockTillDisplayed($JComponent* comp) {
	$init(bug6917744);
	$useLocalCurrentObjectStackCache();
	while (bug6917744::p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6917744$$Lambda$lambda$blockTillDisplayed$0, comp)));
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void bug6917744::main($StringArray* args) {
	$init(bug6917744);
	$useLocalCurrentObjectStackCache();
	$assignStatic(bug6917744::robot, $new($Robot));
	$nc(bug6917744::robot)->setAutoDelay(100);
	$SwingUtilities::invokeAndWait($$new($bug6917744$1));
	blockTillDisplayed(bug6917744::editorPane);
	$nc(bug6917744::robot)->mouseMove($nc(bug6917744::p)->x + 50, $nc(bug6917744::p)->y + 50);
	$nc(bug6917744::robot)->waitForIdle();
	$nc(bug6917744::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(bug6917744::robot)->waitForIdle();
	$nc(bug6917744::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	$nc(bug6917744::robot)->waitForIdle();
	for (int32_t i = 0; i < 50; ++i) {
		$nc(bug6917744::robot)->keyPress($KeyEvent::VK_PAGE_DOWN);
		$nc(bug6917744::robot)->keyRelease($KeyEvent::VK_PAGE_DOWN);
	}
	$nc(bug6917744::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6917744$2));
	$nc(bug6917744::robot)->waitForIdle();
	for (int32_t i = 0; i < 50; ++i) {
		$nc(bug6917744::robot)->keyPress($KeyEvent::VK_PAGE_UP);
		$nc(bug6917744::robot)->keyRelease($KeyEvent::VK_PAGE_UP);
	}
	$nc(bug6917744::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6917744$3));
}

void bug6917744::lambda$blockTillDisplayed$0($JComponent* comp) {
	$init(bug6917744);
	$assignStatic(bug6917744::p, $nc(comp)->getLocationOnScreen());
}

void clinit$bug6917744($Class* class$) {
	$assignStatic(bug6917744::p, nullptr);
}

bug6917744::bug6917744() {
}

$Class* bug6917744::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6917744$$Lambda$lambda$blockTillDisplayed$0::classInfo$.name)) {
			return bug6917744$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
	}
	$loadClass(bug6917744, name, initialize, &_bug6917744_ClassInfo_, clinit$bug6917744, allocate$bug6917744);
	return class$;
}

$Class* bug6917744::class$ = nullptr;