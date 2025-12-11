#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$2.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$2, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$2::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$2::init$))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$2_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$2_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$2",
	"javax.swing.JComboBox",
	nullptr,
	_WindowsFileChooserUI$2_FieldInfo_,
	_WindowsFileChooserUI$2_MethodInfo_,
	"Ljavax/swing/JComboBox<Ljava/io/File;>;",
	&_WindowsFileChooserUI$2_EnclosingMethodInfo_,
	_WindowsFileChooserUI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$2($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$2));
}

void WindowsFileChooserUI$2::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JComboBox::init$();
}

$Dimension* WindowsFileChooserUI$2::getMinimumSize() {
	$var($Dimension, d, $JComboBox::getMinimumSize());
	$nc(d)->width = 60;
	return d;
}

$Dimension* WindowsFileChooserUI$2::getPreferredSize() {
	$var($Dimension, d, $JComboBox::getPreferredSize());
	$nc(d)->width = 150;
	return d;
}

WindowsFileChooserUI$2::WindowsFileChooserUI$2() {
}

$Class* WindowsFileChooserUI$2::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$2, name, initialize, &_WindowsFileChooserUI$2_ClassInfo_, allocate$WindowsFileChooserUI$2);
	return class$;
}

$Class* WindowsFileChooserUI$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com