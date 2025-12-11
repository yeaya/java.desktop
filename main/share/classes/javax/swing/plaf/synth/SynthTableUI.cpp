#include <javax/swing/plaf/synth/SynthTableUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Number.h>
#include <java/util/Date.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable$DropLocation.h>
#include <javax/swing/JTable.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TableUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTableUI$SynthBooleanTableCellRenderer.h>
#include <javax/swing/plaf/synth/SynthTableUI$SynthTableCellRenderer.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

#undef BACKGROUND
#undef ENABLED
#undef FOREGROUND
#undef GRAY
#undef SELECTED
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $Date = ::java::util::Date;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $JTable$DropLocation = ::javax::swing::JTable$DropLocation;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $TransferHandler = ::javax::swing::TransferHandler;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TableUI = ::javax::swing::plaf::TableUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTableUI$SynthBooleanTableCellRenderer = ::javax::swing::plaf::synth::SynthTableUI$SynthBooleanTableCellRenderer;
using $SynthTableUI$SynthTableCellRenderer = ::javax::swing::plaf::synth::SynthTableUI$SynthTableCellRenderer;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTableUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTableUI, style)},
	{"useTableColors", "Z", nullptr, $PRIVATE, $field(SynthTableUI, useTableColors)},
	{"useUIBorder", "Z", nullptr, $PRIVATE, $field(SynthTableUI, useUIBorder)},
	{"alternateColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(SynthTableUI, alternateColor)},
	{"dateRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableUI, dateRenderer)},
	{"numberRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableUI, numberRenderer)},
	{"doubleRender", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableUI, doubleRender)},
	{"floatRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableUI, floatRenderer)},
	{"iconRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableUI, iconRenderer)},
	{"imageIconRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableUI, imageIconRenderer)},
	{"booleanRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableUI, booleanRenderer)},
	{"objectRenderer", "Ljavax/swing/table/TableCellRenderer;", nullptr, $PRIVATE, $field(SynthTableUI, objectRenderer)},
	{}
};

$MethodInfo _SynthTableUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthTableUI::*)()>(&SynthTableUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthTableUI::createUI))},
	{"extendRect", "(Ljava/awt/Rectangle;Z)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(SynthTableUI::*)($Rectangle*,bool)>(&SynthTableUI::extendRect))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTableUI::*)($JComponent*,int32_t)>(&SynthTableUI::getContext))},
	{"getHDropLineRect", "(Ljavax/swing/JTable$DropLocation;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(SynthTableUI::*)($JTable$DropLocation*)>(&SynthTableUI::getHDropLineRect))},
	{"getVDropLineRect", "(Ljavax/swing/JTable$DropLocation;)Ljava/awt/Rectangle;", nullptr, $PRIVATE, $method(static_cast<$Rectangle*(SynthTableUI::*)($JTable$DropLocation*)>(&SynthTableUI::getVDropLineRect))},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installRendererIfPossible", "(Ljava/lang/Class;Ljavax/swing/table/TableCellRenderer;)Ljavax/swing/table/TableCellRenderer;", "(Ljava/lang/Class<*>;Ljavax/swing/table/TableCellRenderer;)Ljavax/swing/table/TableCellRenderer;", $PRIVATE, $method(static_cast<$TableCellRenderer*(SynthTableUI::*)($Class*,$TableCellRenderer*)>(&SynthTableUI::installRendererIfPossible))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCell", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;II)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTableUI::*)($SynthContext*,$Graphics*,$Rectangle*,int32_t,int32_t)>(&SynthTableUI::paintCell))},
	{"paintCells", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTableUI::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&SynthTableUI::paintCells))},
	{"paintDraggedArea", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IILjavax/swing/table/TableColumn;I)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTableUI::*)($SynthContext*,$Graphics*,int32_t,int32_t,$TableColumn*,int32_t)>(&SynthTableUI::paintDraggedArea))},
	{"paintDropLines", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTableUI::*)($SynthContext*,$Graphics*)>(&SynthTableUI::paintDropLines))},
	{"paintGrid", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTableUI::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&SynthTableUI::paintGrid))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JTable;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTableUI::*)($JTable*)>(&SynthTableUI::updateStyle))},
	{"viewIndexForColumn", "(Ljavax/swing/table/TableColumn;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthTableUI::*)($TableColumn*)>(&SynthTableUI::viewIndexForColumn))},
	{}
};

$InnerClassInfo _SynthTableUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTableUI$SynthTableCellRenderer", "javax.swing.plaf.synth.SynthTableUI", "SynthTableCellRenderer", $PRIVATE},
	{"javax.swing.plaf.synth.SynthTableUI$SynthBooleanTableCellRenderer", "javax.swing.plaf.synth.SynthTableUI", "SynthBooleanTableCellRenderer", $PRIVATE},
	{}
};

$ClassInfo _SynthTableUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTableUI",
	"javax.swing.plaf.basic.BasicTableUI",
	"javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener",
	_SynthTableUI_FieldInfo_,
	_SynthTableUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTableUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTableUI$SynthTableCellRenderer,javax.swing.plaf.synth.SynthTableUI$SynthBooleanTableCellRenderer"
};

$Object* allocate$SynthTableUI($Class* clazz) {
	return $of($alloc(SynthTableUI));
}

int32_t SynthTableUI::hashCode() {
	 return this->$BasicTableUI::hashCode();
}

bool SynthTableUI::equals(Object$* arg0) {
	 return this->$BasicTableUI::equals(arg0);
}

$Object* SynthTableUI::clone() {
	 return this->$BasicTableUI::clone();
}

$String* SynthTableUI::toString() {
	 return this->$BasicTableUI::toString();
}

void SynthTableUI::finalize() {
	this->$BasicTableUI::finalize();
}

void SynthTableUI::init$() {
	$BasicTableUI::init$();
}

$ComponentUI* SynthTableUI::createUI($JComponent* c) {
	$init(SynthTableUI);
	return $new(SynthTableUI);
}

void SynthTableUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$load($Date);
	$set(this, dateRenderer, installRendererIfPossible($Date::class$, nullptr));
	$load($Number);
	$set(this, numberRenderer, installRendererIfPossible($Number::class$, nullptr));
	$load($Double);
	$set(this, doubleRender, installRendererIfPossible($Double::class$, nullptr));
	$load($Float);
	$set(this, floatRenderer, installRendererIfPossible($Float::class$, nullptr));
	$load($Icon);
	$set(this, iconRenderer, installRendererIfPossible($Icon::class$, nullptr));
	$load($ImageIcon);
	$set(this, imageIconRenderer, installRendererIfPossible($ImageIcon::class$, nullptr));
	$load($Boolean);
	$set(this, booleanRenderer, installRendererIfPossible($Boolean::class$, $$new($SynthTableUI$SynthBooleanTableCellRenderer, this)));
	$set(this, objectRenderer, installRendererIfPossible($Object::class$, $$new($SynthTableUI$SynthTableCellRenderer, this)));
	updateStyle(this->table);
}

$TableCellRenderer* SynthTableUI::installRendererIfPossible($Class* objectClass, $TableCellRenderer* renderer) {
	$var($TableCellRenderer, currentRenderer, $nc(this->table)->getDefaultRenderer(objectClass));
	if ($instanceOf($UIResource, currentRenderer)) {
		$nc(this->table)->setDefaultRenderer(objectClass, renderer);
	}
	return currentRenderer;
}

void SynthTableUI::updateStyle($JTable* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$nc(context)->setComponentState($SynthConstants::ENABLED | $SynthConstants::SELECTED);
		$var($Color, sbg, $nc(this->table)->getSelectionBackground());
		if (sbg == nullptr || $instanceOf($UIResource, sbg)) {
			$init($ColorType);
			$nc(this->table)->setSelectionBackground($($nc(this->style)->getColor(context, $ColorType::TEXT_BACKGROUND)));
		}
		$var($Color, sfg, $nc(this->table)->getSelectionForeground());
		if (sfg == nullptr || $instanceOf($UIResource, sfg)) {
			$init($ColorType);
			$nc(this->table)->setSelectionForeground($($nc(this->style)->getColor(context, $ColorType::TEXT_FOREGROUND)));
		}
		context->setComponentState($SynthConstants::ENABLED);
		$var($Color, gridColor, $nc(this->table)->getGridColor());
		if (gridColor == nullptr || $instanceOf($UIResource, gridColor)) {
			$assign(gridColor, $cast($Color, $nc(this->style)->get(context, "Table.gridColor"_s)));
			if (gridColor == nullptr) {
				$init($ColorType);
				$assign(gridColor, $nc(this->style)->getColor(context, $ColorType::FOREGROUND));
			}
			$init($Color);
			$nc(this->table)->setGridColor(gridColor == nullptr ? static_cast<$Color*>($$new($ColorUIResource, $Color::GRAY)) : gridColor);
		}
		this->useTableColors = $nc(this->style)->getBoolean(context, "Table.rendererUseTableColors"_s, true);
		this->useUIBorder = $nc(this->style)->getBoolean(context, "Table.rendererUseUIBorder"_s, true);
		$var($Object, rowHeight, $nc(this->style)->get(context, "Table.rowHeight"_s));
		if (rowHeight != nullptr) {
			$LookAndFeel::installProperty(this->table, "rowHeight"_s, rowHeight);
		}
		bool showGrid = $nc(this->style)->getBoolean(context, "Table.showGrid"_s, true);
		if (!showGrid) {
			$nc(this->table)->setShowGrid(false);
		}
		$var($Dimension, d, $nc(this->table)->getIntercellSpacing());
		if (d != nullptr) {
			$assign(d, $cast($Dimension, $nc(this->style)->get(context, "Table.intercellSpacing"_s)));
		}
		$set(this, alternateColor, $cast($Color, $nc(this->style)->get(context, "Table.alternateRowColor"_s)));
		if (d != nullptr) {
			$nc(this->table)->setIntercellSpacing(d);
		}
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
}

void SynthTableUI::installListeners() {
	$BasicTableUI::installListeners();
	$nc(this->table)->addPropertyChangeListener(this);
}

void SynthTableUI::uninstallDefaults() {
	$useLocalCurrentObjectStackCache();
	$load($Date);
	$nc(this->table)->setDefaultRenderer($Date::class$, this->dateRenderer);
	$load($Number);
	$nc(this->table)->setDefaultRenderer($Number::class$, this->numberRenderer);
	$load($Double);
	$nc(this->table)->setDefaultRenderer($Double::class$, this->doubleRender);
	$load($Float);
	$nc(this->table)->setDefaultRenderer($Float::class$, this->floatRenderer);
	$load($Icon);
	$nc(this->table)->setDefaultRenderer($Icon::class$, this->iconRenderer);
	$load($ImageIcon);
	$nc(this->table)->setDefaultRenderer($ImageIcon::class$, this->imageIconRenderer);
	$load($Boolean);
	$nc(this->table)->setDefaultRenderer($Boolean::class$, this->booleanRenderer);
	$nc(this->table)->setDefaultRenderer($Object::class$, this->objectRenderer);
	if ($instanceOf($UIResource, $($nc(this->table)->getTransferHandler()))) {
		$nc(this->table)->setTransferHandler(nullptr);
	}
	$var($SynthContext, context, getContext(this->table, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
}

void SynthTableUI::uninstallListeners() {
	$nc(this->table)->removePropertyChangeListener(this);
	$BasicTableUI::uninstallListeners();
}

$SynthContext* SynthTableUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthTableUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

void SynthTableUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintTableBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

void SynthTableUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintTableBorder(context, g, x, y, w, h);
}

void SynthTableUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthTableUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	$var($Rectangle, bounds, $nc(this->table)->getBounds());
	$nc(bounds)->x = (bounds->y = 0);
	bool var$1 = $nc(this->table)->getRowCount() <= 0;
	bool var$0 = var$1 || $nc(this->table)->getColumnCount() <= 0;
	if (var$0 || !bounds->intersects(clip)) {
		paintDropLines(context, g);
		return;
	}
	bool ltr = $nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight();
	$var($Point, upperLeft, $nc(clip)->getLocation());
	$var($Point, lowerRight, $new($Point, clip->x + clip->width - 1, clip->y + clip->height - 1));
	int32_t rMin = $nc(this->table)->rowAtPoint(upperLeft);
	int32_t rMax = $nc(this->table)->rowAtPoint(lowerRight);
	if (rMin == -1) {
		rMin = 0;
	}
	if (rMax == -1) {
		rMax = $nc(this->table)->getRowCount() - 1;
	}
	int32_t cMin = $nc(this->table)->columnAtPoint(ltr ? upperLeft : lowerRight);
	int32_t cMax = $nc(this->table)->columnAtPoint(ltr ? lowerRight : upperLeft);
	if (cMin == -1) {
		cMin = 0;
	}
	if (cMax == -1) {
		cMax = $nc(this->table)->getColumnCount() - 1;
	}
	paintCells(context, g, rMin, rMax, cMin, cMax);
	paintGrid(context, g, rMin, rMax, cMin, cMax);
	paintDropLines(context, g);
}

void SynthTableUI::paintDropLines($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($JTable$DropLocation, loc, $nc(this->table)->getDropLocation());
	if (loc == nullptr) {
		return;
	}
	$var($Color, color, $cast($Color, $nc(this->style)->get(context, "Table.dropLineColor"_s)));
	$var($Color, shortColor, $cast($Color, $nc(this->style)->get(context, "Table.dropLineShortColor"_s)));
	if (color == nullptr && shortColor == nullptr) {
		return;
	}
	$var($Rectangle, rect, nullptr);
	$assign(rect, getHDropLineRect(loc));
	if (rect != nullptr) {
		int32_t x = rect->x;
		int32_t w = rect->width;
		if (color != nullptr) {
			extendRect(rect, true);
			$nc(g)->setColor(color);
			g->fillRect(rect->x, rect->y, rect->width, rect->height);
		}
		if (!$nc(loc)->isInsertColumn() && shortColor != nullptr) {
			$nc(g)->setColor(shortColor);
			g->fillRect(x, rect->y, w, rect->height);
		}
	}
	$assign(rect, getVDropLineRect(loc));
	if (rect != nullptr) {
		int32_t y = rect->y;
		int32_t h = rect->height;
		if (color != nullptr) {
			extendRect(rect, false);
			$nc(g)->setColor(color);
			g->fillRect(rect->x, rect->y, rect->width, rect->height);
		}
		if (!$nc(loc)->isInsertRow() && shortColor != nullptr) {
			$nc(g)->setColor(shortColor);
			g->fillRect(rect->x, y, rect->width, h);
		}
	}
}

$Rectangle* SynthTableUI::getHDropLineRect($JTable$DropLocation* loc) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(loc)->isInsertRow()) {
		return nullptr;
	}
	int32_t row = $nc(loc)->getRow();
	int32_t col = loc->getColumn();
	if (col >= $nc(this->table)->getColumnCount()) {
		--col;
	}
	$var($Rectangle, rect, $nc(this->table)->getCellRect(row, col, true));
	if (row >= $nc(this->table)->getRowCount()) {
		--row;
		$var($Rectangle, prevRect, $nc(this->table)->getCellRect(row, col, true));
		$nc(rect)->y = $nc(prevRect)->y + prevRect->height;
	}
	if ($nc(rect)->y == 0) {
		rect->y = -1;
	} else {
		rect->y -= 2;
	}
	$nc(rect)->height = 3;
	return rect;
}

$Rectangle* SynthTableUI::getVDropLineRect($JTable$DropLocation* loc) {
	$useLocalCurrentObjectStackCache();
	if (!$nc(loc)->isInsertColumn()) {
		return nullptr;
	}
	bool ltr = $nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight();
	int32_t col = $nc(loc)->getColumn();
	$var($Rectangle, rect, $nc(this->table)->getCellRect(loc->getRow(), col, true));
	if (col >= $nc(this->table)->getColumnCount()) {
		--col;
		$assign(rect, $nc(this->table)->getCellRect(loc->getRow(), col, true));
		if (ltr) {
			$nc(rect)->x = rect->x + rect->width;
		}
	} else if (!ltr) {
		$nc(rect)->x = rect->x + rect->width;
	}
	if ($nc(rect)->x == 0) {
		rect->x = -1;
	} else {
		rect->x -= 2;
	}
	$nc(rect)->width = 3;
	return rect;
}

$Rectangle* SynthTableUI::extendRect($Rectangle* rect, bool horizontal) {
	if (rect == nullptr) {
		return rect;
	}
	if (horizontal) {
		$nc(rect)->x = 0;
		rect->width = $nc(this->table)->getWidth();
	} else {
		$nc(rect)->y = 0;
		if ($nc(this->table)->getRowCount() != 0) {
			$var($Rectangle, lastRect, $nc(this->table)->getCellRect($nc(this->table)->getRowCount() - 1, 0, true));
			rect->height = $nc(lastRect)->y + lastRect->height;
		} else {
			rect->height = $nc(this->table)->getHeight();
		}
	}
	return rect;
}

void SynthTableUI::paintGrid($SynthContext* context, $Graphics* g, int32_t rMin, int32_t rMax, int32_t cMin, int32_t cMax) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->setColor($($nc(this->table)->getGridColor()));
	$var($Rectangle, minCell, $nc(this->table)->getCellRect(rMin, cMin, true));
	$var($Rectangle, maxCell, $nc(this->table)->getCellRect(rMax, cMax, true));
	$var($Rectangle, damagedArea, $nc(minCell)->union$(maxCell));
	$var($SynthGraphicsUtils, synthG, $nc($($nc(context)->getStyle()))->getGraphicsUtils(context));
	if ($nc(this->table)->getShowHorizontalLines()) {
		int32_t tableWidth = $nc(damagedArea)->x + damagedArea->width;
		int32_t y = damagedArea->y;
		for (int32_t row = rMin; row <= rMax; ++row) {
			y += $nc(this->table)->getRowHeight(row);
			$nc(synthG)->drawLine(context, "Table.grid"_s, g, damagedArea->x, y - 1, tableWidth - 1, y - 1);
		}
	}
	if ($nc(this->table)->getShowVerticalLines()) {
		$var($TableColumnModel, cm, $nc(this->table)->getColumnModel());
		int32_t tableHeight = $nc(damagedArea)->y + damagedArea->height;
		int32_t x = 0;
		if ($nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight()) {
			x = damagedArea->x;
			for (int32_t column = cMin; column <= cMax; ++column) {
				int32_t w = $nc($($nc(cm)->getColumn(column)))->getWidth();
				x += w;
				$nc(synthG)->drawLine(context, "Table.grid"_s, g, x - 1, 0, x - 1, tableHeight - 1);
			}
		} else {
			x = damagedArea->x;
			for (int32_t column = cMax; column >= cMin; --column) {
				int32_t w = $nc($($nc(cm)->getColumn(column)))->getWidth();
				x += w;
				$nc(synthG)->drawLine(context, "Table.grid"_s, g, x - 1, 0, x - 1, tableHeight - 1);
			}
		}
	}
}

int32_t SynthTableUI::viewIndexForColumn($TableColumn* aColumn) {
	$var($TableColumnModel, cm, $nc(this->table)->getColumnModel());
	for (int32_t column = 0; column < $nc(cm)->getColumnCount(); ++column) {
		if (cm->getColumn(column) == aColumn) {
			return column;
		}
	}
	return -1;
}

void SynthTableUI::paintCells($SynthContext* context, $Graphics* g, int32_t rMin, int32_t rMax, int32_t cMin, int32_t cMax) {
	$useLocalCurrentObjectStackCache();
	$var($JTableHeader, header, $nc(this->table)->getTableHeader());
	$var($TableColumn, draggedColumn, (header == nullptr) ? ($TableColumn*)nullptr : $nc(header)->getDraggedColumn());
	$var($TableColumnModel, cm, $nc(this->table)->getColumnModel());
	int32_t columnMargin = $nc(cm)->getColumnMargin();
	$var($Rectangle, cellRect, nullptr);
	$var($TableColumn, aColumn, nullptr);
	int32_t columnWidth = 0;
	if ($nc($($nc(this->table)->getComponentOrientation()))->isLeftToRight()) {
		for (int32_t row = rMin; row <= rMax; ++row) {
			$assign(cellRect, $nc(this->table)->getCellRect(row, cMin, false));
			for (int32_t column = cMin; column <= cMax; ++column) {
				$assign(aColumn, cm->getColumn(column));
				columnWidth = $nc(aColumn)->getWidth();
				$nc(cellRect)->width = columnWidth - columnMargin;
				if (aColumn != draggedColumn) {
					paintCell(context, g, cellRect, row, column);
				}
				cellRect->x += columnWidth;
			}
		}
	} else {
		for (int32_t row = rMin; row <= rMax; ++row) {
			$assign(cellRect, $nc(this->table)->getCellRect(row, cMin, false));
			$assign(aColumn, cm->getColumn(cMin));
			if (aColumn != draggedColumn) {
				columnWidth = $nc(aColumn)->getWidth();
				$nc(cellRect)->width = columnWidth - columnMargin;
				paintCell(context, g, cellRect, row, cMin);
			}
			for (int32_t column = cMin + 1; column <= cMax; ++column) {
				$assign(aColumn, cm->getColumn(column));
				columnWidth = $nc(aColumn)->getWidth();
				$nc(cellRect)->width = columnWidth - columnMargin;
				cellRect->x -= columnWidth;
				if (aColumn != draggedColumn) {
					paintCell(context, g, cellRect, row, column);
				}
			}
		}
	}
	if (draggedColumn != nullptr) {
		paintDraggedArea(context, g, rMin, rMax, draggedColumn, header->getDraggedDistance());
	}
	$nc(this->rendererPane)->removeAll();
}

void SynthTableUI::paintDraggedArea($SynthContext* context, $Graphics* g, int32_t rMin, int32_t rMax, $TableColumn* draggedColumn, int32_t distance) {
	$useLocalCurrentObjectStackCache();
	int32_t draggedColumnIndex = viewIndexForColumn(draggedColumn);
	$var($Rectangle, minCell, $nc(this->table)->getCellRect(rMin, draggedColumnIndex, true));
	$var($Rectangle, maxCell, $nc(this->table)->getCellRect(rMax, draggedColumnIndex, true));
	$var($Rectangle, vacatedColumnRect, $nc(minCell)->union$(maxCell));
	$nc(g)->setColor($($nc($($nc(this->table)->getParent()))->getBackground()));
	g->fillRect($nc(vacatedColumnRect)->x, vacatedColumnRect->y, vacatedColumnRect->width, vacatedColumnRect->height);
	$nc(vacatedColumnRect)->x += distance;
	$init($ColorType);
	g->setColor($($nc($($nc(context)->getStyle()))->getColor(context, $ColorType::BACKGROUND)));
	g->fillRect(vacatedColumnRect->x, vacatedColumnRect->y, vacatedColumnRect->width, vacatedColumnRect->height);
	$var($SynthGraphicsUtils, synthG, $nc($($nc(context)->getStyle()))->getGraphicsUtils(context));
	if ($nc(this->table)->getShowVerticalLines()) {
		g->setColor($($nc(this->table)->getGridColor()));
		int32_t x1 = vacatedColumnRect->x;
		int32_t y1 = vacatedColumnRect->y;
		int32_t x2 = x1 + vacatedColumnRect->width - 1;
		int32_t y2 = y1 + vacatedColumnRect->height - 1;
		$nc(synthG)->drawLine(context, "Table.grid"_s, g, x1 - 1, y1, x1 - 1, y2);
		synthG->drawLine(context, "Table.grid"_s, g, x2, y1, x2, y2);
	}
	for (int32_t row = rMin; row <= rMax; ++row) {
		$var($Rectangle, r, $nc(this->table)->getCellRect(row, draggedColumnIndex, false));
		$nc(r)->x += distance;
		paintCell(context, g, r, row, draggedColumnIndex);
		if ($nc(this->table)->getShowHorizontalLines()) {
			g->setColor($($nc(this->table)->getGridColor()));
			$var($Rectangle, rcr, $nc(this->table)->getCellRect(row, draggedColumnIndex, true));
			$nc(rcr)->x += distance;
			int32_t x1 = rcr->x;
			int32_t y1 = rcr->y;
			int32_t x2 = x1 + rcr->width - 1;
			int32_t y2 = y1 + rcr->height - 1;
			$nc(synthG)->drawLine(context, "Table.grid"_s, g, x1, y2, x2, y2);
		}
	}
}

void SynthTableUI::paintCell($SynthContext* context, $Graphics* g, $Rectangle* cellRect, int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = $nc(this->table)->isEditing();
	bool var$0 = var$1 && $nc(this->table)->getEditingRow() == row;
	if (var$0 && $nc(this->table)->getEditingColumn() == column) {
		$var($Component, component, $nc(this->table)->getEditorComponent());
		$nc(component)->setBounds(cellRect);
		component->validate();
	} else {
		$var($TableCellRenderer, renderer, $nc(this->table)->getCellRenderer(row, column));
		$var($Component, component, $nc(this->table)->prepareRenderer(renderer, row, column));
		$var($Color, b, $nc(component)->getBackground());
		if ((b == nullptr || $instanceOf($UIResource, b) || $instanceOf($SynthTableUI$SynthBooleanTableCellRenderer, component)) && !$nc(this->table)->isCellSelected(row, column)) {
			if (this->alternateColor != nullptr && row % 2 != 0) {
				component->setBackground(this->alternateColor);
			}
		}
		$nc(this->rendererPane)->paintComponent(g, component, this->table, $nc(cellRect)->x, cellRect->y, cellRect->width, cellRect->height, true);
	}
}

void SynthTableUI::propertyChange($PropertyChangeEvent* event) {
	if ($SynthLookAndFeel::shouldUpdateStyle(event)) {
		updateStyle($cast($JTable, $($nc(event)->getSource())));
	}
}

SynthTableUI::SynthTableUI() {
}

$Class* SynthTableUI::load$($String* name, bool initialize) {
	$loadClass(SynthTableUI, name, initialize, &_SynthTableUI_ClassInfo_, allocate$SynthTableUI);
	return class$;
}

$Class* SynthTableUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax