#include <bug8021253.h>

#include <bug8021253$1.h>
#include <bug8021253$2.h>
#include <bug8021253$3.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE
#undef VK_ENTER

using $bug8021253$1 = ::bug8021253$1;
using $bug8021253$2 = ::bug8021253$2;
using $bug8021253$3 = ::bug8021253$3;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ActionListener = ::java::awt::event::ActionListener;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
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
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug8021253$$Lambda$dispose : public $Runnable {
	$class(bug8021253$$Lambda$dispose, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8021253$$Lambda$dispose>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug8021253$$Lambda$dispose::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug8021253$$Lambda$dispose, inst$)},
	{}
};
$MethodInfo bug8021253$$Lambda$dispose::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(bug8021253$$Lambda$dispose::*)($Window*)>(&bug8021253$$Lambda$dispose::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8021253$$Lambda$dispose::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8021253$$Lambda$dispose",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug8021253$$Lambda$dispose::load$($String* name, bool initialize) {
	$loadClass(bug8021253$$Lambda$dispose, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8021253$$Lambda$dispose::class$ = nullptr;

$FieldInfo _bug8021253_FieldInfo_[] = {
	{"defaultKeyPressed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug8021253, defaultKeyPressed)},
	{"fileChooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC, $staticField(bug8021253, fileChooser)},
	{"file", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(bug8021253, file)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8021253, frame)},
	{}
};

$MethodInfo _bug8021253_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8021253::*)()>(&bug8021253::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8021253::createAndShowGUI))},
	{"getTempFile", "()Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$File*(*)()>(&bug8021253::getTempFile))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8021253::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8021253_InnerClassesInfo_[] = {
	{"bug8021253$3", nullptr, nullptr, 0},
	{"bug8021253$2", nullptr, nullptr, 0},
	{"bug8021253$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8021253_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8021253",
	"java.lang.Object",
	nullptr,
	_bug8021253_FieldInfo_,
	_bug8021253_MethodInfo_,
	nullptr,
	nullptr,
	_bug8021253_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8021253$3,bug8021253$2,bug8021253$1"
};

$Object* allocate$bug8021253($Class* clazz) {
	return $of($alloc(bug8021253));
}

$volatile(bool) bug8021253::defaultKeyPressed = false;
$JFileChooser* bug8021253::fileChooser = nullptr;
$File* bug8021253::file = nullptr;
$JFrame* bug8021253::frame = nullptr;

void bug8021253::init$() {
}

void bug8021253::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(100);
			$SwingUtilities::invokeAndWait($$new($bug8021253$1));
			robot->waitForIdle();
			robot->delay(1000);
			$SwingUtilities::invokeAndWait($$new($bug8021253$2));
			robot->waitForIdle();
			robot->keyPress($KeyEvent::VK_ENTER);
			robot->keyRelease($KeyEvent::VK_ENTER);
			robot->waitForIdle();
			$init(bug8021253);
			if (!bug8021253::defaultKeyPressed) {
				$throwNew($RuntimeException, "Default button is not pressed"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(bug8021253);
			if (bug8021253::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8021253$$Lambda$dispose, static_cast<$JFrame*>($nc(bug8021253::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug8021253::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$init(bug8021253);
	$assignStatic(bug8021253::file, getTempFile());
	$assignStatic(bug8021253::frame, $new($JFrame, "Test"_s));
	$nc(bug8021253::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug8021253::frame)->setSize(200, 300);
	$assignStatic(bug8021253::fileChooser, $new($JFileChooser, $($nc(bug8021253::file)->getParentFile())));
	$nc(bug8021253::fileChooser)->addActionListener($$new($bug8021253$3));
	$init($BorderLayout);
	$nc($($nc(bug8021253::frame)->getContentPane()))->add($BorderLayout::CENTER, static_cast<$Component*>(bug8021253::fileChooser));
	$nc(bug8021253::frame)->setSize($($nc(bug8021253::fileChooser)->getPreferredSize()));
	$nc(bug8021253::frame)->setLocationRelativeTo(nullptr);
	$nc(bug8021253::frame)->setVisible(true);
}

$File* bug8021253::getTempFile() {
	try {
		$var($File, temp, $File::createTempFile("test"_s, ".txt"_s));
		$nc(temp)->deleteOnExit();
		return temp;
	} catch ($IOException& ex) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

bug8021253::bug8021253() {
}

$Class* bug8021253::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8021253$$Lambda$dispose::classInfo$.name)) {
			return bug8021253$$Lambda$dispose::load$(name, initialize);
		}
	}
	$loadClass(bug8021253, name, initialize, &_bug8021253_ClassInfo_, allocate$bug8021253);
	return class$;
}

$Class* bug8021253::class$ = nullptr;