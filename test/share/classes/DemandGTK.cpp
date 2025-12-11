#include <DemandGTK.h>

#include <java/awt/Robot.h>
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

using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class DemandGTK$$Lambda$createAndShow : public $Runnable {
	$class(DemandGTK$$Lambda$createAndShow, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DemandGTK::createAndShow();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DemandGTK$$Lambda$createAndShow>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DemandGTK$$Lambda$createAndShow::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DemandGTK$$Lambda$createAndShow::*)()>(&DemandGTK$$Lambda$createAndShow::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DemandGTK$$Lambda$createAndShow::classInfo$ = {
	$PUBLIC | $FINAL,
	"DemandGTK$$Lambda$createAndShow",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DemandGTK$$Lambda$createAndShow::load$($String* name, bool initialize) {
	$loadClass(DemandGTK$$Lambda$createAndShow, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DemandGTK$$Lambda$createAndShow::class$ = nullptr;

class DemandGTK$$Lambda$lambda$main$0$1 : public $Runnable {
	$class(DemandGTK$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DemandGTK::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DemandGTK$$Lambda$lambda$main$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DemandGTK$$Lambda$lambda$main$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DemandGTK$$Lambda$lambda$main$0$1::*)()>(&DemandGTK$$Lambda$lambda$main$0$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo DemandGTK$$Lambda$lambda$main$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"DemandGTK$$Lambda$lambda$main$0$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* DemandGTK$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$loadClass(DemandGTK$$Lambda$lambda$main$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DemandGTK$$Lambda$lambda$main$0$1::class$ = nullptr;

$FieldInfo _DemandGTK_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(DemandGTK, frame)},
	{}
};

$MethodInfo _DemandGTK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DemandGTK::*)()>(&DemandGTK::init$))},
	{"createAndShow", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&DemandGTK::createAndShow))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&DemandGTK::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&DemandGTK::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _DemandGTK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"DemandGTK",
	"java.lang.Object",
	nullptr,
	_DemandGTK_FieldInfo_,
	_DemandGTK_MethodInfo_
};

$Object* allocate$DemandGTK($Class* clazz) {
	return $of($alloc(DemandGTK));
}

$JFrame* DemandGTK::frame = nullptr;

void DemandGTK::init$() {
}

void DemandGTK::createAndShow() {
	try {
		$UIManager::setLookAndFeel("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
	} catch ($Exception& cnf) {
		cnf->printStackTrace();
		$throwNew($RuntimeException, "GTK LaF must be supported"_s);
	}
	$init(DemandGTK);
	$assignStatic(DemandGTK::frame, $new($JFrame, "JFrame"_s));
	$nc(DemandGTK::frame)->setSize(200, 200);
	$nc(DemandGTK::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(DemandGTK::frame)->setVisible(true);
}

void DemandGTK::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DemandGTK$$Lambda$createAndShow)));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->delay(1000);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(DemandGTK$$Lambda$lambda$main$0$1)));
}

void DemandGTK::lambda$main$0() {
	$init(DemandGTK);
	$nc(DemandGTK::frame)->setVisible(false);
	$nc(DemandGTK::frame)->dispose();
}

DemandGTK::DemandGTK() {
}

$Class* DemandGTK::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DemandGTK$$Lambda$createAndShow::classInfo$.name)) {
			return DemandGTK$$Lambda$createAndShow::load$(name, initialize);
		}
		if (name->equals(DemandGTK$$Lambda$lambda$main$0$1::classInfo$.name)) {
			return DemandGTK$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
	}
	$loadClass(DemandGTK, name, initialize, &_DemandGTK_ClassInfo_, allocate$DemandGTK);
	return class$;
}

$Class* DemandGTK::class$ = nullptr;