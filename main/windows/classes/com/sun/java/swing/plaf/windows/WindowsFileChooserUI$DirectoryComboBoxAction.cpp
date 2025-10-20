#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxAction.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/event/ActionEvent.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$DirectoryComboBoxAction_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$DirectoryComboBoxAction, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$DirectoryComboBoxAction_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, $PROTECTED, $method(static_cast<void(WindowsFileChooserUI$DirectoryComboBoxAction::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$DirectoryComboBoxAction::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileChooserUI$DirectoryComboBoxAction_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxAction", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "DirectoryComboBoxAction", $PROTECTED},
	{}
};

$ClassInfo _WindowsFileChooserUI$DirectoryComboBoxAction_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxAction",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_WindowsFileChooserUI$DirectoryComboBoxAction_FieldInfo_,
	_WindowsFileChooserUI$DirectoryComboBoxAction_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileChooserUI$DirectoryComboBoxAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$DirectoryComboBoxAction($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$DirectoryComboBoxAction));
}

void WindowsFileChooserUI$DirectoryComboBoxAction::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void WindowsFileChooserUI$DirectoryComboBoxAction::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($File, f, $cast($File, $nc(this->this$0->directoryComboBox)->getSelectedItem()));
	$nc($(this->this$0->getFileChooser()))->setCurrentDirectory(f);
}

WindowsFileChooserUI$DirectoryComboBoxAction::WindowsFileChooserUI$DirectoryComboBoxAction() {
}

$Class* WindowsFileChooserUI$DirectoryComboBoxAction::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$DirectoryComboBoxAction, name, initialize, &_WindowsFileChooserUI$DirectoryComboBoxAction_ClassInfo_, allocate$WindowsFileChooserUI$DirectoryComboBoxAction);
	return class$;
}

$Class* WindowsFileChooserUI$DirectoryComboBoxAction::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com