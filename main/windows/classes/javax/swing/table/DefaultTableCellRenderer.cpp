#include <javax/swing/table/DefaultTableCellRenderer.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable$DropLocation.h>
#include <javax/swing/JTable.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef DEFAULT_NO_FOCUS_BORDER
#undef SAFE_NO_FOCUS_BORDER

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $JTable$DropLocation = ::javax::swing::JTable$DropLocation;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _DefaultTableCellRenderer_FieldInfo_[] = {
	{"SAFE_NO_FOCUS_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultTableCellRenderer, SAFE_NO_FOCUS_BORDER)},
	{"DEFAULT_NO_FOCUS_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DefaultTableCellRenderer, DEFAULT_NO_FOCUS_BORDER)},
	{"noFocusBorder", "Ljavax/swing/border/Border;", nullptr, $PROTECTED | $STATIC, $staticField(DefaultTableCellRenderer, noFocusBorder)},
	{"unselectedForeground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultTableCellRenderer, unselectedForeground)},
	{"unselectedBackground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultTableCellRenderer, unselectedBackground)},
	{}
};

$MethodInfo _DefaultTableCellRenderer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTableCellRenderer::*)()>(&DefaultTableCellRenderer::init$))},
	{"firePropertyChange", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"firePropertyChange", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC},
	{"getNoFocusBorder", "()Ljavax/swing/border/Border;", nullptr, $PRIVATE, $method(static_cast<$Border*(DefaultTableCellRenderer::*)()>(&DefaultTableCellRenderer::getNoFocusBorder))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{"repaint", "(JIIII)V", nullptr, $PUBLIC},
	{"repaint", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"repaint", "()V", nullptr, $PUBLIC},
	{"revalidate", "()V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"validate", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultTableCellRenderer_InnerClassesInfo_[] = {
	{"javax.swing.table.DefaultTableCellRenderer$UIResource", "javax.swing.table.DefaultTableCellRenderer", "UIResource", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DefaultTableCellRenderer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.table.DefaultTableCellRenderer",
	"javax.swing.JLabel",
	"javax.swing.table.TableCellRenderer",
	_DefaultTableCellRenderer_FieldInfo_,
	_DefaultTableCellRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultTableCellRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.table.DefaultTableCellRenderer$UIResource"
};

$Object* allocate$DefaultTableCellRenderer($Class* clazz) {
	return $of($alloc(DefaultTableCellRenderer));
}

$String* DefaultTableCellRenderer::toString() {
	 return this->$JLabel::toString();
}

int32_t DefaultTableCellRenderer::hashCode() {
	 return this->$JLabel::hashCode();
}

bool DefaultTableCellRenderer::equals(Object$* arg0) {
	 return this->$JLabel::equals(arg0);
}

$Object* DefaultTableCellRenderer::clone() {
	 return this->$JLabel::clone();
}

void DefaultTableCellRenderer::finalize() {
	this->$JLabel::finalize();
}

$Border* DefaultTableCellRenderer::SAFE_NO_FOCUS_BORDER = nullptr;
$Border* DefaultTableCellRenderer::DEFAULT_NO_FOCUS_BORDER = nullptr;
$Border* DefaultTableCellRenderer::noFocusBorder = nullptr;

void DefaultTableCellRenderer::init$() {
	$JLabel::init$();
	setOpaque(true);
	setBorder($(getNoFocusBorder()));
	setName("Table.cellRenderer"_s);
}

$Border* DefaultTableCellRenderer::getNoFocusBorder() {
	$var($Border, border, $DefaultLookup::getBorder(this, this->ui, "Table.cellNoFocusBorder"_s));
	if ($System::getSecurityManager() != nullptr) {
		if (border != nullptr) {
			return border;
		}
		return DefaultTableCellRenderer::SAFE_NO_FOCUS_BORDER;
	} else if (border != nullptr) {
		if (DefaultTableCellRenderer::noFocusBorder == nullptr || DefaultTableCellRenderer::noFocusBorder == DefaultTableCellRenderer::DEFAULT_NO_FOCUS_BORDER) {
			return border;
		}
	}
	return DefaultTableCellRenderer::noFocusBorder;
}

void DefaultTableCellRenderer::setForeground($Color* c) {
	$JLabel::setForeground(c);
	$set(this, unselectedForeground, c);
}

void DefaultTableCellRenderer::setBackground($Color* c) {
	$JLabel::setBackground(c);
	$set(this, unselectedBackground, c);
}

void DefaultTableCellRenderer::updateUI() {
	$JLabel::updateUI();
	setForeground(nullptr);
	setBackground(nullptr);
}

$Component* DefaultTableCellRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	if (table == nullptr) {
		return this;
	}
	$var($Color, fg, nullptr);
	$var($Color, bg, nullptr);
	$var($JTable$DropLocation, dropLocation, $nc(table)->getDropLocation());
	bool var$2 = dropLocation != nullptr && !dropLocation->isInsertRow();
	bool var$1 = var$2 && !dropLocation->isInsertColumn();
	bool var$0 = var$1 && dropLocation->getRow() == row;
	if (var$0 && dropLocation->getColumn() == column) {
		$assign(fg, $DefaultLookup::getColor(this, this->ui, "Table.dropCellForeground"_s));
		$assign(bg, $DefaultLookup::getColor(this, this->ui, "Table.dropCellBackground"_s));
		isSelected = true;
	}
	if (isSelected) {
		$JLabel::setForeground(fg == nullptr ? $(table->getSelectionForeground()) : fg);
		$JLabel::setBackground(bg == nullptr ? $(table->getSelectionBackground()) : bg);
	} else {
		$var($Color, background, this->unselectedBackground != nullptr ? this->unselectedBackground : table->getBackground());
		if (background == nullptr || $instanceOf($UIResource, background)) {
			$var($Color, alternateColor, $DefaultLookup::getColor(this, this->ui, "Table.alternateRowColor"_s));
			if (alternateColor != nullptr && row % 2 != 0) {
				$assign(background, alternateColor);
			}
		}
		$JLabel::setForeground(this->unselectedForeground != nullptr ? this->unselectedForeground : $(table->getForeground()));
		$JLabel::setBackground(background);
	}
	setFont($(table->getFont()));
	if (hasFocus) {
		$var($Border, border, nullptr);
		if (isSelected) {
			$assign(border, $DefaultLookup::getBorder(this, this->ui, "Table.focusSelectedCellHighlightBorder"_s));
		}
		if (border == nullptr) {
			$assign(border, $DefaultLookup::getBorder(this, this->ui, "Table.focusCellHighlightBorder"_s));
		}
		setBorder(border);
		if (!isSelected && table->isCellEditable(row, column)) {
			$var($Color, col, nullptr);
			$assign(col, $DefaultLookup::getColor(this, this->ui, "Table.focusCellForeground"_s));
			if (col != nullptr) {
				$JLabel::setForeground(col);
			}
			$assign(col, $DefaultLookup::getColor(this, this->ui, "Table.focusCellBackground"_s));
			if (col != nullptr) {
				$JLabel::setBackground(col);
			}
		}
	} else {
		setBorder($(getNoFocusBorder()));
	}
	setValue(value);
	return this;
}

bool DefaultTableCellRenderer::isOpaque() {
	$useLocalCurrentObjectStackCache();
	$var($Color, back, getBackground());
	$var($Component, p, getParent());
	if (p != nullptr) {
		$assign(p, p->getParent());
	}
	bool var$0 = (back != nullptr) && (p != nullptr) && back->equals($(p->getBackground()));
	bool colorMatch = var$0 && p->isOpaque();
	return !colorMatch && $JLabel::isOpaque();
}

void DefaultTableCellRenderer::invalidate() {
}

void DefaultTableCellRenderer::validate() {
}

void DefaultTableCellRenderer::revalidate() {
}

void DefaultTableCellRenderer::repaint(int64_t tm, int32_t x, int32_t y, int32_t width, int32_t height) {
}

void DefaultTableCellRenderer::repaint($Rectangle* r) {
}

void DefaultTableCellRenderer::repaint() {
}

void DefaultTableCellRenderer::firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue) {
	bool var$0 = propertyName == "text"_s || propertyName == "labelFor"_s || propertyName == "displayedMnemonic"_s;
	if (!var$0) {
		bool var$1 = ($SwingUtilities2::isScaleChanged(propertyName, oldValue, newValue) || propertyName == "font"_s || propertyName == "foreground"_s) && !$equals(oldValue, newValue);
		$init($BasicHTML);
		var$0 = (var$1 && getClientProperty($BasicHTML::propertyKey) != nullptr);
	}
	if (var$0) {
		$JLabel::firePropertyChange(propertyName, oldValue, newValue);
	}
}

void DefaultTableCellRenderer::firePropertyChange($String* propertyName, bool oldValue, bool newValue) {
}

void DefaultTableCellRenderer::setValue(Object$* value) {
	setText((value == nullptr) ? ""_s : $($nc($of(value))->toString()));
}

void clinit$DefaultTableCellRenderer($Class* class$) {
	$assignStatic(DefaultTableCellRenderer::SAFE_NO_FOCUS_BORDER, $new($EmptyBorder, 1, 1, 1, 1));
	$assignStatic(DefaultTableCellRenderer::DEFAULT_NO_FOCUS_BORDER, $new($EmptyBorder, 1, 1, 1, 1));
	$assignStatic(DefaultTableCellRenderer::noFocusBorder, DefaultTableCellRenderer::DEFAULT_NO_FOCUS_BORDER);
}

DefaultTableCellRenderer::DefaultTableCellRenderer() {
}

$Class* DefaultTableCellRenderer::load$($String* name, bool initialize) {
	$loadClass(DefaultTableCellRenderer, name, initialize, &_DefaultTableCellRenderer_ClassInfo_, clinit$DefaultTableCellRenderer, allocate$DefaultTableCellRenderer);
	return class$;
}

$Class* DefaultTableCellRenderer::class$ = nullptr;

		} // table
	} // swing
} // javax