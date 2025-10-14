#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$8.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $FilePane = ::sun::swing::FilePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$8_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$8, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$8_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$8::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$8::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$8_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _WindowsFileChooserUI$8_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$8", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$8_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$8",
	"java.awt.event.FocusAdapter",
	nullptr,
	_WindowsFileChooserUI$8_FieldInfo_,
	_WindowsFileChooserUI$8_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$8_EnclosingMethodInfo_,
	_WindowsFileChooserUI$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$8($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$8));
}

void WindowsFileChooserUI$8::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void WindowsFileChooserUI$8::focusGained($FocusEvent* e) {
	if (!$nc($(this->this$0->getFileChooser()))->isMultiSelectionEnabled()) {
		$nc(this->this$0->filePane)->clearSelection();
	}
}

WindowsFileChooserUI$8::WindowsFileChooserUI$8() {
}

$Class* WindowsFileChooserUI$8::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$8, name, initialize, &_WindowsFileChooserUI$8_ClassInfo_, allocate$WindowsFileChooserUI$8);
	return class$;
}

$Class* WindowsFileChooserUI$8::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com