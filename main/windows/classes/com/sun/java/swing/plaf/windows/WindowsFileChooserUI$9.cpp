#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$9.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Dimension.h>
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

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$9_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$9, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$9_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$9::*)($WindowsFileChooserUI*,$String*)>(&WindowsFileChooserUI$9::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$9_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$9_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$9", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$9_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$9",
	"javax.swing.JButton",
	nullptr,
	_WindowsFileChooserUI$9_FieldInfo_,
	_WindowsFileChooserUI$9_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$9_EnclosingMethodInfo_,
	_WindowsFileChooserUI$9_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$9($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$9));
}

void WindowsFileChooserUI$9::init$($WindowsFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JButton::init$(text);
}

$Dimension* WindowsFileChooserUI$9::getMaximumSize() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc($($nc(this->this$0->approveButton)->getPreferredSize()))->width;
	return var$0 > $nc($($nc(this->this$0->cancelButton)->getPreferredSize()))->width ? $nc(this->this$0->approveButton)->getPreferredSize() : $nc(this->this$0->cancelButton)->getPreferredSize();
}

WindowsFileChooserUI$9::WindowsFileChooserUI$9() {
}

$Class* WindowsFileChooserUI$9::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$9, name, initialize, &_WindowsFileChooserUI$9_ClassInfo_, allocate$WindowsFileChooserUI$9);
	return class$;
}

$Class* WindowsFileChooserUI$9::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com