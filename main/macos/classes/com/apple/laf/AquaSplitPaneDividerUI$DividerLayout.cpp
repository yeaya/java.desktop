#include <com/apple/laf/AquaSplitPaneDividerUI$DividerLayout.h>

#include <com/apple/laf/AquaSplitPaneDividerUI.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DividerLayout.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $AquaSplitPaneDividerUI = ::com::apple::laf::AquaSplitPaneDividerUI;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $BasicSplitPaneDivider$DividerLayout = ::javax::swing::plaf::basic::BasicSplitPaneDivider$DividerLayout;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSplitPaneDividerUI$DividerLayout_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaSplitPaneDividerUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaSplitPaneDividerUI$DividerLayout, this$0)},
	{}
};

$MethodInfo _AquaSplitPaneDividerUI$DividerLayout_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaSplitPaneDividerUI;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaSplitPaneDividerUI$DividerLayout::*)($AquaSplitPaneDividerUI*)>(&AquaSplitPaneDividerUI$DividerLayout::init$))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaSplitPaneDividerUI$DividerLayout_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSplitPaneDividerUI$DividerLayout", "com.apple.laf.AquaSplitPaneDividerUI", "DividerLayout", $PROTECTED},
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout", "javax.swing.plaf.basic.BasicSplitPaneDivider", "DividerLayout", $PROTECTED},
	{}
};

$ClassInfo _AquaSplitPaneDividerUI$DividerLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaSplitPaneDividerUI$DividerLayout",
	"javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout",
	nullptr,
	_AquaSplitPaneDividerUI$DividerLayout_FieldInfo_,
	_AquaSplitPaneDividerUI$DividerLayout_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSplitPaneDividerUI$DividerLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSplitPaneDividerUI"
};

$Object* allocate$AquaSplitPaneDividerUI$DividerLayout($Class* clazz) {
	return $of($alloc(AquaSplitPaneDividerUI$DividerLayout));
}

void AquaSplitPaneDividerUI$DividerLayout::init$($AquaSplitPaneDividerUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSplitPaneDivider$DividerLayout::init$(this$0);
}

void AquaSplitPaneDividerUI$DividerLayout::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	int32_t maxSize = this->this$0->getMaxDividerSize();
	$var($Dimension, size, this->this$0->getSize());
	bool var$0 = $AquaSplitPaneDividerUI::access$000(this->this$0) == nullptr;
	if (var$0 || $AquaSplitPaneDividerUI::access$100(this->this$0) == nullptr || !$equals(c, this->this$0)) {
		return;
	}
	if (!$nc($($AquaSplitPaneDividerUI::access$200(this->this$0)))->isOneTouchExpandable()) {
		$nc($($AquaSplitPaneDividerUI::access$300(this->this$0)))->setBounds(-5, -5, 1, 1);
		$nc($($AquaSplitPaneDividerUI::access$400(this->this$0)))->setBounds(-5, -5, 1, 1);
		return;
	}
	int32_t blockSize = $Math::min(this->this$0->getDividerSize(), 9);
	if ($AquaSplitPaneDividerUI::access$500(this->this$0) == $JSplitPane::VERTICAL_SPLIT) {
		int32_t yPosition = 0;
		if ($nc(size)->height > maxSize) {
			int32_t diff = size->height - maxSize;
			yPosition = diff / 2;
		}
		int32_t xPosition = 9 + 2;
		$nc($($AquaSplitPaneDividerUI::access$600(this->this$0)))->setBounds(xPosition, yPosition, 9, blockSize);
		xPosition -= (9 + 2);
		$nc($($AquaSplitPaneDividerUI::access$700(this->this$0)))->setBounds(xPosition, yPosition, 9, blockSize);
	} else {
		int32_t xPosition = 0;
		if ($nc(size)->width > maxSize) {
			int32_t diff = size->width - maxSize;
			xPosition = diff / 2;
		}
		int32_t yPosition = 9 + 2;
		$nc($($AquaSplitPaneDividerUI::access$800(this->this$0)))->setBounds(xPosition, yPosition, blockSize, 9);
		yPosition -= (9 + 2);
		$nc($($AquaSplitPaneDividerUI::access$900(this->this$0)))->setBounds(xPosition, yPosition, blockSize, 9);
	}
}

AquaSplitPaneDividerUI$DividerLayout::AquaSplitPaneDividerUI$DividerLayout() {
}

$Class* AquaSplitPaneDividerUI$DividerLayout::load$($String* name, bool initialize) {
	$loadClass(AquaSplitPaneDividerUI$DividerLayout, name, initialize, &_AquaSplitPaneDividerUI$DividerLayout_ClassInfo_, allocate$AquaSplitPaneDividerUI$DividerLayout);
	return class$;
}

$Class* AquaSplitPaneDividerUI$DividerLayout::class$ = nullptr;

		} // laf
	} // apple
} // com