#include <bug8057893.h>

#include <bug8057893$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_A
#undef VK_ENTER

using $bug8057893$1 = ::bug8057893$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $WindowConstants = ::javax::swing::WindowConstants;

class bug8057893$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8057893$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8057893::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8057893$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8057893$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8057893$$Lambda$lambda$main$0::*)()>(&bug8057893$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8057893$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8057893$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8057893$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug8057893$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8057893$$Lambda$lambda$main$0::class$ = nullptr;

class bug8057893$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug8057893$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8057893::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8057893$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8057893$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8057893$$Lambda$lambda$main$1$1::*)()>(&bug8057893$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8057893$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8057893$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8057893$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug8057893$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8057893$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _bug8057893_FieldInfo_[] = {
	{"isComboBoxEdited", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8057893, isComboBoxEdited)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8057893, frame)},
	{}
};

$MethodInfo _bug8057893_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8057893::*)()>(&bug8057893::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8057893::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8057893::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8057893::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8057893_InnerClassesInfo_[] = {
	{"bug8057893$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8057893_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8057893",
	"java.lang.Object",
	nullptr,
	_bug8057893_FieldInfo_,
	_bug8057893_MethodInfo_,
	nullptr,
	nullptr,
	_bug8057893_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8057893$1"
};

$Object* allocate$bug8057893($Class* clazz) {
	return $of($alloc(bug8057893));
}

$volatile(bool) bug8057893::isComboBoxEdited = false;
$JFrame* bug8057893::frame = nullptr;

void bug8057893::init$() {
}

void bug8057893::main($StringArray* args) {
	$init(bug8057893);
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(bug8057893$$Lambda$lambda$main$0)));
	robot->waitForIdle();
	robot->delay(1000);
	robot->keyPress($KeyEvent::VK_A);
	robot->keyRelease($KeyEvent::VK_A);
	robot->keyPress($KeyEvent::VK_ENTER);
	robot->keyRelease($KeyEvent::VK_ENTER);
	robot->waitForIdle();
	if (bug8057893::frame != nullptr) {
		$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(bug8057893$$Lambda$lambda$main$1$1)));
	}
	if (!bug8057893::isComboBoxEdited) {
		$throwNew($RuntimeException, "ComboBoxEdited event is not fired!"_s);
	}
}

void bug8057893::lambda$main$1() {
	$init(bug8057893);
	$nc(bug8057893::frame)->dispose();
}

void bug8057893::lambda$main$0() {
	$init(bug8057893);
	$assignStatic(bug8057893::frame, $new($JFrame));
	$nc(bug8057893::frame)->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$var($JComboBox, comboBox, $new($JComboBox, $$new($StringArray, {
		"one"_s,
		"two"_s
	})));
	comboBox->setEditable(true);
	comboBox->addActionListener($$new($bug8057893$1));
	$nc(bug8057893::frame)->add(static_cast<$Component*>(comboBox));
	$nc(bug8057893::frame)->pack();
	$nc(bug8057893::frame)->setVisible(true);
	$nc(bug8057893::frame)->setLocationRelativeTo(nullptr);
	comboBox->requestFocusInWindow();
}

void clinit$bug8057893($Class* class$) {
	bug8057893::isComboBoxEdited = false;
}

bug8057893::bug8057893() {
}

$Class* bug8057893::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8057893$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug8057893$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug8057893$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug8057893$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(bug8057893, name, initialize, &_bug8057893_ClassInfo_, clinit$bug8057893, allocate$bug8057893);
	return class$;
}

$Class* bug8057893::class$ = nullptr;