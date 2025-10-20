#include <com/sun/java/swing/plaf/windows/XPStyle$GlyphButton.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef DISABLED
#undef HOT
#undef MAX_VALUE
#undef NORMAL
#undef PRESSED

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _XPStyle$GlyphButton_FieldInfo_[] = {
	{"skin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, $PROTECTED, $field(XPStyle$GlyphButton, skin)},
	{}
};

$MethodInfo _XPStyle$GlyphButton_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, $PUBLIC, $method(static_cast<void(XPStyle$GlyphButton::*)($Component*,$TMSchema$Part*)>(&XPStyle$GlyphButton::init$))},
	{"getState", "()Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PROTECTED},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setPart", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPStyle$GlyphButton_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.XPStyle$GlyphButton", "com.sun.java.swing.plaf.windows.XPStyle", "GlyphButton", $STATIC},
	{}
};

$ClassInfo _XPStyle$GlyphButton_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.XPStyle$GlyphButton",
	"javax.swing.JButton",
	nullptr,
	_XPStyle$GlyphButton_FieldInfo_,
	_XPStyle$GlyphButton_MethodInfo_,
	nullptr,
	nullptr,
	_XPStyle$GlyphButton_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.XPStyle"
};

$Object* allocate$XPStyle$GlyphButton($Class* clazz) {
	return $of($alloc(XPStyle$GlyphButton));
}

void XPStyle$GlyphButton::init$($Component* parent, $TMSchema$Part* part) {
	$useLocalCurrentObjectStackCache();
	$JButton::init$();
	$var($XPStyle, xp, $XPStyle::getXP());
	$set(this, skin, xp != nullptr ? $nc(xp)->getSkin(parent, part) : ($XPStyle$Skin*)nullptr);
	setBorder(nullptr);
	setContentAreaFilled(false);
	setMinimumSize($$new($Dimension, 5, 5));
	setPreferredSize($$new($Dimension, 16, 16));
	setMaximumSize($$new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE));
}

bool XPStyle$GlyphButton::isFocusTraversable() {
	return false;
}

$TMSchema$State* XPStyle$GlyphButton::getState() {
	$useLocalCurrentObjectStackCache();
	$init($TMSchema$State);
	$TMSchema$State* state = $TMSchema$State::NORMAL;
	if (!isEnabled()) {
		state = $TMSchema$State::DISABLED;
	} else if ($nc($(getModel()))->isPressed()) {
		state = $TMSchema$State::PRESSED;
	} else if ($nc($(getModel()))->isRollover()) {
		state = $TMSchema$State::HOT;
	}
	return state;
}

void XPStyle$GlyphButton::paintComponent($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if ($XPStyle::getXP() == nullptr || this->skin == nullptr) {
		return;
	}
	$var($Dimension, d, getSize());
	$nc(this->skin)->paintSkin(g, 0, 0, $nc(d)->width, d->height, $(getState()));
}

void XPStyle$GlyphButton::setPart($Component* parent, $TMSchema$Part* part) {
	$var($XPStyle, xp, $XPStyle::getXP());
	$set(this, skin, xp != nullptr ? $nc(xp)->getSkin(parent, part) : ($XPStyle$Skin*)nullptr);
	revalidate();
	repaint();
}

void XPStyle$GlyphButton::paintBorder($Graphics* g) {
}

XPStyle$GlyphButton::XPStyle$GlyphButton() {
}

$Class* XPStyle$GlyphButton::load$($String* name, bool initialize) {
	$loadClass(XPStyle$GlyphButton, name, initialize, &_XPStyle$GlyphButton_ClassInfo_, allocate$XPStyle$GlyphButton);
	return class$;
}

$Class* XPStyle$GlyphButton::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com