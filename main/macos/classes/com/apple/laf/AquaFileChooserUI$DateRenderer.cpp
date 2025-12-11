#include <com/apple/laf/AquaFileChooserUI$DateRenderer.h>

#include <com/apple/laf/AquaFileChooserUI$JTableExtension.h>
#include <com/apple/laf/AquaFileChooserUI$MacFCTableCellRenderer.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/io/File.h>
#include <java/text/DateFormat.h>
#include <java/util/Date.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <jcpp.h>

#undef FULL
#undef SHORT

using $AquaFileChooserUI = ::com::apple::laf::AquaFileChooserUI;
using $AquaFileChooserUI$JTableExtension = ::com::apple::laf::AquaFileChooserUI$JTableExtension;
using $AquaFileChooserUI$MacFCTableCellRenderer = ::com::apple::laf::AquaFileChooserUI$MacFCTableCellRenderer;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $Date = ::java::util::Date;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$DateRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$DateRenderer, this$0)},
	{}
};

$MethodInfo _AquaFileChooserUI$DateRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI;Ljava/awt/Font;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFileChooserUI$DateRenderer::*)($AquaFileChooserUI*,$Font*)>(&AquaFileChooserUI$DateRenderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$DateRenderer_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$DateRenderer", "com.apple.laf.AquaFileChooserUI", "DateRenderer", $PROTECTED},
	{"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer", "com.apple.laf.AquaFileChooserUI", "MacFCTableCellRenderer", $PROTECTED},
	{}
};

$ClassInfo _AquaFileChooserUI$DateRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$DateRenderer",
	"com.apple.laf.AquaFileChooserUI$MacFCTableCellRenderer",
	nullptr,
	_AquaFileChooserUI$DateRenderer_FieldInfo_,
	_AquaFileChooserUI$DateRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$DateRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$DateRenderer($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$DateRenderer));
}

void AquaFileChooserUI$DateRenderer::init$($AquaFileChooserUI* this$0, $Font* f) {
	$set(this, this$0, this$0);
	$AquaFileChooserUI$MacFCTableCellRenderer::init$(this$0, f);
}

$Component* AquaFileChooserUI$DateRenderer::getTableCellRendererComponent($JTable* list, Object$* value, bool isSelected, bool cellHasFocus, int32_t index, int32_t col) {
	$useLocalCurrentObjectStackCache();
	$AquaFileChooserUI$MacFCTableCellRenderer::getTableCellRendererComponent(list, value, isSelected, false, index, col);
	$var($File, file, $cast($File, $nc(this->this$0->fFileList)->getValueAt(index, 0)));
	setEnabled(this->this$0->isSelectableInList(file));
	$var($DateFormat, formatter, $DateFormat::getDateTimeInstance($DateFormat::FULL, $DateFormat::SHORT));
	$var($Date, date, $cast($Date, value));
	if (date != nullptr) {
		setText($($nc(formatter)->format(date)));
	} else {
		setText(""_s);
	}
	return this;
}

AquaFileChooserUI$DateRenderer::AquaFileChooserUI$DateRenderer() {
}

$Class* AquaFileChooserUI$DateRenderer::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$DateRenderer, name, initialize, &_AquaFileChooserUI$DateRenderer_ClassInfo_, allocate$AquaFileChooserUI$DateRenderer);
	return class$;
}

$Class* AquaFileChooserUI$DateRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com