#include <bug8071705$1.h>

#include <bug8071705$FrameListener.h>
#include <bug8071705.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $bug8071705 = ::bug8071705;
using $bug8071705$FrameListener = ::bug8071705$FrameListener;
using $Component = ::java::awt::Component;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $Window = ::java::awt::Window;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $JFrame = ::javax::swing::JFrame;

$FieldInfo _bug8071705$1_FieldInfo_[] = {
	{"val$latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL | $SYNTHETIC, $field(bug8071705$1, val$latch)},
	{"val$result", "[Z", nullptr, $FINAL | $SYNTHETIC, $field(bug8071705$1, val$result)},
	{}
};

$MethodInfo _bug8071705$1_MethodInfo_[] = {
	{"<init>", "([ZLjava/util/concurrent/CountDownLatch;)V", "()V", 0, $method(static_cast<void(bug8071705$1::*)($booleans*,$CountDownLatch*)>(&bug8071705$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8071705$1_EnclosingMethodInfo_ = {
	"bug8071705",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug8071705$1_InnerClassesInfo_[] = {
	{"bug8071705$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8071705$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8071705$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug8071705$1_FieldInfo_,
	_bug8071705$1_MethodInfo_,
	nullptr,
	&_bug8071705$1_EnclosingMethodInfo_,
	_bug8071705$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8071705"
};

$Object* allocate$bug8071705$1($Class* clazz) {
	return $of($alloc(bug8071705$1));
}

void bug8071705$1::init$($booleans* val$result, $CountDownLatch* val$latch) {
	$set(this, val$result, val$result);
	$set(this, val$latch, val$latch);
}

void bug8071705$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($JFrame, frame, $bug8071705::createGUI());
	$var($GraphicsDeviceArray, devices, $bug8071705::checkScreens());
	$var($GraphicsDevice, device, $bug8071705::checkConfigs(devices));
	if (device == nullptr) {
		$nc(frame)->dispose();
		$nc(this->val$result)->set(0, true);
		$nc(this->val$latch)->countDown();
	} else {
		$var($bug8071705$FrameListener, listener, $new($bug8071705$FrameListener, device, this->val$latch, this->val$result));
		$nc(frame)->addComponentListener(listener);
		frame->setVisible(true);
	}
}

bug8071705$1::bug8071705$1() {
}

$Class* bug8071705$1::load$($String* name, bool initialize) {
	$loadClass(bug8071705$1, name, initialize, &_bug8071705$1_ClassInfo_, allocate$bug8071705$1);
	return class$;
}

$Class* bug8071705$1::class$ = nullptr;