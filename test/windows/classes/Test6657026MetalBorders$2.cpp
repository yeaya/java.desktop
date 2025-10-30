#include <Test6657026MetalBorders$2.h>

#include <Test6657026MetalBorders.h>
#include <java/awt/Insets.h>
#include <javax/swing/plaf/metal/MetalBorders$MenuBarBorder.h>
#include <jcpp.h>

#undef NEGATIVE

using $Test6657026MetalBorders = ::Test6657026MetalBorders;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetalBorders$MenuBarBorder = ::javax::swing::plaf::metal::MetalBorders$MenuBarBorder;

$MethodInfo _Test6657026MetalBorders$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Test6657026MetalBorders$2::*)()>(&Test6657026MetalBorders$2::init$))},
	{}
};

$EnclosingMethodInfo _Test6657026MetalBorders$2_EnclosingMethodInfo_ = {
	"Test6657026MetalBorders",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Test6657026MetalBorders$2_InnerClassesInfo_[] = {
	{"Test6657026MetalBorders$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.metal.MetalBorders$MenuBarBorder", "javax.swing.plaf.metal.MetalBorders", "MenuBarBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Test6657026MetalBorders$2_ClassInfo_ = {
	$ACC_SUPER,
	"Test6657026MetalBorders$2",
	"javax.swing.plaf.metal.MetalBorders$MenuBarBorder",
	nullptr,
	nullptr,
	_Test6657026MetalBorders$2_MethodInfo_,
	nullptr,
	&_Test6657026MetalBorders$2_EnclosingMethodInfo_,
	_Test6657026MetalBorders$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Test6657026MetalBorders"
};

$Object* allocate$Test6657026MetalBorders$2($Class* clazz) {
	return $of($alloc(Test6657026MetalBorders$2));
}

void Test6657026MetalBorders$2::init$() {
	$MetalBorders$MenuBarBorder::init$();
	{
		$init($MetalBorders$MenuBarBorder);
		$init($Test6657026MetalBorders);
		$assignStatic($MetalBorders$MenuBarBorder::borderInsets, $Test6657026MetalBorders::NEGATIVE);
	}
}

Test6657026MetalBorders$2::Test6657026MetalBorders$2() {
}

$Class* Test6657026MetalBorders$2::load$($String* name, bool initialize) {
	$loadClass(Test6657026MetalBorders$2, name, initialize, &_Test6657026MetalBorders$2_ClassInfo_, allocate$Test6657026MetalBorders$2);
	return class$;
}

$Class* Test6657026MetalBorders$2::class$ = nullptr;