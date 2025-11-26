#include <com/sun/java/swing/plaf/gtk/Metacity$TitlePaneLayout.h>

#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <java/util/Map.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $Metacity = ::com::sun::java::swing::plaf::gtk::Metacity;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity$TitlePaneLayout_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/Metacity;", nullptr, $FINAL | $SYNTHETIC, $field(Metacity$TitlePaneLayout, this$0)},
	{}
};

$MethodInfo _Metacity$TitlePaneLayout_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/Metacity;)V", nullptr, $PROTECTED, $method(static_cast<void(Metacity$TitlePaneLayout::*)($Metacity*)>(&Metacity$TitlePaneLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Metacity$TitlePaneLayout_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$TitlePaneLayout", "com.sun.java.swing.plaf.gtk.Metacity", "TitlePaneLayout", $PROTECTED},
	{}
};

$ClassInfo _Metacity$TitlePaneLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity$TitlePaneLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_Metacity$TitlePaneLayout_FieldInfo_,
	_Metacity$TitlePaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_Metacity$TitlePaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity"
};

$Object* allocate$Metacity$TitlePaneLayout($Class* clazz) {
	return $of($alloc(Metacity$TitlePaneLayout));
}

void Metacity$TitlePaneLayout::init$($Metacity* this$0) {
	$set(this, this$0, this$0);
}

void Metacity$TitlePaneLayout::addLayoutComponent($String* name, $Component* c) {
}

void Metacity$TitlePaneLayout::removeLayoutComponent($Component* c) {
}

$Dimension* Metacity$TitlePaneLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

$Dimension* Metacity$TitlePaneLayout::minimumLayoutSize($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, titlePane, $cast($JComponent, c));
	$var($Container, titlePaneParent, $nc(titlePane)->getParent());
	$var($JInternalFrame, frame, nullptr);
	if ($instanceOf($JInternalFrame, titlePaneParent)) {
		$assign(frame, $cast($JInternalFrame, titlePaneParent));
	} else if ($instanceOf($JInternalFrame$JDesktopIcon, titlePaneParent)) {
		$assign(frame, $nc(($cast($JInternalFrame$JDesktopIcon, titlePaneParent)))->getInternalFrame());
	} else {
		return nullptr;
	}
	$var($Dimension, buttonDim, this->this$0->calculateButtonSize(titlePane));
	$var($Insets, title_border, $cast($Insets, $nc($(this->this$0->getFrameGeometry()))->get("title_border"_s)));
	$var($Insets, button_border, $cast($Insets, $nc($(this->this$0->getFrameGeometry()))->get("button_border"_s)));
	int32_t var$0 = this->this$0->getInt("left_titlebar_edge"_s) + $nc(buttonDim)->width;
	int32_t width = var$0 + this->this$0->getInt("right_titlebar_edge"_s);
	if (title_border != nullptr) {
		width += title_border->left + title_border->right;
	}
	if ($nc(frame)->isClosable()) {
		width += buttonDim->width;
	}
	if ($nc(frame)->isMaximizable()) {
		width += buttonDim->width;
	}
	if ($nc(frame)->isIconifiable()) {
		width += buttonDim->width;
	}
	$var($FontMetrics, fm, $nc(frame)->getFontMetrics($(titlePane->getFont())));
	$var($String, frameTitle, frame->getTitle());
	int32_t title_w = frameTitle != nullptr ? $SwingUtilities2::stringWidth(frame, fm, frameTitle) : 0;
	int32_t title_length = frameTitle != nullptr ? $nc(frameTitle)->length() : 0;
	if (title_length > 3) {
		int32_t subtitle_w = $SwingUtilities2::stringWidth(frame, fm, $$str({$(frameTitle->substring(0, 3)), "..."_s}));
		width += (title_w < subtitle_w) ? title_w : subtitle_w;
	} else {
		width += title_w;
	}
	int32_t var$1 = $nc(fm)->getHeight();
	int32_t titleHeight = var$1 + this->this$0->getInt("title_vertical_pad"_s);
	if (title_border != nullptr) {
		titleHeight += title_border->top + title_border->bottom;
	}
	int32_t buttonHeight = buttonDim->height;
	if (button_border != nullptr) {
		buttonHeight += button_border->top + button_border->bottom;
	}
	int32_t height = $Math::max(buttonHeight, titleHeight);
	return $new($Dimension, width, height);
}

void Metacity$TitlePaneLayout::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, titlePane, $cast($JComponent, c));
	$var($Container, titlePaneParent, $nc(titlePane)->getParent());
	$var($JInternalFrame, frame, nullptr);
	if ($instanceOf($JInternalFrame, titlePaneParent)) {
		$assign(frame, $cast($JInternalFrame, titlePaneParent));
	} else if ($instanceOf($JInternalFrame$JDesktopIcon, titlePaneParent)) {
		$assign(frame, $nc(($cast($JInternalFrame$JDesktopIcon, titlePaneParent)))->getInternalFrame());
	} else {
		return;
	}
	$var($Map, gm, this->this$0->getFrameGeometry());
	int32_t w = titlePane->getWidth();
	int32_t h = titlePane->getHeight();
	$var($JComponent, menuButton, $Metacity::findChild(titlePane, "InternalFrameTitlePane.menuButton"_s));
	$var($JComponent, minimizeButton, $Metacity::findChild(titlePane, "InternalFrameTitlePane.iconifyButton"_s));
	$var($JComponent, maximizeButton, $Metacity::findChild(titlePane, "InternalFrameTitlePane.maximizeButton"_s));
	$var($JComponent, closeButton, $Metacity::findChild(titlePane, "InternalFrameTitlePane.closeButton"_s));
	$var($Insets, button_border, $cast($Insets, $nc(gm)->get("button_border"_s)));
	$var($Dimension, buttonDim, this->this$0->calculateButtonSize(titlePane));
	int32_t y = (button_border != nullptr) ? $nc(button_border)->top : 0;
	if ($nc($($nc(titlePaneParent)->getComponentOrientation()))->isLeftToRight()) {
		int32_t x = this->this$0->getInt("left_titlebar_edge"_s);
		$nc(menuButton)->setBounds(x, y, $nc(buttonDim)->width, buttonDim->height);
		x = w - $nc(buttonDim)->width - this->this$0->getInt("right_titlebar_edge"_s);
		if (button_border != nullptr) {
			x -= button_border->right;
		}
		if ($nc(frame)->isClosable()) {
			$nc(closeButton)->setBounds(x, y, buttonDim->width, buttonDim->height);
			x -= buttonDim->width;
		}
		if ($nc(frame)->isMaximizable()) {
			$nc(maximizeButton)->setBounds(x, y, buttonDim->width, buttonDim->height);
			x -= buttonDim->width;
		}
		if ($nc(frame)->isIconifiable()) {
			$nc(minimizeButton)->setBounds(x, y, buttonDim->width, buttonDim->height);
		}
	} else {
		int32_t x = w - $nc(buttonDim)->width - this->this$0->getInt("right_titlebar_edge"_s);
		$nc(menuButton)->setBounds(x, y, buttonDim->width, buttonDim->height);
		x = this->this$0->getInt("left_titlebar_edge"_s);
		if (button_border != nullptr) {
			x += button_border->left;
		}
		if ($nc(frame)->isClosable()) {
			$nc(closeButton)->setBounds(x, y, buttonDim->width, buttonDim->height);
			x += buttonDim->width;
		}
		if ($nc(frame)->isMaximizable()) {
			$nc(maximizeButton)->setBounds(x, y, buttonDim->width, buttonDim->height);
			x += buttonDim->width;
		}
		if ($nc(frame)->isIconifiable()) {
			$nc(minimizeButton)->setBounds(x, y, buttonDim->width, buttonDim->height);
		}
	}
}

Metacity$TitlePaneLayout::Metacity$TitlePaneLayout() {
}

$Class* Metacity$TitlePaneLayout::load$($String* name, bool initialize) {
	$loadClass(Metacity$TitlePaneLayout, name, initialize, &_Metacity$TitlePaneLayout_ClassInfo_, allocate$Metacity$TitlePaneLayout);
	return class$;
}

$Class* Metacity$TitlePaneLayout::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com