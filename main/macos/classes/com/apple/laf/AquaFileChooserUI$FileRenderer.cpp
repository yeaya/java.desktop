#include <com/apple/laf/AquaFileChooserUI$FileRenderer.h>

#include <com/apple/laf/AquaFileChooserUI$MacFCTableCellRenderer.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <jcpp.h>

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$MacFCTableCellRenderer = ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$FileRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$FileRenderer, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$FileRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFileChooserUI$FileRenderer::*)($AquaFileChooserUI*,$Font*)>(&AquaFileChooserUI$FileRenderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$FileRenderer_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$FileRenderer", "com.apple.laf.AquaFileChooserUI", "FileRenderer", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer", "com.apple.laf.AquaFileChooserUI", "MacFCTableCellRenderer", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$FileRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$FileRenderer",
	"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer",
	nullptr,
	_AquaFileChooserUI$FileRenderer_FieldInfo_,
	_AquaFileChooserUI$FileRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$FileRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$FileRenderer($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$FileRenderer));
}

void AquaFileChooserUI$FileRenderer::init$($AquaFileChooserUI* this$0, $Font* f) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$MacFCTableCellRenderer::init$(this$0, f);
}

$Component* AquaFileChooserUI$FileRenderer::getTableCellRendererComponent($JTable* list, Object$* value, bool isSelected, bool cellHasFocus, int32_t index, int32_t col) {
	$useLocalCurrentObjectStackCache();
	$AquaFileChooserUI$MacFCTableCellRenderer::getTableCellRendererComponent(list, value, isSelected, false, index, col);
	$var($File, file, $cast($File, value));
	$var($JFileChooser, fc, this->this$0->getFileChooser());
	setText($($nc(fc)->getName(file)));
	setIcon($($nc(fc)->getIcon(file)));
	setEnabled(this->this$0->isSelectableInList(file));
	return this;
}

AquaFileChooserUI$FileRenderer::AquaFileChooserUI$FileRenderer() {
}

$Class* AquaFileChooserUI$FileRenderer::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$FileRenderer, name, initialize, &_AquaFileChooserUI$FileRenderer_ClassInfo_, allocate$AquaFileChooserUI$FileRenderer);
	return class$;
}

$Class* AquaFileChooserUI$FileRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com