#include <bug6866751.h>

#include <bug6866751$1.h>
#include <bug6866751$2.h>
#include <bug6866751$3.h>
#include <bug6866751$4.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6866751$1 = ::bug6866751$1;
using $bug6866751$2 = ::bug6866751$2;
using $bug6866751$3 = ::bug6866751$3;
using $bug6866751$4 = ::bug6866751$4;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Caret = ::javax::swing::text::Caret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$FieldInfo _bug6866751_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6866751, frame)},
	{"area", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(bug6866751, area)},
	{}
};

$MethodInfo _bug6866751_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6866751::*)()>(&bug6866751::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6866751::main)), "java.lang.Exception"},
	{"setup", "(Ljavax/swing/JFrame;)V", nullptr, $STATIC, $method(static_cast<void(*)($JFrame*)>(&bug6866751::setup))},
	{}
};

$InnerClassInfo _bug6866751_InnerClassesInfo_[] = {
	{"bug6866751$4", nullptr, nullptr, 0},
	{"bug6866751$3", nullptr, nullptr, 0},
	{"bug6866751$2", nullptr, nullptr, 0},
	{"bug6866751$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6866751_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6866751",
	"java.lang.Object",
	nullptr,
	_bug6866751_FieldInfo_,
	_bug6866751_MethodInfo_,
	nullptr,
	nullptr,
	_bug6866751_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6866751$4,bug6866751$3,bug6866751$2,bug6866751$1"
};

$Object* allocate$bug6866751($Class* clazz) {
	return $of($alloc(bug6866751));
}

$JFrame* bug6866751::frame = nullptr;
$JTextArea* bug6866751::area = nullptr;

void bug6866751::init$() {
}

void bug6866751::main($StringArray* args) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$SwingUtilities::invokeAndWait($$new($bug6866751$1));
			$SwingUtilities::invokeAndWait($$new($bug6866751$2));
			$$new($Robot)->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug6866751$3));
			$init($System);
			$nc($System::out)->println("ok"_s);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeAndWait($$new($bug6866751$4));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void bug6866751::setup($JFrame* frame) {
	$init(bug6866751);
	$assignStatic(bug6866751::area, $new($JTextArea));
	$nc($($nc(frame)->getContentPane()))->add(static_cast<$Component*>($$new($JScrollPane, bug6866751::area)));
	$nc(bug6866751::area)->setText("mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"_s);
	$nc($($nc(bug6866751::area)->getCaret()))->setDot($nc($($nc(bug6866751::area)->getText()))->length() + 1);
	frame->setSize(300, 200);
	frame->setVisible(true);
	$nc(bug6866751::area)->requestFocus();
}

bug6866751::bug6866751() {
}

$Class* bug6866751::load$($String* name, bool initialize) {
	$loadClass(bug6866751, name, initialize, &_bug6866751_ClassInfo_, allocate$bug6866751);
	return class$;
}

$Class* bug6866751::class$ = nullptr;