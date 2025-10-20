#include <Test6657026MetalBorders.h>

#include <Test6657026MetalBorders$1.h>
#include <Test6657026MetalBorders$2.h>
#include <Test6657026MetalBorders$3.h>
#include <Test6657026MetalBorders$4.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef MIN_VALUE
#undef NEGATIVE

using $Test6657026MetalBorders$1 = ::Test6657026MetalBorders$1;
using $Test6657026MetalBorders$2 = ::Test6657026MetalBorders$2;
using $Test6657026MetalBorders$3 = ::Test6657026MetalBorders$3;
using $Test6657026MetalBorders$4 = ::Test6657026MetalBorders$4;
using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Border = ::javax::swing::border::Border;

$FieldInfo _Test6657026MetalBorders_FieldInfo_[] = {
	{"NEGATIVE", "Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6657026MetalBorders, NEGATIVE)},
	{}
};

$MethodInfo _Test6657026MetalBorders_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test6657026MetalBorders::*)()>(&Test6657026MetalBorders::init$))},
	{"create", "(Ljava/lang/String;)Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Border*(*)($String*)>(&Test6657026MetalBorders::create))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test6657026MetalBorders::main))},
	{"test", "(Ljavax/swing/border/Border;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Border*)>(&Test6657026MetalBorders::test))},
	{}
};

$InnerClassInfo _Test6657026MetalBorders_InnerClassesInfo_[] = {
	{"Test6657026MetalBorders$4", nullptr, nullptr, 0},
	{"Test6657026MetalBorders$3", nullptr, nullptr, 0},
	{"Test6657026MetalBorders$2", nullptr, nullptr, 0},
	{"Test6657026MetalBorders$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test6657026MetalBorders_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test6657026MetalBorders",
	"java.lang.Object",
	nullptr,
	_Test6657026MetalBorders_FieldInfo_,
	_Test6657026MetalBorders_MethodInfo_,
	nullptr,
	nullptr,
	_Test6657026MetalBorders_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test6657026MetalBorders$4,Test6657026MetalBorders$3,Test6657026MetalBorders$2,Test6657026MetalBorders$1"
};

$Object* allocate$Test6657026MetalBorders($Class* clazz) {
	return $of($alloc(Test6657026MetalBorders));
}

$Insets* Test6657026MetalBorders::NEGATIVE = nullptr;

void Test6657026MetalBorders::init$() {
}

void Test6657026MetalBorders::main($StringArray* args) {
	$init(Test6657026MetalBorders);
	$useLocalCurrentObjectStackCache();
	$new($Test6657026MetalBorders$1);
	$new($Test6657026MetalBorders$2);
	$new($Test6657026MetalBorders$3);
	$new($Test6657026MetalBorders$4);
	test($(create("ButtonBorder"_s)));
	test($(create("MenuBarBorder"_s)));
	test($(create("MenuItemBorder"_s)));
	test($(create("PopupMenuBorder"_s)));
	test($(create("Flush3DBorder"_s)));
	test($(create("InternalFrameBorder"_s)));
	test($(create("PaletteBorder"_s)));
	test($(create("OptionDialogBorder"_s)));
	test($(create("ScrollPaneBorder"_s)));
}

$Border* Test6657026MetalBorders::create($String* name$renamed) {
	$init(Test6657026MetalBorders);
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$beforeCallerSensitive();
	try {
		$assign(name, $str({"javax.swing.plaf.metal.MetalBorders$"_s, name}));
		return $cast($Border, $Class::forName(name)->newInstance());
	} catch ($Exception&) {
		$var($Exception, exception, $catch());
		$throwNew($Error, "unexpected exception"_s, exception);
	}
	$shouldNotReachHere();
}

void Test6657026MetalBorders::test($Border* border) {
	$init(Test6657026MetalBorders);
	$useLocalCurrentObjectStackCache();
	$var($Insets, actual, $nc(border)->getBorderInsets(nullptr));
	if ($nc(Test6657026MetalBorders::NEGATIVE)->equals(actual)) {
		$throwNew($Error, $$str({"unexpected insets in "_s, $of(border)->getClass()}));
	}
	$var($Insets, expected, $cast($Insets, $nc(actual)->clone()));
	++actual->top;
	++actual->left;
	++actual->right;
	++actual->bottom;
	if (!$nc(expected)->equals($(border->getBorderInsets(nullptr)))) {
		$throwNew($Error, $$str({"shared insets in "_s, $of(border)->getClass()}));
	}
}

void clinit$Test6657026MetalBorders($Class* class$) {
	$assignStatic(Test6657026MetalBorders::NEGATIVE, $new($Insets, $Integer::MIN_VALUE, $Integer::MIN_VALUE, $Integer::MIN_VALUE, $Integer::MIN_VALUE));
}

Test6657026MetalBorders::Test6657026MetalBorders() {
}

$Class* Test6657026MetalBorders::load$($String* name, bool initialize) {
	$loadClass(Test6657026MetalBorders, name, initialize, &_Test6657026MetalBorders_ClassInfo_, clinit$Test6657026MetalBorders, allocate$Test6657026MetalBorders);
	return class$;
}

$Class* Test6657026MetalBorders::class$ = nullptr;