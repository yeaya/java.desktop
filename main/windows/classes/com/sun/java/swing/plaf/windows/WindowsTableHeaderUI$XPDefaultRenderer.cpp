#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI$XPDefaultRenderer.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI$IconBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SortOrder.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/table/DefaultTableCellHeaderRenderer.h>
#include <jcpp.h>

#undef HOT
#undef HP_HEADERITEM
#undef LEADING
#undef NORMAL
#undef PRESSED
#undef SORTEDHOT
#undef SORTEDNORMAL
#undef SORTEDPRESSED

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsLookAndFeel = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel;
using $WindowsTableHeaderUI = ::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI;
using $WindowsTableHeaderUI$1 = ::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI$1;
using $WindowsTableHeaderUI$IconBorder = ::com::sun::java::swing::plaf::windows::WindowsTableHeaderUI$IconBorder;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JTable = ::javax::swing::JTable;
using $SortOrder = ::javax::swing::SortOrder;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $DefaultTableCellHeaderRenderer = ::sun::swing::table::DefaultTableCellHeaderRenderer;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsTableHeaderUI$XPDefaultRenderer_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsTableHeaderUI$XPDefaultRenderer, this$0)},
	{"skin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, 0, $field(WindowsTableHeaderUI$XPDefaultRenderer, skin)},
	{"isSelected", "Z", nullptr, 0, $field(WindowsTableHeaderUI$XPDefaultRenderer, isSelected)},
	{"hasFocus", "Z", nullptr, 0, $field(WindowsTableHeaderUI$XPDefaultRenderer, hasFocus$)},
	{"hasRollover", "Z", nullptr, 0, $field(WindowsTableHeaderUI$XPDefaultRenderer, hasRollover)},
	{"column", "I", nullptr, 0, $field(WindowsTableHeaderUI$XPDefaultRenderer, column)},
	{}
};

$MethodInfo _WindowsTableHeaderUI$XPDefaultRenderer_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsTableHeaderUI;)V", nullptr, 0, $method(static_cast<void(WindowsTableHeaderUI$XPDefaultRenderer::*)($WindowsTableHeaderUI*)>(&WindowsTableHeaderUI$XPDefaultRenderer::init$))},
	{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsTableHeaderUI$XPDefaultRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$XPDefaultRenderer", "com.sun.java.swing.plaf.windows.WindowsTableHeaderUI", "XPDefaultRenderer", $PRIVATE},
	{}
};

$ClassInfo _WindowsTableHeaderUI$XPDefaultRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$XPDefaultRenderer",
	"sun.swing.table.DefaultTableCellHeaderRenderer",
	nullptr,
	_WindowsTableHeaderUI$XPDefaultRenderer_FieldInfo_,
	_WindowsTableHeaderUI$XPDefaultRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsTableHeaderUI$XPDefaultRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI"
};

$Object* allocate$WindowsTableHeaderUI$XPDefaultRenderer($Class* clazz) {
	return $of($alloc(WindowsTableHeaderUI$XPDefaultRenderer));
}

void WindowsTableHeaderUI$XPDefaultRenderer::init$($WindowsTableHeaderUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultTableCellHeaderRenderer::init$();
	setHorizontalAlignment($SwingConstants::LEADING);
}

$Component* WindowsTableHeaderUI$XPDefaultRenderer::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	$DefaultTableCellHeaderRenderer::getTableCellRendererComponent(table, value, isSelected, hasFocus, row, column);
	this->isSelected = isSelected;
	this->hasFocus$ = hasFocus;
	this->column = column;
	this->hasRollover = (column == $WindowsTableHeaderUI::access$000(this->this$0));
	if (this->skin == nullptr) {
		$var($XPStyle, xp, $XPStyle::getXP());
		$init($TMSchema$Part);
		$set(this, skin, (xp != nullptr) ? $nc(xp)->getSkin($($WindowsTableHeaderUI::access$100(this->this$0)), $TMSchema$Part::HP_HEADERITEM) : ($XPStyle$Skin*)nullptr);
	}
	$var($Insets, margins, (this->skin != nullptr) ? $nc(this->skin)->getContentMargin() : ($Insets*)nullptr);
	$var($Border, border, nullptr);
	int32_t contentTop = 0;
	int32_t contentLeft = 0;
	int32_t contentBottom = 0;
	int32_t contentRight = 0;
	if (margins != nullptr) {
		contentTop = margins->top;
		contentLeft = margins->left;
		contentBottom = margins->bottom;
		contentRight = margins->right;
	}
	contentLeft += 5;
	contentBottom += 4;
	contentRight += 5;
	$var($Icon, sortIcon, nullptr);
	bool var$0 = $WindowsLookAndFeel::isOnVista();
	if (var$0 && ($instanceOf($UIResource, $assign(sortIcon, getIcon())) || sortIcon == nullptr)) {
		contentTop += 1;
		setIcon(nullptr);
		$assign(sortIcon, nullptr);
		$SortOrder* sortOrder = getColumnSortOrder(table, column);
		if (sortOrder != nullptr) {
			$init($WindowsTableHeaderUI$1);
			switch ($nc($WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder)->get((sortOrder)->ordinal())) {
			case 1:
				{
					$assign(sortIcon, $UIManager::getIcon("Table.ascendingSortIcon"_s));
					break;
				}
			case 2:
				{
					$assign(sortIcon, $UIManager::getIcon("Table.descendingSortIcon"_s));
					break;
				}
			}
		}
		if (sortIcon != nullptr) {
			contentBottom = sortIcon->getIconHeight();
			$assign(border, $new($WindowsTableHeaderUI$IconBorder, sortIcon, contentTop, contentLeft, contentBottom, contentRight));
		} else {
			$assign(sortIcon, $UIManager::getIcon("Table.ascendingSortIcon"_s));
			int32_t sortIconHeight = (sortIcon != nullptr) ? $nc(sortIcon)->getIconHeight() : 0;
			if (sortIconHeight != 0) {
				contentBottom = sortIconHeight;
			}
			$assign(border, $new($EmptyBorder, sortIconHeight + contentTop, contentLeft, contentBottom, contentRight));
		}
	} else {
		contentTop += 3;
		$assign(border, $new($EmptyBorder, contentTop, contentLeft, contentBottom, contentRight));
	}
	setBorder(border);
	return this;
}

void WindowsTableHeaderUI$XPDefaultRenderer::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, size, getSize());
	$init($TMSchema$State);
	$TMSchema$State* state = $TMSchema$State::NORMAL;
	$var($TableColumn, draggedColumn, $nc($($WindowsTableHeaderUI::access$200(this->this$0)))->getDraggedColumn());
	bool var$0 = draggedColumn != nullptr;
	if (var$0) {
		int32_t var$1 = this->column;
		$var($TableColumnModel, var$3, $nc($($WindowsTableHeaderUI::access$300(this->this$0)))->getColumnModel());
		int32_t var$2 = $SwingUtilities2::convertColumnIndexToView(var$3, draggedColumn->getModelIndex());
		var$0 = var$1 == var$2;
	}
	if (var$0) {
		state = $TMSchema$State::PRESSED;
	} else if (this->isSelected || this->hasFocus$ || this->hasRollover) {
		state = $TMSchema$State::HOT;
	}
	if ($WindowsLookAndFeel::isOnVista()) {
		$SortOrder* sortOrder = getColumnSortOrder($($nc($($WindowsTableHeaderUI::access$400(this->this$0)))->getTable()), this->column);
		if (sortOrder != nullptr) {
			$init($WindowsTableHeaderUI$1);
			switch ($nc($WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder)->get((sortOrder)->ordinal())) {
			case 1:
				{}
			case 2:
				{
					switch ($nc($WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)->get($nc((state))->ordinal())) {
					case 1:
						{
							state = $TMSchema$State::SORTEDNORMAL;
							break;
						}
					case 2:
						{
							state = $TMSchema$State::SORTEDPRESSED;
							break;
						}
					case 3:
						{
							state = $TMSchema$State::SORTEDHOT;
							break;
						}
					default:
						{}
					}
					break;
				}
			default:
				{}
			}
		}
	}
	$nc(this->skin)->paintSkin(g, 0, 0, $nc(size)->width - 1, size->height - 1, state);
	$DefaultTableCellHeaderRenderer::paint(g);
}

WindowsTableHeaderUI$XPDefaultRenderer::WindowsTableHeaderUI$XPDefaultRenderer() {
}

$Class* WindowsTableHeaderUI$XPDefaultRenderer::load$($String* name, bool initialize) {
	$loadClass(WindowsTableHeaderUI$XPDefaultRenderer, name, initialize, &_WindowsTableHeaderUI$XPDefaultRenderer_ClassInfo_, allocate$WindowsTableHeaderUI$XPDefaultRenderer);
	return class$;
}

$Class* WindowsTableHeaderUI$XPDefaultRenderer::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com