#include <com/apple/laf/AquaFileChooserUI$5.h>

#include <com/apple/laf/AquaComboBoxRendererInternal.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/filechooser/FileFilter.h>
#include <jcpp.h>

using $AquaComboBoxRendererInternal = ::com::apple::laf::AquaComboBoxRendererInternal;
using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $FileFilter = ::javax::swing::filechooser::FileFilter;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$5_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$5, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$5_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljavax/swing/JComboBox;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$5::*)($AquaFileChooserUI*,$JComboBox*)>(&AquaFileChooserUI$5::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljavax/swing/filechooser/FileFilter;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<+Ljavax/swing/filechooser/FileFilter;>;Ljavax/swing/filechooser/FileFilter;IZZ)Ljava/awt/Component;", $PUBLIC},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _AquaFileChooserUI$5_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaFileChooserUI",
	"createFilterComboBoxRenderer",
	"()Ljavax/swing/ListCellRenderer;"
};

$InnerClassInfo _AquaFileChooserUI$5_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFileChooserUI$5_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$5",
	"com.apple.laf.AquaComboBoxRendererInternal",
	nullptr,
	_AquaFileChooserUI$5_FieldInfo_,
	_AquaFileChooserUI$5_MethodInfo_,
	"Lcom/apple/laf/AquaComboBoxRendererInternal<Ljavax/swing/filechooser/FileFilter;>;",
	&_AquaFileChooserUI$5_EnclosingMethodInfo_,
	_AquaFileChooserUI$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$5($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$5));
}

void AquaFileChooserUI$5::init$($AquaFileChooserUI* this$0, $JComboBox* comboBox) {
	$set(this, this$0, this$0);
	$AquaComboBoxRendererInternal::init$(comboBox);
}

$Component* AquaFileChooserUI$5::getListCellRendererComponent($JList* list, $FileFilter* filter, int32_t index, bool isSelected, bool cellHasFocus) {
	$AquaComboBoxRendererInternal::getListCellRendererComponent(list, filter, index, isSelected, cellHasFocus);
	if (filter != nullptr) {
		setText($(filter->getDescription()));
	}
	return this;
}

$Component* AquaFileChooserUI$5::getListCellRendererComponent($JList* list, Object$* filter, int32_t index, bool isSelected, bool cellHasFocus) {
	return this->getListCellRendererComponent(list, $cast($FileFilter, filter), index, isSelected, cellHasFocus);
}

AquaFileChooserUI$5::AquaFileChooserUI$5() {
}

$Class* AquaFileChooserUI$5::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$5, name, initialize, &_AquaFileChooserUI$5_ClassInfo_, allocate$AquaFileChooserUI$5);
	return class$;
}

$Class* AquaFileChooserUI$5::class$ = nullptr;

		} // laf
	} // apple
} // com