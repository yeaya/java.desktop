#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$FrameButtonIcon.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
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
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef DISABLED
#undef HOT
#undef INACTIVEDISABLED
#undef INACTIVEHOT
#undef INACTIVENORMAL
#undef INACTIVEPUSHED
#undef NORMAL
#undef PUSHED
#undef WP_CLOSEBUTTON
#undef WP_MAXBUTTON
#undef WP_MINBUTTON
#undef WP_RESTOREBUTTON

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsIconFactory$FrameButtonIcon_FieldInfo_[] = {
	{"part", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PRIVATE, $field(WindowsIconFactory$FrameButtonIcon, part)},
	{}
};

$MethodInfo _WindowsIconFactory$FrameButtonIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$FrameButtonIcon::*)($TMSchema$Part*)>(&WindowsIconFactory$FrameButtonIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$FrameButtonIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$FrameButtonIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "FrameButtonIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$FrameButtonIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$FrameButtonIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_WindowsIconFactory$FrameButtonIcon_FieldInfo_,
	_WindowsIconFactory$FrameButtonIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$FrameButtonIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$FrameButtonIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$FrameButtonIcon));
}

int32_t WindowsIconFactory$FrameButtonIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$FrameButtonIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$FrameButtonIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$FrameButtonIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$FrameButtonIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$FrameButtonIcon::init$($TMSchema$Part* part) {
	$set(this, part, part);
}

void WindowsIconFactory$FrameButtonIcon::paintIcon($Component* c, $Graphics* g, int32_t x0, int32_t y0) {
	$useLocalCurrentObjectStackCache();
	int32_t width = getIconWidth();
	int32_t height = getIconHeight();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$var($XPStyle$Skin, skin, xp->getSkin(c, this->part));
		$var($AbstractButton, b, $cast($AbstractButton, c));
		$var($ButtonModel, model, $nc(b)->getModel());
		$load($JInternalFrame);
		$var($JInternalFrame, jif, $cast($JInternalFrame, $SwingUtilities::getAncestorOfClass($JInternalFrame::class$, b)));
		bool jifSelected = (jif != nullptr && jif->isSelected());
		$TMSchema$State* state = nullptr;
		if (jifSelected) {
			if (!$nc(model)->isEnabled()) {
				$init($TMSchema$State);
				state = $TMSchema$State::DISABLED;
			} else {
				bool var$1 = model->isArmed();
				if (var$1 && model->isPressed()) {
					$init($TMSchema$State);
					state = $TMSchema$State::PUSHED;
				} else if (model->isRollover()) {
					$init($TMSchema$State);
					state = $TMSchema$State::HOT;
				} else {
					$init($TMSchema$State);
					state = $TMSchema$State::NORMAL;
				}
			}
		} else if (!$nc(model)->isEnabled()) {
			$init($TMSchema$State);
			state = $TMSchema$State::INACTIVEDISABLED;
		} else {
			bool var$3 = model->isArmed();
			if (var$3 && model->isPressed()) {
				$init($TMSchema$State);
				state = $TMSchema$State::INACTIVEPUSHED;
			} else if (model->isRollover()) {
				$init($TMSchema$State);
				state = $TMSchema$State::INACTIVEHOT;
			} else {
				$init($TMSchema$State);
				state = $TMSchema$State::INACTIVENORMAL;
			}
		}
		$nc(skin)->paintSkin(g, 0, 0, width, height, state);
	} else {
		$init($Color);
		$nc(g)->setColor($Color::black);
		int32_t x = width / 12 + 2;
		int32_t y = height / 5;
		int32_t h = height - y * 2 - 1;
		int32_t w = width * 3 / 4 - 3;
		int32_t thickness2 = $Math::max(height / 8, 2);
		int32_t thickness = $Math::max(width / 15, 1);
		$init($TMSchema$Part);
		if (this->part == $TMSchema$Part::WP_CLOSEBUTTON) {
			int32_t lineWidth = 0;
			if (width > 47) {
				lineWidth = 6;
			} else if (width > 37) {
				lineWidth = 5;
			} else if (width > 26) {
				lineWidth = 4;
			} else if (width > 16) {
				lineWidth = 3;
			} else if (width > 12) {
				lineWidth = 2;
			} else {
				lineWidth = 1;
			}
			y = height / 12 + 2;
			if (lineWidth == 1) {
				if (w % 2 == 1) {
					++x;
					++w;
				}
				g->drawLine(x, y, x + w - 2, y + w - 2);
				g->drawLine(x + w - 2, y, x, y + w - 2);
			} else if (lineWidth == 2) {
				if (w > 6) {
					++x;
					--w;
				}
				g->drawLine(x, y, x + w - 2, y + w - 2);
				g->drawLine(x + w - 2, y, x, y + w - 2);
				g->drawLine(x + 1, y, x + w - 1, y + w - 2);
				g->drawLine(x + w - 1, y, x + 1, y + w - 2);
			} else {
				x += 2;
				++y;
				w -= 2;
				g->drawLine(x, y, x + w - 1, y + w - 1);
				g->drawLine(x + w - 1, y, x, y + w - 1);
				g->drawLine(x + 1, y, x + w - 1, y + w - 2);
				g->drawLine(x + w - 2, y, x, y + w - 2);
				g->drawLine(x, y + 1, x + w - 2, y + w - 1);
				g->drawLine(x + w - 1, y + 1, x + 1, y + w - 1);
				for (int32_t i = 4; i <= lineWidth; ++i) {
					g->drawLine(x + i - 2, y, x + w - 1, y + w - i + 1);
					g->drawLine(x, y + i - 2, x + w - i + 1, y + w - 1);
					g->drawLine(x + w - i + 1, y, x, y + w - i + 1);
					g->drawLine(x + w - 1, y + i - 2, x + i - 2, y + w - 1);
				}
			}
		} else {
			if (this->part == $TMSchema$Part::WP_MINBUTTON) {
				g->fillRect(x, y + h - thickness2, w - w / 3, thickness2);
			} else {
				if (this->part == $TMSchema$Part::WP_MAXBUTTON) {
					g->fillRect(x, y, w, thickness2);
					g->fillRect(x, y, thickness, h);
					g->fillRect(x + w - thickness, y, thickness, h);
					g->fillRect(x, y + h - thickness, w, thickness);
				} else {
					if (this->part == $TMSchema$Part::WP_RESTOREBUTTON) {
						g->fillRect(x + w / 3, y, w - w / 3, thickness2);
						g->fillRect(x + w / 3, y, thickness, h / 3);
						g->fillRect(x + w - thickness, y, thickness, h - h / 3);
						g->fillRect(x + w - w / 3, y + h - h / 3 - thickness, w / 3, thickness);
						g->fillRect(x, y + h / 3, w - w / 3, thickness2);
						g->fillRect(x, y + h / 3, thickness, h - h / 3);
						g->fillRect(x + w - w / 3 - thickness, y + h / 3, thickness, h - h / 3);
						g->fillRect(x, y + h - thickness, w - w / 3, thickness);
					}
				}
			}
		}
	}
}

int32_t WindowsIconFactory$FrameButtonIcon::getIconWidth() {
	int32_t width = 0;
	if ($XPStyle::getXP() != nullptr) {
		width = $UIManager::getInt("InternalFrame.titleButtonHeight"_s) - 2;
		$init($TMSchema$Part);
		$init($TMSchema$State);
		$var($Dimension, d, $XPStyle::getPartSize($TMSchema$Part::WP_CLOSEBUTTON, $TMSchema$State::NORMAL));
		if (d != nullptr && d->width != 0 && d->height != 0) {
			width = $cast(int32_t, ((float)width * d->width / d->height));
		}
	} else {
		width = $UIManager::getInt("InternalFrame.titleButtonWidth"_s) - 2;
	}
	if ($XPStyle::getXP() != nullptr) {
		width -= 2;
	}
	return width;
}

int32_t WindowsIconFactory$FrameButtonIcon::getIconHeight() {
	int32_t height = $UIManager::getInt("InternalFrame.titleButtonHeight"_s) - 4;
	return height;
}

WindowsIconFactory$FrameButtonIcon::WindowsIconFactory$FrameButtonIcon() {
}

$Class* WindowsIconFactory$FrameButtonIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$FrameButtonIcon, name, initialize, &_WindowsIconFactory$FrameButtonIcon_ClassInfo_, allocate$WindowsIconFactory$FrameButtonIcon);
	return class$;
}

$Class* WindowsIconFactory$FrameButtonIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com