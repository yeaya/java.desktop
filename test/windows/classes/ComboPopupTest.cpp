#include <ComboPopupTest.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
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
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef EXIT_ON_CLOSE

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $InputEvent = ::java::awt::event::InputEvent;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InterruptedException = ::java::lang::InterruptedException;
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
using $SwingUtilities = ::javax::swing::SwingUtilities;

class ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0 : public $Runnable {
	$class(ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ComboPopupTest* inst, $JComponent* comp) {
		$set(this, inst$, inst);
		$set(this, comp, comp);
	}
	virtual void run() override {
		$nc(inst$)->lambda$blockTillDisplayed$0(comp);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0>());
	}
	ComboPopupTest* inst$ = nullptr;
	$JComponent* comp = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0, inst$)},
	{"comp", "Ljavax/swing/JComponent;", nullptr, $PUBLIC, $field(ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0, comp)},
	{}
};
$MethodInfo ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::methodInfos[3] = {
	{"<init>", "(LComboPopupTest;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::*)(ComboPopupTest*,$JComponent*)>(&ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::load$($String* name, bool initialize) {
	$loadClass(ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::class$ = nullptr;

class ComboPopupTest$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(ComboPopupTest$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ComboPopupTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ComboPopupTest$$Lambda$lambda$new$1$1>());
	}
	ComboPopupTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ComboPopupTest$$Lambda$lambda$new$1$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ComboPopupTest$$Lambda$lambda$new$1$1, inst$)},
	{}
};
$MethodInfo ComboPopupTest$$Lambda$lambda$new$1$1::methodInfos[3] = {
	{"<init>", "(LComboPopupTest;)V", nullptr, $PUBLIC, $method(static_cast<void(ComboPopupTest$$Lambda$lambda$new$1$1::*)(ComboPopupTest*)>(&ComboPopupTest$$Lambda$lambda$new$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ComboPopupTest$$Lambda$lambda$new$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ComboPopupTest$$Lambda$lambda$new$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ComboPopupTest$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$loadClass(ComboPopupTest$$Lambda$lambda$new$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ComboPopupTest$$Lambda$lambda$new$1$1::class$ = nullptr;

class ComboPopupTest$$Lambda$lambda$new$2$2 : public $Runnable {
	$class(ComboPopupTest$$Lambda$lambda$new$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ComboPopupTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ComboPopupTest$$Lambda$lambda$new$2$2>());
	}
	ComboPopupTest* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ComboPopupTest$$Lambda$lambda$new$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ComboPopupTest$$Lambda$lambda$new$2$2, inst$)},
	{}
};
$MethodInfo ComboPopupTest$$Lambda$lambda$new$2$2::methodInfos[3] = {
	{"<init>", "(LComboPopupTest;)V", nullptr, $PUBLIC, $method(static_cast<void(ComboPopupTest$$Lambda$lambda$new$2$2::*)(ComboPopupTest*)>(&ComboPopupTest$$Lambda$lambda$new$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ComboPopupTest$$Lambda$lambda$new$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"ComboPopupTest$$Lambda$lambda$new$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* ComboPopupTest$$Lambda$lambda$new$2$2::load$($String* name, bool initialize) {
	$loadClass(ComboPopupTest$$Lambda$lambda$new$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ComboPopupTest$$Lambda$lambda$new$2$2::class$ = nullptr;

$FieldInfo _ComboPopupTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, 0, $field(ComboPopupTest, frame)},
	{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", 0, $field(ComboPopupTest, comboBox)},
	{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(ComboPopupTest, p)},
	{"d", "Ljava/awt/Dimension;", nullptr, $PRIVATE | $VOLATILE, $field(ComboPopupTest, d)},
	{}
};

$MethodInfo _ComboPopupTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ComboPopupTest::*)()>(&ComboPopupTest::init$)), "java.lang.Exception"},
	{"blockTillDisplayed", "(Ljavax/swing/JComponent;)V", nullptr, 0, nullptr, "java.lang.Exception"},
	{"lambda$blockTillDisplayed$0", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ComboPopupTest::*)($JComponent*)>(&ComboPopupTest::lambda$blockTillDisplayed$0))},
	{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ComboPopupTest::*)()>(&ComboPopupTest::lambda$new$1))},
	{"lambda$new$2", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<void(ComboPopupTest::*)()>(&ComboPopupTest::lambda$new$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ComboPopupTest::main)), "java.lang.Exception"},
	{"start", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ComboPopupTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ComboPopupTest",
	"java.lang.Object",
	nullptr,
	_ComboPopupTest_FieldInfo_,
	_ComboPopupTest_MethodInfo_
};

$Object* allocate$ComboPopupTest($Class* clazz) {
	return $of($alloc(ComboPopupTest));
}

void ComboPopupTest::blockTillDisplayed($JComponent* comp) {
	while (this->p == nullptr) {
		try {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0, this, comp)));
		} catch ($IllegalStateException&) {
			$var($IllegalStateException, e, $catch());
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException&) {
				$catch();
			}
		}
	}
}

void ComboPopupTest::main($StringArray* args) {
	$new(ComboPopupTest);
}

void ComboPopupTest::init$() {
	$set(this, frame, nullptr);
	$set(this, comboBox, nullptr);
	$set(this, p, nullptr);
	$set(this, d, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(200);
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ComboPopupTest$$Lambda$lambda$new$1$1, this)));
			blockTillDisplayed(this->comboBox);
			robot->waitForIdle();
			robot->mouseMove($nc(this->p)->x + $nc(this->d)->width - 1, $nc(this->p)->y + $nc(this->d)->height / 2);
			robot->mousePress($InputEvent::BUTTON1_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_MASK);
			robot->waitForIdle();
			$init($System);
			$nc($System::out)->println($$str({"popmenu visible "_s, $$str($nc(this->comboBox)->isPopupVisible())}));
			if (!$nc(this->comboBox)->isPopupVisible()) {
				$throwNew($RuntimeException, "combobox popup is not visible"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (this->frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ComboPopupTest$$Lambda$lambda$new$2$2, this)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void ComboPopupTest::start() {
	$set(this, frame, $new($JFrame));
	$nc(this->frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($Container, contentPane, $nc(this->frame)->getContentPane());
	$set(this, comboBox, $new($JComboBox, $$new($StringArray, {
		"Item 1"_s,
		"Item 2"_s,
		"Item 3"_s,
		"Item 4"_s
	})));
	$nc(contentPane)->setLayout($$new($FlowLayout));
	contentPane->add(static_cast<$Component*>(this->comboBox));
	$nc(this->frame)->setLocationRelativeTo(nullptr);
	$nc(this->frame)->pack();
	$nc(this->frame)->setVisible(true);
}

void ComboPopupTest::lambda$new$2() {
	$nc(this->frame)->dispose();
}

void ComboPopupTest::lambda$new$1() {
	start();
}

void ComboPopupTest::lambda$blockTillDisplayed$0($JComponent* comp) {
	$set(this, p, $nc(comp)->getLocationOnScreen());
	$set(this, d, $nc(this->comboBox)->getSize());
}

ComboPopupTest::ComboPopupTest() {
}

$Class* ComboPopupTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::classInfo$.name)) {
			return ComboPopupTest$$Lambda$lambda$blockTillDisplayed$0::load$(name, initialize);
		}
		if (name->equals(ComboPopupTest$$Lambda$lambda$new$1$1::classInfo$.name)) {
			return ComboPopupTest$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
		if (name->equals(ComboPopupTest$$Lambda$lambda$new$2$2::classInfo$.name)) {
			return ComboPopupTest$$Lambda$lambda$new$2$2::load$(name, initialize);
		}
	}
	$loadClass(ComboPopupTest, name, initialize, &_ComboPopupTest_ClassInfo_, allocate$ComboPopupTest);
	return class$;
}

$Class* ComboPopupTest::class$ = nullptr;