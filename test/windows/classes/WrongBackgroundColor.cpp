#include <WrongBackgroundColor.h>

#include <java/awt/Color.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
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
#include <javax/swing/JDialog.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JDialog = ::javax::swing::JDialog;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;

class WrongBackgroundColor$$Lambda$lambda$main$0 : public $Runnable {
	$class(WrongBackgroundColor$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		WrongBackgroundColor::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WrongBackgroundColor$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo WrongBackgroundColor$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WrongBackgroundColor$$Lambda$lambda$main$0::*)()>(&WrongBackgroundColor$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WrongBackgroundColor$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"WrongBackgroundColor$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* WrongBackgroundColor$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(WrongBackgroundColor$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WrongBackgroundColor$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _WrongBackgroundColor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WrongBackgroundColor::*)()>(&WrongBackgroundColor::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&WrongBackgroundColor::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&WrongBackgroundColor::main)), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
	{}
};

$ClassInfo _WrongBackgroundColor_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"WrongBackgroundColor",
	"java.lang.Object",
	nullptr,
	nullptr,
	_WrongBackgroundColor_MethodInfo_
};

$Object* allocate$WrongBackgroundColor($Class* clazz) {
	return $of($alloc(WrongBackgroundColor));
}

void WrongBackgroundColor::init$() {
}

void WrongBackgroundColor::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(WrongBackgroundColor$$Lambda$lambda$main$0)));
}

void WrongBackgroundColor::lambda$main$0() {
	$var($UIDefaults, ui, $UIManager::getDefaults());
	$nc(ui)->put("control"_s, $$new($ColorUIResource, 54, 54, 54));
	$var($JDialog, dialog, $new($JDialog));
	$var($JFrame, frame, $new($JFrame));
	frame->pack();
	dialog->pack();
	$var($Color, dialogBackground, dialog->getBackground());
	$var($Color, frameBackground, frame->getBackground());
	frame->dispose();
	dialog->dispose();
	if (!$nc(dialogBackground)->equals(frameBackground)) {
		$init($System);
		$nc($System::err)->println($$str({"Expected:"_s, frameBackground}));
		$nc($System::err)->println($$str({"Actual:"_s, dialogBackground}));
		$throwNew($RuntimeException, "Wrong background color"_s);
	}
}

WrongBackgroundColor::WrongBackgroundColor() {
}

$Class* WrongBackgroundColor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WrongBackgroundColor$$Lambda$lambda$main$0::classInfo$.name)) {
			return WrongBackgroundColor$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(WrongBackgroundColor, name, initialize, &_WrongBackgroundColor_ClassInfo_, allocate$WrongBackgroundColor);
	return class$;
}

$Class* WrongBackgroundColor::class$ = nullptr;