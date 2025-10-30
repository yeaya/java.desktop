#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$FilterComboBoxRenderer.h>

#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $WindowsFileChooserUI = ::com::sun::java::swing::plaf::windows::WindowsFileChooserUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer = ::javax::swing::DefaultListCellRenderer;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsFileChooserUI$FilterComboBoxRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$FilterComboBoxRenderer, this$0)},
	{}
};

$MethodInfo _WindowsFileChooserUI$FilterComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsFileChooserUI$FilterComboBoxRenderer::*)($WindowsFileChooserUI*)>(&WindowsFileChooserUI$FilterComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _WindowsFileChooserUI$FilterComboBoxRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$FilterComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
	{}
};

$ClassInfo _WindowsFileChooserUI$FilterComboBoxRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$FilterComboBoxRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_WindowsFileChooserUI$FilterComboBoxRenderer_FieldInfo_,
	_WindowsFileChooserUI$FilterComboBoxRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsFileChooserUI$FilterComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
};

$Object* allocate$WindowsFileChooserUI$FilterComboBoxRenderer($Class* clazz) {
	return $of($alloc(WindowsFileChooserUI$FilterComboBoxRenderer));
}

void WindowsFileChooserUI$FilterComboBoxRenderer::init$($WindowsFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* WindowsFileChooserUI$FilterComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	if (value != nullptr && $instanceOf($FileFilter, value)) {
		setText($($nc(($cast($FileFilter, value)))->getDescription()));
	}
	return this;
}

WindowsFileChooserUI$FilterComboBoxRenderer::WindowsFileChooserUI$FilterComboBoxRenderer() {
}

$Class* WindowsFileChooserUI$FilterComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(WindowsFileChooserUI$FilterComboBoxRenderer, name, initialize, &_WindowsFileChooserUI$FilterComboBoxRenderer_ClassInfo_, allocate$WindowsFileChooserUI$FilterComboBoxRenderer);
	return class$;
}

$Class* WindowsFileChooserUI$FilterComboBoxRenderer::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com