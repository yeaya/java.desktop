#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/util/List.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer$1.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer$EmptyIcon.h>
#include <jcpp.h>

#undef CENTER
#undef LEADING

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $RowSorter = ::javax::swing::RowSorter;
using $RowSorter$SortKey = ::javax::swing::RowSorter$SortKey;
using $SortOrder = ::javax::swing::SortOrder;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Border = ::javax::swing::border::Border;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $DefaultTableCellHeaderRenderer$1 = ::sun::swing::table::DefaultTableCellHeaderRenderer$1;
using $DefaultTableCellHeaderRenderer$EmptyIcon = ::sun::swing::table::DefaultTableCellHeaderRenderer$EmptyIcon;

namespace sun {
	namespace swing {
		namespace table {

$FieldInfo _DefaultTableCellHeaderRenderer_FieldInfo_[] = {
	{"horizontalTextPositionSet", "Z", nullptr, $PRIVATE, $field(DefaultTableCellHeaderRenderer, horizontalTextPositionSet)},
	{"sortArrow", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(DefaultTableCellHeaderRenderer, sortArrow)},
	{"emptyIcon", "Lsun/swing/table/DefaultTableCellHeaderRenderer$EmptyIcon;", nullptr, $PRIVATE, $field(DefaultTableCellHeaderRenderer, emptyIcon)},
	{}
};

$MethodInfo _DefaultTableCellHeaderRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTableCellHeaderRenderer::*)()>(&DefaultTableCellHeaderRenderer::init$))},
	{"computeIconPosition", "(Ljava/awt/Graphics;)Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(DefaultTableCellHeaderRenderer::*)($Graphics*)>(&DefaultTableCellHeaderRenderer::computeIconPosition))},
	{"getColumnSortOrder", "(Ljavax/swing/JTable;I)Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SortOrder*(*)($JTable*,int32_t)>(&DefaultTableCellHeaderRenderer::getColumnSortOrder))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setHorizontalTextPosition", "(I)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultTableCellHeaderRenderer_InnerClassesInfo_[] = {
	{"sun.swing.table.DefaultTableCellHeaderRenderer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.swing.table.DefaultTableCellHeaderRenderer$EmptyIcon", "sun.swing.table.DefaultTableCellHeaderRenderer", "EmptyIcon", $PRIVATE},
	{}
};

$ClassInfo _DefaultTableCellHeaderRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.swing.table.DefaultTableCellHeaderRenderer",
	"javax.swing.table.DefaultTableCellRenderer",
	"javax.swing.plaf.UIResource",
	_DefaultTableCellHeaderRenderer_FieldInfo_,
	_DefaultTableCellHeaderRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultTableCellHeaderRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.swing.table.DefaultTableCellHeaderRenderer$1,sun.swing.table.DefaultTableCellHeaderRenderer$EmptyIcon"
};

$Object* allocate$DefaultTableCellHeaderRenderer($Class* clazz) {
	return $of($alloc(DefaultTableCellHeaderRenderer));
}

$String* DefaultTableCellHeaderRenderer::toString() {
	 return this->$DefaultTableCellRenderer::toString();
}

int32_t DefaultTableCellHeaderRenderer::hashCode() {
	 return this->$DefaultTableCellRenderer::hashCode();
}

bool DefaultTableCellHeaderRenderer::equals(Object$* arg0) {
	 return this->$DefaultTableCellRenderer::equals(arg0);
}

$Object* DefaultTableCellHeaderRenderer::clone() {
	 return this->$DefaultTableCellRenderer::clone();
}

void DefaultTableCellHeaderRenderer::finalize() {
	this->$DefaultTableCellRenderer::finalize();
}

void DefaultTableCellHeaderRenderer::init$() {
	$DefaultTableCellRenderer::init$();
	$set(this, emptyIcon, $new($DefaultTableCellHeaderRenderer$EmptyIcon, this));
	setHorizontalAlignment($JLabel::CENTER);
}

void DefaultTableCellHeaderRenderer::setHorizontalTextPosition(int32_t textPosition) {
	this->horizontalTextPositionSet = true;
	$DefaultTableCellRenderer::setHorizontalTextPosition(textPosition);
}

$Component* DefaultTableCellHeaderRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, sortIcon, nullptr);
	bool isPaintingForPrint = false;
	if (table != nullptr) {
		$var($JTableHeader, header, table->getTableHeader());
		if (header != nullptr) {
			$var($Color, fgColor, nullptr);
			$var($Color, bgColor, nullptr);
			if (hasFocus) {
				$assign(fgColor, $DefaultLookup::getColor(this, this->ui, "TableHeader.focusCellForeground"_s));
				$assign(bgColor, $DefaultLookup::getColor(this, this->ui, "TableHeader.focusCellBackground"_s));
			}
			if (fgColor == nullptr) {
				$assign(fgColor, header->getForeground());
			}
			if (bgColor == nullptr) {
				$assign(bgColor, header->getBackground());
			}
			setForeground(fgColor);
			setBackground(bgColor);
			setFont($(header->getFont()));
			isPaintingForPrint = header->isPaintingForPrint();
		}
		if (!isPaintingForPrint && table->getRowSorter() != nullptr) {
			if (!this->horizontalTextPositionSet) {
				setHorizontalTextPosition($JLabel::LEADING);
			}
			$SortOrder* sortOrder = getColumnSortOrder(table, column);
			if (sortOrder != nullptr) {
				$init($DefaultTableCellHeaderRenderer$1);
				switch ($nc($DefaultTableCellHeaderRenderer$1::$SwitchMap$javax$swing$SortOrder)->get((sortOrder)->ordinal())) {
				case 1:
					{
						$assign(sortIcon, $DefaultLookup::getIcon(this, this->ui, "Table.ascendingSortIcon"_s));
						break;
					}
				case 2:
					{
						$assign(sortIcon, $DefaultLookup::getIcon(this, this->ui, "Table.descendingSortIcon"_s));
						break;
					}
				case 3:
					{
						$assign(sortIcon, $DefaultLookup::getIcon(this, this->ui, "Table.naturalSortIcon"_s));
						break;
					}
				}
			}
		}
	}
	setText(value == nullptr ? ""_s : $($nc($of(value))->toString()));
	setIcon(sortIcon);
	$set(this, sortArrow, sortIcon);
	$var($Border, border, nullptr);
	if (hasFocus) {
		$assign(border, $DefaultLookup::getBorder(this, this->ui, "TableHeader.focusCellBorder"_s));
	}
	if (border == nullptr) {
		$assign(border, $DefaultLookup::getBorder(this, this->ui, "TableHeader.cellBorder"_s));
	}
	setBorder(border);
	return this;
}

$SortOrder* DefaultTableCellHeaderRenderer::getColumnSortOrder($JTable* table, int32_t column) {
	$init(DefaultTableCellHeaderRenderer);
	$useLocalCurrentObjectStackCache();
	$SortOrder* rv = nullptr;
	if (table == nullptr || $nc(table)->getRowSorter() == nullptr) {
		return rv;
	}
	$var($List, sortKeys, $nc($($nc(table)->getRowSorter()))->getSortKeys());
	bool var$0 = $nc(sortKeys)->size() > 0;
	if (var$0) {
		int32_t var$1 = $nc(($cast($RowSorter$SortKey, $(sortKeys->get(0)))))->getColumn();
		var$0 = var$1 == table->convertColumnIndexToModel(column);
	}
	if (var$0) {
		rv = $nc(($cast($RowSorter$SortKey, $(sortKeys->get(0)))))->getSortOrder();
	}
	return rv;
}

void DefaultTableCellHeaderRenderer::paintComponent($Graphics* g) {
	bool b = $DefaultLookup::getBoolean(this, this->ui, "TableHeader.rightAlignSortArrow"_s, false);
	if (b && this->sortArrow != nullptr) {
		$nc(this->emptyIcon)->width = $nc(this->sortArrow)->getIconWidth();
		$nc(this->emptyIcon)->height = $nc(this->sortArrow)->getIconHeight();
		setIcon(this->emptyIcon);
		$DefaultTableCellRenderer::paintComponent(g);
		$var($Point, position, computeIconPosition(g));
		$nc(this->sortArrow)->paintIcon(this, g, $nc(position)->x, position->y);
	} else {
		$DefaultTableCellRenderer::paintComponent(g);
	}
}

$Point* DefaultTableCellHeaderRenderer::computeIconPosition($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($FontMetrics, fontMetrics, $nc(g)->getFontMetrics());
	$var($Rectangle, viewR, $new($Rectangle));
	$var($Rectangle, textR, $new($Rectangle));
	$var($Rectangle, iconR, $new($Rectangle));
	$var($Insets, i, getInsets());
	viewR->x = $nc(i)->left;
	viewR->y = i->top;
	viewR->width = getWidth() - (i->left + i->right);
	viewR->height = getHeight() - (i->top + i->bottom);
	$var($FontMetrics, var$0, fontMetrics);
	$var($String, var$1, getText());
	$var($Icon, var$2, this->sortArrow);
	int32_t var$3 = getVerticalAlignment();
	int32_t var$4 = getHorizontalAlignment();
	int32_t var$5 = getVerticalTextPosition();
	int32_t var$6 = getHorizontalTextPosition();
	$var($Rectangle, var$7, viewR);
	$var($Rectangle, var$8, iconR);
	$var($Rectangle, var$9, textR);
	$SwingUtilities::layoutCompoundLabel(this, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, var$9, getIconTextGap());
	int32_t var$10 = getWidth() - i->right;
	int32_t x = var$10 - $nc(this->sortArrow)->getIconWidth();
	int32_t y = iconR->y;
	return $new($Point, x, y);
}

DefaultTableCellHeaderRenderer::DefaultTableCellHeaderRenderer() {
}

$Class* DefaultTableCellHeaderRenderer::load$($String* name, bool initialize) {
	$loadClass(DefaultTableCellHeaderRenderer, name, initialize, &_DefaultTableCellHeaderRenderer_ClassInfo_, allocate$DefaultTableCellHeaderRenderer);
	return class$;
}

$Class* DefaultTableCellHeaderRenderer::class$ = nullptr;

		} // table
	} // swing
} // sun