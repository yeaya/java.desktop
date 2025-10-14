#include <MultiUIDefaultsNPECheck.h>

#include <MultiUIDefaultsNPECheck$1.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $MultiUIDefaultsNPECheck$1 = ::MultiUIDefaultsNPECheck$1;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;

class MultiUIDefaultsNPECheck$$Lambda$lambda$main$0 : public $Runnable {
	$class(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MultiUIDefaultsNPECheck::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MultiUIDefaultsNPECheck$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::*)()>(&MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"MultiUIDefaultsNPECheck$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _MultiUIDefaultsNPECheck_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MultiUIDefaultsNPECheck::*)()>(&MultiUIDefaultsNPECheck::init$))},
	{"Test", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&MultiUIDefaultsNPECheck::Test))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MultiUIDefaultsNPECheck::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MultiUIDefaultsNPECheck::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _MultiUIDefaultsNPECheck_InnerClassesInfo_[] = {
	{"MultiUIDefaultsNPECheck$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MultiUIDefaultsNPECheck_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MultiUIDefaultsNPECheck",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MultiUIDefaultsNPECheck_MethodInfo_,
	nullptr,
	nullptr,
	_MultiUIDefaultsNPECheck_InnerClassesInfo_,
	nullptr,
	nullptr,
	"MultiUIDefaultsNPECheck$1"
};

$Object* allocate$MultiUIDefaultsNPECheck($Class* clazz) {
	return $of($alloc(MultiUIDefaultsNPECheck));
}

void MultiUIDefaultsNPECheck::init$() {
}

void MultiUIDefaultsNPECheck::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0)));
}

void MultiUIDefaultsNPECheck::Test() {
	$var($JLabel, label, $new($JLabel));
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MultiUIDefaultsNPECheck$1)));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, e, $catch());
		$init($System);
		$nc($System::err)->println("Warning: test not applicable because of unsupported look and feel"_s);
		return;
	}
	try {
		$nc($($UIManager::getDefaults()))->getUI(label);
	} catch ($NullPointerException&) {
		$var($NullPointerException, e, $catch());
		$throwNew($RuntimeException, "Got null pointer exception. Hence Test Failed"_s);
	}
}

void MultiUIDefaultsNPECheck::lambda$main$0() {
	Test();
}

MultiUIDefaultsNPECheck::MultiUIDefaultsNPECheck() {
}

$Class* MultiUIDefaultsNPECheck::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::classInfo$.name)) {
			return MultiUIDefaultsNPECheck$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(MultiUIDefaultsNPECheck, name, initialize, &_MultiUIDefaultsNPECheck_ClassInfo_, allocate$MultiUIDefaultsNPECheck);
	return class$;
}

$Class* MultiUIDefaultsNPECheck::class$ = nullptr;