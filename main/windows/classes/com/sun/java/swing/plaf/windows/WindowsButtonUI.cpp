#include <com/sun/java/swing/plaf/windows/WindowsButtonUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsButtonUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/CompoundBorder.h>
#include <javax/swing/plaf/ButtonUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicButtonUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef BP_CHECKBOX
#undef BP_PUSHBUTTON
#undef BP_RADIOBUTTON
#undef CHECKED
#undef CHECKEDDISABLED
#undef CHECKEDHOT
#undef CHECKEDNORMAL
#undef CHECKEDPRESSED
#undef DEFAULTED
#undef DISABLED
#undef HOT
#undef HOTCHECKED
#undef NORMAL
#undef PRESSED
#undef TP_BUTTON
#undef TRUE
#undef UNCHECKEDDISABLED
#undef UNCHECKEDHOT
#undef UNCHECKEDNORMAL
#undef UNCHECKEDPRESSED
#undef WINDOWS_BUTTON_UI_KEY

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsButtonUI$1 = ::com::sun::java::swing::plaf::windows::WindowsButtonUI$1;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToolBar = ::javax::swing::JToolBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $CompoundBorder = ::javax::swing::border::CompoundBorder;
using $ButtonUI = ::javax::swing::plaf::ButtonUI;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicButtonUI = ::javax::swing::plaf::basic::BasicButtonUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $AppContext = ::sun::awt::AppContext;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsButtonUI_FieldInfo_[] = {
	{"dashedRectGapX", "I", nullptr, $PROTECTED, $field(WindowsButtonUI, dashedRectGapX)},
	{"dashedRectGapY", "I", nullptr, $PROTECTED, $field(WindowsButtonUI, dashedRectGapY)},
	{"dashedRectGapWidth", "I", nullptr, $PROTECTED, $field(WindowsButtonUI, dashedRectGapWidth)},
	{"dashedRectGapHeight", "I", nullptr, $PROTECTED, $field(WindowsButtonUI, dashedRectGapHeight)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(WindowsButtonUI, focusColor)},
	{"defaults_initialized", "Z", nullptr, $PRIVATE, $field(WindowsButtonUI, defaults_initialized)},
	{"WINDOWS_BUTTON_UI_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsButtonUI, WINDOWS_BUTTON_UI_KEY)},
	{"viewRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(WindowsButtonUI, viewRect)},
	{}
};

$MethodInfo _WindowsButtonUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsButtonUI::*)()>(&WindowsButtonUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsButtonUI::createUI))},
	{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getOpaqueInsets", "(Ljavax/swing/border/Border;Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Insets*(*)($Border*,$Component*)>(&WindowsButtonUI::getOpaqueInsets))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getXPButtonState", "(Ljavax/swing/AbstractButton;)Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $STATIC, $method(static_cast<$TMSchema$State*(*)($AbstractButton*)>(&WindowsButtonUI::getXPButtonState))},
	{"getXPButtonType", "(Ljavax/swing/AbstractButton;)Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $STATIC, $method(static_cast<$TMSchema$Part*(*)($AbstractButton*)>(&WindowsButtonUI::getXPButtonType))},
	{"installDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintButtonPressed", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{"paintFocus", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;Ljavax/swing/AbstractButton;Ljava/awt/Rectangle;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"paintXPButtonBackground", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$JComponent*)>(&WindowsButtonUI::paintXPButtonBackground))},
	{"uninstallDefaults", "(Ljavax/swing/AbstractButton;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _WindowsButtonUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsButtonUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _WindowsButtonUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsButtonUI",
	"javax.swing.plaf.basic.BasicButtonUI",
	nullptr,
	_WindowsButtonUI_FieldInfo_,
	_WindowsButtonUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsButtonUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsButtonUI$1"
};

$Object* allocate$WindowsButtonUI($Class* clazz) {
	return $of($alloc(WindowsButtonUI));
}

$Object* WindowsButtonUI::WINDOWS_BUTTON_UI_KEY = nullptr;

void WindowsButtonUI::init$() {
	$BasicButtonUI::init$();
	this->defaults_initialized = false;
	$set(this, viewRect, $new($Rectangle));
}

$ComponentUI* WindowsButtonUI::createUI($JComponent* c) {
	$init(WindowsButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($AppContext, appContext, $AppContext::getAppContext());
	$var(WindowsButtonUI, windowsButtonUI, $cast(WindowsButtonUI, $nc(appContext)->get(WindowsButtonUI::WINDOWS_BUTTON_UI_KEY)));
	if (windowsButtonUI == nullptr) {
		$assign(windowsButtonUI, $new(WindowsButtonUI));
		appContext->put(WindowsButtonUI::WINDOWS_BUTTON_UI_KEY, windowsButtonUI);
	}
	return windowsButtonUI;
}

void WindowsButtonUI::installDefaults($AbstractButton* b) {
	$useLocalCurrentObjectStackCache();
	$BasicButtonUI::installDefaults(b);
	if (!this->defaults_initialized) {
		$var($String, pp, getPropertyPrefix());
		this->dashedRectGapX = $UIManager::getInt($$str({pp, "dashedRectGapX"_s}));
		this->dashedRectGapY = $UIManager::getInt($$str({pp, "dashedRectGapY"_s}));
		this->dashedRectGapWidth = $UIManager::getInt($$str({pp, "dashedRectGapWidth"_s}));
		this->dashedRectGapHeight = $UIManager::getInt($$str({pp, "dashedRectGapHeight"_s}));
		$set(this, focusColor, $UIManager::getColor($$str({pp, "focus"_s})));
		this->defaults_initialized = true;
	}
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$nc(b)->setBorder($(xp->getBorder(b, $(getXPButtonType(b)))));
		$init($Boolean);
		$LookAndFeel::installProperty(b, "rolloverEnabled"_s, $Boolean::TRUE);
	}
}

void WindowsButtonUI::uninstallDefaults($AbstractButton* b) {
	$BasicButtonUI::uninstallDefaults(b);
	this->defaults_initialized = false;
}

$Color* WindowsButtonUI::getFocusColor() {
	return this->focusColor;
}

void WindowsButtonUI::paintText($Graphics* g, $AbstractButton* b, $Rectangle* textRect, $String* text) {
	$WindowsGraphicsUtils::paintText(g, b, textRect, text, getTextShiftOffset());
}

void WindowsButtonUI::paintFocus($Graphics* g, $AbstractButton* b, $Rectangle* viewRect, $Rectangle* textRect, $Rectangle* iconRect) {
	int32_t width = $nc(b)->getWidth();
	int32_t height = b->getHeight();
	$nc(g)->setColor($(getFocusColor()));
	$BasicGraphicsUtils::drawDashedRect(g, this->dashedRectGapX, this->dashedRectGapY, width - this->dashedRectGapWidth, height - this->dashedRectGapHeight);
}

void WindowsButtonUI::paintButtonPressed($Graphics* g, $AbstractButton* b) {
	setTextShiftOffset();
}

$Dimension* WindowsButtonUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, d, $BasicButtonUI::getPreferredSize(c));
	$var($AbstractButton, b, $cast($AbstractButton, c));
	if (d != nullptr && $nc(b)->isFocusPainted()) {
		if (d->width % 2 == 0) {
			d->width += 1;
		}
		if (d->height % 2 == 0) {
			d->height += 1;
		}
	}
	return d;
}

void WindowsButtonUI::paint($Graphics* g, $JComponent* c) {
	if ($XPStyle::getXP() != nullptr) {
		WindowsButtonUI::paintXPButtonBackground(g, c);
	}
	$BasicButtonUI::paint(g, c);
}

$TMSchema$Part* WindowsButtonUI::getXPButtonType($AbstractButton* b) {
	$init(WindowsButtonUI);
	if ($instanceOf($JCheckBox, b)) {
		$init($TMSchema$Part);
		return $TMSchema$Part::BP_CHECKBOX;
	}
	if ($instanceOf($JRadioButton, b)) {
		$init($TMSchema$Part);
		return $TMSchema$Part::BP_RADIOBUTTON;
	}
	bool toolbar = ($instanceOf($JToolBar, $($nc(b)->getParent())));
	$init($TMSchema$Part);
	return toolbar ? $TMSchema$Part::TP_BUTTON : $TMSchema$Part::BP_PUSHBUTTON;
}

$TMSchema$State* WindowsButtonUI::getXPButtonState($AbstractButton* b) {
	$init(WindowsButtonUI);
	$useLocalCurrentObjectStackCache();
	$TMSchema$Part* part = getXPButtonType(b);
	$var($ButtonModel, model, $nc(b)->getModel());
	$init($TMSchema$State);
	$TMSchema$State* state = $TMSchema$State::NORMAL;
	$init($WindowsButtonUI$1);
	{
		bool toolbar = false;
		switch ($nc($WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part)->get($nc((part))->ordinal())) {
		case 1:
			{}
		case 2:
			{
				if (!$nc(model)->isEnabled()) {
					state = (model->isSelected()) ? $TMSchema$State::CHECKEDDISABLED : $TMSchema$State::UNCHECKEDDISABLED;
				} else {
					bool var$1 = model->isPressed();
					if (var$1 && model->isArmed()) {
						state = (model->isSelected()) ? $TMSchema$State::CHECKEDPRESSED : $TMSchema$State::UNCHECKEDPRESSED;
					} else if (model->isRollover()) {
						state = (model->isSelected()) ? $TMSchema$State::CHECKEDHOT : $TMSchema$State::UNCHECKEDHOT;
					} else {
						state = (model->isSelected()) ? $TMSchema$State::CHECKEDNORMAL : $TMSchema$State::UNCHECKEDNORMAL;
					}
				}
				break;
			}
		case 3:
			{}
		case 4:
			{
				toolbar = ($instanceOf($JToolBar, $(b->getParent())));
				if (toolbar) {
					bool var$2 = $nc(model)->isArmed();
					if (var$2 && model->isPressed()) {
						state = $TMSchema$State::PRESSED;
					} else if (!model->isEnabled()) {
						state = $TMSchema$State::DISABLED;
					} else {
						bool var$4 = model->isSelected();
						if (var$4 && model->isRollover()) {
							state = $TMSchema$State::HOTCHECKED;
						} else if (model->isSelected()) {
							state = $TMSchema$State::CHECKED;
						} else if (model->isRollover()) {
							state = $TMSchema$State::HOT;
						} else if (b->hasFocus()) {
							state = $TMSchema$State::HOT;
						}
					}
				} else {
					bool var$8 = $nc(model)->isArmed();
					bool var$7 = (var$8 && model->isPressed());
					if (var$7 || $nc(model)->isSelected()) {
						state = $TMSchema$State::PRESSED;
					} else if (!model->isEnabled()) {
						state = $TMSchema$State::DISABLED;
					} else {
						bool var$10 = model->isRollover();
						if (var$10 || model->isPressed()) {
							state = $TMSchema$State::HOT;
						} else if ($instanceOf($JButton, b) && $nc(($cast($JButton, b)))->isDefaultButton()) {
							state = $TMSchema$State::DEFAULTED;
						} else if (b->hasFocus()) {
							state = $TMSchema$State::HOT;
						}
					}
				}
				break;
			}
		default:
			{
				state = $TMSchema$State::NORMAL;
			}
		}
	}
	return state;
}

void WindowsButtonUI::paintXPButtonBackground($Graphics* g, $JComponent* c) {
	$init(WindowsButtonUI);
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($XPStyle, xp, $XPStyle::getXP());
	$TMSchema$Part* part = getXPButtonType(b);
	bool var$1 = $nc(b)->isContentAreaFilled();
	bool var$0 = var$1 && b->getBorder() != nullptr;
	if (var$0 && b->isBorderPainted() && xp != nullptr) {
		$var($XPStyle$Skin, skin, xp->getSkin(b, part));
		$TMSchema$State* state = getXPButtonState(b);
		$var($Dimension, d, $nc(c)->getSize());
		int32_t dx = 0;
		int32_t dy = 0;
		int32_t dw = $nc(d)->width;
		int32_t dh = d->height;
		$var($Border, border, c->getBorder());
		$var($Insets, insets, nullptr);
		if (border != nullptr) {
			$assign(insets, WindowsButtonUI::getOpaqueInsets(border, c));
		} else {
			$assign(insets, c->getInsets());
		}
		if (insets != nullptr) {
			dx += insets->left;
			dy += insets->top;
			dw -= (insets->left + insets->right);
			dh -= (insets->top + insets->bottom);
		}
		$nc(skin)->paintSkin(g, dx, dy, dw, dh, state);
	}
}

$Insets* WindowsButtonUI::getOpaqueInsets($Border* b, $Component* c) {
	$init(WindowsButtonUI);
	$useLocalCurrentObjectStackCache();
	if (b == nullptr) {
		return nullptr;
	}
	if ($nc(b)->isBorderOpaque()) {
		return b->getBorderInsets(c);
	} else if ($instanceOf($CompoundBorder, b)) {
		$var($CompoundBorder, cb, $cast($CompoundBorder, b));
		$var($Insets, iOut, getOpaqueInsets($(cb->getOutsideBorder()), c));
		if (iOut != nullptr && iOut->equals($($nc($(cb->getOutsideBorder()))->getBorderInsets(c)))) {
			$var($Insets, iIn, getOpaqueInsets($(cb->getInsideBorder()), c));
			if (iIn == nullptr) {
				return iOut;
			} else {
				return $new($Insets, iOut->top + $nc(iIn)->top, iOut->left + iIn->left, iOut->bottom + iIn->bottom, iOut->right + iIn->right);
			}
		} else {
			return iOut;
		}
	} else {
		return nullptr;
	}
}

void clinit$WindowsButtonUI($Class* class$) {
	$assignStatic(WindowsButtonUI::WINDOWS_BUTTON_UI_KEY, $new($Object));
}

WindowsButtonUI::WindowsButtonUI() {
}

$Class* WindowsButtonUI::load$($String* name, bool initialize) {
	$loadClass(WindowsButtonUI, name, initialize, &_WindowsButtonUI_ClassInfo_, clinit$WindowsButtonUI, allocate$WindowsButtonUI);
	return class$;
}

$Class* WindowsButtonUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com