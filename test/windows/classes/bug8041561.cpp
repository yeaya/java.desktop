#include <bug8041561.h>

#include <bug8041561$1.h>
#include <bug8041561$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BLUE
#undef EXIT_ON_CLOSE

using $bug8041561$1 = ::bug8041561$1;
using $bug8041561$2 = ::bug8041561$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug8041561$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8041561$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8041561::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8041561$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8041561$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8041561$$Lambda$lambda$main$0::*)()>(&bug8041561$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8041561$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8041561$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8041561$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug8041561$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8041561$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug8041561_FieldInfo_[] = {
	{"radioButton", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug8041561, radioButton)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8041561, frame)},
	{}
};

$MethodInfo _bug8041561_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8041561::*)()>(&bug8041561::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug8041561::createAndShowGUI))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8041561::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8041561::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8041561_InnerClassesInfo_[] = {
	{"bug8041561$2", nullptr, nullptr, 0},
	{"bug8041561$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8041561_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8041561",
	"java.lang.Object",
	nullptr,
	_bug8041561_FieldInfo_,
	_bug8041561_MethodInfo_,
	nullptr,
	nullptr,
	_bug8041561_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8041561$2,bug8041561$1"
};

$Object* allocate$bug8041561($Class* clazz) {
	return $of($alloc(bug8041561));
}

$JRadioButton* bug8041561::radioButton = nullptr;
$JFrame* bug8041561::frame = nullptr;

void bug8041561::init$() {
}

void bug8041561::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug8041561$1));
			$$new($Robot)->waitForIdle();
			$Thread::sleep(500);
			$SwingUtilities::invokeAndWait($$new($bug8041561$2));
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug8041561);
			if (bug8041561::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8041561$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug8041561::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$init(bug8041561);
	$assignStatic(bug8041561::frame, $new($JFrame));
	$nc(bug8041561::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$init($Color);
	$nc(bug8041561::frame)->setBackground($Color::BLUE);
	$assignStatic(bug8041561::radioButton, $new($JRadioButton));
	$nc(bug8041561::radioButton)->setOpaque(false);
	$var($JPanel, panel, $new($JPanel));
	panel->setBackground($Color::BLUE);
	panel->add(static_cast<$Component*>(bug8041561::radioButton));
	$nc($($nc(bug8041561::frame)->getContentPane()))->add(static_cast<$Component*>(panel));
	$nc(bug8041561::frame)->pack();
	$nc(bug8041561::frame)->setVisible(true);
}

void bug8041561::lambda$main$0() {
	$init(bug8041561);
	$nc(bug8041561::frame)->dispose();
}

bug8041561::bug8041561() {
}

$Class* bug8041561::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8041561$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug8041561$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug8041561, name, initialize, &_bug8041561_ClassInfo_, allocate$bug8041561);
	return class$;
}

$Class* bug8041561::class$ = nullptr;