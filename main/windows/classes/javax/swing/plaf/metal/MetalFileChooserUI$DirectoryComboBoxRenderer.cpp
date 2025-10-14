#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxRenderer.h>

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
#include <javax/swing/plaf/metal/MetalFileChooserUI$DirectoryComboBoxModel.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI$IndentIcon.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

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
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;
using $MetalFileChooserUI$DirectoryComboBoxModel = ::javax::swing::plaf::metal::MetalFileChooserUI$DirectoryComboBoxModel;
using $MetalFileChooserUI$IndentIcon = ::javax::swing::plaf::metal::MetalFileChooserUI$IndentIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$DirectoryComboBoxRenderer_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$DirectoryComboBoxRenderer, this$0)},
	{"ii", "Ljavax/swing/plaf/metal/MetalFileChooserUI$IndentIcon;", nullptr, 0, $field(MetalFileChooserUI$DirectoryComboBoxRenderer, ii)},
	{}
};

$MethodInfo _MetalFileChooserUI$DirectoryComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$DirectoryComboBoxRenderer::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$DirectoryComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _MetalFileChooserUI$DirectoryComboBoxRenderer_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxRenderer", "javax.swing.plaf.metal.MetalFileChooserUI", "DirectoryComboBoxRenderer", 0},
	{}
};

$ClassInfo _MetalFileChooserUI$DirectoryComboBoxRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$DirectoryComboBoxRenderer",
	"javax.swing.DefaultListCellRenderer",
	nullptr,
	_MetalFileChooserUI$DirectoryComboBoxRenderer_FieldInfo_,
	_MetalFileChooserUI$DirectoryComboBoxRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$DirectoryComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$DirectoryComboBoxRenderer($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$DirectoryComboBoxRenderer));
}

void MetalFileChooserUI$DirectoryComboBoxRenderer::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer::init$();
	$set(this, ii, $new($MetalFileChooserUI$IndentIcon, this->this$0));
}

$Component* MetalFileChooserUI$DirectoryComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
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

MetalFileChooserUI$DirectoryComboBoxRenderer::MetalFileChooserUI$DirectoryComboBoxRenderer() {
}

$Class* MetalFileChooserUI$DirectoryComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$DirectoryComboBoxRenderer, name, initialize, &_MetalFileChooserUI$DirectoryComboBoxRenderer_ClassInfo_, allocate$MetalFileChooserUI$DirectoryComboBoxRenderer);
	return class$;
}

$Class* MetalFileChooserUI$DirectoryComboBoxRenderer::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax