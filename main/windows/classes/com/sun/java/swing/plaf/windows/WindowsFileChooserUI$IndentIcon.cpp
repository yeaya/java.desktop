#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$IndentIcon.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$IndentIcon_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$IndentIcon, this$0)},
	{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(WindowsFileChooserUI$IndentIcon, icon)},
	{"depth", "I", nullptr, 0, $field(WindowsFileChooserUI$IndentIcon, depth)},
	{}
};

$MethodInfo _WindowsFileChooserUI$IndentIcon_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$IndentIcon::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$IndentIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileChooserUI$IndentIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$IndentIcon", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "IndentIcon", 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$IndentIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$IndentIcon",
	"java.lang.Object",
	"javax.swing.Icon",
	_WindowsFileChooserUI$IndentIcon_FieldInfo_,
	_WindowsFileChooserUI$IndentIcon_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileChooserUI$IndentIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$IndentIcon($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$IndentIcon));
}

void WindowsFileChooserUI$IndentIcon::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$set(this, icon, nullptr);
	this->depth = 0;
}

void WindowsFileChooserUI$IndentIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	if ($nc($($nc(c)->getComponentOrientation()))->isLeftToRight()) {
		$nc(this->icon)->paintIcon(c, g, x + this->depth * 10, y);
	} else {
		$nc(this->icon)->paintIcon(c, g, x, y);
	}
}

int32_t WindowsFileChooserUI$IndentIcon::getIconWidth() {
	return $nc(this->icon)->getIconWidth() + this->depth * 10;
}

int32_t WindowsFileChooserUI$IndentIcon::getIconHeight() {
	return $nc(this->icon)->getIconHeight();
}

WindowsFileChooserUI$IndentIcon::WindowsFileChooserUI$IndentIcon() {
}

$Class* WindowsFileChooserUI$IndentIcon::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$IndentIcon, name, initialize, &_WindowsFileChooserUI$IndentIcon_ClassInfo_, allocate$WindowsFileChooserUI$IndentIcon);
	return class$;
}

$Class* WindowsFileChooserUI$IndentIcon::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com