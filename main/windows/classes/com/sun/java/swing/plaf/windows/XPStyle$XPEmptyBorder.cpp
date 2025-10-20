#include <com/sun/java/swing/plaf/windows/XPStyle$XPEmptyBorder.h>

#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JToolBar = ::javax::swing::JToolBar;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _XPStyle$XPEmptyBorder_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, $FINAL | $SYNTHETIC, $field(XPStyle$XPEmptyBorder, this$0)},
	{}
};

$MethodInfo _XPStyle$XPEmptyBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/XPStyle;Ljava/awt/Insets;)V", nullptr, 0, $method(static_cast<void(XPStyle$XPEmptyBorder::*)($XPStyle*,$Insets*)>(&XPStyle$XPEmptyBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPStyle$XPEmptyBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.XPStyle$XPEmptyBorder", "com.sun.java.swing.plaf.windows.XPStyle", "XPEmptyBorder", $PRIVATE},
	{}
};

$ClassInfo _XPStyle$XPEmptyBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.XPStyle$XPEmptyBorder",
	"javax.swing.border.EmptyBorder",
	"javax.swing.plaf.UIResource",
	_XPStyle$XPEmptyBorder_FieldInfo_,
	_XPStyle$XPEmptyBorder_MethodInfo_,
	nullptr,
	nullptr,
	_XPStyle$XPEmptyBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.XPStyle"
};

$Object* allocate$XPStyle$XPEmptyBorder($Class* clazz) {
	return $of($alloc(XPStyle$XPEmptyBorder));
}

int32_t XPStyle$XPEmptyBorder::hashCode() {
	 return this->$EmptyBorder::hashCode();
}

bool XPStyle$XPEmptyBorder::equals(Object$* arg0) {
	 return this->$EmptyBorder::equals(arg0);
}

$Object* XPStyle$XPEmptyBorder::clone() {
	 return this->$EmptyBorder::clone();
}

$String* XPStyle$XPEmptyBorder::toString() {
	 return this->$EmptyBorder::toString();
}

void XPStyle$XPEmptyBorder::finalize() {
	this->$EmptyBorder::finalize();
}

void XPStyle$XPEmptyBorder::init$($XPStyle* this$0, $Insets* m) {
	$set(this, this$0, this$0);
	$EmptyBorder::init$($nc(m)->top + 2, m->left + 2, m->bottom + 2, m->right + 2);
}

$Insets* XPStyle$XPEmptyBorder::getBorderInsets($Component* c, $Insets* insets$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, insets$renamed);
	$assign(insets, $EmptyBorder::getBorderInsets(c, insets));
	$var($Insets, margin, nullptr);
	if ($instanceOf($AbstractButton, c)) {
		$var($Insets, m, $nc(($cast($AbstractButton, c)))->getMargin());
		if ($instanceOf($JToolBar, $($nc(c)->getParent())) && !($instanceOf($JRadioButton, c)) && !($instanceOf($JCheckBox, c)) && $instanceOf($InsetsUIResource, m)) {
			$nc(insets)->top -= 2;
			insets->left -= 2;
			insets->bottom -= 2;
			insets->right -= 2;
		} else {
			$assign(margin, m);
		}
	} else if ($instanceOf($JToolBar, c)) {
		$assign(margin, $nc(($cast($JToolBar, c)))->getMargin());
	} else if ($instanceOf($JTextComponent, c)) {
		$assign(margin, $nc(($cast($JTextComponent, c)))->getMargin());
	}
	if (margin != nullptr) {
		$nc(insets)->top = margin->top + 2;
		insets->left = margin->left + 2;
		insets->bottom = margin->bottom + 2;
		insets->right = margin->right + 2;
	}
	return insets;
}

XPStyle$XPEmptyBorder::XPStyle$XPEmptyBorder() {
}

$Class* XPStyle$XPEmptyBorder::load$($String* name, bool initialize) {
	$loadClass(XPStyle$XPEmptyBorder, name, initialize, &_XPStyle$XPEmptyBorder_ClassInfo_, allocate$XPStyle$XPEmptyBorder);
	return class$;
}

$Class* XPStyle$XPEmptyBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com