#include <bug4174551.h>

#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Font.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JApplet.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef PLAIN

using $Component = ::java::awt::Component;
using $EventQueue = ::java::awt::EventQueue;
using $Font = ::java::awt::Font;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JApplet = ::javax::swing::JApplet;
using $JOptionPane = ::javax::swing::JOptionPane;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;

class bug4174551$$Lambda$lambda$init$0 : public $Runnable {
	$class(bug4174551$$Lambda$lambda$init$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4174551::lambda$init$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<bug4174551$$Lambda$lambda$init$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo bug4174551$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4174551$$Lambda$lambda$init$0::*)()>(&bug4174551$$Lambda$lambda$init$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo bug4174551$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"bug4174551$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* bug4174551$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(bug4174551$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* bug4174551$$Lambda$lambda$init$0::class$ = nullptr;

$MethodInfo _bug4174551_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug4174551::*)()>(&bug4174551::init$))},
	{"init", "()V", nullptr, $PUBLIC},
	{"lambda$init$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&bug4174551::lambda$init$0))},
	{}
};

$ClassInfo _bug4174551_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug4174551",
	"javax.swing.JApplet",
	nullptr,
	nullptr,
	_bug4174551_MethodInfo_
};

$Object* allocate$bug4174551($Class* clazz) {
	return $of($alloc(bug4174551));
}

void bug4174551::init$() {
	$JApplet::init$();
}

void bug4174551::init() {
	$useLocalCurrentObjectStackCache();
	try {
		$EventQueue::invokeLater(static_cast<$Runnable*>($$new(bug4174551$$Lambda$lambda$init$0)));
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		ex->printStackTrace();
	}
}

void bug4174551::lambda$init$0() {
	$init(bug4174551);
	$useLocalCurrentObjectStackCache();
	$nc($($UIManager::getDefaults()))->put("OptionPane.buttonFont"_s, $$new($Font, "Dialog"_s, $Font::PLAIN, 10));
	$nc($($UIManager::getDefaults()))->put("OptionPane.messageFont"_s, $$new($Font, "Dialog"_s, $Font::PLAIN, 24));
	$JOptionPane::showMessageDialog(nullptr, "HI 24!"_s);
	$init($System);
	$nc($System::out)->println($($nc($($UIManager::getDefaults()))->get("OptionPane.buttonFont"_s)));
	$nc($System::out)->println($($nc($($UIManager::getDefaults()))->get("OptionPane.messageFont"_s)));
}

bug4174551::bug4174551() {
}

$Class* bug4174551::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(bug4174551$$Lambda$lambda$init$0::classInfo$.name)) {
			return bug4174551$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$loadClass(bug4174551, name, initialize, &_bug4174551_ClassInfo_, allocate$bug4174551);
	return class$;
}

$Class* bug4174551::class$ = nullptr;