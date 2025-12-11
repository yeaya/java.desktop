#include <com/apple/laf/AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer.h>

#include <com/apple/laf/AquaFileChooserUI$JSortingTableHeader.h>
#include <com/apple/laf/AquaFileChooserUI.h>
#include <com/apple/laf/AquaTableHeaderBorder.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <jcpp.h>

#undef SORT_ASCENDING
#undef SORT_DECENDING
#undef SORT_NONE

using $AquaFileChooserUI$JSortingTableHeader = ::com::apple::laf::AquaFileChooserUI$JSortingTableHeader;
using $AquaTableHeaderBorder = ::com::apple::laf::AquaTableHeaderBorder;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer_FieldInfo_[] = {
	{"this$1", "Lcom/apple/laf/AquaFileChooserUI$JSortingTableHeader;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer, this$1)},
	{}
};

$MethodInfo _AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaFileChooserUI$JSortingTableHeader;)V", nullptr, 0, $method(static_cast<void(AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::*)($AquaFileChooserUI$JSortingTableHeader*)>(&AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFileChooserUI$JSortingTableHeader", "com.apple.laf.AquaFileChooserUI", "JSortingTableHeader", 0},
	{"com.apple.laf.AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer", "com.apple.laf.AquaFileChooserUI$JSortingTableHeader", "AquaTableCellRenderer", 0},
	{}
};

$ClassInfo _AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer",
	"javax.swing.table.DefaultTableCellRenderer",
	"javax.swing.plaf.UIResource",
	_AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer_FieldInfo_,
	_AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFileChooserUI"
};

$Object* allocate$AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer($Class* clazz) {
	return $of($alloc(AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer));
}

$String* AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::toString() {
	 return this->$DefaultTableCellRenderer::toString();
}

int32_t AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::hashCode() {
	 return this->$DefaultTableCellRenderer::hashCode();
}

bool AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::equals(Object$* arg0) {
	 return this->$DefaultTableCellRenderer::equals(arg0);
}

$Object* AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::clone() {
	 return this->$DefaultTableCellRenderer::clone();
}

void AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::finalize() {
	this->$DefaultTableCellRenderer::finalize();
}

void AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::init$($AquaFileChooserUI$JSortingTableHeader* this$1) {
	$set(this, this$1, this$1);
	$DefaultTableCellRenderer::init$();
}

$Component* AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::getTableCellRendererComponent($JTable* localTable, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	if (localTable != nullptr) {
		$var($JTableHeader, header, localTable->getTableHeader());
		if (header != nullptr) {
			setForeground($(header->getForeground()));
			setBackground($(header->getBackground()));
			setFont($($UIManager::getFont("TableHeader.font"_s)));
		}
	}
	setText((value == nullptr) ? ""_s : $($nc($of(value))->toString()));
	$var($AquaTableHeaderBorder, cellBorder, $AquaTableHeaderBorder::getListHeaderBorder());
	$nc(cellBorder)->setSelected(column == $nc(this->this$1->this$0)->fSortColumn);
	int32_t horizontalShift = (column == 0 ? 35 : 10);
	cellBorder->setHorizontalShift(horizontalShift);
	if (column == $nc(this->this$1->this$0)->fSortColumn) {
		cellBorder->setSortOrder($nc(this->this$1->fSortAscending)->get(column) ? $AquaTableHeaderBorder::SORT_ASCENDING : $AquaTableHeaderBorder::SORT_DECENDING);
	} else {
		cellBorder->setSortOrder($AquaTableHeaderBorder::SORT_NONE);
	}
	setBorder(cellBorder);
	return this;
}

AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer() {
}

$Class* AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::load$($String* name, bool initialize) {
	$loadClass(AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer, name, initialize, &_AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer_ClassInfo_, allocate$AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer);
	return class$;
}

$Class* AquaFileChooserUI$JSortingTableHeader$AquaTableCellRenderer::class$ = nullptr;

		} // laf
	} // apple
} // com