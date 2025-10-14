#include <com/sun/java/swing/plaf/windows/XPStyle$XPImageBorder.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
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
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JToolBar = ::javax::swing::JToolBar;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _XPStyle$XPImageBorder_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, $FINAL | $SYNTHETIC, $field(XPStyle$XPImageBorder, this$0)},
	{"skin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, 0, $field(XPStyle$XPImageBorder, skin)},
	{}
};

$MethodInfo _XPStyle$XPImageBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/XPStyle;Ljava/awt/Component;Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, 0, $method(static_cast<void(XPStyle$XPImageBorder::*)($XPStyle*,$Component*,$TMSchema$Part*)>(&XPStyle$XPImageBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPStyle$XPImageBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.XPStyle$XPImageBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPImageBorder", $PRIVATE},
	{}
};

$ClassInfo _XPStyle$XPImageBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.XPStyle$XPImageBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_XPStyle$XPImageBorder_FieldInfo_,
	_XPStyle$XPImageBorder_MethodInfo_,
	nullptr,
	nullptr,
	_XPStyle$XPImageBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.XPStyle"
};

$Object* allocate$XPStyle$XPImageBorder($Class* clazz) {
	return $of($alloc(XPStyle$XPImageBorder));
}

int32_t XPStyle$XPImageBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool XPStyle$XPImageBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* XPStyle$XPImageBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* XPStyle$XPImageBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void XPStyle$XPImageBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void XPStyle$XPImageBorder::init$($XPStyle* this$0, $Component* c, $TMSchema$Part* part) {
	$set(this, this$0, this$0);
	$AbstractBorder::init$();
	$set(this, skin, this$0->getSkin(c, part));
}

void XPStyle$XPImageBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->skin)->paintSkin(g, x, y, width, height, nullptr);
}

$Insets* XPStyle$XPImageBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, margin, nullptr);
	$var($Insets, borderInsets, $nc(this->skin)->getContentMargin());
	if (borderInsets == nullptr) {
		$assign(borderInsets, $new($Insets, 0, 0, 0, 0));
	}
	if ($instanceOf($AbstractButton, c)) {
		$assign(margin, $nc(($cast($AbstractButton, c)))->getMargin());
	} else if ($instanceOf($JToolBar, c)) {
		$assign(margin, $nc(($cast($JToolBar, c)))->getMargin());
	} else if ($instanceOf($JTextComponent, c)) {
		$assign(margin, $nc(($cast($JTextComponent, c)))->getMargin());
	}
	$nc(insets)->top = (margin != nullptr ? $nc(margin)->top : 0) + $nc(borderInsets)->top;
	insets->left = (margin != nullptr ? margin->left : 0) + borderInsets->left;
	insets->bottom = (margin != nullptr ? margin->bottom : 0) + borderInsets->bottom;
	insets->right = (margin != nullptr ? margin->right : 0) + borderInsets->right;
	return insets;
}

XPStyle$XPImageBorder::XPStyle$XPImageBorder() {
}

$Class* XPStyle$XPImageBorder::load$($String* name, bool initialize) {
	$loadClass(XPStyle$XPImageBorder, name, initialize, &_XPStyle$XPImageBorder_ClassInfo_, allocate$XPStyle$XPImageBorder);
	return class$;
}

$Class* XPStyle$XPImageBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com