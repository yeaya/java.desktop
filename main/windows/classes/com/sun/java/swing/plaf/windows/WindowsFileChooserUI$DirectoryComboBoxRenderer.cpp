#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxRenderer.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$DirectoryComboBoxModel.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$IndentIcon.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $WindowsFileChooserUI$DirectoryComboBoxModel = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$DirectoryComboBoxModel;
using $WindowsFileChooserUI$IndentIcon = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI$IndentIcon;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$DirectoryComboBoxRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$DirectoryComboBoxRenderer, this$0)},
	{"ii", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI$IndentIcon;", nullptr, 0, $field(WindowsFileChooserUI$DirectoryComboBoxRenderer, ii)},
	{}
};

$MethodInfo _WindowsFileChooserUI$DirectoryComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, 0, $method(static_cast<void(WindowsFileChooserUI$DirectoryComboBoxRenderer::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$DirectoryComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileChooserUI$DirectoryComboBoxRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "DirectoryComboBoxRenderer", 0},
	{}
};

$ClassInfo _WindowsFileChooserUI$DirectoryComboBoxRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$DirectoryComboBoxRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_WindowsFileChooserUI$DirectoryComboBoxRenderer_FieldInfo_,
	_WindowsFileChooserUI$DirectoryComboBoxRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileChooserUI$DirectoryComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$DirectoryComboBoxRenderer($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$DirectoryComboBoxRenderer));
}

void WindowsFileChooserUI$DirectoryComboBoxRenderer::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
	$set(this, ii, $new($WindowsFileChooserUI$IndentIcon, this->this$0));
}

$Component* WindowsFileChooserUI$DirectoryComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	if (value == nullptr) {
		setText(""_s);
		return this;
	}
	$var($File, directory, $cast($File, value));
	setText($($nc($(this->this$0->getFileChooser()))->getName(directory)));
	$var($Icon, icon, $nc($(this->this$0->getFileChooser()))->getIcon(directory));
	$set($nc(this->ii), icon, icon);
	$nc(this->ii)->depth = $nc(this->this$0->directoryComboBoxModel)->getDepth(index);
	setIcon(this->ii);
	return this;
}

WindowsFileChooserUI$DirectoryComboBoxRenderer::WindowsFileChooserUI$DirectoryComboBoxRenderer() {
}

$Class* WindowsFileChooserUI$DirectoryComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$DirectoryComboBoxRenderer, name, initialize, &_WindowsFileChooserUI$DirectoryComboBoxRenderer_ClassInfo_, allocate$WindowsFileChooserUI$DirectoryComboBoxRenderer);
	return class$;
}

$Class* WindowsFileChooserUI$DirectoryComboBoxRenderer::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com