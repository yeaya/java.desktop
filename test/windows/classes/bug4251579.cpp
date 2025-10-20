#include <bug4251579.h>

#include <bug4251579$1.h>
#include <bug4251579$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
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
#include <javax/swing/JLabel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug4251579$1 = ::bug4251579$1;
using $bug4251579$2 = ::bug4251579$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug4251579_FieldInfo_[] = {
	{"htmlComponent", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(bug4251579, htmlComponent)},
	{}
};

$MethodInfo _bug4251579_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4251579::*)()>(&bug4251579::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug4251579::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4251579::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4251579_InnerClassesInfo_[] = {
	{"bug4251579$2", nullptr, nullptr, 0},
	{"bug4251579$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4251579_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4251579",
	"java.lang.Object",
	nullptr,
	_bug4251579_FieldInfo_,
	_bug4251579_MethodInfo_,
	nullptr,
	nullptr,
	_bug4251579_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4251579$2,bug4251579$1"
};

$Object* allocate$bug4251579($Class* clazz) {
	return $of($alloc(bug4251579));
}

$JLabel* bug4251579::htmlComponent = nullptr;

void bug4251579::init$() {
}

void bug4251579::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait($$new($bug4251579$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4251579$2, robot));
}

void bug4251579::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	$var($String, htmlText, "<html><head><style> .blue{ color:blue; } </style></head><body<P class=\"blue\"> should be rendered with BLUE class definition</P></body>"_s);
	$var($JFrame, mainFrame, $new($JFrame, "bug4251579"_s));
	mainFrame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$init(bug4251579);
	$assignStatic(bug4251579::htmlComponent, $new($JLabel, htmlText));
	$nc($(mainFrame->getContentPane()))->add(static_cast<$Component*>(bug4251579::htmlComponent));
	mainFrame->pack();
	mainFrame->setVisible(true);
}

bug4251579::bug4251579() {
}

$Class* bug4251579::load$($String* name, bool initialize) {
	$loadClass(bug4251579, name, initialize, &_bug4251579_ClassInfo_, allocate$bug4251579);
	return class$;
}

$Class* bug4251579::class$ = nullptr;