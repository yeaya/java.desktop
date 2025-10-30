#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameUI$XPBorder.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

#undef ACTIVE
#undef INACTIVE
#undef WP_FRAMEBOTTOM
#undef WP_FRAMELEFT
#undef WP_FRAMERIGHT

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsInternalFrameUI = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsInternalFrameUI$XPBorder_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsInternalFrameUI$XPBorder, this$0)},
	{"leftSkin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PRIVATE, $field(WindowsInternalFrameUI$XPBorder, leftSkin)},
	{"rightSkin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PRIVATE, $field(WindowsInternalFrameUI$XPBorder, rightSkin)},
	{"bottomSkin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PRIVATE, $field(WindowsInternalFrameUI$XPBorder, bottomSkin)},
	{}
};

$MethodInfo _WindowsInternalFrameUI$XPBorder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsInternalFrameUI$XPBorder::*)($WindowsInternalFrameUI*)>(&WindowsInternalFrameUI$XPBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsInternalFrameUI$XPBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI$XPBorder", "com.sun.java.swing.plaf.windows.WindowsInternalFrameUI", "XPBorder", $PRIVATE},
	{}
};

$ClassInfo _WindowsInternalFrameUI$XPBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI$XPBorder",
	"javax.swing.border.AbstractBorder",
	nullptr,
	_WindowsInternalFrameUI$XPBorder_FieldInfo_,
	_WindowsInternalFrameUI$XPBorder_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsInternalFrameUI$XPBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI"
};

$Object* allocate$WindowsInternalFrameUI$XPBorder($Class* clazz) {
	return $of($alloc(WindowsInternalFrameUI$XPBorder));
}

void WindowsInternalFrameUI$XPBorder::init$($WindowsInternalFrameUI* this$0) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$AbstractBorder::init$();
	$init($TMSchema$Part);
	$set(this, leftSkin, $nc(this->this$0->xp)->getSkin($($WindowsInternalFrameUI::access$000(this->this$0)), $TMSchema$Part::WP_FRAMELEFT));
	$set(this, rightSkin, $nc(this->this$0->xp)->getSkin($($WindowsInternalFrameUI::access$100(this->this$0)), $TMSchema$Part::WP_FRAMERIGHT));
	$set(this, bottomSkin, $nc(this->this$0->xp)->getSkin($($WindowsInternalFrameUI::access$200(this->this$0)), $TMSchema$Part::WP_FRAMEBOTTOM));
}

void WindowsInternalFrameUI$XPBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$init($TMSchema$State);
	$TMSchema$State* state = $nc(($cast($JInternalFrame, c)))->isSelected() ? $TMSchema$State::ACTIVE : $TMSchema$State::INACTIVE;
	int32_t topBorderHeight = ($WindowsInternalFrameUI::access$300(this->this$0) != nullptr) ? $nc($($nc($($WindowsInternalFrameUI::access$400(this->this$0)))->getSize()))->height : 0;
	$var($Graphics, var$0, g);
	int32_t var$1 = height - $nc(this->bottomSkin)->getHeight();
	int32_t var$2 = width;
	$nc(this->bottomSkin)->paintSkin(var$0, 0, var$1, var$2, $nc(this->bottomSkin)->getHeight(), state);
	$var($Graphics, var$3, g);
	int32_t var$4 = topBorderHeight - 1;
	int32_t var$5 = $nc(this->leftSkin)->getWidth();
	$nc(this->leftSkin)->paintSkin(var$3, 0, var$4, var$5, height - topBorderHeight - $nc(this->bottomSkin)->getHeight() + 2, state);
	$var($Graphics, var$6, g);
	int32_t var$7 = width - $nc(this->rightSkin)->getWidth();
	int32_t var$8 = topBorderHeight - 1;
	int32_t var$9 = $nc(this->rightSkin)->getWidth();
	$nc(this->rightSkin)->paintSkin(var$6, var$7, var$8, var$9, height - topBorderHeight - $nc(this->bottomSkin)->getHeight() + 2, state);
}

$Insets* WindowsInternalFrameUI$XPBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->top = 4;
	insets->left = $nc(this->leftSkin)->getWidth();
	insets->right = $nc(this->rightSkin)->getWidth();
	insets->bottom = $nc(this->bottomSkin)->getHeight();
	return insets;
}

bool WindowsInternalFrameUI$XPBorder::isBorderOpaque() {
	return true;
}

WindowsInternalFrameUI$XPBorder::WindowsInternalFrameUI$XPBorder() {
}

$Class* WindowsInternalFrameUI$XPBorder::load$($String* name, bool initialize) {
	$loadClass(WindowsInternalFrameUI$XPBorder, name, initialize, &_WindowsInternalFrameUI$XPBorder_ClassInfo_, allocate$WindowsInternalFrameUI$XPBorder);
	return class$;
}

$Class* WindowsInternalFrameUI$XPBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com