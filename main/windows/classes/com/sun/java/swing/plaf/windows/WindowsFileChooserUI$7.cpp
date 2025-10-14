#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$7.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

#undef MAX_VALUE

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $JTextField = ::javax::swing::JTextField;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$7_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$7, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$7_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;I)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$7::*)($WindowsFileChooserUI*,int32_t)>(&WindowsFileChooserUI$7::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$7_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$7_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$7_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$7",
	"javax.swing.JTextField",
	nullptr,
	_WindowsFileChooserUI$7_FieldInfo_,
	_WindowsFileChooserUI$7_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$7_EnclosingMethodInfo_,
	_WindowsFileChooserUI$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$7($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$7));
}

void WindowsFileChooserUI$7::init$($WindowsFileChooserUI* this$0, int32_t columns) {
	$set(this, this$0, this$0);
	$JTextField::init$(columns);
}

$Dimension* WindowsFileChooserUI$7::getMaximumSize() {
	return $new($Dimension, $Short::MAX_VALUE, $nc($($JTextField::getPreferredSize()))->height);
}

WindowsFileChooserUI$7::WindowsFileChooserUI$7() {
}

$Class* WindowsFileChooserUI$7::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$7, name, initialize, &_WindowsFileChooserUI$7_ClassInfo_, allocate$WindowsFileChooserUI$7);
	return class$;
}

$Class* WindowsFileChooserUI$7::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com