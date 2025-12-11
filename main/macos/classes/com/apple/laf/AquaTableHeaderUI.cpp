#include <com/apple/laf/AquaTableHeaderUI.h>

#include <com/apple/laf/AquaTableHeaderBorder.h>
#include <com/apple/laf/AquaTableHeaderUI$1.h>
#include <com/apple/laf/AquaTableHeaderUI$AquaTableCellRenderer.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/ClientPropertyApplicator.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <java/util/Enumeration.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableHeaderUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTableHeaderUI.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef LEADING
#undef MAX_VALUE
#undef TABLE_HEADER_APPLICATORS

using $AquaTableHeaderBorder = ::com::apple::laf::AquaTableHeaderBorder;
using $AquaTableHeaderUI$1 = ::com::apple::laf::AquaTableHeaderUI$1;
using $AquaTableHeaderUI$AquaTableCellRenderer = ::com::apple::laf::AquaTableHeaderUI$AquaTableCellRenderer;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $ClientPropertyApplicator = ::com::apple::laf::ClientPropertyApplicator;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableHeaderUI = ::javax::swing::plaf::TableHeaderUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTableHeaderUI = ::javax::swing::plaf::basic::BasicTableHeaderUI;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTableHeaderUI_FieldInfo_[] = {
	{"originalHeaderAlignment", "I", nullptr, $PRIVATE, $field(AquaTableHeaderUI, originalHeaderAlignment)},
	{"sortColumn", "I", nullptr, $PROTECTED, $field(AquaTableHeaderUI, sortColumn)},
	{"sortOrder", "I", nullptr, $PROTECTED, $field(AquaTableHeaderUI, sortOrder)},
	{"TABLE_HEADER_APPLICATORS", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/table/JTableHeader;Ljavax/swing/table/JTableHeader;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaTableHeaderUI, TABLE_HEADER_APPLICATORS)},
	{}
};

$MethodInfo _AquaTableHeaderUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTableHeaderUI::*)()>(&AquaTableHeaderUI::init$))},
	{"access$000", "(Lcom/apple/laf/AquaTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTableHeader*(*)(AquaTableHeaderUI*)>(&AquaTableHeaderUI::access$000))},
	{"access$100", "(Lcom/apple/laf/AquaTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTableHeader*(*)(AquaTableHeaderUI*)>(&AquaTableHeaderUI::access$100))},
	{"access$200", "(Lcom/apple/laf/AquaTableHeaderUI;)Ljavax/swing/table/JTableHeader;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTableHeader*(*)(AquaTableHeaderUI*)>(&AquaTableHeaderUI::access$200))},
	{"createHeaderSizeAqua", "(J)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(AquaTableHeaderUI::*)(int64_t)>(&AquaTableHeaderUI::createHeaderSizeAqua))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTableHeaderUI::createUI))},
	{"getAquaBorderFrom", "(Ljavax/swing/table/JTableHeader;Ljavax/swing/table/TableColumn;)Lcom/apple/laf/AquaTableHeaderBorder;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$AquaTableHeaderBorder*(*)($JTableHeader*,$TableColumn*)>(&AquaTableHeaderUI::getAquaBorderFrom))},
	{"getHeaderHeightAqua", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(AquaTableHeaderUI::*)()>(&AquaTableHeaderUI::getHeaderHeightAqua))},
	{"getHeaderRendererAqua", "(I)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(AquaTableHeaderUI::*)(int32_t)>(&AquaTableHeaderUI::getHeaderRendererAqua))},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getTableColumn", "(Ljavax/swing/table/JTableHeader;Ljava/lang/Object;)Ljavax/swing/table/TableColumn;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$TableColumn*(*)($JTableHeader*,Object$*)>(&AquaTableHeaderUI::getTableColumn))},
	{"getTableHeaderApplicators", "()Lcom/apple/laf/ClientPropertyApplicator;", "()Lcom/apple/laf/ClientPropertyApplicator<Ljavax/swing/table/JTableHeader;Ljavax/swing/table/JTableHeader;>;", $STATIC, $method(static_cast<$ClientPropertyApplicator*(*)()>(&AquaTableHeaderUI::getTableHeaderApplicators))},
	{"installDefaults", "()V", nullptr, $PUBLIC},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"tickle", "(Ljavax/swing/table/JTableHeader;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $STATIC, $method(static_cast<void(*)($JTableHeader*,Object$*,Object$*)>(&AquaTableHeaderUI::tickle))},
	{"uninstallDefaults", "()V", nullptr, $PUBLIC},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaTableHeaderUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTableHeaderUI$AquaTableCellRenderer", "com.apple.laf.AquaTableHeaderUI", "AquaTableCellRenderer", 0},
	{"com.apple.laf.AquaTableHeaderUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTableHeaderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTableHeaderUI",
	"javax.swing.plaf.basic.BasicTableHeaderUI",
	nullptr,
	_AquaTableHeaderUI_FieldInfo_,
	_AquaTableHeaderUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTableHeaderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTableHeaderUI$AquaTableCellRenderer,com.apple.laf.AquaTableHeaderUI$1,com.apple.laf.AquaTableHeaderUI$1$2,com.apple.laf.AquaTableHeaderUI$1$1"
};

$Object* allocate$AquaTableHeaderUI($Class* clazz) {
	return $of($alloc(AquaTableHeaderUI));
}

$AquaUtils$RecyclableSingleton* AquaTableHeaderUI::TABLE_HEADER_APPLICATORS = nullptr;

$JTableHeader* AquaTableHeaderUI::access$200(AquaTableHeaderUI* x0) {
	$init(AquaTableHeaderUI);
	return $nc(x0)->header;
}

$JTableHeader* AquaTableHeaderUI::access$100(AquaTableHeaderUI* x0) {
	$init(AquaTableHeaderUI);
	return $nc(x0)->header;
}

$JTableHeader* AquaTableHeaderUI::access$000(AquaTableHeaderUI* x0) {
	$init(AquaTableHeaderUI);
	return $nc(x0)->header;
}

void AquaTableHeaderUI::init$() {
	$BasicTableHeaderUI::init$();
}

$ComponentUI* AquaTableHeaderUI::createUI($JComponent* c) {
	$init(AquaTableHeaderUI);
	return $new(AquaTableHeaderUI);
}

void AquaTableHeaderUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$BasicTableHeaderUI::installDefaults();
	$var($TableCellRenderer, renderer, $nc(this->header)->getDefaultRenderer());
	if ($instanceOf($UIResource, renderer) && $instanceOf($DefaultTableCellRenderer, renderer)) {
		$var($DefaultTableCellRenderer, defaultRenderer, $cast($DefaultTableCellRenderer, renderer));
		this->originalHeaderAlignment = $nc(defaultRenderer)->getHorizontalAlignment();
		defaultRenderer->setHorizontalAlignment($SwingConstants::LEADING);
	}
}

void AquaTableHeaderUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	$var($TableCellRenderer, renderer, $nc(this->header)->getDefaultRenderer());
	if ($instanceOf($UIResource, renderer) && $instanceOf($DefaultTableCellRenderer, renderer)) {
		$var($DefaultTableCellRenderer, defaultRenderer, $cast($DefaultTableCellRenderer, renderer));
		$nc(defaultRenderer)->setHorizontalAlignment(this->originalHeaderAlignment);
	}
	$BasicTableHeaderUI::uninstallDefaults();
}

$ClientPropertyApplicator* AquaTableHeaderUI::getTableHeaderApplicators() {
	$init(AquaTableHeaderUI);
	return $cast($ClientPropertyApplicator, $nc(AquaTableHeaderUI::TABLE_HEADER_APPLICATORS)->get());
}

void AquaTableHeaderUI::tickle($JTableHeader* target, Object$* selectedColumn, Object$* direction) {
	$init(AquaTableHeaderUI);
	$useLocalCurrentObjectStackCache();
	$var($TableColumn, tableColumn, getTableColumn(target, selectedColumn));
	if (tableColumn == nullptr) {
		return;
	}
	int32_t sortDirection = 0;
	if ("ascending"_s->equalsIgnoreCase($$str({direction, ""_s}))) {
		sortDirection = 1;
	} else if ("descending"_s->equalsIgnoreCase($$str({direction, ""_s}))) {
		sortDirection = -1;
	} else if ("decending"_s->equalsIgnoreCase($$str({direction, ""_s}))) {
		sortDirection = -1;
	}
	$var($TableHeaderUI, headerUI, $cast($TableHeaderUI, $nc(target)->getUI()));
	if (headerUI == nullptr || !($instanceOf(AquaTableHeaderUI, headerUI))) {
		return;
	}
	$var(AquaTableHeaderUI, aquaHeaderUI, $cast(AquaTableHeaderUI, headerUI));
	$nc(aquaHeaderUI)->sortColumn = $nc(tableColumn)->getModelIndex();
	aquaHeaderUI->sortOrder = sortDirection;
	$var($AquaTableHeaderUI$AquaTableCellRenderer, renderer, $new($AquaTableHeaderUI$AquaTableCellRenderer, static_cast<AquaTableHeaderUI*>(aquaHeaderUI)));
	tableColumn->setHeaderRenderer(renderer);
}

$TableColumn* AquaTableHeaderUI::getTableColumn($JTableHeader* target, Object$* value) {
	$init(AquaTableHeaderUI);
	if (value == nullptr || !($instanceOf($Integer, value))) {
		return nullptr;
	}
	int32_t columnIndex = $nc(($cast($Integer, value)))->intValue();
	$var($TableColumnModel, columnModel, $nc(target)->getColumnModel());
	if (columnIndex < 0 || columnIndex >= $nc(columnModel)->getColumnCount()) {
		return nullptr;
	}
	return $nc(columnModel)->getColumn(columnIndex);
}

$AquaTableHeaderBorder* AquaTableHeaderUI::getAquaBorderFrom($JTableHeader* header, $TableColumn* column) {
	$init(AquaTableHeaderUI);
	$useLocalCurrentObjectStackCache();
	$var($TableCellRenderer, renderer, $nc(column)->getHeaderRenderer());
	if (renderer == nullptr) {
		return nullptr;
	}
	$var($JTable, var$0, $nc(header)->getTable());
	$var($Object, var$1, column->getHeaderValue());
	$var($Component, c, $nc(renderer)->getTableCellRendererComponent(var$0, var$1, false, false, -1, column->getModelIndex()));
	if (!($instanceOf($JComponent, c))) {
		return nullptr;
	}
	$var($Border, border, $nc(($cast($JComponent, c)))->getBorder());
	if (!($instanceOf($AquaTableHeaderBorder, border))) {
		return nullptr;
	}
	return $cast($AquaTableHeaderBorder, border);
}

void AquaTableHeaderUI::installListeners() {
	$BasicTableHeaderUI::installListeners();
	$nc($(getTableHeaderApplicators()))->attachAndApplyClientProperties(this->header);
}

void AquaTableHeaderUI::uninstallListeners() {
	$nc($(getTableHeaderApplicators()))->removeFrom(this->header);
	$BasicTableHeaderUI::uninstallListeners();
}

int32_t AquaTableHeaderUI::getHeaderHeightAqua() {
	$useLocalCurrentObjectStackCache();
	int32_t height = 0;
	bool accomodatedDefault = false;
	$var($TableColumnModel, columnModel, $nc(this->header)->getColumnModel());
	for (int32_t column = 0; column < $nc(columnModel)->getColumnCount(); ++column) {
		$var($TableColumn, aColumn, columnModel->getColumn(column));
		if ($nc(aColumn)->getHeaderRenderer() != nullptr || !accomodatedDefault) {
			$var($Component, comp, getHeaderRendererAqua(column));
			int32_t rendererHeight = $nc($($nc(comp)->getPreferredSize()))->height;
			height = $Math::max(height, rendererHeight);
			if (rendererHeight > 4) {
				accomodatedDefault = true;
			}
		}
	}
	return height;
}

$Component* AquaTableHeaderUI::getHeaderRendererAqua(int32_t columnIndex) {
	$useLocalCurrentObjectStackCache();
	$var($TableColumn, aColumn, $nc($($nc(this->header)->getColumnModel()))->getColumn(columnIndex));
	$var($TableCellRenderer, renderer, $nc(aColumn)->getHeaderRenderer());
	if (renderer == nullptr) {
		$assign(renderer, $nc(this->header)->getDefaultRenderer());
	}
	$var($JTable, var$0, $nc(this->header)->getTable());
	return $nc(renderer)->getTableCellRendererComponent(var$0, $(aColumn->getHeaderValue()), false, false, -1, columnIndex);
}

$Dimension* AquaTableHeaderUI::createHeaderSizeAqua(int64_t width) {
	if (width > $Integer::MAX_VALUE) {
		width = $Integer::MAX_VALUE;
	}
	return $new($Dimension, (int32_t)width, getHeaderHeightAqua());
}

$Dimension* AquaTableHeaderUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int64_t width = 0;
	$var($Enumeration, enumeration, $nc($($nc(this->header)->getColumnModel()))->getColumns());
	while ($nc(enumeration)->hasMoreElements()) {
		$var($TableColumn, aColumn, $cast($TableColumn, enumeration->nextElement()));
		width = width + $nc(aColumn)->getMinWidth();
	}
	return createHeaderSizeAqua(width);
}

$Dimension* AquaTableHeaderUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	int64_t width = 0;
	$var($Enumeration, enumeration, $nc($($nc(this->header)->getColumnModel()))->getColumns());
	while ($nc(enumeration)->hasMoreElements()) {
		$var($TableColumn, aColumn, $cast($TableColumn, enumeration->nextElement()));
		width = width + $nc(aColumn)->getPreferredWidth();
	}
	return createHeaderSizeAqua(width);
}

void clinit$AquaTableHeaderUI($Class* class$) {
	$assignStatic(AquaTableHeaderUI::TABLE_HEADER_APPLICATORS, $new($AquaTableHeaderUI$1));
}

AquaTableHeaderUI::AquaTableHeaderUI() {
}

$Class* AquaTableHeaderUI::load$($String* name, bool initialize) {
	$loadClass(AquaTableHeaderUI, name, initialize, &_AquaTableHeaderUI_ClassInfo_, clinit$AquaTableHeaderUI, allocate$AquaTableHeaderUI);
	return class$;
}

$Class* AquaTableHeaderUI::class$ = nullptr;

		} // laf
	} // apple
} // com