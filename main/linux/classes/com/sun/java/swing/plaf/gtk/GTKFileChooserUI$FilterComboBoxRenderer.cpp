#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI$FilterComboBoxRenderer.h>

#include <com/sun/java/swing/plaf/gtk/GTKFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $GTKFileChooserUI = ::com::sun::java::swing::plaf::gtk::GTKFileChooserUI;
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
					namespace gtk {

$FieldInfo _GTKFileChooserUI$FilterComboBoxRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(GTKFileChooserUI$FilterComboBoxRenderer, this$0)},
	{}
};

$MethodInfo _GTKFileChooserUI$FilterComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/gtk/GTKFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(GTKFileChooserUI$FilterComboBoxRenderer::*)($GTKFileChooserUI*)>(&GTKFileChooserUI$FilterComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKFileChooserUI$FilterComboBoxRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxRenderer", "com.sun.java.swing.plaf.gtk.GTKFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
	{}
};

$ClassInfo _GTKFileChooserUI$FilterComboBoxRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI$FilterComboBoxRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_GTKFileChooserUI$FilterComboBoxRenderer_FieldInfo_,
	_GTKFileChooserUI$FilterComboBoxRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_GTKFileChooserUI$FilterComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKFileChooserUI"
};

$Object* allocate$GTKFileChooserUI$FilterComboBoxRenderer($Class* clazz) {
	return $of($alloc(GTKFileChooserUI$FilterComboBoxRenderer));
}

void GTKFileChooserUI$FilterComboBoxRenderer::init$($GTKFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$String* GTKFileChooserUI$FilterComboBoxRenderer::getName() {
	$var($String, name, $DefaultListCellRenderer::getName());
	if (name == nullptr) {
		return "ComboBox.renderer"_s;
	}
	return name;
}

$Component* GTKFileChooserUI$FilterComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	setName("ComboBox.listRenderer"_s);
	if (value != nullptr) {
		if ($instanceOf($FileFilter, value)) {
			setText($($nc(($cast($FileFilter, value)))->getDescription()));
		}
	} else {
		setText(""_s);
	}
	return this;
}

GTKFileChooserUI$FilterComboBoxRenderer::GTKFileChooserUI$FilterComboBoxRenderer() {
}

$Class* GTKFileChooserUI$FilterComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(GTKFileChooserUI$FilterComboBoxRenderer, name, initialize, &_GTKFileChooserUI$FilterComboBoxRenderer_ClassInfo_, allocate$GTKFileChooserUI$FilterComboBoxRenderer);
	return class$;
}

$Class* GTKFileChooserUI$FilterComboBoxRenderer::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com