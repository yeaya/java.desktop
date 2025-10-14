#include <com/sun/java/swing/plaf/windows/WindowsIconFactory$RadioButtonIcon.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsIconFactory.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/BasicStroke.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/RenderingHints$Key.h>
#include <java/awt/RenderingHints.h>
#include <java/awt/Stroke.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIManager.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BP_RADIOBUTTON
#undef CAP_ROUND
#undef CHECKEDDISABLED
#undef CHECKEDHOT
#undef CHECKEDNORMAL
#undef CHECKEDPRESSED
#undef JOIN_ROUND
#undef KEY_ANTIALIASING
#undef UNCHECKEDDISABLED
#undef UNCHECKEDHOT
#undef UNCHECKEDNORMAL
#undef UNCHECKEDPRESSED
#undef VALUE_ANTIALIAS_ON

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsIconFactory = ::com::sun::java::swing::plaf::windows::WindowsIconFactory;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $BasicStroke = ::java::awt::BasicStroke;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $RenderingHints = ::java::awt::RenderingHints;
using $RenderingHints$Key = ::java::awt::RenderingHints$Key;
using $Stroke = ::java::awt::Stroke;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$MethodInfo _WindowsIconFactory$RadioButtonIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsIconFactory$RadioButtonIcon::*)()>(&WindowsIconFactory$RadioButtonIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsIconFactory$RadioButtonIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsIconFactory$RadioButtonIcon", "com.sun.java.swing.plaf.windows.WindowsIconFactory", "RadioButtonIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsIconFactory$RadioButtonIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory$RadioButtonIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_WindowsIconFactory$RadioButtonIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsIconFactory$RadioButtonIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsIconFactory"
};

$Object* allocate$WindowsIconFactory$RadioButtonIcon($Class* clazz) {
	return $of($alloc(WindowsIconFactory$RadioButtonIcon));
}

int32_t WindowsIconFactory$RadioButtonIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool WindowsIconFactory$RadioButtonIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* WindowsIconFactory$RadioButtonIcon::clone() {
	 return this->$Icon::clone();
}

$String* WindowsIconFactory$RadioButtonIcon::toString() {
	 return this->$Icon::toString();
}

void WindowsIconFactory$RadioButtonIcon::finalize() {
	this->$Icon::finalize();
}

void WindowsIconFactory$RadioButtonIcon::init$() {
}

void WindowsIconFactory$RadioButtonIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$TMSchema$Part* part = $TMSchema$Part::BP_RADIOBUTTON;
		$var($XPStyle$Skin, skin, xp->getSkin(b, part));
		$TMSchema$State* state = nullptr;
		int32_t index = 0;
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
		$nc(skin)->paintSkin(g, x, y, state);
	} else {
		bool var$5 = model->isPressed();
		bool var$4 = (var$5 && model->isArmed());
		if (var$4 || !model->isEnabled()) {
			$nc(g)->setColor($($UIManager::getColor("RadioButton.background"_s)));
		} else {
			$nc(g)->setColor($($UIManager::getColor("RadioButton.interiorBackground"_s)));
		}
		$nc(g)->fillRect(x + 2, y + 2, 8, 8);
		bool isScaledGraphics = $SwingUtilities2::isScaledGraphics(g);
		if (isScaledGraphics) {
			$var($Graphics2D, g2d, $cast($Graphics2D, g));
			$var($Stroke, oldStroke, g2d->getStroke());
			g2d->setStroke($$new($BasicStroke, 1.03f, $BasicStroke::CAP_ROUND, $BasicStroke::JOIN_ROUND));
			$init($RenderingHints);
			$var($Object, aaHint, g2d->getRenderingHint($RenderingHints::KEY_ANTIALIASING));
			g2d->setRenderingHint($RenderingHints::KEY_ANTIALIASING, $RenderingHints::VALUE_ANTIALIAS_ON);
			g->setColor($($UIManager::getColor("RadioButton.shadow"_s)));
			g->drawArc(x, y, 11, 11, 45, 180);
			g->setColor($($UIManager::getColor("RadioButton.highlight"_s)));
			g->drawArc(x, y, 11, 11, 45, -180);
			g->setColor($($UIManager::getColor("RadioButton.darkShadow"_s)));
			g->drawArc(x + 1, y + 1, 9, 9, 45, 180);
			g->setColor($($UIManager::getColor("RadioButton.light"_s)));
			g->drawArc(x + 1, y + 1, 9, 9, 45, -180);
			g2d->setStroke(oldStroke);
			if (model->isSelected()) {
				if (model->isEnabled()) {
					g->setColor($($UIManager::getColor("RadioButton.foreground"_s)));
				} else {
					g->setColor($($UIManager::getColor("RadioButton.shadow"_s)));
				}
				g->fillOval(x + 3, y + 3, 5, 5);
			}
			g2d->setRenderingHint($RenderingHints::KEY_ANTIALIASING, aaHint);
		} else {
			g->setColor($($UIManager::getColor("RadioButton.shadow"_s)));
			g->drawLine(x + 4, y + 0, x + 7, y + 0);
			g->drawLine(x + 2, y + 1, x + 3, y + 1);
			g->drawLine(x + 8, y + 1, x + 9, y + 1);
			g->drawLine(x + 1, y + 2, x + 1, y + 3);
			g->drawLine(x + 0, y + 4, x + 0, y + 7);
			g->drawLine(x + 1, y + 8, x + 1, y + 9);
			g->setColor($($UIManager::getColor("RadioButton.highlight"_s)));
			g->drawLine(x + 2, y + 10, x + 3, y + 10);
			g->drawLine(x + 4, y + 11, x + 7, y + 11);
			g->drawLine(x + 8, y + 10, x + 9, y + 10);
			g->drawLine(x + 10, y + 9, x + 10, y + 8);
			g->drawLine(x + 11, y + 7, x + 11, y + 4);
			g->drawLine(x + 10, y + 3, x + 10, y + 2);
			g->setColor($($UIManager::getColor("RadioButton.darkShadow"_s)));
			g->drawLine(x + 4, y + 1, x + 7, y + 1);
			g->drawLine(x + 2, y + 2, x + 3, y + 2);
			g->drawLine(x + 8, y + 2, x + 9, y + 2);
			g->drawLine(x + 2, y + 3, x + 2, y + 3);
			g->drawLine(x + 1, y + 4, x + 1, y + 7);
			g->drawLine(x + 2, y + 8, x + 2, y + 8);
			g->setColor($($UIManager::getColor("RadioButton.light"_s)));
			g->drawLine(x + 2, y + 9, x + 3, y + 9);
			g->drawLine(x + 4, y + 10, x + 7, y + 10);
			g->drawLine(x + 8, y + 9, x + 9, y + 9);
			g->drawLine(x + 9, y + 8, x + 9, y + 8);
			g->drawLine(x + 10, y + 7, x + 10, y + 4);
			g->drawLine(x + 9, y + 3, x + 9, y + 3);
			if (model->isSelected()) {
				if (model->isEnabled()) {
					g->setColor($($UIManager::getColor("RadioButton.foreground"_s)));
				} else {
					g->setColor($($UIManager::getColor("RadioButton.shadow"_s)));
				}
				g->fillRect(x + 4, y + 5, 4, 2);
				g->fillRect(x + 5, y + 4, 2, 4);
			}
		}
	}
}

int32_t WindowsIconFactory$RadioButtonIcon::getIconWidth() {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		return $nc($(xp->getSkin(nullptr, $TMSchema$Part::BP_RADIOBUTTON)))->getWidth();
	} else {
		return 13;
	}
}

int32_t WindowsIconFactory$RadioButtonIcon::getIconHeight() {
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		return $nc($(xp->getSkin(nullptr, $TMSchema$Part::BP_RADIOBUTTON)))->getHeight();
	} else {
		return 13;
	}
}

WindowsIconFactory$RadioButtonIcon::WindowsIconFactory$RadioButtonIcon() {
}

$Class* WindowsIconFactory$RadioButtonIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsIconFactory$RadioButtonIcon, name, initialize, &_WindowsIconFactory$RadioButtonIcon_ClassInfo_, allocate$WindowsIconFactory$RadioButtonIcon);
	return class$;
}

$Class* WindowsIconFactory$RadioButtonIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com