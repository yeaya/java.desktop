#include <com/apple/laf/AquaFileChooserUI$4.h>

#include <com/apple/laf/AquaComboBoxRendererInternal.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/io/File.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <jcpp.h>

using $AquaComboBoxRendererInternal = ::com::apple::laf::AquaComboBoxRendererInternal;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$4_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$4, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$4_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljavax/swing/JComboBox;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$4::*)($AquaFileChooserUI*,$JComboBox*)>(&AquaFileChooserUI$4::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/io/File;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+Ljava/io/File;>;Ljava/io/File;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AquaFileChooserUI$4_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileChooserUI",
	"createDirectoryComboBoxRenderer",
	"(Ljavax/swing/JFileChooser;)Ljavax/swing/ListCellRenderer;"
};

$InnerClassInfo _AquaFileChooserUI$4_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI$4_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$4",
	"com.apple.laf.AquaComboBoxRendererInternal",
	nullptr,
	_AquaFileChooserUI$4_FieldInfo_,
	_AquaFileChooserUI$4_MethodInfo_,
	"Lcom/apple/laf/AquaComboBoxRendererInternal<Ljava/io/File;>;",
	&_AquaFileChooserUI$4_EnclosingMethodInfo_,
	_AquaFileChooserUI$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$4($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$4));
}

void AquaFileChooserUI$4::init$($AquaFileChooserUI* this$0, $JComboBox* comboBox) {
	$set(this, this$0, this$0);
	$AquaComboBoxRendererInternal::init$(comboBox);
}

$Component* AquaFileChooserUI$4::getListCellRendererComponent($JList* list, $File* directory, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	$AquaComboBoxRendererInternal::getListCellRendererComponent(list, directory, index, isSelected, cellHasFocus);
	if (directory == nullptr) {
		setText(""_s);
		return this;
	}
	$var($JFileChooser, chooser, this->this$0->getFileChooser());
	setText($($nc(chooser)->getName(directory)));
	setIcon($($nc(chooser)->getIcon(directory)));
	return this;
}

$Component* AquaFileChooserUI$4::getListCellRendererComponent($JList* list, Object$* directory, int32_t index, bool isSelected, bool cellHasFocus) {
	return this->getListCellRendererComponent(list, $cast($File, directory), index, isSelected, cellHasFocus);
}

AquaFileChooserUI$4::AquaFileChooserUI$4() {
}

$Class* AquaFileChooserUI$4::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$4, name, initialize, &_AquaFileChooserUI$4_ClassInfo_, allocate$AquaFileChooserUI$4);
	return class$;
}

$Class* AquaFileChooserUI$4::class$ = nullptr;

		} // laf
	} // apple
} // com