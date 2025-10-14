#include <javax/swing/plaf/metal/MetalBorders$WarningDialogBorder.h>

#include <java/awt/Color.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalBorders$DialogBorder.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalBorders$DialogBorder = ::javax::swing::plaf::metal::MetalBorders$DialogBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$WarningDialogBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalBorders$WarningDialogBorder::*)()>(&MetalBorders$WarningDialogBorder::init$))},
	{"getActiveBackground", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalBorders$WarningDialogBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$WarningDialogBorder", "javax.swing.plaf.metal.MetalBorders", "WarningDialogBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$DialogBorder", "javax.swing.plaf.metal.MetalBorders", "DialogBorder", $STATIC},
	{}
};

$ClassInfo _MetalBorders$WarningDialogBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$WarningDialogBorder",
	"javax.swing.plaf.metal.MetalBorders$DialogBorder",
	nullptr,
	nullptr,
	_MetalBorders$WarningDialogBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$WarningDialogBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$WarningDialogBorder($Class* clazz) {
	return $of($alloc(MetalBorders$WarningDialogBorder));
}

void MetalBorders$WarningDialogBorder::init$() {
	$MetalBorders$DialogBorder::init$();
}

$Color* MetalBorders$WarningDialogBorder::getActiveBackground() {
	return $UIManager::getColor("OptionPane.warningDialog.border.background"_s);
}

MetalBorders$WarningDialogBorder::MetalBorders$WarningDialogBorder() {
}

$Class* MetalBorders$WarningDialogBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$WarningDialogBorder, name, initialize, &_MetalBorders$WarningDialogBorder_ClassInfo_, allocate$MetalBorders$WarningDialogBorder);
	return class$;
}

$Class* MetalBorders$WarningDialogBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax