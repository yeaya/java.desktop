#include <com/sun/java/swing/plaf/windows/XPStyle.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$TypeEnum.h>
#include <com/sun/java/swing/plaf/windows/WindowsClassicLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$SkinPainter.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$XPEmptyBorder.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$XPFillBorder.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$XPImageBorder.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$XPStatefulFillBorder.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Toolkit.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/HashMap.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <sun/awt/windows/ThemeReader.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef BGTYPE
#undef BORDERCOLOR
#undef BORDERONLY
#undef BORDERSIZE
#undef CP_COMBOBOX
#undef CP_DROPDOWNBUTTONRIGHT
#undef FALSE
#undef FLATMENUS
#undef MENU
#undef SIZINGMARGINS
#undef TP_BUTTON

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $TMSchema$TypeEnum = ::com::sun::java::swing::plaf::windows::TMSchema$TypeEnum;
using $WindowsClassicLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsClassicLookAndFeel;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $XPStyle$SkinPainter = ::com::sun::java::swing::plaf::windows::XPStyle$SkinPainter;
using $XPStyle$XPEmptyBorder = ::com::sun::java::swing::plaf::windows::XPStyle$XPEmptyBorder;
using $XPStyle$XPFillBorder = ::com::sun::java::swing::plaf::windows::XPStyle$XPFillBorder;
using $XPStyle$XPImageBorder = ::com::sun::java::swing::plaf::windows::XPStyle$XPImageBorder;
using $XPStyle$XPStatefulFillBorder = ::com::sun::java::swing::plaf::windows::XPStyle$XPStatefulFillBorder;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Toolkit = ::java::awt::Toolkit;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $HashMap = ::java::util::HashMap;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ThemeReader = ::sun::awt::windows::ThemeReader;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _XPStyle_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XPStyle, $assertionsDisabled)},
	{"xp", "Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, $PRIVATE | $STATIC, $staticField(XPStyle, xp)},
	{"skinPainter", "Lcom/sun/java/swing/plaf/windows/XPStyle$SkinPainter;", nullptr, $PRIVATE | $STATIC, $staticField(XPStyle, skinPainter)},
	{"themeActive", "Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC, $staticField(XPStyle, themeActive)},
	{"borderMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljavax/swing/border/Border;>;", $PRIVATE, $field(XPStyle, borderMap)},
	{"colorMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/awt/Color;>;", $PRIVATE, $field(XPStyle, colorMap)},
	{"flatMenus", "Z", nullptr, $PRIVATE, $field(XPStyle, flatMenus)},
	{}
};

$MethodInfo _XPStyle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XPStyle::*)()>(&XPStyle::init$))},
	{"getBoolean", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)Z", nullptr, $PRIVATE, $method(static_cast<bool(XPStyle::*)($Component*,$TMSchema$Part*,$TMSchema$State*,$TMSchema$Prop*)>(&XPStyle::getBoolean))},
	{"getBorder", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)Ljavax/swing/border/Border;", nullptr, $SYNCHRONIZED},
	{"getColor", "(Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, $SYNCHRONIZED},
	{"getColor", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;Ljava/awt/Color;)Ljava/awt/Color;", nullptr, 0},
	{"getDimension", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)Ljava/awt/Dimension;", nullptr, 0},
	{"getInt", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;I)I", nullptr, 0},
	{"getMargin", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)Ljava/awt/Insets;", nullptr, 0},
	{"getPartSize", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)Ljava/awt/Dimension;", nullptr, $STATIC, $method(static_cast<$Dimension*(*)($TMSchema$Part*,$TMSchema$State*)>(&XPStyle::getPartSize))},
	{"getPoint", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)Ljava/awt/Point;", nullptr, 0},
	{"getSkin", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $SYNCHRONIZED},
	{"getString", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)Ljava/lang/String;", nullptr, 0},
	{"getSysBoolean", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($TMSchema$Prop*)>(&XPStyle::getSysBoolean))},
	{"getThemeTransitionDuration", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)J", nullptr, 0},
	{"getTypeEnum", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)Lcom/sun/java/swing/plaf/windows/TMSchema$TypeEnum;", nullptr, 0},
	{"getTypeEnumName", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($Component*,$TMSchema$Part*,$TMSchema$State*,$TMSchema$Prop*)>(&XPStyle::getTypeEnumName))},
	{"getXP", "()Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<XPStyle*(*)()>(&XPStyle::getXP))},
	{"invalidateStyle", "()V", nullptr, $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&XPStyle::invalidateStyle))},
	{"isSkinDefined", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)Z", nullptr, 0},
	{"isVista", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&XPStyle::isVista))},
	{}
};

$InnerClassInfo _XPStyle_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.XPStyle$GlyphButton", "com.sun.java.swing.plaf.windows.XPStyle", "GlyphButton", $STATIC},
	{"com.sun.java.swing.plaf.windows.XPStyle$SkinPainter", "com.sun.java.swing.plaf.windows.XPStyle", "SkinPainter", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.XPStyle$Skin", "com.sun.java.swing.plaf.windows.XPStyle", "Skin", $STATIC},
	{"com.sun.java.swing.plaf.windows.XPStyle$XPEmptyBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPEmptyBorder", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.XPStyle$XPImageBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPImageBorder", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.XPStyle$XPStatefulFillBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPStatefulFillBorder", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.XPStyle$XPFillBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPFillBorder", $PRIVATE},
	{}
};

$ClassInfo _XPStyle_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.XPStyle",
	"java.lang.Object",
	nullptr,
	_XPStyle_FieldInfo_,
	_XPStyle_MethodInfo_,
	nullptr,
	nullptr,
	_XPStyle_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.XPStyle$GlyphButton,com.sun.java.swing.plaf.windows.XPStyle$SkinPainter,com.sun.java.swing.plaf.windows.XPStyle$Skin,com.sun.java.swing.plaf.windows.XPStyle$XPEmptyBorder,com.sun.java.swing.plaf.windows.XPStyle$XPImageBorder,com.sun.java.swing.plaf.windows.XPStyle$XPStatefulFillBorder,com.sun.java.swing.plaf.windows.XPStyle$XPFillBorder"
};

$Object* allocate$XPStyle($Class* clazz) {
	return $of($alloc(XPStyle));
}

bool XPStyle::$assertionsDisabled = false;
XPStyle* XPStyle::xp = nullptr;
$XPStyle$SkinPainter* XPStyle::skinPainter = nullptr;
$Boolean* XPStyle::themeActive = nullptr;

void XPStyle::invalidateStyle() {
	$load(XPStyle);
	$synchronized(class$) {
		$init(XPStyle);
		$assignStatic(XPStyle::xp, nullptr);
		$assignStatic(XPStyle::themeActive, nullptr);
		$nc(XPStyle::skinPainter)->flush();
	}
}

XPStyle* XPStyle::getXP() {
	$load(XPStyle);
	$synchronized(class$) {
		$init(XPStyle);
		$beforeCallerSensitive();
		if (XPStyle::themeActive == nullptr) {
			$var($Toolkit, toolkit, $Toolkit::getDefaultToolkit());
			$assignStatic(XPStyle::themeActive, $cast($Boolean, $nc(toolkit)->getDesktopProperty("win.xpstyle.themeActive"_s)));
			if (XPStyle::themeActive == nullptr) {
				$init($Boolean);
				$assignStatic(XPStyle::themeActive, $Boolean::FALSE);
			}
			if ($nc(XPStyle::themeActive)->booleanValue()) {
				$var($GetPropertyAction, propertyAction, $new($GetPropertyAction, "swing.noxp"_s));
				bool var$1 = $AccessController::doPrivileged(static_cast<$PrivilegedAction*>(propertyAction)) == nullptr;
				bool var$0 = var$1 && $ThemeReader::isThemed();
				if (var$0 && !($instanceOf($WindowsClassicLookAndFeel, $($UIManager::getLookAndFeel())))) {
					$assignStatic(XPStyle::xp, $new(XPStyle));
				}
			}
		}
		return $ThemeReader::isXPStyleEnabled() ? XPStyle::xp : (XPStyle*)nullptr;
	}
}

bool XPStyle::isVista() {
	$init(XPStyle);
	$var(XPStyle, xp, XPStyle::getXP());
	$init($TMSchema$Part);
	return (xp != nullptr && xp->isSkinDefined(nullptr, $TMSchema$Part::CP_DROPDOWNBUTTONRIGHT));
}

$String* XPStyle::getString($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	return getTypeEnumName(c, part, state, prop);
}

$TMSchema$TypeEnum* XPStyle::getTypeEnum($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	$var($String, var$0, $nc(part)->getControlName(c));
	int32_t var$1 = part->getValue();
	int32_t var$2 = $TMSchema$State::getValue(part, state);
	int32_t enumValue = $ThemeReader::getEnum(var$0, var$1, var$2, $nc(prop)->getValue());
	return $TMSchema$TypeEnum::getTypeEnum(prop, enumValue);
}

$String* XPStyle::getTypeEnumName($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	$init(XPStyle);
	$var($String, var$0, $nc(part)->getControlName(c));
	int32_t var$1 = part->getValue();
	int32_t var$2 = $TMSchema$State::getValue(part, state);
	int32_t enumValue = $ThemeReader::getEnum(var$0, var$1, var$2, $nc(prop)->getValue());
	if (enumValue == -1) {
		return nullptr;
	}
	return $nc($($TMSchema$TypeEnum::getTypeEnum(prop, enumValue)))->getName();
}

int32_t XPStyle::getInt($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop, int32_t fallback) {
	$var($String, var$0, $nc(part)->getControlName(c));
	int32_t var$1 = part->getValue();
	int32_t var$2 = $TMSchema$State::getValue(part, state);
	return $ThemeReader::getInt(var$0, var$1, var$2, $nc(prop)->getValue());
}

$Dimension* XPStyle::getDimension($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	$var($String, var$0, $nc(part)->getControlName(c));
	int32_t var$1 = part->getValue();
	int32_t var$2 = $TMSchema$State::getValue(part, state);
	$var($Dimension, d, $ThemeReader::getPosition(var$0, var$1, var$2, $nc(prop)->getValue()));
	return (d != nullptr) ? d : $new($Dimension);
}

$Point* XPStyle::getPoint($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	$var($String, var$0, $nc(part)->getControlName(c));
	int32_t var$1 = part->getValue();
	int32_t var$2 = $TMSchema$State::getValue(part, state);
	$var($Dimension, d, $ThemeReader::getPosition(var$0, var$1, var$2, $nc(prop)->getValue()));
	return (d != nullptr) ? $new($Point, $nc(d)->width, d->height) : $new($Point);
}

$Insets* XPStyle::getMargin($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	$var($String, var$0, $nc(part)->getControlName(c));
	int32_t var$1 = part->getValue();
	int32_t var$2 = $TMSchema$State::getValue(part, state);
	$var($Insets, insets, $ThemeReader::getThemeMargins(var$0, var$1, var$2, $nc(prop)->getValue()));
	return (insets != nullptr) ? insets : $new($Insets, 0, 0, 0, 0);
}

$Color* XPStyle::getColor($XPStyle$Skin* skin, $TMSchema$Prop* prop, $Color* fallback) {
	$synchronized(this) {
		$var($String, var$0, $$str({$($nc(skin)->toString()), "."_s}));
		$var($String, key, $concat(var$0, $($nc(prop)->name())));
		$TMSchema$Part* part = skin->part;
		$var($Color, color, $cast($Color, $nc(this->colorMap)->get(key)));
		if (color == nullptr) {
			$var($String, var$1, $nc(part)->getControlName(nullptr));
			int32_t var$2 = part->getValue();
			int32_t var$3 = $TMSchema$State::getValue(part, skin->state);
			$assign(color, $ThemeReader::getColor(var$1, var$2, var$3, prop->getValue()));
			if (color != nullptr) {
				$assign(color, $new($ColorUIResource, color));
				$nc(this->colorMap)->put(key, color);
			}
		}
		return (color != nullptr) ? color : fallback;
	}
}

$Color* XPStyle::getColor($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop, $Color* fallback) {
	return getColor($$new($XPStyle$Skin, c, part, state), prop, fallback);
}

$Border* XPStyle::getBorder($Component* c, $TMSchema$Part* part) {
	$synchronized(this) {
		$init($TMSchema$Part);
		if (part == $TMSchema$Part::MENU) {
			if (this->flatMenus) {
				return $new($XPStyle$XPFillBorder, this, $($UIManager::getColor("InternalFrame.borderShadow"_s)), 1);
			} else {
				return nullptr;
			}
		}
		$var($XPStyle$Skin, skin, $new($XPStyle$Skin, c, part, nullptr));
		$var($Border, border, $cast($Border, $nc(this->borderMap)->get(skin->string)));
		if (border == nullptr) {
			$init($TMSchema$Prop);
			$var($String, bgType, getTypeEnumName(c, part, nullptr, $TMSchema$Prop::BGTYPE));
			if ("borderfill"_s->equalsIgnoreCase(bgType)) {
				int32_t thickness = getInt(c, part, nullptr, $TMSchema$Prop::BORDERSIZE, 1);
				$init($Color);
				$var($Color, color, getColor(skin, $TMSchema$Prop::BORDERCOLOR, $Color::black));
				$assign(border, $new($XPStyle$XPFillBorder, this, color, thickness));
				if (part == $TMSchema$Part::CP_COMBOBOX) {
					$assign(border, $new($XPStyle$XPStatefulFillBorder, this, color, thickness, part, $TMSchema$Prop::BORDERCOLOR));
				}
			} else if ("imagefile"_s->equalsIgnoreCase(bgType)) {
				$var($Insets, m, getMargin(c, part, nullptr, $TMSchema$Prop::SIZINGMARGINS));
				if (m != nullptr) {
					if (getBoolean(c, part, nullptr, $TMSchema$Prop::BORDERONLY)) {
						$assign(border, $new($XPStyle$XPImageBorder, this, c, part));
					} else {
						if (part == $TMSchema$Part::CP_COMBOBOX) {
							$assign(border, $new($EmptyBorder, 1, 1, 1, 1));
						} else {
							if (part == $TMSchema$Part::TP_BUTTON) {
								$assign(border, $new($XPStyle$XPEmptyBorder, this, $$new($Insets, 3, 3, 3, 3)));
							} else {
								$assign(border, $new($XPStyle$XPEmptyBorder, this, m));
							}
						}
					}
				}
			}
			if (border != nullptr) {
				$nc(this->borderMap)->put(skin->string, border);
			}
		}
		return border;
	}
}

bool XPStyle::isSkinDefined($Component* c, $TMSchema$Part* part) {
	bool var$0 = ($nc(part)->getValue() == 0);
	if (!var$0) {
		$var($String, var$1, $nc(part)->getControlName(c));
		var$0 = $ThemeReader::isThemePartDefined(var$1, part->getValue(), 0);
	}
	return var$0;
}

$XPStyle$Skin* XPStyle::getSkin($Component* c, $TMSchema$Part* part) {
	$synchronized(this) {
		if (!XPStyle::$assertionsDisabled && !isSkinDefined(c, part)) {
			$throwNew($AssertionError, $of($$str({"part "_s, part, " is not defined"_s})));
		}
		return $new($XPStyle$Skin, c, part, nullptr);
	}
}

int64_t XPStyle::getThemeTransitionDuration($Component* c, $TMSchema$Part* part, $TMSchema$State* stateFrom, $TMSchema$State* stateTo, $TMSchema$Prop* prop) {
	$var($String, var$0, $nc(part)->getControlName(c));
	int32_t var$1 = part->getValue();
	int32_t var$2 = $TMSchema$State::getValue(part, stateFrom);
	int32_t var$3 = $TMSchema$State::getValue(part, stateTo);
	return $ThemeReader::getThemeTransitionDuration(var$0, var$1, var$2, var$3, (prop != nullptr) ? $nc(prop)->getValue() : 0);
}

void XPStyle::init$() {
	$init($TMSchema$Prop);
	this->flatMenus = getSysBoolean($TMSchema$Prop::FLATMENUS);
	$set(this, colorMap, $new($HashMap));
	$set(this, borderMap, $new($HashMap));
}

bool XPStyle::getBoolean($Component* c, $TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	$var($String, var$0, $nc(part)->getControlName(c));
	int32_t var$1 = part->getValue();
	int32_t var$2 = $TMSchema$State::getValue(part, state);
	return $ThemeReader::getBoolean(var$0, var$1, var$2, $nc(prop)->getValue());
}

$Dimension* XPStyle::getPartSize($TMSchema$Part* part, $TMSchema$State* state) {
	$init(XPStyle);
	$var($String, var$0, $nc(part)->getControlName(nullptr));
	int32_t var$1 = part->getValue();
	return $ThemeReader::getPartSize(var$0, var$1, $TMSchema$State::getValue(part, state));
}

bool XPStyle::getSysBoolean($TMSchema$Prop* prop) {
	$init(XPStyle);
	return $ThemeReader::getSysBoolean("window"_s, $nc(prop)->getValue());
}

void clinit$XPStyle($Class* class$) {
	XPStyle::$assertionsDisabled = !XPStyle::class$->desiredAssertionStatus();
	$assignStatic(XPStyle::skinPainter, $new($XPStyle$SkinPainter));
	$assignStatic(XPStyle::themeActive, nullptr);
	{
		XPStyle::invalidateStyle();
	}
}

XPStyle::XPStyle() {
}

$Class* XPStyle::load$($String* name, bool initialize) {
	$loadClass(XPStyle, name, initialize, &_XPStyle_ClassInfo_, clinit$XPStyle, allocate$XPStyle);
	return class$;
}

$Class* XPStyle::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com