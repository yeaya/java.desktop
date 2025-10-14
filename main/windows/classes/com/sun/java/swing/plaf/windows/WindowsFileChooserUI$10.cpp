#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$10.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$10_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$10, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$10_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$10::*)($WindowsFileChooserUI*,$String*)>(&WindowsFileChooserUI$10::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$10_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$10_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$10", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$10_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$10",
	"javax.swing.JButton",
	nullptr,
	_WindowsFileChooserUI$10_FieldInfo_,
	_WindowsFileChooserUI$10_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$10_EnclosingMethodInfo_,
	_WindowsFileChooserUI$10_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$10($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$10));
}

void WindowsFileChooserUI$10::init$($WindowsFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JButton::init$(text);
}

$Dimension* WindowsFileChooserUI$10::getMaximumSize() {
	int32_t var$0 = $nc($($nc(this->this$0->approveButton)->getPreferredSize()))->width;
	return var$0 > $nc($($nc(this->this$0->cancelButton)->getPreferredSize()))->width ? $nc(this->this$0->approveButton)->getPreferredSize() : $nc(this->this$0->cancelButton)->getPreferredSize();
}

WindowsFileChooserUI$10::WindowsFileChooserUI$10() {
}

$Class* WindowsFileChooserUI$10::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$10, name, initialize, &_WindowsFileChooserUI$10_ClassInfo_, allocate$WindowsFileChooserUI$10);
	return class$;
}

$Class* WindowsFileChooserUI$10::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com