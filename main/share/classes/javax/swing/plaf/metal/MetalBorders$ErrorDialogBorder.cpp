#include <javax/swing/plaf/metal/MetalBorders$ErrorDialogBorder.h>

#include <java/awt/Color.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalBorders$DialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $MetalBorders$DialogBorder = ::javax::swing::plaf::metal::MetalBorders$DialogBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$ErrorDialogBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalBorders$ErrorDialogBorder::*)()>(&MetalBorders$ErrorDialogBorder::init$))},
	{"getActiveBackground", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalBorders$ErrorDialogBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder", "javax.swing.plaf.metal.MetalBorders", "ErrorDialogBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$DialogBorder", "javax.swing.plaf.metal.MetalBorders", "DialogBorder", $STATIC},
	{}
};

$ClassInfo _MetalBorders$ErrorDialogBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$ErrorDialogBorder",
	"javax.swing.plaf.metal.MetalBorders$DialogBorder",
	nullptr,
	nullptr,
	_MetalBorders$ErrorDialogBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$ErrorDialogBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$ErrorDialogBorder($Class* clazz) {
	return $of($alloc(MetalBorders$ErrorDialogBorder));
}

void MetalBorders$ErrorDialogBorder::init$() {
	$MetalBorders$DialogBorder::init$();
}

$Color* MetalBorders$ErrorDialogBorder::getActiveBackground() {
	return $UIManager::getColor("OptionPane.errorDialog.border.background"_s);
}

MetalBorders$ErrorDialogBorder::MetalBorders$ErrorDialogBorder() {
}

$Class* MetalBorders$ErrorDialogBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$ErrorDialogBorder, name, initialize, &_MetalBorders$ErrorDialogBorder_ClassInfo_, allocate$MetalBorders$ErrorDialogBorder);
	return class$;
}

$Class* MetalBorders$ErrorDialogBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax