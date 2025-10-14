#include <Test6657026MetalBorders$3.h>

#include <Test6657026MetalBorders.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalBorders$MenuItemBorder.h>
#include <jcpp.h>

#undef NEGATIVE

using $Test6657026MetalBorders = ::Test6657026MetalBorders;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalBorders$MenuItemBorder = ::javax::swing::plaf::metal::MetalBorders$MenuItemBorder;

$MethodInfo _Test6657026MetalBorders$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6657026MetalBorders$3::*)()>(&Test6657026MetalBorders$3::init$))},
	{}
};

$EnclosingMethodInfo _Test6657026MetalBorders$3_EnclosingMethodInfo_ = {
	"Test6657026MetalBorders",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test6657026MetalBorders$3_InnerClassesInfo_[] = {
	{"Test6657026MetalBorders$3", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.MetalBorders$MenuItemBorder", "javax.swing.plaf.metal.MetalBorders", "MenuItemBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Test6657026MetalBorders$3_ClassInfo_ = {
	$ACC_SUPER,
	"Test6657026MetalBorders$3",
	"javax.swing.plaf.metal.MetalBorders$MenuItemBorder",
	nullptr,
	nullptr,
	_Test6657026MetalBorders$3_MethodInfo_,
	nullptr,
	&_Test6657026MetalBorders$3_EnclosingMethodInfo_,
	_Test6657026MetalBorders$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6657026MetalBorders"
};

$Object* allocate$Test6657026MetalBorders$3($Class* clazz) {
	return $of($alloc(Test6657026MetalBorders$3));
}

void Test6657026MetalBorders$3::init$() {
	$MetalBorders$MenuItemBorder::init$();
	{
		$init($MetalBorders$MenuItemBorder);
		$init($Test6657026MetalBorders);
		$assignStatic($MetalBorders$MenuItemBorder::borderInsets, $Test6657026MetalBorders::NEGATIVE);
	}
}

Test6657026MetalBorders$3::Test6657026MetalBorders$3() {
}

$Class* Test6657026MetalBorders$3::load$($String* name, bool initialize) {
	$loadClass(Test6657026MetalBorders$3, name, initialize, &_Test6657026MetalBorders$3_ClassInfo_, allocate$Test6657026MetalBorders$3);
	return class$;
}

$Class* Test6657026MetalBorders$3::class$ = nullptr;