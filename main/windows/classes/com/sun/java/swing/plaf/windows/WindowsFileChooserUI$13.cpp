#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$13.h>

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
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$13_FieldInfo_[] = {
	{"val$result", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$13, val$result)},
	{}
};

$MethodInfo _WindowsFileChooserUI$13_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JButton;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$13::*)($JButton*)>(&WindowsFileChooserUI$13::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsFileChooserUI$13_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
	"createToolButton",
	"(Ljavax/swing/Action;Ljavax/swing/Icon;Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JButton;"
};

$InnerClassInfo _WindowsFileChooserUI$13_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$13", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$13_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$13",
	"java.awt.event.FocusAdapter",
	nullptr,
	_WindowsFileChooserUI$13_FieldInfo_,
	_WindowsFileChooserUI$13_MethodInfo_,
	nullptr,
	&_WindowsFileChooserUI$13_EnclosingMethodInfo_,
	_WindowsFileChooserUI$13_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$13($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$13));
}

void WindowsFileChooserUI$13::init$($JButton* val$result) {
	$set(this, val$result, val$result);
	$FocusAdapter::init$();
}

void WindowsFileChooserUI$13::focusGained($FocusEvent* e) {
	$nc($($nc(this->val$result)->getModel()))->setRollover(true);
}

void WindowsFileChooserUI$13::focusLost($FocusEvent* e) {
	$nc($($nc(this->val$result)->getModel()))->setRollover(false);
}

WindowsFileChooserUI$13::WindowsFileChooserUI$13() {
}

$Class* WindowsFileChooserUI$13::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$13, name, initialize, &_WindowsFileChooserUI$13_ClassInfo_, allocate$WindowsFileChooserUI$13);
	return class$;
}

$Class* WindowsFileChooserUI$13::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com