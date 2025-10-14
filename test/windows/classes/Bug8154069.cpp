#include <Bug8154069.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
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
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleSelection.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Window = ::java::awt::Window;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
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
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleSelection = ::javax::accessibility::AccessibleSelection;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

class Bug8154069$$Lambda$lambda$main$0 : public $Runnable {
	$class(Bug8154069$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Bug8154069::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Bug8154069$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Bug8154069$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8154069$$Lambda$lambda$main$0::*)()>(&Bug8154069$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Bug8154069$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Bug8154069$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Bug8154069$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(Bug8154069$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Bug8154069$$Lambda$lambda$main$0::class$ = nullptr;

class Bug8154069$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(Bug8154069$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Bug8154069::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Bug8154069$$Lambda$lambda$main$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Bug8154069$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8154069$$Lambda$lambda$main$1$1::*)()>(&Bug8154069$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Bug8154069$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Bug8154069$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Bug8154069$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(Bug8154069$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Bug8154069$$Lambda$lambda$main$1$1::class$ = nullptr;

$FieldInfo _Bug8154069_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Bug8154069, frame)},
	{"exception", "Ljava/lang/Exception;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Bug8154069, exception)},
	{}
};

$MethodInfo _Bug8154069_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Bug8154069::*)()>(&Bug8154069::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Bug8154069::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Bug8154069::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Bug8154069::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Bug8154069_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Bug8154069",
	"java.lang.Object",
	nullptr,
	_Bug8154069_FieldInfo_,
	_Bug8154069_MethodInfo_
};

$Object* allocate$Bug8154069($Class* clazz) {
	return $of($alloc(Bug8154069));
}

$JFrame* Bug8154069::frame = nullptr;
$volatile($Exception*) Bug8154069::exception = nullptr;

void Bug8154069::init$() {
}

void Bug8154069::main($StringArray* args) {
	$init(Bug8154069);
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($NimbusLookAndFeel)));
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			}
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Bug8154069$$Lambda$lambda$main$0)));
			if (Bug8154069::exception != nullptr) {
				$init($System);
				$nc($System::out)->println($$str({"Test failed: "_s, $($nc(Bug8154069::exception)->getMessage())}));
				$throw(Bug8154069::exception);
			} else {
				$init($System);
				$nc($System::out)->println("Test passed."_s);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Bug8154069$$Lambda$lambda$main$1$1)));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Bug8154069::lambda$main$1() {
	$init(Bug8154069);
	if (Bug8154069::frame != nullptr) {
		$nc(Bug8154069::frame)->dispose();
	}
}

void Bug8154069::lambda$main$0() {
	$init(Bug8154069);
	$assignStatic(Bug8154069::frame, $new($JFrame));
	$var($StringArray, petStrings, $new($StringArray, {
		"Bird"_s,
		"Cat"_s
	}));
	$var($JComboBox, cb, $new($JComboBox, petStrings));
	cb->setSelectedIndex(1);
	$nc(Bug8154069::frame)->add(static_cast<$Component*>(cb));
	$nc(Bug8154069::frame)->pack();
	try {
		cb->setSelectedIndex(-1);
		int32_t i = cb->getSelectedIndex();
		if (i != -1) {
			$throwNew($RuntimeException, "getSelectedIndex is not -1"_s);
		}
		$var($Object, o, cb->getSelectedItem());
		if (o != nullptr) {
			$throwNew($RuntimeException, "getSelectedItem is not null"_s);
		}
		$var($AccessibleContext, ac, cb->getAccessibleContext());
		$var($AccessibleSelection, as, $nc(ac)->getAccessibleSelection());
		int32_t count = $nc(as)->getAccessibleSelectionCount();
		if (count != 0) {
			$throwNew($RuntimeException, "getAccessibleSelection count is not 0"_s);
		}
		$var($Accessible, a, as->getAccessibleSelection(0));
		if (a != nullptr) {
			$throwNew($RuntimeException, "getAccessibleSelection(0) is not null"_s);
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$assignStatic(Bug8154069::exception, e);
	}
}

void clinit$Bug8154069($Class* class$) {
	$assignStatic(Bug8154069::exception, nullptr);
}

Bug8154069::Bug8154069() {
}

$Class* Bug8154069::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Bug8154069$$Lambda$lambda$main$0::classInfo$.name)) {
			return Bug8154069$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(Bug8154069$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return Bug8154069$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(Bug8154069, name, initialize, &_Bug8154069_ClassInfo_, clinit$Bug8154069, allocate$Bug8154069);
	return class$;
}

$Class* Bug8154069::class$ = nullptr;