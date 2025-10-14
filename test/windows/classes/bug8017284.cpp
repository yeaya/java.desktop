#include <bug8017284.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE
#undef ITERATIONS
#undef TAB_COUNT

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug8017284$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug8017284$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8017284::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8017284$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8017284$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8017284$$Lambda$lambda$main$0::*)()>(&bug8017284$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8017284$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8017284$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8017284$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug8017284$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8017284$$Lambda$lambda$main$0::class$ = nullptr;

class bug8017284$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug8017284$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8017284::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8017284$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8017284$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8017284$$Lambda$lambda$main$1$1::*)()>(&bug8017284$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8017284$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8017284$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8017284$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(bug8017284$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8017284$$Lambda$lambda$main$1$1::class$ = nullptr;

class bug8017284$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(bug8017284$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug8017284::lambda$main$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug8017284$$Lambda$lambda$main$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug8017284$$Lambda$lambda$main$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8017284$$Lambda$lambda$main$2$2::*)()>(&bug8017284$$Lambda$lambda$main$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug8017284$$Lambda$lambda$main$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug8017284$$Lambda$lambda$main$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug8017284$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$loadClass(bug8017284$$Lambda$lambda$main$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug8017284$$Lambda$lambda$main$2$2::class$ = nullptr;

$FieldInfo _bug8017284_FieldInfo_[] = {
	{"TAB_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug8017284, TAB_COUNT)},
	{"ITERATIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug8017284, ITERATIONS)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug8017284, frame)},
	{"tabbedPane", "Ljavax/swing/JTabbedPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug8017284, tabbedPane)},
	{}
};

$MethodInfo _bug8017284_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8017284::*)()>(&bug8017284::init$))},
	{"getHtmlText", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&bug8017284::getHtmlText))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8017284::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8017284::lambda$main$1))},
	{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug8017284::lambda$main$2))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8017284::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug8017284_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8017284",
	"java.lang.Object",
	nullptr,
	_bug8017284_FieldInfo_,
	_bug8017284_MethodInfo_
};

$Object* allocate$bug8017284($Class* clazz) {
	return $of($alloc(bug8017284));
}

$JFrame* bug8017284::frame = nullptr;
$JTabbedPane* bug8017284::tabbedPane = nullptr;

void bug8017284::init$() {
}

void bug8017284::main($StringArray* args) {
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8017284$$Lambda$lambda$main$0)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8017284$$Lambda$lambda$main$1$1)));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug8017284$$Lambda$lambda$main$2$2)));
}

$String* bug8017284::getHtmlText(int32_t i) {
	return $str({"<html><b><i>"_s, $$str(i), "</b></i>"_s});
}

void bug8017284::lambda$main$2() {
	$init(bug8017284);
	$nc(bug8017284::frame)->dispose();
}

void bug8017284::lambda$main$1() {
	for (int32_t j = 0; j < bug8017284::ITERATIONS; ++j) {
		for (int32_t i = 0; i < bug8017284::TAB_COUNT; ++i) {
			$init(bug8017284);
			$nc(bug8017284::tabbedPane)->setTitleAt(i, $(getHtmlText(j * bug8017284::TAB_COUNT + i)));
		}
	}
}

void bug8017284::lambda$main$0() {
	$init(bug8017284);
	$assignStatic(bug8017284::frame, $new($JFrame));
	$nc(bug8017284::frame)->setSize(500, 500);
	$nc(bug8017284::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug8017284::tabbedPane, $new($JTabbedPane));
	for (int32_t i = 0; i < bug8017284::TAB_COUNT; ++i) {
		$nc(bug8017284::tabbedPane)->add($$str({"Header "_s, $$str(i)}), static_cast<$Component*>($$new($JLabel, $$str({"Content: "_s, $$str(i)}))));
	}
	$nc($($nc(bug8017284::frame)->getContentPane()))->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc($($nc(bug8017284::frame)->getContentPane()))->add(static_cast<$Component*>(bug8017284::tabbedPane), $of($BorderLayout::CENTER));
	$nc(bug8017284::frame)->setVisible(true);
}

bug8017284::bug8017284() {
}

$Class* bug8017284::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug8017284$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug8017284$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(bug8017284$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return bug8017284$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals(bug8017284$$Lambda$lambda$main$2$2::classInfo$.name)) {
			return bug8017284$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$loadClass(bug8017284, name, initialize, &_bug8017284_ClassInfo_, allocate$bug8017284);
	return class$;
}

$Class* bug8017284::class$ = nullptr;