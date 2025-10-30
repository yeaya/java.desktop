#include <ProvokeGTK.h>

#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class ProvokeGTK$$Lambda$createAndShow : public $Runnable {
	$class(ProvokeGTK$$Lambda$createAndShow, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ProvokeGTK::createAndShow();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProvokeGTK$$Lambda$createAndShow>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ProvokeGTK$$Lambda$createAndShow::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProvokeGTK$$Lambda$createAndShow::*)()>(&ProvokeGTK$$Lambda$createAndShow::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProvokeGTK$$Lambda$createAndShow::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProvokeGTK$$Lambda$createAndShow",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ProvokeGTK$$Lambda$createAndShow::load$($String* name, bool initialize) {
	$loadClass(ProvokeGTK$$Lambda$createAndShow, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProvokeGTK$$Lambda$createAndShow::class$ = nullptr;

class ProvokeGTK$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(ProvokeGTK$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ProvokeGTK::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ProvokeGTK$$Lambda$lambda$main$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ProvokeGTK$$Lambda$lambda$main$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProvokeGTK$$Lambda$lambda$main$0$1::*)()>(&ProvokeGTK$$Lambda$lambda$main$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo ProvokeGTK$$Lambda$lambda$main$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"ProvokeGTK$$Lambda$lambda$main$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* ProvokeGTK$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$loadClass(ProvokeGTK$$Lambda$lambda$main$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ProvokeGTK$$Lambda$lambda$main$0$1::class$ = nullptr;

$FieldInfo _ProvokeGTK_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(ProvokeGTK, frame)},
	{}
};

$MethodInfo _ProvokeGTK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ProvokeGTK::*)()>(&ProvokeGTK::init$))},
	{"createAndShow", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ProvokeGTK::createAndShow))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&ProvokeGTK::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ProvokeGTK::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ProvokeGTK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ProvokeGTK",
	"java.lang.Object",
	nullptr,
	_ProvokeGTK_FieldInfo_,
	_ProvokeGTK_MethodInfo_
};

$Object* allocate$ProvokeGTK($Class* clazz) {
	return $of($alloc(ProvokeGTK));
}

$JFrame* ProvokeGTK::frame = nullptr;

void ProvokeGTK::init$() {
}

void ProvokeGTK::createAndShow() {
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
	} catch ($Exception& cnf) {
		cnf->printStackTrace();
	}
	$init(ProvokeGTK);
	$assignStatic(ProvokeGTK::frame, $new($JFrame, "JFrame"_s));
	$nc(ProvokeGTK::frame)->setSize(200, 200);
	$nc(ProvokeGTK::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(ProvokeGTK::frame)->setVisible(true);
}

void ProvokeGTK::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ProvokeGTK$$Lambda$createAndShow)));
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(ProvokeGTK$$Lambda$lambda$main$0$1)));
}

void ProvokeGTK::lambda$main$0() {
	$init(ProvokeGTK);
	$nc(ProvokeGTK::frame)->setVisible(false);
	$nc(ProvokeGTK::frame)->dispose();
}

ProvokeGTK::ProvokeGTK() {
}

$Class* ProvokeGTK::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ProvokeGTK$$Lambda$createAndShow::classInfo$.name)) {
			return ProvokeGTK$$Lambda$createAndShow::load$(name, initialize);
		}
		if (name->equals(ProvokeGTK$$Lambda$lambda$main$0$1::classInfo$.name)) {
			return ProvokeGTK$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
	}
	$loadClass(ProvokeGTK, name, initialize, &_ProvokeGTK_ClassInfo_, allocate$ProvokeGTK);
	return class$;
}

$Class* ProvokeGTK::class$ = nullptr;