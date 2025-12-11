#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$1.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <sun/swing/WindowsPlacesBar.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $WindowsPlacesBar = ::sun::swing::WindowsPlacesBar;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$1, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;Ljava/lang/String;I)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$1::*)($WindowsFileChooserUI*,$String*,int32_t)>(&WindowsFileChooserUI$1::init$))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$1",
	"javax.swing.JLabel",
	nullptr,
	_WindowsFileChooserUI$1_FieldInfo_,
	_WindowsFileChooserUI$1_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$1_EnclosingMethodInfo_,
	_WindowsFileChooserUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$1($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$1));
}

void WindowsFileChooserUI$1::init$($WindowsFileChooserUI* this$0, $String* text, int32_t horizontalAlignment) {
	$set(this, this$0, this$0);
	$JLabel::init$(text, horizontalAlignment);
}

$Dimension* WindowsFileChooserUI$1::getPreferredSize() {
	return getMinimumSize();
}

$Dimension* WindowsFileChooserUI$1::getMinimumSize() {
	$var($Dimension, d, $JLabel::getPreferredSize());
	if (this->this$0->placesBar != nullptr) {
		$nc(d)->width = $Math::max(d->width, $nc(this->this$0->placesBar)->getWidth());
	}
	return d;
}

WindowsFileChooserUI$1::WindowsFileChooserUI$1() {
}

$Class* WindowsFileChooserUI$1::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$1, name, initialize, &_WindowsFileChooserUI$1_ClassInfo_, allocate$WindowsFileChooserUI$1);
	return class$;
}

$Class* WindowsFileChooserUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com