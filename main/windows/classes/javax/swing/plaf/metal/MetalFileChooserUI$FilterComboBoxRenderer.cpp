#include <javax/swing/plaf/metal/MetalFileChooserUI$FilterComboBoxRenderer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

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
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$FilterComboBoxRenderer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$FilterComboBoxRenderer, this$0)},
	{}
};

$MethodInfo _MetalFileChooserUI$FilterComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalFileChooserUI$FilterComboBoxRenderer::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$FilterComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _MetalFileChooserUI$FilterComboBoxRenderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxRenderer", "javax.swing.plaf.metal.MetalFileChooserUI", "FilterComboBoxRenderer", $PUBLIC},
	{}
};

$ClassInfo _MetalFileChooserUI$FilterComboBoxRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$FilterComboBoxRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_MetalFileChooserUI$FilterComboBoxRenderer_FieldInfo_,
	_MetalFileChooserUI$FilterComboBoxRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$FilterComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$FilterComboBoxRenderer($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$FilterComboBoxRenderer));
}

void MetalFileChooserUI$FilterComboBoxRenderer::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
}

$Component* MetalFileChooserUI$FilterComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$DefaultListCellRenderer::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	if (value != nullptr && $instanceOf($FileFilter, value)) {
		setText($($nc(($cast($FileFilter, value)))->getDescription()));
	}
	return this;
}

MetalFileChooserUI$FilterComboBoxRenderer::MetalFileChooserUI$FilterComboBoxRenderer() {
}

$Class* MetalFileChooserUI$FilterComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$FilterComboBoxRenderer, name, initialize, &_MetalFileChooserUI$FilterComboBoxRenderer_ClassInfo_, allocate$MetalFileChooserUI$FilterComboBoxRenderer);
	return class$;
}

$Class* MetalFileChooserUI$FilterComboBoxRenderer::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax