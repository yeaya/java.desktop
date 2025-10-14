#include <RenderBadPictureCrash.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice$WindowTranslucency.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/Window.h>
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
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef PERPIXEL_TRANSLUCENT

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Frame = ::java::awt::Frame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsDevice$WindowTranslucency = ::java::awt::GraphicsDevice$WindowTranslucency;
using $Window = ::java::awt::Window;
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
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class RenderBadPictureCrash$$Lambda$lambda$main$0 : public $Runnable {
	$class(RenderBadPictureCrash$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		RenderBadPictureCrash::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RenderBadPictureCrash$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RenderBadPictureCrash$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RenderBadPictureCrash$$Lambda$lambda$main$0::*)()>(&RenderBadPictureCrash$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo RenderBadPictureCrash$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"RenderBadPictureCrash$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* RenderBadPictureCrash$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(RenderBadPictureCrash$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RenderBadPictureCrash$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _RenderBadPictureCrash_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RenderBadPictureCrash::*)()>(&RenderBadPictureCrash::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&RenderBadPictureCrash::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&RenderBadPictureCrash::main)), "java.lang.InterruptedException,java.lang.reflect.InvocationTargetException"},
	{}
};

$ClassInfo _RenderBadPictureCrash_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"RenderBadPictureCrash",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RenderBadPictureCrash_MethodInfo_
};

$Object* allocate$RenderBadPictureCrash($Class* clazz) {
	return $of($alloc(RenderBadPictureCrash));
}

void RenderBadPictureCrash::init$() {
}

void RenderBadPictureCrash::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(RenderBadPictureCrash$$Lambda$lambda$main$0)));
}

void RenderBadPictureCrash::lambda$main$0() {
	$var($JFrame, f, $new($JFrame));
	f->setUndecorated(true);
	$var($GraphicsDevice, gd, $nc($(f->getGraphicsConfiguration()))->getDevice());
	$init($GraphicsDevice$WindowTranslucency);
	if ($nc(gd)->isWindowTranslucencySupported($GraphicsDevice$WindowTranslucency::PERPIXEL_TRANSLUCENT)) {
		f->setBackground($$new($Color, 0, 0, 0, 0));
	}
	f->setSize(200, 300);
	f->setVisible(true);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$UIManager::setLookAndFeel("com.sun.java.swing.plaf.gtk.GTKLookAndFeel"_s);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$init($System);
				$nc($System::err)->println($of(e));
				$nc($System::err)->println("Could not set GTKLookAndFeel, skipping this test"_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			f->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

RenderBadPictureCrash::RenderBadPictureCrash() {
}

$Class* RenderBadPictureCrash::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RenderBadPictureCrash$$Lambda$lambda$main$0::classInfo$.name)) {
			return RenderBadPictureCrash$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(RenderBadPictureCrash, name, initialize, &_RenderBadPictureCrash_ClassInfo_, allocate$RenderBadPictureCrash);
	return class$;
}

$Class* RenderBadPictureCrash::class$ = nullptr;