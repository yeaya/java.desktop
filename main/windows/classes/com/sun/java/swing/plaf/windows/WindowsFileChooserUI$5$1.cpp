#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$5$1.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$5.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $WindowsFileChooserUI$5 = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$5;
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

$FieldInfo _WindowsFileChooserUI$5$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$5;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$5$1, this$1)},
	{}
};

$MethodInfo _WindowsFileChooserUI$5$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$5;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$5$1::*)($WindowsFileChooserUI$5*)>(&WindowsFileChooserUI$5$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$5$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5",
	"popupMenuWillBecomeInvisible",
	"(Ljavax/swing/event/PopupMenuEvent;)V"
};

$InnerClassInfo _WindowsFileChooserUI$5$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5", nullptr, nullptr, 0},
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$5$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$5$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_WindowsFileChooserUI$5$1_FieldInfo_,
	_WindowsFileChooserUI$5$1_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$5$1_EnclosingMethodInfo_,
	_WindowsFileChooserUI$5$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$5$1($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$5$1));
}

void WindowsFileChooserUI$5$1::init$($WindowsFileChooserUI$5* this$1) {
	$set(this, this$1, this$1);
}

void WindowsFileChooserUI$5$1::run() {
	$nc(this->this$1->val$viewMenuButton)->setSelected(false);
}

WindowsFileChooserUI$5$1::WindowsFileChooserUI$5$1() {
}

$Class* WindowsFileChooserUI$5$1::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$5$1, name, initialize, &_WindowsFileChooserUI$5$1_ClassInfo_, allocate$WindowsFileChooserUI$5$1);
	return class$;
}

$Class* WindowsFileChooserUI$5$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com