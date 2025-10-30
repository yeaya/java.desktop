#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI$IconBorder.h>

#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/Icon.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

using $WindowsTableHeaderUI = ::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $Border = ::javax::swing::border::Border;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsTableHeaderUI$IconBorder_FieldInfo_[] = {
	{"icon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $FINAL, $field(WindowsTableHeaderUI$IconBorder, icon)},
	{"top", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsTableHeaderUI$IconBorder, top)},
	{"left", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsTableHeaderUI$IconBorder, left)},
	{"bottom", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsTableHeaderUI$IconBorder, bottom)},
	{"right", "I", nullptr, $PRIVATE | $FINAL, $field(WindowsTableHeaderUI$IconBorder, right)},
	{}
};

$MethodInfo _WindowsTableHeaderUI$IconBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/Icon;IIII)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsTableHeaderUI$IconBorder::*)($Icon*,int32_t,int32_t,int32_t,int32_t)>(&WindowsTableHeaderUI$IconBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTableHeaderUI$IconBorder_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$IconBorder", "com.sun.java.swing.plaf.windows.WindowsTableHeaderUI", "IconBorder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _WindowsTableHeaderUI$IconBorder_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$IconBorder",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource",
	_WindowsTableHeaderUI$IconBorder_FieldInfo_,
	_WindowsTableHeaderUI$IconBorder_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTableHeaderUI$IconBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI"
};

$Object* allocate$WindowsTableHeaderUI$IconBorder($Class* clazz) {
	return $of($alloc(WindowsTableHeaderUI$IconBorder));
}

int32_t WindowsTableHeaderUI$IconBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool WindowsTableHeaderUI$IconBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* WindowsTableHeaderUI$IconBorder::clone() {
	 return this->$Border::clone();
}

$String* WindowsTableHeaderUI$IconBorder::toString() {
	 return this->$Border::toString();
}

void WindowsTableHeaderUI$IconBorder::finalize() {
	this->$Border::finalize();
}

void WindowsTableHeaderUI$IconBorder::init$($Icon* icon, int32_t top, int32_t left, int32_t bottom, int32_t right) {
	$set(this, icon, icon);
	this->top = top;
	this->left = left;
	this->bottom = bottom;
	this->right = right;
}

$Insets* WindowsTableHeaderUI$IconBorder::getBorderInsets($Component* c) {
	return $new($Insets, $nc(this->icon)->getIconHeight() + this->top, this->left, this->bottom, this->right);
}

bool WindowsTableHeaderUI$IconBorder::isBorderOpaque() {
	return false;
}

void WindowsTableHeaderUI$IconBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$nc(this->icon)->paintIcon(c, g, x + this->left + (width - this->left - this->right - $nc(this->icon)->getIconWidth()) / 2, y + this->top);
}

WindowsTableHeaderUI$IconBorder::WindowsTableHeaderUI$IconBorder() {
}

$Class* WindowsTableHeaderUI$IconBorder::load$($String* name, bool initialize) {
	$loadClass(WindowsTableHeaderUI$IconBorder, name, initialize, &_WindowsTableHeaderUI$IconBorder_ClassInfo_, allocate$WindowsTableHeaderUI$IconBorder);
	return class$;
}

$Class* WindowsTableHeaderUI$IconBorder::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com