#include <javax/swing/plaf/metal/MetalTitlePane$TitlePaneLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Frame.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

#undef FRAME
#undef MAXIMIZED_BOTH

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Frame = ::java::awt::Frame;
using $LayoutManager = ::java::awt::LayoutManager;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JRootPane = ::javax::swing::JRootPane;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTitlePane$TitlePaneLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$TitlePaneLayout, this$0)},
	{}
};

$MethodInfo _MetalTitlePane$TitlePaneLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalTitlePane$TitlePaneLayout::*)($MetalTitlePane*)>(&MetalTitlePane$TitlePaneLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"computeHeight", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(MetalTitlePane$TitlePaneLayout::*)()>(&MetalTitlePane$TitlePaneLayout::computeHeight))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalTitlePane$TitlePaneLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTitlePane$TitlePaneLayout", "javax.swing.plaf.metal.MetalTitlePane", "TitlePaneLayout", $PRIVATE},
	{}
};

$ClassInfo _MetalTitlePane$TitlePaneLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalTitlePane$TitlePaneLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_MetalTitlePane$TitlePaneLayout_FieldInfo_,
	_MetalTitlePane$TitlePaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTitlePane$TitlePaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTitlePane"
};

$Object* allocate$MetalTitlePane$TitlePaneLayout($Class* clazz) {
	return $of($alloc(MetalTitlePane$TitlePaneLayout));
}

void MetalTitlePane$TitlePaneLayout::init$($MetalTitlePane* this$0) {
	$set(this, this$0, this$0);
}

void MetalTitlePane$TitlePaneLayout::addLayoutComponent($String* name, $Component* c) {
}

void MetalTitlePane$TitlePaneLayout::removeLayoutComponent($Component* c) {
}

$Dimension* MetalTitlePane$TitlePaneLayout::preferredLayoutSize($Container* c) {
	int32_t height = computeHeight();
	return $new($Dimension, height, height);
}

$Dimension* MetalTitlePane$TitlePaneLayout::minimumLayoutSize($Container* c) {
	return preferredLayoutSize(c);
}

int32_t MetalTitlePane$TitlePaneLayout::computeHeight() {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fm, $nc(this->this$0->rootPane)->getFontMetrics($(this->this$0->getFont())));
	int32_t fontHeight = $nc(fm)->getHeight();
	fontHeight += 7;
	int32_t iconHeight = 0;
	if (this->this$0->getWindowDecorationStyle() == $JRootPane::FRAME) {
		iconHeight = 16;
	}
	int32_t finalHeight = $Math::max(fontHeight, iconHeight);
	return finalHeight;
}

void MetalTitlePane$TitlePaneLayout::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = (this->this$0->window == nullptr) ? $nc($($nc($(this->this$0->getRootPane()))->getComponentOrientation()))->isLeftToRight() : $nc($($nc(this->this$0->window)->getComponentOrientation()))->isLeftToRight();
	int32_t w = this->this$0->getWidth();
	int32_t x = 0;
	int32_t y = 3;
	int32_t spacing = 0;
	int32_t buttonHeight = 0;
	int32_t buttonWidth = 0;
	if (this->this$0->closeButton != nullptr && $nc(this->this$0->closeButton)->getIcon() != nullptr) {
		buttonHeight = $nc($($nc(this->this$0->closeButton)->getIcon()))->getIconHeight();
		buttonWidth = $nc($($nc(this->this$0->closeButton)->getIcon()))->getIconWidth();
	} else {
		buttonHeight = 16;
		buttonWidth = 16;
	}
	x = leftToRight ? w : 0;
	spacing = 5;
	x = leftToRight ? spacing : w - buttonWidth - spacing;
	if (this->this$0->menuBar != nullptr) {
		$nc(this->this$0->menuBar)->setBounds(x, y, buttonWidth, buttonHeight);
	}
	x = leftToRight ? w : 0;
	spacing = 4;
	x += leftToRight ? -spacing - buttonWidth : spacing;
	if (this->this$0->closeButton != nullptr) {
		$nc(this->this$0->closeButton)->setBounds(x, y, buttonWidth, buttonHeight);
	}
	if (!leftToRight) {
		x += buttonWidth;
	}
	if (this->this$0->getWindowDecorationStyle() == $JRootPane::FRAME) {
		if ($nc($($Toolkit::getDefaultToolkit()))->isFrameStateSupported($Frame::MAXIMIZED_BOTH)) {
			if ($nc(this->this$0->toggleButton)->getParent() != nullptr) {
				spacing = 10;
				x += leftToRight ? -spacing - buttonWidth : spacing;
				$nc(this->this$0->toggleButton)->setBounds(x, y, buttonWidth, buttonHeight);
				if (!leftToRight) {
					x += buttonWidth;
				}
			}
		}
		if (this->this$0->iconifyButton != nullptr && $nc(this->this$0->iconifyButton)->getParent() != nullptr) {
			spacing = 2;
			x += leftToRight ? -spacing - buttonWidth : spacing;
			$nc(this->this$0->iconifyButton)->setBounds(x, y, buttonWidth, buttonHeight);
			if (!leftToRight) {
				x += buttonWidth;
			}
		}
	}
	this->this$0->buttonsWidth = leftToRight ? w - x : x;
}

MetalTitlePane$TitlePaneLayout::MetalTitlePane$TitlePaneLayout() {
}

$Class* MetalTitlePane$TitlePaneLayout::load$($String* name, bool initialize) {
	$loadClass(MetalTitlePane$TitlePaneLayout, name, initialize, &_MetalTitlePane$TitlePaneLayout_ClassInfo_, allocate$MetalTitlePane$TitlePaneLayout);
	return class$;
}

$Class* MetalTitlePane$TitlePaneLayout::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax