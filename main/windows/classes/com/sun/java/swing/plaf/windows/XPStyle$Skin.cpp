#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>

#include <com/sun/java/swing/plaf/windows/AnimationController.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$SkinPainter.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/windows/ThemeReader.h>
#include <sun/swing/CachedPainter.h>
#include <jcpp.h>

#undef BGTYPE
#undef NORMAL

using $AnimationController = ::com::sun::java::swing::plaf::windows::AnimationController;
using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$SkinPainter = ::com::sun::java::swing::plaf::windows::XPStyle$SkinPainter;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ThemeReader = ::sun::awt::windows::ThemeReader;
using $CachedPainter = ::sun::swing::CachedPainter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _XPStyle$Skin_FieldInfo_[] = {
	{"component", "Ljava/awt/Component;", nullptr, $FINAL, $field(XPStyle$Skin, component)},
	{"part", "Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $FINAL, $field(XPStyle$Skin, part)},
	{"state", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $FINAL, $field(XPStyle$Skin, state)},
	{"string", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPStyle$Skin, string)},
	{"size", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(XPStyle$Skin, size)},
	{"switchStates", "Z", nullptr, $PRIVATE, $field(XPStyle$Skin, switchStates$)},
	{}
};

$MethodInfo _XPStyle$Skin_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, 0, $method(static_cast<void(XPStyle$Skin::*)($Component*,$TMSchema$Part*)>(&XPStyle$Skin::init$))},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, 0, $method(static_cast<void(XPStyle$Skin::*)($TMSchema$Part*,$TMSchema$State*)>(&XPStyle$Skin::init$))},
	{"<init>", "(Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, 0, $method(static_cast<void(XPStyle$Skin::*)($Component*,$TMSchema$Part*,$TMSchema$State*)>(&XPStyle$Skin::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getContentMargin", "()Ljava/awt/Insets;", nullptr, 0},
	{"getHeight", "(Lcom/sun/java/swing/plaf/windows/TMSchema$State;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XPStyle$Skin::*)($TMSchema$State*)>(&XPStyle$Skin::getHeight))},
	{"getHeight", "()I", nullptr, 0},
	{"getWidth", "(Lcom/sun/java/swing/plaf/windows/TMSchema$State;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XPStyle$Skin::*)($TMSchema$State*)>(&XPStyle$Skin::getWidth))},
	{"getWidth", "()I", nullptr, 0},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"haveToSwitchStates", "()Z", nullptr, 0},
	{"paintSkin", "(Ljava/awt/Graphics;IILcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, 0},
	{"paintSkin", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;Lcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, 0},
	{"paintSkin", "(Ljava/awt/Graphics;IIIILcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, 0},
	{"paintSkin", "(Ljava/awt/Graphics;IIIILcom/sun/java/swing/plaf/windows/TMSchema$State;Z)V", nullptr, 0},
	{"paintSkinRaw", "(Ljava/awt/Graphics;IIIILcom/sun/java/swing/plaf/windows/TMSchema$State;)V", nullptr, 0},
	{"switchStates", "(Z)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPStyle$Skin_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.XPStyle$Skin", "com.sun.java.swing.plaf.windows.XPStyle", "Skin", $STATIC},
	{}
};

$ClassInfo _XPStyle$Skin_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.XPStyle$Skin",
	"java.lang.Object",
	nullptr,
	_XPStyle$Skin_FieldInfo_,
	_XPStyle$Skin_MethodInfo_,
	nullptr,
	nullptr,
	_XPStyle$Skin_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.XPStyle"
};

$Object* allocate$XPStyle$Skin($Class* clazz) {
	return $of($alloc(XPStyle$Skin));
}

void XPStyle$Skin::init$($Component* component, $TMSchema$Part* part) {
	XPStyle$Skin::init$(component, part, nullptr);
}

void XPStyle$Skin::init$($TMSchema$Part* part, $TMSchema$State* state) {
	XPStyle$Skin::init$(nullptr, part, state);
}

void XPStyle$Skin::init$($Component* component, $TMSchema$Part* part, $TMSchema$State* state) {
	$useLocalCurrentObjectStackCache();
	$set(this, size, nullptr);
	this->switchStates$ = false;
	$set(this, component, component);
	$set(this, part, part);
	$set(this, state, state);
	$var($String, var$0, $$str({$($nc(part)->getControlName(component)), "."_s}));
	$var($String, str, $concat(var$0, $(part->name())));
	if (state != nullptr) {
		$plusAssign(str, $$str({"("_s, $(state->name()), ")"_s}));
	}
	$set(this, string, str);
}

$Insets* XPStyle$Skin::getContentMargin() {
	$useLocalCurrentObjectStackCache();
	int32_t boundingWidth = 100;
	int32_t boundingHeight = 100;
	$var($String, var$0, this->part->getControlName(nullptr));
	$var($Insets, insets, $ThemeReader::getThemeBackgroundContentMargins(var$0, this->part->getValue(), 0, boundingWidth, boundingHeight));
	return (insets != nullptr) ? insets : $new($Insets, 0, 0, 0, 0);
}

bool XPStyle$Skin::haveToSwitchStates() {
	return this->switchStates$;
}

void XPStyle$Skin::switchStates(bool b) {
	this->switchStates$ = b;
}

int32_t XPStyle$Skin::getWidth($TMSchema$State* state) {
	if (this->size == nullptr) {
		$set(this, size, $XPStyle::getPartSize(this->part, state));
	}
	return (this->size != nullptr) ? $nc(this->size)->width : 0;
}

int32_t XPStyle$Skin::getWidth() {
	$init($TMSchema$State);
	return getWidth((this->state != nullptr) ? this->state : $TMSchema$State::NORMAL);
}

int32_t XPStyle$Skin::getHeight($TMSchema$State* state) {
	if (this->size == nullptr) {
		$set(this, size, $XPStyle::getPartSize(this->part, state));
	}
	return (this->size != nullptr) ? $nc(this->size)->height : 0;
}

int32_t XPStyle$Skin::getHeight() {
	$init($TMSchema$State);
	return getHeight((this->state != nullptr) ? this->state : $TMSchema$State::NORMAL);
}

$String* XPStyle$Skin::toString() {
	return this->string;
}

bool XPStyle$Skin::equals(Object$* obj) {
	return ($instanceOf(XPStyle$Skin, obj) && $nc($nc(($cast(XPStyle$Skin, obj)))->string)->equals(this->string));
}

int32_t XPStyle$Skin::hashCode() {
	return $nc(this->string)->hashCode();
}

void XPStyle$Skin::paintSkin($Graphics* g, int32_t dx, int32_t dy, $TMSchema$State* state$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($TMSchema$State, state, state$renamed);
	if (state == nullptr) {
		state = this->state;
	}
	$var($Graphics, var$0, g);
	int32_t var$1 = dx;
	int32_t var$2 = dy;
	int32_t var$3 = getWidth(state);
	paintSkin(var$0, var$1, var$2, var$3, getHeight(state), state);
}

void XPStyle$Skin::paintSkin($Graphics* g, $Rectangle* r, $TMSchema$State* state) {
	paintSkin(g, $nc(r)->x, r->y, r->width, r->height, state);
}

void XPStyle$Skin::paintSkin($Graphics* g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, $TMSchema$State* state) {
	if ($XPStyle::getXP() == nullptr) {
		return;
	}
	$load($CellRendererPane);
	if ($instanceOf($JComponent, this->component) && $SwingUtilities::getAncestorOfClass($CellRendererPane::class$, this->component) == nullptr) {
		$AnimationController::paintSkin($cast($JComponent, this->component), this, g, dx, dy, dw, dh, state);
	} else {
		paintSkinRaw(g, dx, dy, dw, dh, state);
	}
}

void XPStyle$Skin::paintSkinRaw($Graphics* g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, $TMSchema$State* state) {
	if ($XPStyle::getXP() == nullptr) {
		return;
	}
	$nc($XPStyle::skinPainter)->paint(nullptr, g, dx, dy, dw, dh, $$new($ObjectArray, {
		$of(this),
		$of(state)
	}));
}

void XPStyle$Skin::paintSkin($Graphics* g, int32_t dx, int32_t dy, int32_t dw, int32_t dh, $TMSchema$State* state, bool borderFill) {
	$useLocalCurrentObjectStackCache();
	if ($XPStyle::getXP() == nullptr) {
		return;
	}
	$init($TMSchema$Prop);
	if (borderFill && "borderfill"_s->equals($($XPStyle::getTypeEnumName(this->component, this->part, state, $TMSchema$Prop::BGTYPE)))) {
		return;
	}
	$nc($XPStyle::skinPainter)->paint(nullptr, g, dx, dy, dw, dh, $$new($ObjectArray, {
		$of(this),
		$of(state)
	}));
}

XPStyle$Skin::XPStyle$Skin() {
}

$Class* XPStyle$Skin::load$($String* name, bool initialize) {
	$loadClass(XPStyle$Skin, name, initialize, &_XPStyle$Skin_ClassInfo_, allocate$XPStyle$Skin);
	return class$;
}

$Class* XPStyle$Skin::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com