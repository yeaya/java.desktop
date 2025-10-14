#include <Test8051548.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
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
#include <java/lang/reflect/Method.h>
#include <java/util/function/Predicate.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/colorchooser/AbstractColorChooserPanel.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef TABS
#undef TRANSPARENCY_ENABLED_PROPERTY
#undef VK_ENTER

using $StringArray2 = $Array<::java::lang::String, 2>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Predicate = ::java::util::function::Predicate;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JComponent = ::javax::swing::JComponent;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $AbstractColorChooserPanel = ::javax::swing::colorchooser::AbstractColorChooserPanel;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class Test8051548$$Lambda$lambda$main$0 : public $Runnable {
	$class(Test8051548$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test8051548::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8051548$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test8051548$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548$$Lambda$lambda$main$0::*)()>(&Test8051548$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8051548$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8051548$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Test8051548$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(Test8051548$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8051548$$Lambda$lambda$main$0::class$ = nullptr;

class Test8051548$$Lambda$lambda$testColorPanels$1$1 : public $Runnable {
	$class(Test8051548$$Lambda$lambda$testColorPanels$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test8051548::lambda$testColorPanels$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8051548$$Lambda$lambda$testColorPanels$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test8051548$$Lambda$lambda$testColorPanels$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548$$Lambda$lambda$testColorPanels$1$1::*)()>(&Test8051548$$Lambda$lambda$testColorPanels$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8051548$$Lambda$lambda$testColorPanels$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8051548$$Lambda$lambda$testColorPanels$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Test8051548$$Lambda$lambda$testColorPanels$1$1::load$($String* name, bool initialize) {
	$loadClass(Test8051548$$Lambda$lambda$testColorPanels$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8051548$$Lambda$lambda$testColorPanels$1$1::class$ = nullptr;

class Test8051548$$Lambda$lambda$testColorPanels$3$2 : public $Runnable {
	$class(Test8051548$$Lambda$lambda$testColorPanels$3$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($String* tab, $String* initialValue) {
		$set(this, tab, tab);
		$set(this, initialValue, initialValue);
	}
	virtual void run() override {
		Test8051548::lambda$testColorPanels$3(tab, initialValue);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8051548$$Lambda$lambda$testColorPanels$3$2>());
	}
	$String* tab = nullptr;
	$String* initialValue = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test8051548$$Lambda$lambda$testColorPanels$3$2::fieldInfos[3] = {
	{"tab", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Test8051548$$Lambda$lambda$testColorPanels$3$2, tab)},
	{"initialValue", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Test8051548$$Lambda$lambda$testColorPanels$3$2, initialValue)},
	{}
};
$MethodInfo Test8051548$$Lambda$lambda$testColorPanels$3$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548$$Lambda$lambda$testColorPanels$3$2::*)($String*,$String*)>(&Test8051548$$Lambda$lambda$testColorPanels$3$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8051548$$Lambda$lambda$testColorPanels$3$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8051548$$Lambda$lambda$testColorPanels$3$2",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Test8051548$$Lambda$lambda$testColorPanels$3$2::load$($String* name, bool initialize) {
	$loadClass(Test8051548$$Lambda$lambda$testColorPanels$3$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8051548$$Lambda$lambda$testColorPanels$3$2::class$ = nullptr;

class Test8051548$$Lambda$lambda$testShowDialog$4$3 : public $Runnable {
	$class(Test8051548$$Lambda$lambda$testShowDialog$4$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(int32_t alphaValue, bool colorTransparencySelectionEnabled) {
		this->alphaValue = alphaValue;
		this->colorTransparencySelectionEnabled = colorTransparencySelectionEnabled;
	}
	virtual void run() override {
		Test8051548::lambda$testShowDialog$4(alphaValue, colorTransparencySelectionEnabled);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8051548$$Lambda$lambda$testShowDialog$4$3>());
	}
	int32_t alphaValue = 0;
	bool colorTransparencySelectionEnabled = false;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test8051548$$Lambda$lambda$testShowDialog$4$3::fieldInfos[3] = {
	{"alphaValue", "I", nullptr, $PUBLIC, $field(Test8051548$$Lambda$lambda$testShowDialog$4$3, alphaValue)},
	{"colorTransparencySelectionEnabled", "Z", nullptr, $PUBLIC, $field(Test8051548$$Lambda$lambda$testShowDialog$4$3, colorTransparencySelectionEnabled)},
	{}
};
$MethodInfo Test8051548$$Lambda$lambda$testShowDialog$4$3::methodInfos[3] = {
	{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548$$Lambda$lambda$testShowDialog$4$3::*)(int32_t,bool)>(&Test8051548$$Lambda$lambda$testShowDialog$4$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8051548$$Lambda$lambda$testShowDialog$4$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8051548$$Lambda$lambda$testShowDialog$4$3",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Test8051548$$Lambda$lambda$testShowDialog$4$3::load$($String* name, bool initialize) {
	$loadClass(Test8051548$$Lambda$lambda$testShowDialog$4$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8051548$$Lambda$lambda$testShowDialog$4$3::class$ = nullptr;

class Test8051548$$Lambda$lambda$testShowDialog$5$4 : public $Runnable {
	$class(Test8051548$$Lambda$lambda$testShowDialog$5$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test8051548::lambda$testShowDialog$5();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8051548$$Lambda$lambda$testShowDialog$5$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test8051548$$Lambda$lambda$testShowDialog$5$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548$$Lambda$lambda$testShowDialog$5$4::*)()>(&Test8051548$$Lambda$lambda$testShowDialog$5$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8051548$$Lambda$lambda$testShowDialog$5$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8051548$$Lambda$lambda$testShowDialog$5$4",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Test8051548$$Lambda$lambda$testShowDialog$5$4::load$($String* name, bool initialize) {
	$loadClass(Test8051548$$Lambda$lambda$testShowDialog$5$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8051548$$Lambda$lambda$testShowDialog$5$4::class$ = nullptr;

class Test8051548$$Lambda$lambda$findComponent$6$5 : public $Predicate {
	$class(Test8051548$$Lambda$lambda$findComponent$6$5, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual bool test(Object$* comp) override {
		 return Test8051548::lambda$findComponent$6(name, $cast($Component, comp));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8051548$$Lambda$lambda$findComponent$6$5>());
	}
	$String* name = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test8051548$$Lambda$lambda$findComponent$6$5::fieldInfos[2] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Test8051548$$Lambda$lambda$findComponent$6$5, name)},
	{}
};
$MethodInfo Test8051548$$Lambda$lambda$findComponent$6$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548$$Lambda$lambda$findComponent$6$5::*)($String*)>(&Test8051548$$Lambda$lambda$findComponent$6$5::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8051548$$Lambda$lambda$findComponent$6$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8051548$$Lambda$lambda$findComponent$6$5",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Test8051548$$Lambda$lambda$findComponent$6$5::load$($String* name, bool initialize) {
	$loadClass(Test8051548$$Lambda$lambda$findComponent$6$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8051548$$Lambda$lambda$findComponent$6$5::class$ = nullptr;

class Test8051548$$Lambda$lambda$findTextField$7$6 : public $Predicate {
	$class(Test8051548$$Lambda$lambda$findTextField$7$6, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* value) {
		$set(this, value, value);
	}
	virtual bool test(Object$* comp) override {
		 return Test8051548::lambda$findTextField$7(value, $cast($Component, comp));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8051548$$Lambda$lambda$findTextField$7$6>());
	}
	$String* value = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Test8051548$$Lambda$lambda$findTextField$7$6::fieldInfos[2] = {
	{"value", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Test8051548$$Lambda$lambda$findTextField$7$6, value)},
	{}
};
$MethodInfo Test8051548$$Lambda$lambda$findTextField$7$6::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548$$Lambda$lambda$findTextField$7$6::*)($String*)>(&Test8051548$$Lambda$lambda$findTextField$7$6::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8051548$$Lambda$lambda$findTextField$7$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8051548$$Lambda$lambda$findTextField$7$6",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* Test8051548$$Lambda$lambda$findTextField$7$6::load$($String* name, bool initialize) {
	$loadClass(Test8051548$$Lambda$lambda$findTextField$7$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8051548$$Lambda$lambda$findTextField$7$6::class$ = nullptr;

class Test8051548$$Lambda$lambda$testColorPanels$2$7 : public $PropertyChangeListener {
	$class(Test8051548$$Lambda$lambda$testColorPanels$2$7, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* e) override {
		Test8051548::lambda$testColorPanels$2(e);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8051548$$Lambda$lambda$testColorPanels$2$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test8051548$$Lambda$lambda$testColorPanels$2$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548$$Lambda$lambda$testColorPanels$2$7::*)()>(&Test8051548$$Lambda$lambda$testColorPanels$2$7::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8051548$$Lambda$lambda$testColorPanels$2$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8051548$$Lambda$lambda$testColorPanels$2$7",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	nullptr,
	methodInfos
};
$Class* Test8051548$$Lambda$lambda$testColorPanels$2$7::load$($String* name, bool initialize) {
	$loadClass(Test8051548$$Lambda$lambda$testColorPanels$2$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8051548$$Lambda$lambda$testColorPanels$2$7::class$ = nullptr;

$FieldInfo _Test8051548_FieldInfo_[] = {
	{"TABS", "[[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test8051548, TABS)},
	{"colorChooser", "Ljavax/swing/JColorChooser;", nullptr, $PRIVATE | $STATIC, $staticField(Test8051548, colorChooser)},
	{"propertyChangeListenerInvoked", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Test8051548, propertyChangeListenerInvoked)},
	{"color", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Test8051548, color)},
	{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test8051548, frame)},
	{}
};

$MethodInfo _Test8051548_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8051548::*)()>(&Test8051548::init$))},
	{"colorHasAlpha", "()Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)()>(&Test8051548::colorHasAlpha))},
	{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Test8051548::createAndShowGUI))},
	{"findComponent", "(Ljava/awt/Component;Ljava/lang/String;)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)($Component*,$String*)>(&Test8051548::findComponent))},
	{"findComponent", "(Ljava/awt/Component;Ljava/util/function/Predicate;)Ljava/awt/Component;", "(Ljava/awt/Component;Ljava/util/function/Predicate<Ljava/awt/Component;>;)Ljava/awt/Component;", $PRIVATE | $STATIC, $method(static_cast<$Component*(*)($Component*,$Predicate*)>(&Test8051548::findComponent))},
	{"findTextField", "(Ljava/awt/Component;Ljava/lang/String;)Ljava/awt/Component;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Component*(*)($Component*,$String*)>(&Test8051548::findTextField))},
	{"lambda$findComponent$6", "(Ljava/lang/String;Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$Component*)>(&Test8051548::lambda$findComponent$6))},
	{"lambda$findTextField$7", "(Ljava/lang/String;Ljava/awt/Component;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($String*,$Component*)>(&Test8051548::lambda$findTextField$7))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Test8051548::lambda$main$0))},
	{"lambda$testColorPanels$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Test8051548::lambda$testColorPanels$1))},
	{"lambda$testColorPanels$2", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($PropertyChangeEvent*)>(&Test8051548::lambda$testColorPanels$2))},
	{"lambda$testColorPanels$3", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*)>(&Test8051548::lambda$testColorPanels$3))},
	{"lambda$testShowDialog$4", "(IZ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,bool)>(&Test8051548::lambda$testShowDialog$4))},
	{"lambda$testShowDialog$5", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Test8051548::lambda$testShowDialog$5))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8051548::main)), "java.lang.Exception"},
	{"testColorPanels", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Test8051548::testColorPanels)), "java.lang.Exception"},
	{"testShowDialog", "(Z)V", nullptr, $STATIC, $method(static_cast<void(*)(bool)>(&Test8051548::testShowDialog)), "java.lang.Exception"},
	{}
};

$ClassInfo _Test8051548_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8051548",
	"java.lang.Object",
	nullptr,
	_Test8051548_FieldInfo_,
	_Test8051548_MethodInfo_
};

$Object* allocate$Test8051548($Class* clazz) {
	return $of($alloc(Test8051548));
}

$StringArray2* Test8051548::TABS = nullptr;
$JColorChooser* Test8051548::colorChooser = nullptr;
bool Test8051548::propertyChangeListenerInvoked = false;
$volatile($Color*) Test8051548::color = nullptr;
$JFrame* Test8051548::frame = nullptr;

void Test8051548::init$() {
}

void Test8051548::main($StringArray* args) {
	$init(Test8051548);
	{
		$var($Throwable, var$0, nullptr);
		try {
			testColorPanels();
			testShowDialog(true);
			testShowDialog(false);
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (Test8051548::frame != nullptr) {
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test8051548$$Lambda$lambda$main$0)));
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Test8051548::testColorPanels() {
	$init(Test8051548);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test8051548$$Lambda$lambda$testColorPanels$1$1)));
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	robot->waitForIdle();
	{
		$var($StringArray2, arr$, Test8051548::TABS);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($StringArray, tabs, arr$->get(i$));
			{
				$var($String, tab, $nc(tabs)->get(0));
				$var($String, initialValue, tabs->get(1));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test8051548$$Lambda$lambda$testColorPanels$3$2, tab, initialValue)));
				robot->waitForIdle();
			}
		}
	}
}

void Test8051548::testShowDialog(bool colorTransparencySelectionEnabled) {
	$init(Test8051548);
	int32_t alphaValue = 123;
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeLater(static_cast<$Runnable*>($$new(Test8051548$$Lambda$lambda$testShowDialog$4$3, alphaValue, colorTransparencySelectionEnabled)));
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test8051548$$Lambda$lambda$testShowDialog$5$4)));
	robot->waitForIdle();
	robot->keyPress($KeyEvent::VK_ENTER);
	robot->keyRelease($KeyEvent::VK_ENTER);
	robot->waitForIdle();
	if (colorTransparencySelectionEnabled) {
		if ($nc(Test8051548::color)->getAlpha() != alphaValue) {
			$throwNew($RuntimeException, "Color alpha has not bee reseted!"_s);
		}
	} else {
		if ($nc(Test8051548::color)->getAlpha() != 255) {
			$throwNew($RuntimeException, "Color alpha has not bee reseted!"_s);
		}
	}
}

bool Test8051548::colorHasAlpha() {
	$init(Test8051548);
	return $nc($($nc(Test8051548::colorChooser)->getColor()))->getAlpha() != 255;
}

void Test8051548::createAndShowGUI() {
	$init(Test8051548);
	$assignStatic(Test8051548::frame, $new($JFrame));
	$nc(Test8051548::frame)->setSize(700, 500);
	$nc(Test8051548::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$assignStatic(Test8051548::colorChooser, $new($JColorChooser));
	$nc($($nc(Test8051548::frame)->getContentPane()))->add(static_cast<$Component*>(Test8051548::colorChooser));
	$nc(Test8051548::frame)->setVisible(true);
}

$Component* Test8051548::findComponent($Component* component, $String* name) {
	$init(Test8051548);
	return findComponent(component, static_cast<$Predicate*>($$new(Test8051548$$Lambda$lambda$findComponent$6$5, name)));
}

$Component* Test8051548::findTextField($Component* component, $String* value) {
	$init(Test8051548);
	return findComponent(component, static_cast<$Predicate*>($$new(Test8051548$$Lambda$lambda$findTextField$7$6, value)));
}

$Component* Test8051548::findComponent($Component* component, $Predicate* predicate) {
	$init(Test8051548);
	if ($nc(predicate)->test(component)) {
		return component;
	}
	if ($instanceOf($Container, component)) {
		$var($Container, container, $cast($Container, component));
		for (int32_t i = 0; i < $nc(container)->getComponentCount(); ++i) {
			$var($Component, child, findComponent($(container->getComponent(i)), predicate));
			if (child != nullptr) {
				return child;
			}
		}
	}
	return nullptr;
}

bool Test8051548::lambda$findTextField$7($String* value, $Component* comp) {
	$init(Test8051548);
	if ($instanceOf($JFormattedTextField, comp)) {
		$var($JFormattedTextField, textField, $cast($JFormattedTextField, comp));
		return $nc(value)->equals($($nc(textField)->getText()));
	}
	return false;
}

bool Test8051548::lambda$findComponent$6($String* name, $Component* comp) {
	$init(Test8051548);
	return $nc($($nc($of(comp))->getClass()->getName()))->contains(name);
}

void Test8051548::lambda$testShowDialog$5() {
	$init(Test8051548);
}

void Test8051548::lambda$testShowDialog$4(int32_t alphaValue, bool colorTransparencySelectionEnabled) {
	$init(Test8051548);
	$assignStatic(Test8051548::color, $JColorChooser::showDialog(nullptr, "Change Color"_s, $$new($Color, 10, 20, 30, alphaValue), colorTransparencySelectionEnabled));
}

void Test8051548::lambda$testColorPanels$3($String* tab, $String* initialValue) {
	$init(Test8051548);
	$nc(Test8051548::colorChooser)->setColor($$new($Color, 50, 100, 85));
	$var($JTabbedPane, tabbedPane, $cast($JTabbedPane, findComponent(static_cast<$Component*>(Test8051548::colorChooser), "JTabbedPane"_s)));
	int32_t index = $nc(tabbedPane)->indexOfTab(tab);
	tabbedPane->setSelectedIndex(index);
	$var($AbstractColorChooserPanel, colorChooserPanel, $cast($AbstractColorChooserPanel, findComponent($(tabbedPane->getComponent(index)), "ColorChooserPanel"_s)));
	Test8051548::propertyChangeListenerInvoked = false;
	$nc(colorChooserPanel)->addPropertyChangeListener(static_cast<$PropertyChangeListener*>($$new(Test8051548$$Lambda$lambda$testColorPanels$2$7)));
	if (!colorChooserPanel->isColorTransparencySelectionEnabled()) {
		$throwNew($RuntimeException, "Color transparency selection should be enabled by default"_s);
	}
	$var($JFormattedTextField, transparencyTextField, $cast($JFormattedTextField, findTextField(colorChooserPanel, initialValue)));
	if (!$nc(transparencyTextField)->isEnabled()) {
		$throwNew($RuntimeException, "Transparency controls are disabled by default!"_s);
	}
	$nc(transparencyTextField)->setValue($($Integer::valueOf(50)));
	if (!colorHasAlpha()) {
		$throwNew($RuntimeException, "Transparency selection should be enabled!"_s);
	}
	colorChooserPanel->setColorTransparencySelectionEnabled(false);
	if (colorChooserPanel->isColorTransparencySelectionEnabled()) {
		$throwNew($RuntimeException, "Color transparency selection should be disabled!"_s);
	}
	if (!Test8051548::propertyChangeListenerInvoked) {
		$throwNew($RuntimeException, "Property change listener is not invoked!"_s);
	}
	if (colorHasAlpha()) {
		$throwNew($RuntimeException, "Transparency selection should be disabled!"_s);
	}
}

void Test8051548::lambda$testColorPanels$2($PropertyChangeEvent* e) {
	$init(Test8051548);
	$init($AbstractColorChooserPanel);
	if ($nc($AbstractColorChooserPanel::TRANSPARENCY_ENABLED_PROPERTY)->equals($($nc(e)->getPropertyName()))) {
		Test8051548::propertyChangeListenerInvoked = true;
		if (!$nc(($cast($Boolean, $($nc(e)->getOldValue()))))->booleanValue()) {
			$throwNew($RuntimeException, "Old color transparency selection property should be true!"_s);
		}
		if ($nc(($cast($Boolean, $($nc(e)->getNewValue()))))->booleanValue()) {
			$throwNew($RuntimeException, "New color transparency selection property should be false!"_s);
		}
	}
}

void Test8051548::lambda$testColorPanels$1() {
	$init(Test8051548);
	createAndShowGUI();
}

void Test8051548::lambda$main$0() {
	$init(Test8051548);
	$nc(Test8051548::frame)->dispose();
}

void clinit$Test8051548($Class* class$) {
	$assignStatic(Test8051548::TABS, $new($StringArray2, {
		$$new($StringArray, {
			"HSV"_s,
			"0"_s
		}),
		$$new($StringArray, {
			"HSL"_s,
			"0"_s
		}),
		$$new($StringArray, {
			"RGB"_s,
			"255"_s
		}),
		$$new($StringArray, {
			"CMYK"_s,
			"255"_s
		})
	}));
}

Test8051548::Test8051548() {
}

$Class* Test8051548::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Test8051548$$Lambda$lambda$main$0::classInfo$.name)) {
			return Test8051548$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(Test8051548$$Lambda$lambda$testColorPanels$1$1::classInfo$.name)) {
			return Test8051548$$Lambda$lambda$testColorPanels$1$1::load$(name, initialize);
		}
		if (name->equals(Test8051548$$Lambda$lambda$testColorPanels$3$2::classInfo$.name)) {
			return Test8051548$$Lambda$lambda$testColorPanels$3$2::load$(name, initialize);
		}
		if (name->equals(Test8051548$$Lambda$lambda$testShowDialog$4$3::classInfo$.name)) {
			return Test8051548$$Lambda$lambda$testShowDialog$4$3::load$(name, initialize);
		}
		if (name->equals(Test8051548$$Lambda$lambda$testShowDialog$5$4::classInfo$.name)) {
			return Test8051548$$Lambda$lambda$testShowDialog$5$4::load$(name, initialize);
		}
		if (name->equals(Test8051548$$Lambda$lambda$findComponent$6$5::classInfo$.name)) {
			return Test8051548$$Lambda$lambda$findComponent$6$5::load$(name, initialize);
		}
		if (name->equals(Test8051548$$Lambda$lambda$findTextField$7$6::classInfo$.name)) {
			return Test8051548$$Lambda$lambda$findTextField$7$6::load$(name, initialize);
		}
		if (name->equals(Test8051548$$Lambda$lambda$testColorPanels$2$7::classInfo$.name)) {
			return Test8051548$$Lambda$lambda$testColorPanels$2$7::load$(name, initialize);
		}
	}
	$loadClass(Test8051548, name, initialize, &_Test8051548_ClassInfo_, clinit$Test8051548, allocate$Test8051548);
	return class$;
}

$Class* Test8051548::class$ = nullptr;