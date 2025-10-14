#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$CheckBoxIcon.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BP_CHECKBOX
#undef CHECKEDDISABLED
#undef CHECKEDHOT
#undef CHECKEDNORMAL
#undef CHECKEDPRESSED
#undef UNCHECKEDDISABLED
#undef UNCHECKEDHOT
#undef UNCHECKEDNORMAL
#undef UNCHECKEDPRESSED

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JCheckBox = ::javax::swing::JCheckBox;
using $UIManager = ::javax::swing::UIManager;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsIconFactory$CheckBoxIcon_FieldInfo_[] = {
	{"csize", "I", nullptr, $STATIC | $FINAL, $constField(WindowsIconFactory$CheckBoxIcon, csize)},
	{}
};

$MethodInfo _WindowsIconFactory$CheckBoxIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$CheckBoxIcon::*)()>(&WindowsIconFactory$CheckBoxIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$CheckBoxIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "CheckBoxIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$CheckBoxIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$CheckBoxIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_WindowsIconFactory$CheckBoxIcon_FieldInfo_,
	_WindowsIconFactory$CheckBoxIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$CheckBoxIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$CheckBoxIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$CheckBoxIcon));
}

int32_t WindowsIconFactory$CheckBoxIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$CheckBoxIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$CheckBoxIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$CheckBoxIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$CheckBoxIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$CheckBoxIcon::init$() {
}

void WindowsIconFactory$CheckBoxIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($JCheckBox, cb, $cast($JCheckBox, c));
	$var($ButtonModel, model, $nc(cb)->getModel());
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$TMSchema$State* state = nullptr;
		if ($nc(model)->isSelected()) {
			$init($TMSchema$State);
			state = $TMSchema$State::CHECKEDNORMAL;
			if (!model->isEnabled()) {
				state = $TMSchema$State::CHECKEDDISABLED;
			} else {
				bool var$1 = model->isPressed();
				if (var$1 && model->isArmed()) {
					state = $TMSchema$State::CHECKEDPRESSED;
				} else if (model->isRollover()) {
					state = $TMSchema$State::CHECKEDHOT;
				}
			}
		} else {
			$init($TMSchema$State);
			state = $TMSchema$State::UNCHECKEDNORMAL;
			if (!model->isEnabled()) {
				state = $TMSchema$State::UNCHECKEDDISABLED;
			} else {
				bool var$3 = model->isPressed();
				if (var$3 && model->isArmed()) {
					state = $TMSchema$State::UNCHECKEDPRESSED;
				} else if (model->isRollover()) {
					state = $TMSchema$State::UNCHECKEDHOT;
				}
			}
		}
		$init($TMSchema$Part);
		$TMSchema$Part* part = $TMSchema$Part::BP_CHECKBOX;
		$nc($(xp->getSkin(c, part)))->paintSkin(g, x, y, state);
	} else {
		if (!cb->isBorderPaintedFlat()) {
			$nc(g)->setColor($($UIManager::getColor("CheckBox.shadow"_s)));
			g->drawLine(x, y, x + 11, y);
			g->drawLine(x, y + 1, x, y + 11);
			g->setColor($($UIManager::getColor("CheckBox.highlight"_s)));
			g->drawLine(x + 12, y, x + 12, y + 12);
			g->drawLine(x, y + 12, x + 11, y + 12);
			g->setColor($($UIManager::getColor("CheckBox.darkShadow"_s)));
			g->drawLine(x + 1, y + 1, x + 10, y + 1);
			g->drawLine(x + 1, y + 2, x + 1, y + 10);
			g->setColor($($UIManager::getColor("CheckBox.light"_s)));
			g->drawLine(x + 1, y + 11, x + 11, y + 11);
			g->drawLine(x + 11, y + 1, x + 11, y + 10);
			bool var$5 = model->isPressed();
			bool var$4 = (var$5 && model->isArmed());
			if (var$4 || !model->isEnabled()) {
				g->setColor($($UIManager::getColor("CheckBox.background"_s)));
			} else {
				g->setColor($($UIManager::getColor("CheckBox.interiorBackground"_s)));
			}
			g->fillRect(x + 2, y + 2, WindowsIconFactory$CheckBoxIcon::csize - 4, WindowsIconFactory$CheckBoxIcon::csize - 4);
		} else {
			$nc(g)->setColor($($UIManager::getColor("CheckBox.shadow"_s)));
			g->drawRect(x + 1, y + 1, WindowsIconFactory$CheckBoxIcon::csize - 3, WindowsIconFactory$CheckBoxIcon::csize - 3);
			bool var$7 = model->isPressed();
			bool var$6 = (var$7 && model->isArmed());
			if (var$6 || !model->isEnabled()) {
				g->setColor($($UIManager::getColor("CheckBox.background"_s)));
			} else {
				g->setColor($($UIManager::getColor("CheckBox.interiorBackground"_s)));
			}
			g->fillRect(x + 2, y + 2, WindowsIconFactory$CheckBoxIcon::csize - 4, WindowsIconFactory$CheckBoxIcon::csize - 4);
		}
		if (model->isEnabled()) {
			$nc(g)->setColor($($UIManager::getColor("CheckBox.foreground"_s)));
		} else {
			$nc(g)->setColor($($UIManager::getColor("CheckBox.shadow"_s)));
		}
		if (model->isSelected()) {
			if ($SwingUtilities2::isScaledGraphics(g)) {
				$var($ints, xPoints, $new($ints, {
					3,
					5,
					9,
					9,
					5,
					3
				}));
				$var($ints, yPoints, $new($ints, {
					5,
					7,
					3,
					5,
					9,
					7
				}));
				$nc(g)->translate(x, y);
				g->fillPolygon(xPoints, yPoints, 6);
				g->drawPolygon(xPoints, yPoints, 6);
				g->translate(-x, -y);
			} else {
				$nc(g)->drawLine(x + 9, y + 3, x + 9, y + 3);
				g->drawLine(x + 8, y + 4, x + 9, y + 4);
				g->drawLine(x + 7, y + 5, x + 9, y + 5);
				g->drawLine(x + 6, y + 6, x + 8, y + 6);
				g->drawLine(x + 3, y + 7, x + 7, y + 7);
				g->drawLine(x + 4, y + 8, x + 6, y + 8);
				g->drawLine(x + 5, y + 9, x + 5, y + 9);
				g->drawLine(x + 3, y + 5, x + 3, y + 5);
				g->drawLine(x + 3, y + 6, x + 4, y + 6);
			}
		}
	}
}

int32_t WindowsIconFactory$CheckBoxIcon::getIconWidth() {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		return $nc($(xp->getSkin(nullptr, $TMSchema$Part::BP_CHECKBOX)))->getWidth();
	} else {
		return WindowsIconFactory$CheckBoxIcon::csize;
	}
}

int32_t WindowsIconFactory$CheckBoxIcon::getIconHeight() {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		return $nc($(xp->getSkin(nullptr, $TMSchema$Part::BP_CHECKBOX)))->getHeight();
	} else {
		return WindowsIconFactory$CheckBoxIcon::csize;
	}
}

WindowsIconFactory$CheckBoxIcon::WindowsIconFactory$CheckBoxIcon() {
}

$Class* WindowsIconFactory$CheckBoxIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$CheckBoxIcon, name, initialize, &_WindowsIconFactory$CheckBoxIcon_ClassInfo_, allocate$WindowsIconFactory$CheckBoxIcon);
	return class$;
}

$Class* WindowsIconFactory$CheckBoxIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com