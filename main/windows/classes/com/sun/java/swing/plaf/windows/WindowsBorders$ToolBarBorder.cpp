#include <com/sun/java/swing/plaf/windows/WindowsBorders$ToolBarBorder.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsBorders.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef NORMAL
#undef RP_GRIPPER
#undef RP_GRIPPERVERT
#undef TP_TOOLBAR
#undef VERTICAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsBorders = ::com::sun::java::swing::plaf::windows::WindowsBorders;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToolBar = ::javax::swing::JToolBar;
using $SwingConstants = ::javax::swing::SwingConstants;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsBorders$ToolBarBorder_FieldInfo_[] = {
	{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsBorders$ToolBarBorder, shadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsBorders$ToolBarBorder, highlight)},
	{}
};

$MethodInfo _WindowsBorders$ToolBarBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Color;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsBorders$ToolBarBorder::*)($Color*,$Color*)>(&WindowsBorders$ToolBarBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsBorders$ToolBarBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsBorders$ToolBarBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "ToolBarBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsBorders$ToolBarBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsBorders$ToolBarBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource,javax.swing.SwingConstants",
	_WindowsBorders$ToolBarBorder_FieldInfo_,
	_WindowsBorders$ToolBarBorder_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsBorders$ToolBarBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsBorders"
};

$Object* allocate$WindowsBorders$ToolBarBorder($Class* clazz) {
	return $of($alloc(WindowsBorders$ToolBarBorder));
}

int32_t WindowsBorders$ToolBarBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool WindowsBorders$ToolBarBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* WindowsBorders$ToolBarBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* WindowsBorders$ToolBarBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void WindowsBorders$ToolBarBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void WindowsBorders$ToolBarBorder::init$($Color* shadow, $Color* highlight) {
	$AbstractBorder::init$();
	$set(this, highlight, highlight);
	$set(this, shadow, shadow);
}

void WindowsBorders$ToolBarBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (!($instanceOf($JToolBar, c))) {
		return;
	}
	$nc(g)->translate(x, y);
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$var($Border, xpBorder, xp->getBorder(c, $TMSchema$Part::TP_TOOLBAR));
		if (xpBorder != nullptr) {
			xpBorder->paintBorder(c, g, 0, 0, width, height);
		}
	}
	if ($nc(($cast($JToolBar, c)))->isFloatable()) {
		bool vertical = ($cast($JToolBar, c))->getOrientation() == $SwingConstants::VERTICAL;
		if (xp != nullptr) {
			$init($TMSchema$Part);
			$TMSchema$Part* part = vertical ? $TMSchema$Part::RP_GRIPPERVERT : $TMSchema$Part::RP_GRIPPER;
			$var($XPStyle$Skin, skin, xp->getSkin(c, part));
			int32_t dx = 0;
			int32_t dy = 0;
			int32_t dw = 0;
			int32_t dh = 0;
			if (vertical) {
				dx = 0;
				dy = 2;
				dw = width - 1;
				dh = $nc(skin)->getHeight();
			} else {
				dw = $nc(skin)->getWidth();
				dh = height - 1;
				dx = $nc($($nc(c)->getComponentOrientation()))->isLeftToRight() ? 2 : (width - dw - 2);
				dy = 0;
			}
			$init($TMSchema$State);
			$nc(skin)->paintSkin(g, dx, dy, dw, dh, $TMSchema$State::NORMAL);
		} else if (!vertical) {
			if ($nc($($nc(c)->getComponentOrientation()))->isLeftToRight()) {
				g->setColor(this->shadow);
				g->drawLine(4, 3, 4, height - 4);
				g->drawLine(4, height - 4, 2, height - 4);
				g->setColor(this->highlight);
				g->drawLine(2, 3, 3, 3);
				g->drawLine(2, 3, 2, height - 5);
			} else {
				g->setColor(this->shadow);
				g->drawLine(width - 3, 3, width - 3, height - 4);
				g->drawLine(width - 4, height - 4, width - 4, height - 4);
				g->setColor(this->highlight);
				g->drawLine(width - 5, 3, width - 4, 3);
				g->drawLine(width - 5, 3, width - 5, height - 5);
			}
		} else {
			g->setColor(this->shadow);
			g->drawLine(3, 4, width - 4, 4);
			g->drawLine(width - 4, 2, width - 4, 4);
			g->setColor(this->highlight);
			g->drawLine(3, 2, width - 4, 2);
			g->drawLine(3, 2, 3, 3);
		}
	}
	g->translate(-x, -y);
}

$Insets* WindowsBorders$ToolBarBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(1, 1, 1, 1);
	if (!($instanceOf($JToolBar, c))) {
		return insets;
	}
	if ($nc(($cast($JToolBar, c)))->isFloatable()) {
		int32_t gripInset = ($XPStyle::getXP() != nullptr) ? 12 : 9;
		if (($cast($JToolBar, c))->getOrientation() == $SwingConstants::HORIZONTAL) {
			if ($nc($($nc(c)->getComponentOrientation()))->isLeftToRight()) {
				insets->left = gripInset;
			} else {
				insets->right = gripInset;
			}
		} else {
			insets->top = gripInset;
		}
	}
	return insets;
}

WindowsBorders$ToolBarBorder::WindowsBorders$ToolBarBorder() {
}

$Class* WindowsBorders$ToolBarBorder::load$($String* name, bool initialize) {
	$loadClass(WindowsBorders$ToolBarBorder, name, initialize, &_WindowsBorders$ToolBarBorder_ClassInfo_, allocate$WindowsBorders$ToolBarBorder);
	return class$;
}

$Class* WindowsBorders$ToolBarBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com