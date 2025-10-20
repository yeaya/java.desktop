#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane$WindowsTitlePaneLayout.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$TitlePaneLayout.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

#undef CAPTIONMARGINS
#undef CONTENTMARGINS
#undef WP_CAPTION
#undef WP_CLOSEBUTTON
#undef WP_MAXBUTTON
#undef WP_MINBUTTON
#undef WP_SYSBUTTON

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JLabel = ::javax::swing::JLabel;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$TitlePaneLayout = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$TitlePaneLayout;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout, this$0)},
	{"captionMargin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout, captionMargin)},
	{"contentMargin", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout, contentMargin)},
	{"xp", "Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, $PRIVATE, $field(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout, xp)},
	{}
};

$MethodInfo _WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::*)($WindowsInternalFrameTitlePane*)>(&WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::init$))},
	{"layoutButton", "(Ljavax/swing/JComponent;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;IIIIIZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::*)($JComponent*,$TMSchema$Part*,int32_t,int32_t,int32_t,int32_t,int32_t,bool)>(&WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::layoutButton))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsTitlePaneLayout", "com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane", "WindowsTitlePaneLayout", $PUBLIC},
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "TitlePaneLayout", $PUBLIC},
	{}
};

$ClassInfo _WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane$WindowsTitlePaneLayout",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$TitlePaneLayout",
	nullptr,
	_WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_FieldInfo_,
	_WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameTitlePane"
};

$Object* allocate$WindowsInternalFrameTitlePane$WindowsTitlePaneLayout($Class* clazz) {
	return $of($alloc(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout));
}

void WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::init$($WindowsInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$BasicInternalFrameTitlePane$TitlePaneLayout::init$(this$0);
	$set(this, captionMargin, nullptr);
	$set(this, contentMargin, nullptr);
	$set(this, xp, $XPStyle::getXP());
	if (this->xp != nullptr) {
		$var($Component, c, this$0);
		$init($TMSchema$Part);
		$init($TMSchema$Prop);
		$set(this, captionMargin, $nc(this->xp)->getMargin(c, $TMSchema$Part::WP_CAPTION, nullptr, $TMSchema$Prop::CAPTIONMARGINS));
		$set(this, contentMargin, $nc(this->xp)->getMargin(c, $TMSchema$Part::WP_CAPTION, nullptr, $TMSchema$Prop::CONTENTMARGINS));
	}
	if (this->captionMargin == nullptr) {
		$set(this, captionMargin, $new($Insets, 0, 2, 0, 2));
	}
	if (this->contentMargin == nullptr) {
		$set(this, contentMargin, $new($Insets, 0, 0, 0, 0));
	}
}

int32_t WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::layoutButton($JComponent* button, $TMSchema$Part* part, int32_t x, int32_t y, int32_t w, int32_t h, int32_t gap, bool leftToRight) {
	if (!leftToRight) {
		x -= w;
	}
	$nc(button)->setBounds(x, y, w, h);
	if (leftToRight) {
		x += w + 2;
	} else {
		x -= 2;
	}
	return x;
}

void WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::layoutContainer($Container* c) {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $WindowsGraphicsUtils::isLeftToRight($($WindowsInternalFrameTitlePane::access$400(this->this$0)));
	int32_t x = 0;
	int32_t y = 0;
	int32_t w = this->this$0->getWidth();
	int32_t h = this->this$0->getHeight();
	int32_t iconSize = (this->xp != nullptr) ? (h - 2) * 6 / 10 : h - 4;
	if (this->xp != nullptr) {
		x = (leftToRight) ? $nc(this->captionMargin)->left + 2 : w - $nc(this->captionMargin)->right - 2;
	} else {
		x = (leftToRight) ? $nc(this->captionMargin)->left : w - $nc(this->captionMargin)->right;
	}
	y = (h - iconSize) / 2;
	$init($TMSchema$Part);
	layoutButton(this->this$0->systemLabel, $TMSchema$Part::WP_SYSBUTTON, x, y, iconSize, iconSize, 0, leftToRight);
	if (this->xp != nullptr) {
		x = (leftToRight) ? w - $nc(this->captionMargin)->right - 2 : $nc(this->captionMargin)->left + 2;
		y = 1;
		if ($nc($($WindowsInternalFrameTitlePane::access$500(this->this$0)))->isMaximum()) {
			y += 1;
		} else {
			y += 5;
		}
	} else {
		x = (leftToRight) ? w - $nc(this->captionMargin)->right : $nc(this->captionMargin)->left;
		y = (h - this->this$0->buttonHeight) / 2;
	}
	if ($nc($($WindowsInternalFrameTitlePane::access$600(this->this$0)))->isClosable()) {
		x = layoutButton($($WindowsInternalFrameTitlePane::access$700(this->this$0)), $TMSchema$Part::WP_CLOSEBUTTON, x, y, this->this$0->buttonWidth, this->this$0->buttonHeight, 2, !leftToRight);
	}
	if ($nc($($WindowsInternalFrameTitlePane::access$800(this->this$0)))->isMaximizable()) {
		x = layoutButton($($WindowsInternalFrameTitlePane::access$900(this->this$0)), $TMSchema$Part::WP_MAXBUTTON, x, y, this->this$0->buttonWidth, this->this$0->buttonHeight, (this->xp != nullptr) ? 2 : 0, !leftToRight);
	}
	if ($nc($($WindowsInternalFrameTitlePane::access$1000(this->this$0)))->isIconifiable()) {
		layoutButton($($WindowsInternalFrameTitlePane::access$1100(this->this$0)), $TMSchema$Part::WP_MINBUTTON, x, y, this->this$0->buttonWidth, this->this$0->buttonHeight, 0, !leftToRight);
	}
}

WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::WindowsInternalFrameTitlePane$WindowsTitlePaneLayout() {
}

$Class* WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::load$($String* name, bool initialize) {
	$loadClass(WindowsInternalFrameTitlePane$WindowsTitlePaneLayout, name, initialize, &_WindowsInternalFrameTitlePane$WindowsTitlePaneLayout_ClassInfo_, allocate$WindowsInternalFrameTitlePane$WindowsTitlePaneLayout);
	return class$;
}

$Class* WindowsInternalFrameTitlePane$WindowsTitlePaneLayout::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com