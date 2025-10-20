#include <bug4530474.h>

#include <bug4530474$1.h>
#include <bug4530474$2.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef BLUE
#undef EXIT_ON_CLOSE
#undef TEST_COLOR

using $bug4530474$1 = ::bug4530474$1;
using $bug4530474$2 = ::bug4530474$2;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $URL = ::java::net::URL;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug4530474_FieldInfo_[] = {
	{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4530474, TEST_COLOR)},
	{"jep", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4530474, jep)},
	{}
};

$MethodInfo _bug4530474_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4530474::*)()>(&bug4530474::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug4530474::createAndShowGUI))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4530474::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4530474_InnerClassesInfo_[] = {
	{"bug4530474$2", nullptr, nullptr, 0},
	{"bug4530474$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4530474_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4530474",
	"java.lang.Object",
	nullptr,
	_bug4530474_FieldInfo_,
	_bug4530474_MethodInfo_,
	nullptr,
	nullptr,
	_bug4530474_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4530474$2,bug4530474$1"
};

$Object* allocate$bug4530474($Class* clazz) {
	return $of($alloc(bug4530474));
}

$Color* bug4530474::TEST_COLOR = nullptr;
$JEditorPane* bug4530474::jep = nullptr;

void bug4530474::init$() {
}

void bug4530474::main($StringArray* args) {
	$init(bug4530474);
	$useLocalCurrentObjectStackCache();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait($$new($bug4530474$1));
	robot->waitForIdle();
	robot->delay(500);
	$SwingUtilities::invokeAndWait($$new($bug4530474$2, robot));
}

void bug4530474::createAndShowGUI() {
	$init(bug4530474);
	$useLocalCurrentObjectStackCache();
	$var($JFrame, mainFrame, $new($JFrame, "bug4530474"_s));
	mainFrame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(bug4530474::jep, $new($JEditorPane));
	try {
		$var($File, file, $new($File, $($System::getProperty("test.src"_s, "."_s)), "test.html"_s));
		$nc(bug4530474::jep)->setPage($(file->toURL()));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$nc($(mainFrame->getContentPane()))->add(static_cast<$Component*>(bug4530474::jep));
	mainFrame->pack();
	mainFrame->setVisible(true);
}

void clinit$bug4530474($Class* class$) {
	$init($Color);
	$assignStatic(bug4530474::TEST_COLOR, $Color::BLUE);
}

bug4530474::bug4530474() {
}

$Class* bug4530474::load$($String* name, bool initialize) {
	$loadClass(bug4530474, name, initialize, &_bug4530474_ClassInfo_, clinit$bug4530474, allocate$bug4530474);
	return class$;
}

$Class* bug4530474::class$ = nullptr;