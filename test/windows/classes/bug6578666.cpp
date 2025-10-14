#include <bug6578666.h>

#include <bug6578666$1.h>
#include <bug6578666$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/KeyListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_SPACE

using $bug6578666$1 = ::bug6578666$1;
using $bug6578666$2 = ::bug6578666$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug6578666_FieldInfo_[] = {
	{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(bug6578666, tree)},
	{}
};

$MethodInfo _bug6578666_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6578666::*)()>(&bug6578666::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6578666::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6578666::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6578666_InnerClassesInfo_[] = {
	{"bug6578666$2", nullptr, nullptr, 0},
	{"bug6578666$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6578666_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6578666",
	"java.lang.Object",
	nullptr,
	_bug6578666_FieldInfo_,
	_bug6578666_MethodInfo_,
	nullptr,
	nullptr,
	_bug6578666_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6578666$2,bug6578666$1"
};

$Object* allocate$bug6578666($Class* clazz) {
	return $of($alloc(bug6578666));
}

$JTree* bug6578666::tree = nullptr;

void bug6578666::init$() {
}

void bug6578666::createGui() {
	$var($JFrame, frame, $new($JFrame));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$init(bug6578666);
	$assignStatic(bug6578666::tree, $new($JTree));
	frame->add(static_cast<$Component*>(bug6578666::tree));
	$nc(bug6578666::tree)->addKeyListener($$new($bug6578666$1));
	frame->setSize(200, 200);
	frame->setLocationRelativeTo(nullptr);
	frame->setVisible(true);
}

void bug6578666::main($StringArray* args) {
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(10);
	$SwingUtilities::invokeAndWait($$new($bug6578666$2));
	robot->waitForIdle();
	$init(bug6578666);
	$nc(bug6578666::tree)->requestFocus();
	robot->waitForIdle();
	robot->keyPress($KeyEvent::VK_SPACE);
	robot->keyRelease($KeyEvent::VK_SPACE);
	robot->waitForIdle();
	robot->keyPress($KeyEvent::VK_SPACE);
	robot->keyRelease($KeyEvent::VK_SPACE);
}

bug6578666::bug6578666() {
}

$Class* bug6578666::load$($String* name, bool initialize) {
	$loadClass(bug6578666, name, initialize, &_bug6578666_ClassInfo_, allocate$bug6578666);
	return class$;
}

$Class* bug6578666::class$ = nullptr;