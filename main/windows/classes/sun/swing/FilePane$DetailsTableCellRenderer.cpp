#include <sun/swing/FilePane$DetailsTableCellRenderer.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/io/File.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Long.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Number.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/DateFormat.h>
#include <java/text/MessageFormat.h>
#include <java/util/Date.h>
#include <java/util/Locale.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

#undef LEADING
#undef RIGHT
#undef SHORT

using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $DateFormat = ::java::text::DateFormat;
using $MessageFormat = ::java::text::MessageFormat;
using $Date = ::java::util::Date;
using $Locale = ::java::util::Locale;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JFileChooser = ::javax::swing::JFileChooser;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $ShellFolderColumnInfo = ::sun::awt::shell::ShellFolderColumnInfo;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableModel = ::sun::swing::FilePane$DetailsTableModel;

namespace sun {
	namespace swing {

$FieldInfo _FilePane$DetailsTableCellRenderer_FieldInfo_[] = {
	{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableCellRenderer, this$0)},
	{"chooser", "Ljavax/swing/JFileChooser;", nullptr, 0, $field(FilePane$DetailsTableCellRenderer, chooser)},
	{"df", "Ljava/text/DateFormat;", nullptr, 0, $field(FilePane$DetailsTableCellRenderer, df)},
	{}
};

$MethodInfo _FilePane$DetailsTableCellRenderer_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/FilePane;Ljavax/swing/JFileChooser;)V", nullptr, 0, $method(static_cast<void(FilePane$DetailsTableCellRenderer::*)($FilePane*,$JFileChooser*)>(&FilePane$DetailsTableCellRenderer::init$))},
	{"getInsets", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"setBounds", "(IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FilePane$DetailsTableCellRenderer_InnerClassesInfo_[] = {
	{"sun.swing.FilePane$DetailsTableCellRenderer", "sun.swing.FilePane", "DetailsTableCellRenderer", 0},
	{}
};

$ClassInfo _FilePane$DetailsTableCellRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.FilePane$DetailsTableCellRenderer",
	"javax.swing.table.DefaultTableCellRenderer",
	nullptr,
	_FilePane$DetailsTableCellRenderer_FieldInfo_,
	_FilePane$DetailsTableCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_FilePane$DetailsTableCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.FilePane"
};

$Object* allocate$FilePane$DetailsTableCellRenderer($Class* clazz) {
	return $of($alloc(FilePane$DetailsTableCellRenderer));
}

void FilePane$DetailsTableCellRenderer::init$($FilePane* this$0, $JFileChooser* chooser) {
	$set(this, this$0, this$0);
	$DefaultTableCellRenderer::init$();
	$set(this, chooser, chooser);
	$set(this, df, $DateFormat::getDateTimeInstance($DateFormat::SHORT, $DateFormat::SHORT, $($nc(chooser)->getLocale())));
}

void FilePane$DetailsTableCellRenderer::setBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (getHorizontalAlignment() == $SwingConstants::LEADING && !this->this$0->fullRowSelection) {
		width = $Math::min(width, $nc($(this->getPreferredSize()))->width + 4);
	} else {
		x -= 4;
	}
	$DefaultTableCellRenderer::setBounds(x, y, width, height);
}

$Insets* FilePane$DetailsTableCellRenderer::getInsets($Insets* i$renamed) {
	$var($Insets, i, i$renamed);
	$assign(i, $DefaultTableCellRenderer::getInsets(i));
	$nc(i)->left += 4;
	i->right += 4;
	return i;
}

$Component* FilePane$DetailsTableCellRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(table)->convertColumnIndexToModel(column) != 0;
	if ((var$0 || (this->this$0->listViewWindowsStyle && !$nc(table)->isFocusOwner())) && !this->this$0->fullRowSelection) {
		isSelected = false;
	}
	$DefaultTableCellRenderer::getTableCellRendererComponent(table, value, isSelected, hasFocus, row, column);
	setIcon(nullptr);
	int32_t modelColumn = $nc(table)->convertColumnIndexToModel(column);
	$var($ShellFolderColumnInfo, columnInfo, $nc($($nc(this->this$0->detailsTableModel)->getColumns()))->get(modelColumn));
	$var($Integer, alignment, $nc(columnInfo)->getAlignment());
	if (alignment == nullptr) {
		$assign(alignment, $Integer::valueOf(($instanceOf($Number, value)) ? $SwingConstants::RIGHT : $SwingConstants::LEADING));
	}
	setHorizontalAlignment($nc(alignment)->intValue());
	$var($String, text, nullptr);
	if (value == nullptr) {
		$assign(text, ""_s);
	} else if ($instanceOf($File, value)) {
		$var($File, file, $cast($File, value));
		$assign(text, $nc(this->chooser)->getName(file));
		$var($Icon, icon, $nc(this->chooser)->getIcon(file));
		setIcon(icon);
	} else if ($instanceOf($Long, value)) {
		int64_t len = $div($nc(($cast($Long, value)))->longValue(), (int64_t)1024);
		if (this->this$0->listViewWindowsStyle) {
			$assign(text, $MessageFormat::format(this->this$0->kiloByteString, $$new($ObjectArray, {$($of($Long::valueOf(len + 1)))})));
		} else if (len < (int64_t)1024) {
			$assign(text, $MessageFormat::format(this->this$0->kiloByteString, $$new($ObjectArray, {$($of($Long::valueOf((len == (int64_t)0) ? (int64_t)1 : len)))})));
		} else {
			len /= 1024;
			if (len < (int64_t)1024) {
				$assign(text, $MessageFormat::format(this->this$0->megaByteString, $$new($ObjectArray, {$($of($Long::valueOf(len)))})));
			} else {
				len /= 1024;
				$assign(text, $MessageFormat::format(this->this$0->gigaByteString, $$new($ObjectArray, {$($of($Long::valueOf(len)))})));
			}
		}
	} else if ($instanceOf($Date, value)) {
		$assign(text, $nc(this->df)->format($cast($Date, value)));
	} else {
		$assign(text, $nc($of(value))->toString());
	}
	setText(text);
	return this;
}

FilePane$DetailsTableCellRenderer::FilePane$DetailsTableCellRenderer() {
}

$Class* FilePane$DetailsTableCellRenderer::load$($String* name, bool initialize) {
	$loadClass(FilePane$DetailsTableCellRenderer, name, initialize, &_FilePane$DetailsTableCellRenderer_ClassInfo_, allocate$FilePane$DetailsTableCellRenderer);
	return class$;
}

$Class* FilePane$DetailsTableCellRenderer::class$ = nullptr;

	} // swing
} // sun