#include <bug4209065.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
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
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $JApplet = ::javax::swing::JApplet;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTabbedPane = ::javax::swing::JTabbedPane;

class bug4209065$$Lambda$createTabbedPane : public $Runnable {
	$class(bug4209065$$Lambda$createTabbedPane, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4209065* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->createTabbedPane();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4209065$$Lambda$createTabbedPane>());
	}
	bug4209065* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo bug4209065$$Lambda$createTabbedPane::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4209065$$Lambda$createTabbedPane, inst$)},
	{}
};
$MethodInfo bug4209065$$Lambda$createTabbedPane::methodInfos[3] = {
	{"<init>", "(Lbug4209065;)V", nullptr, $PUBLIC, $method(static_cast<void(bug4209065$$Lambda$createTabbedPane::*)(bug4209065*)>(&bug4209065$$Lambda$createTabbedPane::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4209065$$Lambda$createTabbedPane::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4209065$$Lambda$createTabbedPane",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* bug4209065$$Lambda$createTabbedPane::load$($String* name, bool initialize) {
	$loadClass(bug4209065$$Lambda$createTabbedPane, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4209065$$Lambda$createTabbedPane::class$ = nullptr;

$MethodInfo _bug4209065_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4209065::*)()>(&bug4209065::init$))},
	{"createTabbedPane", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug4209065::*)()>(&bug4209065::createTabbedPane))},
	{"init", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _bug4209065_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"bug4209065",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug4209065_MethodInfo_
};

$Object* allocate$bug4209065($Class* clazz) {
	return $of($alloc(bug4209065));
}

void bug4209065::init$() {
	$JApplet::init$();
}

void bug4209065::init() {
	$useLocalCurrentObjectStackCache();
	try {
		$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(bug4209065$$Lambda$createTabbedPane, this)));
	} catch ($InterruptedException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InvocationTargetException&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug4209065::createTabbedPane() {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, tp, $new($JTabbedPane));
	$nc($(getContentPane()))->add(static_cast<$Component*>(tp));
	$var($String, text, "<html><center>If the style of the text on the tabs matches<br>the descriptions, press <em><b>PASS</b></em></center></html>"_s);
	tp->addTab("<html><center><font size=+3>big</font></center></html>"_s, $$new($JLabel, text));
	tp->addTab("<html><center><font color=red>red</font></center></html>"_s, $$new($JLabel, text));
	tp->addTab("<html><center><em><b>Bold Italic!</b></em></center></html>"_s, $$new($JLabel, text));
}

bug4209065::bug4209065() {
}

$Class* bug4209065::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4209065$$Lambda$createTabbedPane::classInfo$.name)) {
			return bug4209065$$Lambda$createTabbedPane::load$(name, initialize);
		}
	}
	$loadClass(bug4209065, name, initialize, &_bug4209065_ClassInfo_, allocate$bug4209065);
	return class$;
}

$Class* bug4209065::class$ = nullptr;