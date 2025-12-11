#include <InternalResourceBundle.h>

#include <java/awt/EventQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

class InternalResourceBundle$$Lambda$lambda$main$0 : public $Runnable {
	$class(InternalResourceBundle$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		InternalResourceBundle::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<InternalResourceBundle$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo InternalResourceBundle$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InternalResourceBundle$$Lambda$lambda$main$0::*)()>(&InternalResourceBundle$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo InternalResourceBundle$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"InternalResourceBundle$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* InternalResourceBundle$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(InternalResourceBundle$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* InternalResourceBundle$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _InternalResourceBundle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InternalResourceBundle::*)()>(&InternalResourceBundle::init$))},
	{"getValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($UIDefaults*)>(&InternalResourceBundle::getValue))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&InternalResourceBundle::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&InternalResourceBundle::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _InternalResourceBundle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"InternalResourceBundle",
	"java.lang.Object",
	nullptr,
	nullptr,
	_InternalResourceBundle_MethodInfo_
};

$Object* allocate$InternalResourceBundle($Class* clazz) {
	return $of($alloc(InternalResourceBundle));
}

void InternalResourceBundle::init$() {
}

void InternalResourceBundle::main($StringArray* args) {
	$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(InternalResourceBundle$$Lambda$lambda$main$0)));
}

$Object* InternalResourceBundle::getValue($UIDefaults* defaults) {
	return $of($nc(defaults)->get("MetalTitlePane.restore.titleAndMnemonic"_s));
}

void InternalResourceBundle::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$var($UIDefaults, defaults, $UIManager::getDefaults());
	$nc(defaults)->addResourceBundle("com.sun.swing.internal.plaf.metal.resources.metal"_s);
	$var($Object, value, getValue(defaults));
	if (value != nullptr) {
		$throwNew($RuntimeException, $$str({"value is not null = "_s, value}));
	}
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$assign(value, getValue(defaults));
	if (value == nullptr) {
		$throwNew($RuntimeException, "value is null"_s);
	}
}

InternalResourceBundle::InternalResourceBundle() {
}

$Class* InternalResourceBundle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(InternalResourceBundle$$Lambda$lambda$main$0::classInfo$.name)) {
			return InternalResourceBundle$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(InternalResourceBundle, name, initialize, &_InternalResourceBundle_ClassInfo_, allocate$InternalResourceBundle);
	return class$;
}

$Class* InternalResourceBundle::class$ = nullptr;