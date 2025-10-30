#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI$WindowsArrowButton.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsScrollBarUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <jcpp.h>

#undef DOWNDISABLED
#undef DOWNHOT
#undef DOWNHOVER
#undef DOWNNORMAL
#undef DOWNPRESSED
#undef EAST
#undef HORIZONTAL
#undef LEFTDISABLED
#undef LEFTHOT
#undef LEFTHOVER
#undef LEFTNORMAL
#undef LEFTPRESSED
#undef NORTH
#undef RIGHTDISABLED
#undef RIGHTHOT
#undef RIGHTHOVER
#undef RIGHTNORMAL
#undef RIGHTPRESSED
#undef SBP_ARROWBTN
#undef SOUTH
#undef UPDISABLED
#undef UPHOT
#undef UPHOVER
#undef UPNORMAL
#undef UPPRESSED
#undef VERTICAL
#undef WEST

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsScrollBarUI = ::com::sun::java::swing::plaf::windows::WindowsScrollBarUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingConstants = ::javax::swing::SwingConstants;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsScrollBarUI$WindowsArrowButton_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsScrollBarUI$WindowsArrowButton, this$0)},
	{}
};

$MethodInfo _WindowsScrollBarUI$WindowsArrowButton_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;ILjava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsScrollBarUI$WindowsArrowButton::*)($WindowsScrollBarUI*,int32_t,$Color*,$Color*,$Color*,$Color*)>(&WindowsScrollBarUI$WindowsArrowButton::init$))},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsScrollBarUI;I)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsScrollBarUI$WindowsArrowButton::*)($WindowsScrollBarUI*,int32_t)>(&WindowsScrollBarUI$WindowsArrowButton::init$))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsScrollBarUI$WindowsArrowButton_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$WindowsArrowButton", "com.sun.java.swing.plaf.windows.WindowsScrollBarUI", "WindowsArrowButton", $PRIVATE},
	{}
};

$ClassInfo _WindowsScrollBarUI$WindowsArrowButton_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI$WindowsArrowButton",
	"javax.swing.plaf.basic.BasicArrowButton",
	nullptr,
	_WindowsScrollBarUI$WindowsArrowButton_FieldInfo_,
	_WindowsScrollBarUI$WindowsArrowButton_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsScrollBarUI$WindowsArrowButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsScrollBarUI"
};

$Object* allocate$WindowsScrollBarUI$WindowsArrowButton($Class* clazz) {
	return $of($alloc(WindowsScrollBarUI$WindowsArrowButton));
}

void WindowsScrollBarUI$WindowsArrowButton::init$($WindowsScrollBarUI* this$0, int32_t direction, $Color* background, $Color* shadow, $Color* darkShadow, $Color* highlight) {
	$set(this, this$0, this$0);
	$BasicArrowButton::init$(direction, background, shadow, darkShadow, highlight);
}

void WindowsScrollBarUI$WindowsArrowButton::init$($WindowsScrollBarUI* this$0, int32_t direction) {
	$set(this, this$0, this$0);
	$BasicArrowButton::init$(direction);
}

void WindowsScrollBarUI$WindowsArrowButton::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$var($ButtonModel, model, getModel());
		$init($TMSchema$Part);
		$var($XPStyle$Skin, skin, xp->getSkin(this, $TMSchema$Part::SBP_ARROWBTN));
		$TMSchema$State* state = nullptr;
		bool var$0 = $XPStyle::isVista();
		if (var$0) {
			bool var$2 = this->this$0->isThumbRollover();
			if (!var$2) {
				bool var$3 = $equals(this, $WindowsScrollBarUI::access$100(this->this$0));
				var$2 = (var$3 && $nc($($nc($($WindowsScrollBarUI::access$200(this->this$0)))->getModel()))->isRollover());
			}
			bool var$1 = var$2;
			if (!var$1) {
				bool var$4 = $equals(this, $WindowsScrollBarUI::access$300(this->this$0));
				var$1 = (var$4 && $nc($($nc($($WindowsScrollBarUI::access$400(this->this$0)))->getModel()))->isRollover());
			}
			var$0 = (var$1);
		}
		bool jointRollover = var$0;
		bool var$5 = $nc(model)->isArmed();
		if (var$5 && model->isPressed()) {
			switch (this->direction) {
			case $SwingConstants::NORTH:
				{
					$init($TMSchema$State);
					state = $TMSchema$State::UPPRESSED;
					break;
				}
			case $SwingConstants::SOUTH:
				{
					$init($TMSchema$State);
					state = $TMSchema$State::DOWNPRESSED;
					break;
				}
			case $SwingConstants::WEST:
				{
					$init($TMSchema$State);
					state = $TMSchema$State::LEFTPRESSED;
					break;
				}
			case $SwingConstants::EAST:
				{
					$init($TMSchema$State);
					state = $TMSchema$State::RIGHTPRESSED;
					break;
				}
			}
		} else if (!model->isEnabled()) {
			switch (this->direction) {
			case $SwingConstants::NORTH:
				{
					$init($TMSchema$State);
					state = $TMSchema$State::UPDISABLED;
					break;
				}
			case $SwingConstants::SOUTH:
				{
					$init($TMSchema$State);
					state = $TMSchema$State::DOWNDISABLED;
					break;
				}
			case $SwingConstants::WEST:
				{
					$init($TMSchema$State);
					state = $TMSchema$State::LEFTDISABLED;
					break;
				}
			case $SwingConstants::EAST:
				{
					$init($TMSchema$State);
					state = $TMSchema$State::RIGHTDISABLED;
					break;
				}
			}
		} else {
			bool var$7 = model->isRollover();
			if (var$7 || model->isPressed()) {
				switch (this->direction) {
				case $SwingConstants::NORTH:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::UPHOT;
						break;
					}
				case $SwingConstants::SOUTH:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::DOWNHOT;
						break;
					}
				case $SwingConstants::WEST:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::LEFTHOT;
						break;
					}
				case $SwingConstants::EAST:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::RIGHTHOT;
						break;
					}
				}
			} else if (jointRollover) {
				switch (this->direction) {
				case $SwingConstants::NORTH:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::UPHOVER;
						break;
					}
				case $SwingConstants::SOUTH:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::DOWNHOVER;
						break;
					}
				case $SwingConstants::WEST:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::LEFTHOVER;
						break;
					}
				case $SwingConstants::EAST:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::RIGHTHOVER;
						break;
					}
				}
			} else {
				switch (this->direction) {
				case $SwingConstants::NORTH:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::UPNORMAL;
						break;
					}
				case $SwingConstants::SOUTH:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::DOWNNORMAL;
						break;
					}
				case $SwingConstants::WEST:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::LEFTNORMAL;
						break;
					}
				case $SwingConstants::EAST:
					{
						$init($TMSchema$State);
						state = $TMSchema$State::RIGHTNORMAL;
						break;
					}
				}
			}
		}
		$var($Graphics, var$8, g);
		int32_t var$9 = getWidth();
		$nc(skin)->paintSkin(var$8, 0, 0, var$9, getHeight(), state);
	} else {
		$BasicArrowButton::paint(g);
	}
}

$Dimension* WindowsScrollBarUI$WindowsArrowButton::getPreferredSize() {
	$useLocalCurrentObjectStackCache();
	int32_t size = 16;
	if ($WindowsScrollBarUI::access$500(this->this$0) != nullptr) {
		switch ($nc($($WindowsScrollBarUI::access$600(this->this$0)))->getOrientation()) {
		case $JScrollBar::VERTICAL:
			{
				size = $nc($($WindowsScrollBarUI::access$700(this->this$0)))->getWidth();
				break;
			}
		case $JScrollBar::HORIZONTAL:
			{
				size = $nc($($WindowsScrollBarUI::access$800(this->this$0)))->getHeight();
				break;
			}
		}
		size = $Math::max(size, 5);
	}
	return $new($Dimension, size, size);
}

WindowsScrollBarUI$WindowsArrowButton::WindowsScrollBarUI$WindowsArrowButton() {
}

$Class* WindowsScrollBarUI$WindowsArrowButton::load$($String* name, bool initialize) {
	$loadClass(WindowsScrollBarUI$WindowsArrowButton, name, initialize, &_WindowsScrollBarUI$WindowsArrowButton_ClassInfo_, allocate$WindowsScrollBarUI$WindowsArrowButton);
	return class$;
}

$Class* WindowsScrollBarUI$WindowsArrowButton::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com