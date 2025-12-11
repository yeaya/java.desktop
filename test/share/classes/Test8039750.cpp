#include <Test8039750.h>

#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIDefaults = ::javax::swing::UIDefaults;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class Test8039750$$Lambda$lambda$main$0 : public $Runnable {
	$class(Test8039750$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		Test8039750::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8039750$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test8039750$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8039750$$Lambda$lambda$main$0::*)()>(&Test8039750$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8039750$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8039750$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* Test8039750$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(Test8039750$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8039750$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _Test8039750_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8039750::*)()>(&Test8039750::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&Test8039750::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8039750::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/Object;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,$String*)>(&Test8039750::test))},
	{"test", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(Object$*,$String*,$String*)>(&Test8039750::test))},
	{}
};

$ClassInfo _Test8039750_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8039750",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test8039750_MethodInfo_
};

$Object* allocate$Test8039750($Class* clazz) {
	return $of($alloc(Test8039750));
}

void Test8039750::init$() {
}

void Test8039750::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(Test8039750$$Lambda$lambda$main$0)));
}

void Test8039750::test(Object$* value, $String* name) {
	if (!$nc($($nc($of(value))->getClass()->getName()))->equals(name)) {
		$throwNew($RuntimeException, name);
	}
}

void Test8039750::test(Object$* value, $String* one, $String* two) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($CompoundBorder, value)) {
		$var($CompoundBorder, border, $cast($CompoundBorder, value));
		test($($nc(border)->getOutsideBorder()), one);
		test($($nc(border)->getInsideBorder()), two);
	} else {
		$throwNew($RuntimeException, "CompoundBorder"_s);
	}
}

void Test8039750::lambda$main$0() {
	$useLocalCurrentObjectStackCache();
	$var($UIDefaults, table, $$new($MetalLookAndFeel)->getDefaults());
	test($($nc(table)->get("ToolBar.rolloverBorder"_s)), "javax.swing.plaf.metal.MetalBorders$ButtonBorder"_s, "javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder"_s);
	test($($nc(table)->get("ToolBar.nonrolloverBorder"_s)), "javax.swing.plaf.metal.MetalBorders$ButtonBorder"_s, "javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder"_s);
	test($($nc(table)->get("RootPane.frameBorder"_s)), "javax.swing.plaf.metal.MetalBorders$FrameBorder"_s);
	test($($nc(table)->get("RootPane.plainDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$DialogBorder"_s);
	test($($nc(table)->get("RootPane.informationDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$DialogBorder"_s);
	test($($nc(table)->get("RootPane.errorDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder"_s);
	test($($nc(table)->get("RootPane.colorChooserDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder"_s);
	test($($nc(table)->get("RootPane.fileChooserDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder"_s);
	test($($nc(table)->get("RootPane.questionDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder"_s);
	test($($nc(table)->get("RootPane.warningDialogBorder"_s)), "javax.swing.plaf.metal.MetalBorders$WarningDialogBorder"_s);
}

Test8039750::Test8039750() {
}

$Class* Test8039750::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Test8039750$$Lambda$lambda$main$0::classInfo$.name)) {
			return Test8039750$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(Test8039750, name, initialize, &_Test8039750_ClassInfo_, allocate$Test8039750);
	return class$;
}

$Class* Test8039750::class$ = nullptr;