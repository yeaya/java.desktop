#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane$MetalTitlePaneLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/lang/Math.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$TitlePaneLayout.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $FontMetrics = ::java::awt::FontMetrics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$TitlePaneLayout = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$TitlePaneLayout;
using $MetalInternalFrameTitlePane = ::javax::swing::plaf::metal::MetalInternalFrameTitlePane;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalInternalFrameTitlePane$MetalTitlePaneLayout_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalInternalFrameTitlePane$MetalTitlePaneLayout, this$0)},
	{}
};

$MethodInfo _MetalInternalFrameTitlePane$MetalTitlePaneLayout_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(MetalInternalFrameTitlePane$MetalTitlePaneLayout::*)($MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane$MetalTitlePaneLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalInternalFrameTitlePane$MetalTitlePaneLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalTitlePaneLayout", "javax.swing.plaf.metal.MetalInternalFrameTitlePane", "MetalTitlePaneLayout", 0},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "TitlePaneLayout", $PUBLIC},
	{}
};

$ClassInfo _MetalInternalFrameTitlePane$MetalTitlePaneLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalTitlePaneLayout",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout",
	nullptr,
	_MetalInternalFrameTitlePane$MetalTitlePaneLayout_FieldInfo_,
	_MetalInternalFrameTitlePane$MetalTitlePaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_MetalInternalFrameTitlePane$MetalTitlePaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalInternalFrameTitlePane"
};

$Object* allocate$MetalInternalFrameTitlePane$MetalTitlePaneLayout($Class* clazz) {
	return $of($alloc(MetalInternalFrameTitlePane$MetalTitlePaneLayout));
}

void MetalInternalFrameTitlePane$MetalTitlePaneLayout::init$($MetalInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameTitlePane$TitlePaneLayout::init$(this$0);
}

void MetalInternalFrameTitlePane$MetalTitlePaneLayout::addLayoutComponent($String* name, $Component* c) {
}

void MetalInternalFrameTitlePane$MetalTitlePaneLayout::removeLayoutComponent($Component* c) {
}

$Dimension* MetalInternalFrameTitlePane$MetalTitlePaneLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

$Dimension* MetalInternalFrameTitlePane$MetalTitlePaneLayout::minimumLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	int32_t width = 30;
	if ($nc($($MetalInternalFrameTitlePane::access$400(this->this$0)))->isClosable()) {
		width += 21;
	}
	if ($nc($($MetalInternalFrameTitlePane::access$500(this->this$0)))->isMaximizable()) {
		width += 16 + ($nc($($MetalInternalFrameTitlePane::access$600(this->this$0)))->isClosable() ? 10 : 4);
	}
	if ($nc($($MetalInternalFrameTitlePane::access$700(this->this$0)))->isIconifiable()) {
		width += 16 + ($nc($($MetalInternalFrameTitlePane::access$800(this->this$0)))->isMaximizable() ? 2 : ($nc($($MetalInternalFrameTitlePane::access$900(this->this$0)))->isClosable() ? 10 : 4));
	}
	$var($FontMetrics, fm, $nc($($MetalInternalFrameTitlePane::access$1000(this->this$0)))->getFontMetrics($(this->this$0->getFont())));
	$var($String, frameTitle, $nc($($MetalInternalFrameTitlePane::access$1100(this->this$0)))->getTitle());
	int32_t title_w = frameTitle != nullptr ? $SwingUtilities2::stringWidth($($MetalInternalFrameTitlePane::access$1200(this->this$0)), fm, frameTitle) : 0;
	int32_t title_length = frameTitle != nullptr ? $nc(frameTitle)->length() : 0;
	if (title_length > 2) {
		$var($JComponent, var$0, static_cast<$JComponent*>($MetalInternalFrameTitlePane::access$1300(this->this$0)));
		$var($FontMetrics, var$1, fm);
		int32_t subtitle_w = $SwingUtilities2::stringWidth(var$0, var$1, $$str({$($nc($($nc($($MetalInternalFrameTitlePane::access$1400(this->this$0)))->getTitle()))->substring(0, 2)), "..."_s}));
		width += (title_w < subtitle_w) ? title_w : subtitle_w;
	} else {
		width += title_w;
	}
	int32_t height = 0;
	if (this->this$0->isPalette) {
		height = this->this$0->paletteTitleHeight;
	} else {
		int32_t fontHeight = $nc(fm)->getHeight();
		fontHeight += 7;
		$var($Icon, icon, $nc($($MetalInternalFrameTitlePane::access$1500(this->this$0)))->getFrameIcon());
		int32_t iconHeight = 0;
		if (icon != nullptr) {
			iconHeight = $Math::min(icon->getIconHeight(), 16);
		}
		iconHeight += 5;
		height = $Math::max(fontHeight, iconHeight);
	}
	return $new($Dimension, width, height);
}

void MetalInternalFrameTitlePane$MetalTitlePaneLayout::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $MetalUtils::isLeftToRight($($MetalInternalFrameTitlePane::access$1600(this->this$0)));
	int32_t w = this->this$0->getWidth();
	int32_t x = leftToRight ? w : 0;
	int32_t y = 2;
	int32_t spacing = 0;
	int32_t buttonHeight = $nc($($nc($($MetalInternalFrameTitlePane::access$1700(this->this$0)))->getIcon()))->getIconHeight();
	int32_t buttonWidth = $nc($($nc($($MetalInternalFrameTitlePane::access$1800(this->this$0)))->getIcon()))->getIconWidth();
	if ($nc($($MetalInternalFrameTitlePane::access$1900(this->this$0)))->isClosable()) {
		if (this->this$0->isPalette) {
			spacing = 3;
			x += leftToRight ? -spacing - (buttonWidth + 2) : spacing;
			$nc($($MetalInternalFrameTitlePane::access$2000(this->this$0)))->setBounds(x, y, buttonWidth + 2, this->this$0->getHeight() - 4);
			if (!leftToRight) {
				x += (buttonWidth + 2);
			}
		} else {
			spacing = 4;
			x += leftToRight ? -spacing - buttonWidth : spacing;
			$nc($($MetalInternalFrameTitlePane::access$2100(this->this$0)))->setBounds(x, y, buttonWidth, buttonHeight);
			if (!leftToRight) {
				x += buttonWidth;
			}
		}
	}
	if ($nc($($MetalInternalFrameTitlePane::access$2200(this->this$0)))->isMaximizable() && !this->this$0->isPalette) {
		spacing = $nc($($MetalInternalFrameTitlePane::access$2300(this->this$0)))->isClosable() ? 10 : 4;
		x += leftToRight ? -spacing - buttonWidth : spacing;
		$nc($($MetalInternalFrameTitlePane::access$2400(this->this$0)))->setBounds(x, y, buttonWidth, buttonHeight);
		if (!leftToRight) {
			x += buttonWidth;
		}
	}
	if ($nc($($MetalInternalFrameTitlePane::access$2500(this->this$0)))->isIconifiable() && !this->this$0->isPalette) {
		spacing = $nc($($MetalInternalFrameTitlePane::access$2600(this->this$0)))->isMaximizable() ? 2 : ($nc($($MetalInternalFrameTitlePane::access$2700(this->this$0)))->isClosable() ? 10 : 4);
		x += leftToRight ? -spacing - buttonWidth : spacing;
		$nc($($MetalInternalFrameTitlePane::access$2800(this->this$0)))->setBounds(x, y, buttonWidth, buttonHeight);
		if (!leftToRight) {
			x += buttonWidth;
		}
	}
	this->this$0->buttonsWidth = leftToRight ? w - x : x;
}

MetalInternalFrameTitlePane$MetalTitlePaneLayout::MetalInternalFrameTitlePane$MetalTitlePaneLayout() {
}

$Class* MetalInternalFrameTitlePane$MetalTitlePaneLayout::load$($String* name, bool initialize) {
	$loadClass(MetalInternalFrameTitlePane$MetalTitlePaneLayout, name, initialize, &_MetalInternalFrameTitlePane$MetalTitlePaneLayout_ClassInfo_, allocate$MetalInternalFrameTitlePane$MetalTitlePaneLayout);
	return class$;
}

$Class* MetalInternalFrameTitlePane$MetalTitlePaneLayout::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax