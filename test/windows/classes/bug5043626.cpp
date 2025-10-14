#include <bug5043626.h>

#include <bug5043626$1.h>
#include <bug5043626$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
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
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_1
#undef VK_2
#undef VK_HOME

using $bug5043626$1 = ::bug5043626$1;
using $bug5043626$2 = ::bug5043626$2;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
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
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class bug5043626$$Lambda$dispose : public $Runnable {
	$class(bug5043626$$Lambda$dispose, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug5043626$$Lambda$dispose>());
	}
	$Window* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug5043626$$Lambda$dispose::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug5043626$$Lambda$dispose, inst$)},
	{}
};
$MethodInfo bug5043626$$Lambda$dispose::methodInfos[3] = {
	{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(static_cast<void(bug5043626$$Lambda$dispose::*)($Window*)>(&bug5043626$$Lambda$dispose::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug5043626$$Lambda$dispose::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug5043626$$Lambda$dispose",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug5043626$$Lambda$dispose::load$($String* name, bool initialize) {
	$loadClass(bug5043626$$Lambda$dispose, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug5043626$$Lambda$dispose::class$ = nullptr;

$FieldInfo _bug5043626_FieldInfo_[] = {
	{"doc", "Ljavax/swing/text/Document;", nullptr, $PRIVATE | $STATIC, $staticField(bug5043626, doc)},
	{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug5043626, robot)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug5043626, frame)},
	{}
};

$MethodInfo _bug5043626_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug5043626::*)()>(&bug5043626::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug5043626::createAndShowGUI))},
	{"getText", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&bug5043626::getText)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug5043626::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug5043626_InnerClassesInfo_[] = {
	{"bug5043626$2", nullptr, nullptr, 0},
	{"bug5043626$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug5043626_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug5043626",
	"java.lang.Object",
	nullptr,
	_bug5043626_FieldInfo_,
	_bug5043626_MethodInfo_,
	nullptr,
	nullptr,
	_bug5043626_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug5043626$2,bug5043626$1"
};

$Object* allocate$bug5043626($Class* clazz) {
	return $of($alloc(bug5043626));
}

$Document* bug5043626::doc = nullptr;
$Robot* bug5043626::robot = nullptr;
$JFrame* bug5043626::frame = nullptr;

void bug5043626::init$() {
}

void bug5043626::main($StringArray* args) {
	{
		$var($Throwable, var$0, nullptr);
		try {
			$init(bug5043626);
			$assignStatic(bug5043626::robot, $new($Robot));
			$nc(bug5043626::robot)->setAutoDelay(100);
			$SwingUtilities::invokeAndWait($$new($bug5043626$1));
			$nc(bug5043626::robot)->waitForIdle();
			$nc(bug5043626::robot)->delay(1000);
			$nc(bug5043626::robot)->keyPress($KeyEvent::VK_HOME);
			$nc(bug5043626::robot)->keyRelease($KeyEvent::VK_HOME);
			$nc(bug5043626::robot)->keyPress($KeyEvent::VK_1);
			$nc(bug5043626::robot)->keyRelease($KeyEvent::VK_1);
			$nc(bug5043626::robot)->waitForIdle();
			$var($String, test, getText());
			if (!"1test"_s->equals(test)) {
				$throwNew($RuntimeException, "Begin line action set cursor inside <head> tag"_s);
			}
			$nc(bug5043626::robot)->keyPress($KeyEvent::VK_HOME);
			$nc(bug5043626::robot)->keyRelease($KeyEvent::VK_HOME);
			$nc(bug5043626::robot)->keyPress($KeyEvent::VK_2);
			$nc(bug5043626::robot)->keyRelease($KeyEvent::VK_2);
			$nc(bug5043626::robot)->waitForIdle();
			$assign(test, getText());
			if (!"21test"_s->equals(test)) {
				$throwNew($RuntimeException, "Begin action set cursor inside <head> tag"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug5043626);
			if (bug5043626::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug5043626$$Lambda$dispose, static_cast<$JFrame*>($nc(bug5043626::frame)))));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* bug5043626::getText() {
	$var($StringArray, result, $new($StringArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug5043626$2, result));
	return result->get(0);
}

void bug5043626::createAndShowGUI() {
	$init(bug5043626);
	$assignStatic(bug5043626::frame, $new($JFrame));
	$nc(bug5043626::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JEditorPane, editorPane, $new($JEditorPane));
	editorPane->setContentType("text/html"_s);
	editorPane->setText("test"_s);
	editorPane->setEditable(true);
	$nc(bug5043626::frame)->add(static_cast<$Component*>(editorPane));
	$nc(bug5043626::frame)->pack();
	$nc(bug5043626::frame)->setLocationRelativeTo(nullptr);
	$nc(bug5043626::frame)->setVisible(true);
	$assignStatic(bug5043626::doc, editorPane->getDocument());
	editorPane->setCaretPosition($nc(bug5043626::doc)->getLength());
}

bug5043626::bug5043626() {
}

$Class* bug5043626::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug5043626$$Lambda$dispose::classInfo$.name)) {
			return bug5043626$$Lambda$dispose::load$(name, initialize);
		}
	}
	$loadClass(bug5043626, name, initialize, &_bug5043626_ClassInfo_, allocate$bug5043626);
	return class$;
}

$Class* bug5043626::class$ = nullptr;