#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI$FilterComboBoxRenderer.h>

#include <com/sun/java/swing/plaf/motif/MotifFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $MotifFileChooserUI = ::com::sun::java::swing::plaf::motif::MotifFileChooserUI;
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
					namespace motif {

$FieldInfo _MotifFileChooserUI$FilterComboBoxRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifFileChooserUI$FilterComboBoxRenderer, this$0)},
	{}
};

$MethodInfo _MotifFileChooserUI$FilterComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MotifFileChooserUI$FilterComboBoxRenderer::*)($MotifFileChooserUI*)>(&MotifFileChooserUI$FilterComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _MotifFileChooserUI$FilterComboBoxRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxRenderer", "com.sun.java.swing.plaf.motif.MotifFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
	{}
};

$ClassInfo _MotifFileChooserUI$FilterComboBoxRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI$FilterComboBoxRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_MotifFileChooserUI$FilterComboBoxRenderer_FieldInfo_,
	_MotifFileChooserUI$FilterComboBoxRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_MotifFileChooserUI$FilterComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifFileChooserUI"
};

$Object* allocate$MotifFileChooserUI$FilterComboBoxRenderer($Class* clazz) {
	return $of($alloc(MotifFileChooserUI$FilterComboBoxRenderer));
}

void MotifFileChooserUI$FilterComboBoxRenderer::init$($MotifFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* MotifFileChooserUI$FilterComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	if (value != nullptr && $instanceOf($FileFilter, value)) {
		setText($($nc(($cast($FileFilter, value)))->getDescription()));
	}
	return this;
}

MotifFileChooserUI$FilterComboBoxRenderer::MotifFileChooserUI$FilterComboBoxRenderer() {
}

$Class* MotifFileChooserUI$FilterComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(MotifFileChooserUI$FilterComboBoxRenderer, name, initialize, &_MotifFileChooserUI$FilterComboBoxRenderer_ClassInfo_, allocate$MotifFileChooserUI$FilterComboBoxRenderer);
	return class$;
}

$Class* MotifFileChooserUI$FilterComboBoxRenderer::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com