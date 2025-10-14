#include <javax/swing/plaf/metal/MetalSplitPaneDivider$MetalDividerLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/metal/MetalSplitPaneDivider.h>
#include <jcpp.h>

#undef VERTICAL_SPLIT

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;
using $MetalSplitPaneDivider = ::javax::swing::plaf::metal::MetalSplitPaneDivider;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalSplitPaneDivider$MetalDividerLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(MetalSplitPaneDivider$MetalDividerLayout, this$0)},
	{}
};

$MethodInfo _MetalSplitPaneDivider$MetalDividerLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalSplitPaneDivider;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalSplitPaneDivider$MetalDividerLayout::*)($MetalSplitPaneDivider*)>(&MetalSplitPaneDivider$MetalDividerLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalSplitPaneDivider$MetalDividerLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalSplitPaneDivider$MetalDividerLayout", "javax.swing.plaf.metal.MetalSplitPaneDivider", "MetalDividerLayout", $PUBLIC},
	{}
};

$ClassInfo _MetalSplitPaneDivider$MetalDividerLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalSplitPaneDivider$MetalDividerLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_MetalSplitPaneDivider$MetalDividerLayout_FieldInfo_,
	_MetalSplitPaneDivider$MetalDividerLayout_MethodInfo_,
	nullptr,
	nullptr,
	_MetalSplitPaneDivider$MetalDividerLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalSplitPaneDivider"
};

$Object* allocate$MetalSplitPaneDivider$MetalDividerLayout($Class* clazz) {
	return $of($alloc(MetalSplitPaneDivider$MetalDividerLayout));
}

void MetalSplitPaneDivider$MetalDividerLayout::init$($MetalSplitPaneDivider* this$0) {
	$set(this, this$0, this$0);
}

void MetalSplitPaneDivider$MetalDividerLayout::layoutContainer($Container* c) {
	$var($JButton, leftButton, this->this$0->getLeftButtonFromSuper());
	$var($JButton, rightButton, this->this$0->getRightButtonFromSuper());
	$var($JSplitPane, splitPane, this->this$0->getSplitPaneFromSuper());
	int32_t orientation = this->this$0->getOrientationFromSuper();
	int32_t oneTouchSize = this->this$0->getOneTouchSizeFromSuper();
	int32_t oneTouchOffset = this->this$0->getOneTouchOffsetFromSuper();
	$var($Insets, insets, this->this$0->getInsets());
	if (leftButton != nullptr && rightButton != nullptr && $equals(c, this->this$0)) {
		if ($nc(splitPane)->isOneTouchExpandable()) {
			if (orientation == $JSplitPane::VERTICAL_SPLIT) {
				int32_t extraY = (insets != nullptr) ? $nc(insets)->top : 0;
				int32_t blockSize = this->this$0->getDividerSize();
				if (insets != nullptr) {
					blockSize -= (insets->top + insets->bottom);
				}
				blockSize = $Math::min(blockSize, oneTouchSize);
				leftButton->setBounds(oneTouchOffset, extraY, blockSize * 2, blockSize);
				rightButton->setBounds(oneTouchOffset + oneTouchSize * 2, extraY, blockSize * 2, blockSize);
			} else {
				int32_t blockSize = this->this$0->getDividerSize();
				int32_t extraX = (insets != nullptr) ? $nc(insets)->left : 0;
				if (insets != nullptr) {
					blockSize -= (insets->left + insets->right);
				}
				blockSize = $Math::min(blockSize, oneTouchSize);
				leftButton->setBounds(extraX, oneTouchOffset, blockSize, blockSize * 2);
				rightButton->setBounds(extraX, oneTouchOffset + oneTouchSize * 2, blockSize, blockSize * 2);
			}
		} else {
			leftButton->setBounds(-5, -5, 1, 1);
			rightButton->setBounds(-5, -5, 1, 1);
		}
	}
}

$Dimension* MetalSplitPaneDivider$MetalDividerLayout::minimumLayoutSize($Container* c) {
	return $new($Dimension, 0, 0);
}

$Dimension* MetalSplitPaneDivider$MetalDividerLayout::preferredLayoutSize($Container* c) {
	return $new($Dimension, 0, 0);
}

void MetalSplitPaneDivider$MetalDividerLayout::removeLayoutComponent($Component* c) {
}

void MetalSplitPaneDivider$MetalDividerLayout::addLayoutComponent($String* string, $Component* c) {
}

MetalSplitPaneDivider$MetalDividerLayout::MetalSplitPaneDivider$MetalDividerLayout() {
}

$Class* MetalSplitPaneDivider$MetalDividerLayout::load$($String* name, bool initialize) {
	$loadClass(MetalSplitPaneDivider$MetalDividerLayout, name, initialize, &_MetalSplitPaneDivider$MetalDividerLayout_ClassInfo_, allocate$MetalSplitPaneDivider$MetalDividerLayout);
	return class$;
}

$Class* MetalSplitPaneDivider$MetalDividerLayout::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax