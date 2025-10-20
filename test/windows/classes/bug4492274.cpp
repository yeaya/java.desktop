#include <bug4492274.h>

#include <bug4492274$1.h>
#include <bug4492274$2.h>
#include <bug4492274$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
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
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/DefaultEditorKit.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/StyledEditorKit.h>
#include <javax/swing/text/html/HTMLEditorKit.h>
#include <jcpp.h>

using $bug4492274$1 = ::bug4492274$1;
using $bug4492274$2 = ::bug4492274$2;
using $bug4492274$3 = ::bug4492274$3;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $File = ::java::io::File;
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
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $JComponent = ::javax::swing::JComponent;
using $JEditorPane = ::javax::swing::JEditorPane;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultEditorKit = ::javax::swing::text::DefaultEditorKit;
using $EditorKit = ::javax::swing::text::EditorKit;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $StyledEditorKit = ::javax::swing::text::StyledEditorKit;
using $HTMLEditorKit = ::javax::swing::text::html::HTMLEditorKit;

class bug4492274$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4492274$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4492274::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4492274$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4492274$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4492274$$Lambda$lambda$main$0::*)()>(&bug4492274$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4492274$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4492274$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4492274$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(bug4492274$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4492274$$Lambda$lambda$main$0::class$ = nullptr;

$FieldInfo _bug4492274_FieldInfo_[] = {
	{"page", "Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $staticField(bug4492274, page)},
	{"jep", "Ljavax/swing/JEditorPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4492274, jep)},
	{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4492274, f)},
	{}
};

$MethodInfo _bug4492274_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4492274::*)()>(&bug4492274::init$))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug4492274::createAndShowGUI))},
	{"getPageAnchor", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)()>(&bug4492274::getPageAnchor)), "java.lang.Exception"},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4492274::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug4492274::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug4492274_InnerClassesInfo_[] = {
	{"bug4492274$3", nullptr, nullptr, 0},
	{"bug4492274$2", nullptr, nullptr, 0},
	{"bug4492274$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug4492274_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4492274",
	"java.lang.Object",
	nullptr,
	_bug4492274_FieldInfo_,
	_bug4492274_MethodInfo_,
	nullptr,
	nullptr,
	_bug4492274_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug4492274$3,bug4492274$2,bug4492274$1"
};

$Object* allocate$bug4492274($Class* clazz) {
	return $of($alloc(bug4492274));
}

$URL* bug4492274::page = nullptr;
$JEditorPane* bug4492274::jep = nullptr;
$JFrame* bug4492274::f = nullptr;

void bug4492274::init$() {
}

void bug4492274::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Robot, robot, $new($Robot));
			$SwingUtilities::invokeAndWait($$new($bug4492274$1));
			robot->waitForIdle();
			$SwingUtilities::invokeAndWait($$new($bug4492274$2));
			robot->waitForIdle();
			if (getPageAnchor() == nullptr) {
				$throwNew($RuntimeException, "JEditorPane.getPage() returns null anchor reference"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$init(bug4492274);
			if (bug4492274::f != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(bug4492274$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$String* bug4492274::getPageAnchor() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, result, $new($StringArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug4492274$3, result));
	return result->get(0);
}

void bug4492274::createAndShowGUI() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($File, file, $new($File, $($System::getProperty("test.src"_s, "."_s)), "test.html"_s));
		$init(bug4492274);
		$assignStatic(bug4492274::page, $nc($(file->toURI()))->toURL());
		$assignStatic(bug4492274::f, $new($JFrame));
		$assignStatic(bug4492274::jep, $new($JEditorPane));
		$nc(bug4492274::jep)->setEditorKit($$new($HTMLEditorKit));
		$nc(bug4492274::jep)->setEditable(false);
		$nc(bug4492274::jep)->setPage(bug4492274::page);
		$var($JScrollPane, sp, $new($JScrollPane, bug4492274::jep));
		$nc($($nc(bug4492274::f)->getContentPane()))->add(static_cast<$Component*>(sp));
		$nc(bug4492274::f)->setSize(500, 500);
		$nc(bug4492274::f)->setVisible(true);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4492274::lambda$main$0() {
	$init(bug4492274);
	$nc(bug4492274::f)->dispose();
}

bug4492274::bug4492274() {
}

$Class* bug4492274::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4492274$$Lambda$lambda$main$0::classInfo$.name)) {
			return bug4492274$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(bug4492274, name, initialize, &_bug4492274_ClassInfo_, allocate$bug4492274);
	return class$;
}

$Class* bug4492274::class$ = nullptr;