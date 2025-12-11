#include <bug6510999.h>

#include <bug6510999$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JList.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_DOWN

using $bug6510999$1 = ::bug6510999$1;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListModel = ::javax::swing::DefaultListModel;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JList = ::javax::swing::JList;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $ListModel = ::javax::swing::ListModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class bug6510999$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug6510999$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug6510999::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug6510999$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug6510999$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6510999$$Lambda$lambda$main$0::*)()>(&bug6510999$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug6510999$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug6510999$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug6510999$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug6510999$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug6510999$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug6510999_FieldInfo_[] = {
	{"s", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug6510999, s)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug6510999, frame)},
	{}
};

$MethodInfo _bug6510999_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6510999::*)()>(&bug6510999::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6510999::createGui))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug6510999::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6510999::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6510999_InnerClassesInfo_[] = {
	{"bug6510999$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6510999_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6510999",
	"java.lang.Object",
	nullptr,
	_bug6510999_FieldInfo_,
	_bug6510999_MethodInfo_,
	nullptr,
	nullptr,
	_bug6510999_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6510999$1"
};

$Object* allocate$bug6510999($Class* clazz) {
	return $of($alloc(bug6510999));
}

$JScrollPane* bug6510999::s = nullptr;
$JFrame* bug6510999::frame = nullptr;

void bug6510999::init$() {
}

void bug6510999::createGui() {
	$useLocalCurrentObjectStackCache();
	$init(bug6510999);
	$assignStatic(bug6510999::frame, $new($JFrame));
	$nc(bug6510999::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($DefaultListModel, dlm, $new($DefaultListModel));
	for (int32_t i = 0; i < 100; ++i) {
		dlm->addElement($$str({$$str(i), " listItemlistItemlistItemlistItemItem"_s}));
	}
	$var($JList, l, $new($JList));
	l->setModel(dlm);
	$assignStatic(bug6510999::s, $new($JScrollPane, l));
	l->setSelectedIndex(50);
	l->ensureIndexIsVisible(50);
	$nc(bug6510999::frame)->add(static_cast<$Component*>(bug6510999::s));
	$nc(bug6510999::frame)->setSize(200, 200);
	$nc(bug6510999::frame)->setLocationRelativeTo(nullptr);
	$nc(bug6510999::frame)->setVisible(true);
}

void bug6510999::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(10);
			$SwingUtilities::invokeAndWait($$new($bug6510999$1));
			robot->waitForIdle();
			$init(bug6510999);
			$var($Point, viewPosition, $nc($($nc(bug6510999::s)->getViewport()))->getViewPosition());
			robot->keyPress($KeyEvent::VK_DOWN);
			robot->keyRelease($KeyEvent::VK_DOWN);
			robot->waitForIdle();
			if (!$nc($($nc($($nc(bug6510999::s)->getViewport()))->getViewPosition()))->equals(viewPosition)) {
				$throwNew($RuntimeException, "JScrollPane was unexpectedly scrolled"_s);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$init(bug6510999);
			if (bug6510999::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug6510999$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6510999::lambda$main$0() {
	$init(bug6510999);
	$nc(bug6510999::frame)->dispose();
}

bug6510999::bug6510999() {
}

$Class* bug6510999::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug6510999$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug6510999$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug6510999, name, initialize, &_bug6510999_ClassInfo_, allocate$bug6510999);
	return class$;
}

$Class* bug6510999::class$ = nullptr;