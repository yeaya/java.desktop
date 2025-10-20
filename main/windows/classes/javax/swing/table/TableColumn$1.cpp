#include <javax/swing/table/TableColumn$1.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumn = ::javax::swing::table::TableColumn;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _TableColumn$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/table/TableColumn;", nullptr, $FINAL | $SYNTHETIC, $field(TableColumn$1, this$0)},
	{}
};

$MethodInfo _TableColumn$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/table/TableColumn;)V", nullptr, 0, $method(static_cast<void(TableColumn$1::*)($TableColumn*)>(&TableColumn$1::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TableColumn$1_EnclosingMethodInfo_ = {
	"javax.swing.table.TableColumn",
	"createDefaultHeaderRenderer",
	"()Ljavax/swing/table/TableCellRenderer;"
};

$InnerClassInfo _TableColumn$1_InnerClassesInfo_[] = {
	{"javax.swing.table.TableColumn$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TableColumn$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.table.TableColumn$1",
	"javax.swing.table.DefaultTableCellRenderer",
	nullptr,
	_TableColumn$1_FieldInfo_,
	_TableColumn$1_MethodInfo_,
	nullptr,
	&_TableColumn$1_EnclosingMethodInfo_,
	_TableColumn$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.table.TableColumn"
};

$Object* allocate$TableColumn$1($Class* clazz) {
	return $of($alloc(TableColumn$1));
}

void TableColumn$1::init$($TableColumn* this$0) {
	$set(this, this$0, this$0);
	$DefaultTableCellRenderer::init$();
}

$Component* TableColumn$1::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	if (table != nullptr) {
		$var($JTableHeader, header, table->getTableHeader());
		if (header != nullptr) {
			setForeground($(header->getForeground()));
			setBackground($(header->getBackground()));
			setFont($(header->getFont()));
		}
	}
	setText((value == nullptr) ? ""_s : $($nc($of(value))->toString()));
	setBorder($($UIManager::getBorder("TableHeader.cellBorder"_s)));
	return this;
}

TableColumn$1::TableColumn$1() {
}

$Class* TableColumn$1::load$($String* name, bool initialize) {
	$loadClass(TableColumn$1, name, initialize, &_TableColumn$1_ClassInfo_, allocate$TableColumn$1);
	return class$;
}

$Class* TableColumn$1::class$ = nullptr;

		} // table
	} // swing
} // javax