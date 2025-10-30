#include <javax/swing/plaf/basic/BasicSplitPaneDivider$DividerLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/plaf/basic/BasicSplitPaneDivider.h>
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
using $JComponent = ::javax::swing::JComponent;
using $JSplitPane = ::javax::swing::JSplitPane;
using $BasicSplitPaneDivider = ::javax::swing::plaf::basic::BasicSplitPaneDivider;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSplitPaneDivider$DividerLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicSplitPaneDivider;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSplitPaneDivider$DividerLayout, this$0)},
	{}
};

$MethodInfo _BasicSplitPaneDivider$DividerLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicSplitPaneDivider;)V", nullptr, $PROTECTED, $method(static_cast<void(BasicSplitPaneDivider$DividerLayout::*)($BasicSplitPaneDivider*)>(&BasicSplitPaneDivider$DividerLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicSplitPaneDivider$DividerLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout", "javax.swing.plaf.basic.BasicSplitPaneDivider", "DividerLayout", $PROTECTED},
	{}
};

$ClassInfo _BasicSplitPaneDivider$DividerLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSplitPaneDivider$DividerLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_BasicSplitPaneDivider$DividerLayout_FieldInfo_,
	_BasicSplitPaneDivider$DividerLayout_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSplitPaneDivider$DividerLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSplitPaneDivider"
};

$Object* allocate$BasicSplitPaneDivider$DividerLayout($Class* clazz) {
	return $of($alloc(BasicSplitPaneDivider$DividerLayout));
}

void BasicSplitPaneDivider$DividerLayout::init$($BasicSplitPaneDivider* this$0) {
	$set(this, this$0, this$0);
}

void BasicSplitPaneDivider$DividerLayout::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->leftButton != nullptr && this->this$0->rightButton != nullptr && $equals(c, this->this$0)) {
		if ($nc(this->this$0->splitPane)->isOneTouchExpandable()) {
			$var($Insets, insets, this->this$0->getInsets());
			if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
				int32_t extraX = (insets != nullptr) ? $nc(insets)->left : 0;
				int32_t blockSize = this->this$0->getHeight();
				if (insets != nullptr) {
					blockSize -= (insets->top + insets->bottom);
					blockSize = $Math::max(blockSize, 0);
				}
				blockSize = $Math::min(blockSize, this->this$0->oneTouchSize);
				int32_t y = ($nc($(c->getSize()))->height - blockSize) / 2;
				if (!this->this$0->centerOneTouchButtons) {
					y = (insets != nullptr) ? insets->top : 0;
					extraX = 0;
				}
				$nc(this->this$0->leftButton)->setBounds(extraX + this->this$0->oneTouchOffset, y, blockSize * 2, blockSize);
				$nc(this->this$0->rightButton)->setBounds(extraX + this->this$0->oneTouchOffset + this->this$0->oneTouchSize * 2, y, blockSize * 2, blockSize);
			} else {
				int32_t extraY = (insets != nullptr) ? $nc(insets)->top : 0;
				int32_t blockSize = this->this$0->getWidth();
				if (insets != nullptr) {
					blockSize -= (insets->left + insets->right);
					blockSize = $Math::max(blockSize, 0);
				}
				blockSize = $Math::min(blockSize, this->this$0->oneTouchSize);
				int32_t x = ($nc($(c->getSize()))->width - blockSize) / 2;
				if (!this->this$0->centerOneTouchButtons) {
					x = (insets != nullptr) ? insets->left : 0;
					extraY = 0;
				}
				$nc(this->this$0->leftButton)->setBounds(x, extraY + this->this$0->oneTouchOffset, blockSize, blockSize * 2);
				$nc(this->this$0->rightButton)->setBounds(x, extraY + this->this$0->oneTouchOffset + this->this$0->oneTouchSize * 2, blockSize, blockSize * 2);
			}
		} else {
			$nc(this->this$0->leftButton)->setBounds(-5, -5, 1, 1);
			$nc(this->this$0->rightButton)->setBounds(-5, -5, 1, 1);
		}
	}
}

$Dimension* BasicSplitPaneDivider$DividerLayout::minimumLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	if (!$equals(c, this->this$0) || this->this$0->splitPane == nullptr) {
		return $new($Dimension, 0, 0);
	}
	$var($Dimension, buttonMinSize, nullptr);
	if ($nc(this->this$0->splitPane)->isOneTouchExpandable() && this->this$0->leftButton != nullptr) {
		$assign(buttonMinSize, $nc(this->this$0->leftButton)->getMinimumSize());
	}
	$var($Insets, insets, this->this$0->getInsets());
	int32_t width = this->this$0->getDividerSize();
	int32_t height = width;
	if (this->this$0->orientation == $JSplitPane::VERTICAL_SPLIT) {
		if (buttonMinSize != nullptr) {
			int32_t size = buttonMinSize->height;
			if (insets != nullptr) {
				size += insets->top + insets->bottom;
			}
			height = $Math::max(height, size);
		}
		width = 1;
	} else {
		if (buttonMinSize != nullptr) {
			int32_t size = buttonMinSize->width;
			if (insets != nullptr) {
				size += insets->left + insets->right;
			}
			width = $Math::max(width, size);
		}
		height = 1;
	}
	return $new($Dimension, width, height);
}

$Dimension* BasicSplitPaneDivider$DividerLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

void BasicSplitPaneDivider$DividerLayout::removeLayoutComponent($Component* c) {
}

void BasicSplitPaneDivider$DividerLayout::addLayoutComponent($String* string, $Component* c) {
}

BasicSplitPaneDivider$DividerLayout::BasicSplitPaneDivider$DividerLayout() {
}

$Class* BasicSplitPaneDivider$DividerLayout::load$($String* name, bool initialize) {
	$loadClass(BasicSplitPaneDivider$DividerLayout, name, initialize, &_BasicSplitPaneDivider$DividerLayout_ClassInfo_, allocate$BasicSplitPaneDivider$DividerLayout);
	return class$;
}

$Class* BasicSplitPaneDivider$DividerLayout::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax