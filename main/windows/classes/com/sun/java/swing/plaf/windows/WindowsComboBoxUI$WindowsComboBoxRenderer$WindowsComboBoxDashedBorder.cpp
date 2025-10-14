#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder.h>

#include <com/sun/java/swing/plaf/windows/WindowsBorders$DashedBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer.h>
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
#include <jcpp.h>

using $WindowsBorders$DashedBorder = ::com::sun::java::swing::plaf::windows::WindowsBorders$DashedBorder;
using $WindowsComboBoxUI$WindowsComboBoxRenderer = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WindowsComboBoxRenderer;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder, this$0)},
	{}
};

$MethodInfo _WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer;Ljava/awt/Color;I)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::*)($WindowsComboBoxUI$WindowsComboBoxRenderer*,$Color*,int32_t)>(&WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::init$))},
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::*)($WindowsComboBoxUI$WindowsComboBoxRenderer*,$Color*)>(&WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WindowsComboBoxRenderer", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer", "WindowsComboBoxDashedBorder", $PRIVATE},
	{"com.sun.java.swing.plaf.windows.WindowsBorders$DashedBorder", "com.sun.java.swing.plaf.windows.WindowsBorders", "DashedBorder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder",
	"com.sun.java.swing.plaf.windows.WindowsBorders$DashedBorder",
	nullptr,
	_WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_FieldInfo_,
	_WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
};

$Object* allocate$WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder($Class* clazz) {
	return $of($alloc(WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder));
}

void WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::init$($WindowsComboBoxUI$WindowsComboBoxRenderer* this$0, $Color* color, int32_t thickness) {
	$set(this, this$0, this$0);
	$WindowsBorders$DashedBorder::init$(color, thickness);
}

void WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::init$($WindowsComboBoxUI$WindowsComboBoxRenderer* this$0, $Color* color) {
	$set(this, this$0, this$0);
	$WindowsBorders$DashedBorder::init$(color);
}

$Insets* WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::getBorderInsets($Component* c, $Insets* i) {
	return $new($Insets, 0, 2, 0, 0);
}

WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder() {
}

$Class* WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder, name, initialize, &_WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder_ClassInfo_, allocate$WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder);
	return class$;
}

$Class* WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com