#include <sun/swing/FilePane$AlignableTableHeaderRenderer.h>

#include <java/awt/Component.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef CENTER

using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableModel = ::sun::swing::FilePane$DetailsTableModel;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$AlignableTableHeaderRenderer_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$AlignableTableHeaderRenderer, this$0)},
	{"wrappedRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, 0, $field(FilePane$AlignableTableHeaderRenderer, wrappedRenderer)},
	{}
};

$MethodInfo _FilePane$AlignableTableHeaderRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/table/TableCellRenderer;)V", nullptr, $PUBLIC, $method(static_cast<void(FilePane$AlignableTableHeaderRenderer::*)($FilePane*,$TableCellRenderer*)>(&FilePane$AlignableTableHeaderRenderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$AlignableTableHeaderRenderer_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$AlignableTableHeaderRenderer", "sun.swing.FilePane", "AlignableTableHeaderRenderer", $PRIVATE},
	{}
};

$ClassInfo _FilePane$AlignableTableHeaderRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$AlignableTableHeaderRenderer",
	"java.lang.Object",
	"javax.swing.table.TableCellRenderer",
	_FilePane$AlignableTableHeaderRenderer_FieldInfo_,
	_FilePane$AlignableTableHeaderRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$AlignableTableHeaderRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$AlignableTableHeaderRenderer($Class* clazz) {
	return $of($alloc(FilePane$AlignableTableHeaderRenderer));
}

void FilePane$AlignableTableHeaderRenderer::init$($FilePane* this$0, $TableCellRenderer* wrappedRenderer) {
	$set(this, this$0, this$0);
	$set(this, wrappedRenderer, wrappedRenderer);
}

$Component* FilePane$AlignableTableHeaderRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$var($Component, c, $nc(this->wrappedRenderer)->getTableCellRendererComponent(table, value, isSelected, hasFocus, row, column));
	int32_t modelColumn = $nc(table)->convertColumnIndexToModel(column);
	$var($ShellFolderColumnInfo, columnInfo, $nc($($nc(this->this$0->detailsTableModel)->getColumns()))->get(modelColumn));
	$var($Integer, alignment, $nc(columnInfo)->getAlignment());
	if (alignment == nullptr) {
		$assign(alignment, $Integer::valueOf($SwingConstants::CENTER));
	}
	if ($instanceOf($JLabel, c)) {
		$nc(($cast($JLabel, c)))->setHorizontalAlignment($nc(alignment)->intValue());
	}
	return c;
}

FilePane$AlignableTableHeaderRenderer::FilePane$AlignableTableHeaderRenderer() {
}

$Class* FilePane$AlignableTableHeaderRenderer::load$($String* name, bool initialize) {
	$loadClass(FilePane$AlignableTableHeaderRenderer, name, initialize, &_FilePane$AlignableTableHeaderRenderer_ClassInfo_, allocate$FilePane$AlignableTableHeaderRenderer);
	return class$;
}

$Class* FilePane$AlignableTableHeaderRenderer::class$ = nullptr;

	} // swing
} // sun