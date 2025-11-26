#include <javax/swing/plaf/metal/MetalBorders$QuestionDialogBorder.h>

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
using $MetalBorders = ::javax::swing::plaf::metal::MetalBorders;
using $MetalBorders$DialogBorder = ::javax::swing::plaf::metal::MetalBorders$DialogBorder;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalBorders$QuestionDialogBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalBorders$QuestionDialogBorder::*)()>(&MetalBorders$QuestionDialogBorder::init$))},
	{"getActiveBackground", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalBorders$QuestionDialogBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder", "javax.swing.plaf.metal.MetalBorders", "QuestionDialogBorder", $STATIC},
	{"javax.swing.plaf.metal.MetalBorders$DialogBorder", "javax.swing.plaf.metal.MetalBorders", "DialogBorder", $STATIC},
	{}
};

$ClassInfo _MetalBorders$QuestionDialogBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalBorders$QuestionDialogBorder",
	"javax.swing.plaf.metal.MetalBorders$DialogBorder",
	nullptr,
	nullptr,
	_MetalBorders$QuestionDialogBorder_MethodInfo_,
	nullptr,
	nullptr,
	_MetalBorders$QuestionDialogBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalBorders"
};

$Object* allocate$MetalBorders$QuestionDialogBorder($Class* clazz) {
	return $of($alloc(MetalBorders$QuestionDialogBorder));
}

void MetalBorders$QuestionDialogBorder::init$() {
	$MetalBorders$DialogBorder::init$();
}

$Color* MetalBorders$QuestionDialogBorder::getActiveBackground() {
	return $UIManager::getColor("OptionPane.questionDialog.border.background"_s);
}

MetalBorders$QuestionDialogBorder::MetalBorders$QuestionDialogBorder() {
}

$Class* MetalBorders$QuestionDialogBorder::load$($String* name, bool initialize) {
	$loadClass(MetalBorders$QuestionDialogBorder, name, initialize, &_MetalBorders$QuestionDialogBorder_ClassInfo_, allocate$MetalBorders$QuestionDialogBorder);
	return class$;
}

$Class* MetalBorders$QuestionDialogBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax