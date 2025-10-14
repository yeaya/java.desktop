#include <com/sun/java/swing/plaf/windows/XPStyle$XPFillBorder.h>

#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
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
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JToolBar = ::javax::swing::JToolBar;
using $LineBorder = ::javax::swing::border::LineBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _XPStyle$XPFillBorder_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, $FINAL | $SYNTHETIC, $field(XPStyle$XPFillBorder, this$0)},
	{}
};

$MethodInfo _XPStyle$XPFillBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/XPStyle;Ljava/awt/Color;I)V", nullptr, 0, $method(static_cast<void(XPStyle$XPFillBorder::*)($XPStyle*,$Color*,int32_t)>(&XPStyle$XPFillBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPStyle$XPFillBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.XPStyle$XPFillBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPFillBorder", $PRIVATE},
	{}
};

$ClassInfo _XPStyle$XPFillBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.XPStyle$XPFillBorder",
	"javax.swing.border.LineBorder",
	"javax.swing.plaf.UIResource",
	_XPStyle$XPFillBorder_FieldInfo_,
	_XPStyle$XPFillBorder_MethodInfo_,
	nullptr,
	nullptr,
	_XPStyle$XPFillBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.XPStyle"
};

$Object* allocate$XPStyle$XPFillBorder($Class* clazz) {
	return $of($alloc(XPStyle$XPFillBorder));
}

int32_t XPStyle$XPFillBorder::hashCode() {
	 return this->$LineBorder::hashCode();
}

bool XPStyle$XPFillBorder::equals(Object$* arg0) {
	 return this->$LineBorder::equals(arg0);
}

$Object* XPStyle$XPFillBorder::clone() {
	 return this->$LineBorder::clone();
}

$String* XPStyle$XPFillBorder::toString() {
	 return this->$LineBorder::toString();
}

void XPStyle$XPFillBorder::finalize() {
	this->$LineBorder::finalize();
}

void XPStyle$XPFillBorder::init$($XPStyle* this$0, $Color* color, int32_t thickness) {
	$set(this, this$0, this$0);
	$LineBorder::init$(color, thickness);
}

$Insets* XPStyle$XPFillBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, margin, nullptr);
	if ($instanceOf($AbstractButton, c)) {
		$assign(margin, $nc(($cast($AbstractButton, c)))->getMargin());
	} else if ($instanceOf($JToolBar, c)) {
		$assign(margin, $nc(($cast($JToolBar, c)))->getMargin());
	} else if ($instanceOf($JTextComponent, c)) {
		$assign(margin, $nc(($cast($JTextComponent, c)))->getMargin());
	}
	$nc(insets)->top = (margin != nullptr ? $nc(margin)->top : 0) + this->thickness;
	insets->left = (margin != nullptr ? margin->left : 0) + this->thickness;
	insets->bottom = (margin != nullptr ? margin->bottom : 0) + this->thickness;
	insets->right = (margin != nullptr ? margin->right : 0) + this->thickness;
	return insets;
}

XPStyle$XPFillBorder::XPStyle$XPFillBorder() {
}

$Class* XPStyle$XPFillBorder::load$($String* name, bool initialize) {
	$loadClass(XPStyle$XPFillBorder, name, initialize, &_XPStyle$XPFillBorder_ClassInfo_, allocate$XPStyle$XPFillBorder);
	return class$;
}

$Class* XPStyle$XPFillBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com