#include <com/sun/java/swing/plaf/gtk/GTKPainter.h>

#include <com/sun/java/swing/plaf/gtk/GTKColorType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$ArrowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$ExpanderStyle.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$Orientation.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$PositionType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$ShadowType.h>
#include <com/sun/java/swing/plaf/gtk/GTKConstants$StateType.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine$WidgetType.h>
#include <com/sun/java/swing/plaf/gtk/GTKEngine.h>
#include <com/sun/java/swing/plaf/gtk/GTKIconFactory.h>
#include <com/sun/java/swing/plaf/gtk/GTKLookAndFeel.h>
#include <com/sun/java/swing/plaf/gtk/GTKStyle.h>
#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/Math.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/JToolBar$Separator.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <sun/awt/ModalExclude.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/UNIXToolkit.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BOTTOM
#undef BUTTON
#undef BUTTON_DEFAULT_BORDER_INSETS
#undef CENTER
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef CHECK_ICON_EXTRA_INSET
#undef COLLAPSED
#undef DEFAULT
#undef DEFAULT_ICON_SIZE
#undef DEFAULT_ICON_SPACING
#undef DEFAULT_TOGGLE_MENU_ITEM_SIZE
#undef DISABLED
#undef DOWN
#undef EAST
#undef ENABLED
#undef ENGINE
#undef ETCHED_IN
#undef ETCHED_OUT
#undef EXPANDED
#undef FOCUSED
#undef GTK_LOCK
#undef HORIZONTAL
#undef HORIZONTAL_SPLIT
#undef IN
#undef INSTANCE
#undef INTERNAL_FRAME_TITLE_PANE
#undef LEFT
#undef MENU_ITEM
#undef MOUSE_OVER
#undef NONE
#undef NORTH
#undef OUT
#undef POPUP_MENU_SEPARATOR
#undef POSITIONS
#undef PRESSED
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef RIGHT
#undef SELECTED
#undef SHADOWS
#undef SOUTH
#undef TABLE
#undef TEXT_AREA
#undef TEXT_BACKGROUND
#undef TOOL_BAR
#undef TOP
#undef TREE
#undef TREE_CELL
#undef UP
#undef VERTICAL
#undef WEST

using $GTKConstants$PositionTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType>;
using $GTKConstants$ShadowTypeArray = $Array<::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType>;
using $GTKColorType = ::com::sun::java::swing::plaf::gtk::GTKColorType;
using $GTKConstants$ArrowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ArrowType;
using $GTKConstants$ExpanderStyle = ::com::sun::java::swing::plaf::gtk::GTKConstants$ExpanderStyle;
using $GTKConstants$Orientation = ::com::sun::java::swing::plaf::gtk::GTKConstants$Orientation;
using $GTKConstants$PositionType = ::com::sun::java::swing::plaf::gtk::GTKConstants$PositionType;
using $GTKConstants$ShadowType = ::com::sun::java::swing::plaf::gtk::GTKConstants$ShadowType;
using $GTKConstants$StateType = ::com::sun::java::swing::plaf::gtk::GTKConstants$StateType;
using $GTKEngine = ::com::sun::java::swing::plaf::gtk::GTKEngine;
using $GTKEngine$WidgetType = ::com::sun::java::swing::plaf::gtk::GTKEngine$WidgetType;
using $GTKIconFactory = ::com::sun::java::swing::plaf::gtk::GTKIconFactory;
using $GTKLookAndFeel = ::com::sun::java::swing::plaf::gtk::GTKLookAndFeel;
using $GTKStyle = ::com::sun::java::swing::plaf::gtk::GTKStyle;
using $Metacity = ::com::sun::java::swing::plaf::gtk::Metacity;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JSeparator = ::javax::swing::JSeparator;
using $JSlider = ::javax::swing::JSlider;
using $JSplitPane = ::javax::swing::JSplitPane;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JToggleButton = ::javax::swing::JToggleButton;
using $JToolBar = ::javax::swing::JToolBar;
using $JToolBar$Separator = ::javax::swing::JToolBar$Separator;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $ModalExclude = ::sun::awt::ModalExclude;
using $SunToolkit = ::sun::awt::SunToolkit;
using $UNIXToolkit = ::sun::awt::UNIXToolkit;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _GTKPainter_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(GTKPainter, $assertionsDisabled)},
	{"POSITIONS", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$PositionType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKPainter, POSITIONS)},
	{"SHADOWS", "[Lcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKPainter, SHADOWS)},
	{"ENGINE", "Lcom/sun/java/swing/plaf/gtk/GTKEngine;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(GTKPainter, ENGINE)},
	{"INSTANCE", "Lcom/sun/java/swing/plaf/gtk/GTKPainter;", nullptr, $STATIC | $FINAL, $staticField(GTKPainter, INSTANCE)},
	{}
};

$MethodInfo _GTKPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(GTKPainter::*)()>(&GTKPainter::init$))},
	{"fillArea", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjavax/swing/plaf/synth/ColorType;)V", nullptr, $PRIVATE, $method(static_cast<void(GTKPainter::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t,$ColorType*)>(&GTKPainter::fillArea))},
	{"getName", "(Ljavax/swing/plaf/synth/SynthContext;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(GTKPainter::*)($SynthContext*)>(&GTKPainter::getName))},
	{"paintArrowButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintArrowButtonForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintAscendingSortIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintButtonBackgroundImpl", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/plaf/synth/Region;Ljava/lang/String;IIIIZZZZ)V", nullptr, $PRIVATE, $method(static_cast<void(GTKPainter::*)($SynthContext*,$Graphics*,$Region*,$String*,int32_t,int32_t,int32_t,int32_t,bool,bool,bool,bool)>(&GTKPainter::paintButtonBackgroundImpl))},
	{"paintCheckBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCheckBoxIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintCheckBoxMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCheckBoxMenuItemCheckIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintComponentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(GTKPainter::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&GTKPainter::paintComponentBackground))},
	{"paintDescendingSortIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintDesktopIconBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintDesktopPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintEditorPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintFocus", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/plaf/synth/Region;ILjava/lang/String;IIII)V", nullptr, 0},
	{"paintFormattedTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/lang/reflect/Method;IIII)V", nullptr, 0},
	{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/lang/reflect/Method;IIIILjava/lang/Object;)V", nullptr, 0},
	{"paintInternalFrameBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintLabelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintListBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuArrowIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIILcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;)V", nullptr, $PUBLIC},
	{"paintMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMetacityElement", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;ILjava/lang/String;IIIILcom/sun/java/swing/plaf/gtk/GTKConstants$ShadowType;Lcom/sun/java/swing/plaf/gtk/GTKConstants$ArrowType;)V", nullptr, 0},
	{"paintPasswordFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintPopupMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintProgressBarForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintRadioButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintRadioButtonIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintRadioButtonMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintRadioButtonMenuItemCheckIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintRootPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintScrollBarThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSliderThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSpinnerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSplitPaneDragDivider", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintTextAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTextBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(GTKPainter::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&GTKPainter::paintTextBackground))},
	{"paintTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTextPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToggleButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarHandleIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIILcom/sun/java/swing/plaf/gtk/GTKConstants$Orientation;)V", nullptr, $PUBLIC},
	{"paintToolTipBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeCellBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeCellEditorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(GTKPainter::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t)>(&GTKPainter::paintTreeCellEditorBackground))},
	{"paintTreeCellFocus", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeCollapsedIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintTreeExpandedIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintViewportBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintViewportBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GTKPainter_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.GTKPainter$TitledBorder", "com.sun.java.swing.plaf.gtk.GTKPainter", "TitledBorder", $STATIC},
	{"com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder", "com.sun.java.swing.plaf.gtk.GTKPainter", "ListTableFocusBorder", $STATIC},
	{}
};

$ClassInfo _GTKPainter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.GTKPainter",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	_GTKPainter_FieldInfo_,
	_GTKPainter_MethodInfo_,
	nullptr,
	nullptr,
	_GTKPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.GTKPainter$TitledBorder,com.sun.java.swing.plaf.gtk.GTKPainter$ListTableFocusBorder"
};

$Object* allocate$GTKPainter($Class* clazz) {
	return $of($alloc(GTKPainter));
}

bool GTKPainter::$assertionsDisabled = false;
$GTKConstants$PositionTypeArray* GTKPainter::POSITIONS = nullptr;
$GTKConstants$ShadowTypeArray* GTKPainter::SHADOWS = nullptr;
$GTKEngine* GTKPainter::ENGINE = nullptr;
GTKPainter* GTKPainter::INSTANCE = nullptr;

void GTKPainter::init$() {
	$SynthPainter::init$();
}

$String* GTKPainter::getName($SynthContext* context) {
	$useLocalCurrentObjectStackCache();
	return ($nc($($nc(context)->getRegion()))->isSubregion()) ? ($String*)nullptr : $nc($($nc(context)->getComponent()))->getName();
}

void GTKPainter::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintRadioButtonBackground(context, g, x, y, w, h);
}

void GTKPainter::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintRadioButtonMenuItemBackground(context, g, x, y, w, h);
}

void GTKPainter::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintTextBackground(context, g, x, y, w, h);
}

void GTKPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintToolBarBackground(context, g, x, y, w, h);
}

void GTKPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t state = context->getComponentState();
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
	int32_t orientation = $nc(($cast($JToolBar, $(context->getComponent()))))->getOrientation();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state))),
			$($of($Integer::valueOf(orientation)))
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(state))),
				$($of($Integer::valueOf(orientation)))
			}));
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintBox(g, context, id, gtkState, $GTKConstants$ShadowType::OUT, "handlebox_bin"_s, x, y, w, h);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t orientation = $nc(($cast($JToolBar, $(context->getComponent()))))->getOrientation();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(orientation)))
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(orientation)))
			}));
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintBox(g, context, id, $SynthConstants::ENABLED, $GTKConstants$ShadowType::OUT, "toolbar"_s, x, y, w, h);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintTextBackground(context, g, x, y, w, h);
}

void GTKPainter::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if (getName(context) == "Tree.cellEditor"_s) {
		paintTreeCellEditorBackground(context, g, x, y, w, h);
	} else {
		paintTextBackground(context, g, x, y, w, h);
	}
}

void GTKPainter::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	if (gtkState == $SynthConstants::MOUSE_OVER) {
		$init($UNIXToolkit);
		$synchronized($UNIXToolkit::GTK_LOCK) {
			if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {$of(id)}))) {
				$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {$of(id)}));
				$init($GTKConstants$ShadowType);
				$init($ColorType);
				$nc(GTKPainter::ENGINE)->paintFlatBox(g, context, id, $SynthConstants::MOUSE_OVER, $GTKConstants$ShadowType::ETCHED_OUT, "checkbutton"_s, x, y, w, h, $ColorType::BACKGROUND);
				$nc(GTKPainter::ENGINE)->finishPainting();
			}
		}
	}
}

void GTKPainter::paintComponentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($GTKStyle, style, $cast($GTKStyle, $nc(context)->getStyle()));
	$init($GTKEngine$WidgetType);
	int32_t var$0 = $GTKEngine$WidgetType::TEXT_AREA->ordinal();
	int32_t var$1 = $nc($($GTKLookAndFeel::synthStateToGTKStateType($SynthConstants::SELECTED)))->ordinal();
	$init($ColorType);
	$var($Color, highlightColor, $nc(style)->getGTKColor(var$0, var$1, $nc($ColorType::BACKGROUND)->getID()));
	$nc(g)->setColor(highlightColor);
	g->fillRect(x, y, w, h);
}

void GTKPainter::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	if (gtkState == $SynthConstants::MOUSE_OVER) {
		if ($GTKLookAndFeel::is3()) {
			paintComponentBackground(context, g, x, y, w, h);
			return;
		}
		$init($UNIXToolkit);
		$synchronized($UNIXToolkit::GTK_LOCK) {
			if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {$of(id)}))) {
				$init($GTKConstants$ShadowType);
				$GTKConstants$ShadowType* shadow = ($GTKLookAndFeel::is2_2() ? $GTKConstants$ShadowType::NONE : $GTKConstants$ShadowType::OUT);
				$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {$of(id)}));
				$nc(GTKPainter::ENGINE)->paintBox(g, context, id, gtkState, shadow, "menuitem"_s, x, y, w, h);
				$nc(GTKPainter::ENGINE)->finishPainting();
			}
		}
	}
}

void GTKPainter::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getName(context));
	$var($JComponent, c, $nc(context)->getComponent());
	$var($Container, container, $nc(c)->getParent());
	if (name == "TableHeader.renderer"_s || name == "GTKFileChooser.directoryListLabel"_s || name == "GTKFileChooser.fileListLabel"_s) {
		$init($Region);
		paintButtonBackgroundImpl(context, g, $Region::BUTTON, "button"_s, x, y, w, h, true, false, false, false);
	} else if ($instanceOf($ListCellRenderer, c) && container != nullptr && $instanceOf($JComboBox, $(container->getParent()))) {
		paintTextBackground(context, g, x, y, w, h);
	}
}

void GTKPainter::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($Metacity);
	$nc($Metacity::INSTANCE)->paintFrameBorder(context, g, x, y, w, h);
}

void GTKPainter::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($ColorType);
	fillArea(context, g, x, y, w, h, $ColorType::BACKGROUND);
}

void GTKPainter::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($Metacity);
	$nc($Metacity::INSTANCE)->paintFrameBorder(context, g, x, y, w, h);
}

void GTKPainter::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($String, name, getName(context));
	if (name != nullptr && name->startsWith("InternalFrameTitlePane."_s)) {
		$init($Metacity);
		$nc($Metacity::INSTANCE)->paintButtonBackground(context, g, x, y, w, h);
	} else {
		$var($AbstractButton, button, $cast($AbstractButton, $nc(context)->getComponent()));
		bool var$0 = $nc(button)->isContentAreaFilled();
		bool paintBG = var$0 && button->isBorderPainted();
		bool paintFocus = button->isFocusPainted();
		bool defaultCapable = ($instanceOf($JButton, button)) && $nc(($cast($JButton, button)))->isDefaultCapable();
		bool toolButton = ($instanceOf($JToolBar, $(button->getParent())));
		$init($Region);
		paintButtonBackgroundImpl(context, g, $Region::BUTTON, "button"_s, x, y, w, h, paintBG, paintFocus, defaultCapable, toolButton);
	}
}

void GTKPainter::paintButtonBackgroundImpl($SynthContext* context, $Graphics* g, $Region* id, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, bool paintBackground, bool paintFocus, bool defaultCapable, bool toolButton) {
	$useLocalCurrentObjectStackCache();
	int32_t state = $nc(context)->getComponentState();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if ($nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state))),
			$of(detail),
			$($of($Boolean::valueOf(paintBackground))),
			$($of($Boolean::valueOf(paintFocus))),
			$($of($Boolean::valueOf(defaultCapable))),
			$($of($Boolean::valueOf(toolButton)))
		}))) {
			return;
		}
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state))),
			$of(detail),
			$($of($Boolean::valueOf(paintBackground))),
			$($of($Boolean::valueOf(paintFocus))),
			$($of($Boolean::valueOf(defaultCapable))),
			$($of($Boolean::valueOf(toolButton)))
		}));
		$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
		if (defaultCapable && !toolButton) {
			$init($GTKStyle);
			$var($Insets, defaultInsets, $nc(style)->getClassSpecificInsetsValue(context, "default-border"_s, $GTKStyle::BUTTON_DEFAULT_BORDER_INSETS));
			if (paintBackground && ((int32_t)(state & (uint32_t)$SynthConstants::DEFAULT)) != 0) {
				$init($GTKConstants$ShadowType);
				$nc(GTKPainter::ENGINE)->paintBox(g, context, id, $SynthConstants::ENABLED, $GTKConstants$ShadowType::IN, "buttondefault"_s, x, y, w, h);
			}
			x += $nc(defaultInsets)->left;
			y += defaultInsets->top;
			w -= (defaultInsets->left + defaultInsets->right);
			h -= (defaultInsets->top + defaultInsets->bottom);
		}
		bool interiorFocus = $nc(style)->getClassSpecificBoolValue(context, "interior-focus"_s, true);
		int32_t focusSize = style->getClassSpecificIntValue(context, "focus-line-width"_s, 1);
		int32_t focusPad = style->getClassSpecificIntValue(context, "focus-padding"_s, 1);
		int32_t totalFocusSize = focusSize + focusPad;
		int32_t xThickness = style->getXThickness();
		int32_t yThickness = style->getYThickness();
		if (!interiorFocus && ((int32_t)(state & (uint32_t)$SynthConstants::FOCUSED)) == $SynthConstants::FOCUSED) {
			x += totalFocusSize;
			y += totalFocusSize;
			w -= 2 * totalFocusSize;
			h -= 2 * totalFocusSize;
		}
		int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
		bool paintBg = false;
		if (toolButton) {
			paintBg = (gtkState != $SynthConstants::ENABLED) && (gtkState != $SynthConstants::DISABLED);
		} else {
			paintBg = paintBackground || (gtkState != $SynthConstants::ENABLED);
		}
		if (paintBg) {
			$init($GTKConstants$ShadowType);
			$GTKConstants$ShadowType* shadowType = $GTKConstants$ShadowType::OUT;
			if (((int32_t)(state & (uint32_t)($SynthConstants::PRESSED | $SynthConstants::SELECTED))) != 0) {
				shadowType = $GTKConstants$ShadowType::IN;
			}
			$nc(GTKPainter::ENGINE)->paintBox(g, context, id, gtkState, shadowType, detail, x, y, w, h);
		}
		if (paintFocus && ((int32_t)(state & (uint32_t)$SynthConstants::FOCUSED)) != 0) {
			if (interiorFocus) {
				x += xThickness + focusPad;
				y += yThickness + focusPad;
				w -= 2 * (xThickness + focusPad);
				h -= 2 * (yThickness + focusPad);
			} else {
				x -= totalFocusSize;
				y -= totalFocusSize;
				w += 2 * totalFocusSize;
				h += 2 * totalFocusSize;
			}
			$nc(GTKPainter::ENGINE)->paintFocus(g, context, id, gtkState, detail, x, y, w, h);
		}
		$nc(GTKPainter::ENGINE)->finishPainting();
	}
}

void GTKPainter::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	$var($Component, c, context->getComponent());
	$var($String, name, $nc(c)->getName());
	$GTKConstants$ArrowType* arrowType = nullptr;
	switch (direction) {
	case $SwingConstants::NORTH:
		{
			$init($GTKConstants$ArrowType);
			arrowType = $GTKConstants$ArrowType::UP;
			break;
		}
	case $SwingConstants::SOUTH:
		{
			$init($GTKConstants$ArrowType);
			arrowType = $GTKConstants$ArrowType::DOWN;
			break;
		}
	case $SwingConstants::EAST:
		{
			$init($GTKConstants$ArrowType);
			arrowType = $GTKConstants$ArrowType::RIGHT;
			break;
		}
	case $SwingConstants::WEST:
		{
			$init($GTKConstants$ArrowType);
			arrowType = $GTKConstants$ArrowType::LEFT;
			break;
		}
	}
	$var($String, detail, "arrow"_s);
	if ((name == "ScrollBar.button"_s) || (name == "TabbedPane.button"_s)) {
		$init($GTKConstants$ArrowType);
		if (arrowType == $GTKConstants$ArrowType::UP || arrowType == $GTKConstants$ArrowType::DOWN) {
			$assign(detail, "vscrollbar"_s);
		} else {
			$assign(detail, "hscrollbar"_s);
		}
	} else if (name == "Spinner.nextButton"_s || name == "Spinner.previousButton"_s) {
		$assign(detail, "spinbutton"_s);
	} else if (name != "ComboBox.arrowButton"_s) {
		if (!GTKPainter::$assertionsDisabled) {
			$throwNew($AssertionError, $of($$str({"unexpected name: "_s, name})));
		}
	}
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	$init($GTKConstants$ShadowType);
	$GTKConstants$ShadowType* shadowType = (gtkState == $SynthConstants::PRESSED ? $GTKConstants$ShadowType::IN : $GTKConstants$ShadowType::OUT);
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if ($nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$($of($Integer::valueOf(gtkState))),
			$of(name),
			$($of($Integer::valueOf(direction)))
		}))) {
			return;
		}
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
			$($of($Integer::valueOf(gtkState))),
			$of(name),
			$($of($Integer::valueOf(direction)))
		}));
		$nc(GTKPainter::ENGINE)->paintArrow(g, context, id, gtkState, shadowType, arrowType, detail, x, y, w, h);
		$nc(GTKPainter::ENGINE)->finishPainting();
	}
}

void GTKPainter::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	$var($AbstractButton, button, $cast($AbstractButton, context->getComponent()));
	$var($String, name, $nc(button)->getName());
	$var($String, detail, "button"_s);
	int32_t direction = $SwingConstants::CENTER;
	if ((name == "ScrollBar.button"_s) || (name == "TabbedPane.button"_s)) {
		$var($Integer, prop, $cast($Integer, button->getClientProperty("__arrow_direction__"_s)));
		direction = (prop != nullptr) ? $nc(prop)->intValue() : $SwingConstants::WEST;
		switch (direction) {
		default:
			{}
		case $SwingConstants::EAST:
			{}
		case $SwingConstants::WEST:
			{
				$assign(detail, "hscrollbar"_s);
				break;
			}
		case $SwingConstants::NORTH:
			{}
		case $SwingConstants::SOUTH:
			{
				$assign(detail, "vscrollbar"_s);
				break;
			}
		}
	} else if (name == "Spinner.previousButton"_s) {
		$assign(detail, "spinbutton_down"_s);
	} else if (name == "Spinner.nextButton"_s) {
		$assign(detail, "spinbutton_up"_s);
	} else if (name != "ComboBox.arrowButton"_s) {
		if (!GTKPainter::$assertionsDisabled) {
			$throwNew($AssertionError, $of($$str({"unexpected name: "_s, name})));
		}
	}
	int32_t state = context->getComponentState();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if ($nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state))),
			$of(detail),
			$($of($Integer::valueOf(direction)))
		}))) {
			return;
		}
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state))),
			$of(detail),
			$($of($Integer::valueOf(direction)))
		}));
		if (detail->startsWith("spin"_s)) {
			int32_t spinState = $nc($(button->getParent()))->isEnabled() ? $SynthConstants::ENABLED : $SynthConstants::DISABLED;
			int32_t mody = (detail == "spinbutton_up"_s) ? y : y - h;
			int32_t modh = h * 2;
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintBox(g, context, id, spinState, $GTKConstants$ShadowType::IN, "spinbutton"_s, x, mody, w, modh);
		}
		int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
		$init($GTKConstants$ShadowType);
		$GTKConstants$ShadowType* shadowType = $GTKConstants$ShadowType::OUT;
		if (((int32_t)(gtkState & (uint32_t)($SynthConstants::PRESSED | $SynthConstants::SELECTED))) != 0) {
			shadowType = $GTKConstants$ShadowType::IN;
		}
		$nc(GTKPainter::ENGINE)->paintBox(g, context, id, gtkState, shadowType, detail, x, y, w, h);
		$nc(GTKPainter::ENGINE)->finishPainting();
	}
}

void GTKPainter::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($GTKColorType);
	fillArea(context, g, x, y, w, h, $GTKColorType::TEXT_BACKGROUND);
}

void GTKPainter::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if ($nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {$of(id)}))) {
			return;
		}
		$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
		int32_t shadow = $nc(style)->getClassSpecificIntValue(context, "shadow-type"_s, 2);
		$GTKConstants$ShadowType* shadowType = $nc(GTKPainter::SHADOWS)->get(shadow);
		int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {$of(id)}));
		$nc(GTKPainter::ENGINE)->paintBox(g, context, id, gtkState, shadowType, "menubar"_s, x, y, w, h);
		$nc(GTKPainter::ENGINE)->finishPainting();
	}
}

void GTKPainter::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintMenuItemBackground(context, g, x, y, w, h);
}

void GTKPainter::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, var$0, $nc(context)->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(var$0, context->getComponentState());
	if (gtkState == $SynthConstants::MOUSE_OVER) {
		if ($GTKLookAndFeel::is3()) {
			paintComponentBackground(context, g, x, y, w, h);
			return;
		}
		$init($Region);
		$var($Region, id, $Region::MENU_ITEM);
		$init($UNIXToolkit);
		$synchronized($UNIXToolkit::GTK_LOCK) {
			if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {$of(id)}))) {
				$init($GTKConstants$ShadowType);
				$GTKConstants$ShadowType* shadow = ($GTKLookAndFeel::is2_2() ? $GTKConstants$ShadowType::NONE : $GTKConstants$ShadowType::OUT);
				$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {$of(id)}));
				$nc(GTKPainter::ENGINE)->paintBox(g, context, id, gtkState, shadow, "menuitem"_s, x, y, w, h);
				$nc(GTKPainter::ENGINE)->finishPainting();
			}
		}
	}
}

void GTKPainter::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	bool isHW = $instanceOf($ModalExclude, $($SunToolkit::getHeavyweightComponent($(context->getComponent()))));
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if ($nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState))),
			$($of($Boolean::valueOf(isHW)))
		}))) {
			return;
		}
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState)))
		}));
		$init($GTKConstants$ShadowType);
		$nc(GTKPainter::ENGINE)->paintBox(g, context, id, gtkState, $GTKConstants$ShadowType::OUT, "menu"_s, x, y, w, h);
		$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
		$var($Insets, insets, $nc(style)->getInsets(context, nullptr));
		$init($GTKColorType);
		$nc(GTKPainter::ENGINE)->paintBackground(g, context, id, gtkState, $(style->getGTKColor(context, gtkState, $GTKColorType::BACKGROUND)), x + $nc(insets)->left, y + insets->top, w - insets->left - insets->right, h - insets->top - insets->bottom);
		$var($BufferedImage, img, $nc(GTKPainter::ENGINE)->finishPainting());
		if (!isHW) {
			int32_t border = $nc(img)->getRGB(0, h / 2);
			if (img != nullptr && border == img->getRGB(w / 2, h / 2)) {
				$var($Graphics, g2, img->getGraphics());
				$var($Color, c, $new($Color, border));
				int32_t var$0 = $Math::max($cast(int32_t, (c->getRed() * 0.8)), 0);
				int32_t var$1 = $Math::max($cast(int32_t, (c->getGreen() * 0.8)), 0);
				$nc(g2)->setColor($$new($Color, var$0, var$1, $Math::max($cast(int32_t, (c->getBlue() * 0.8)), 0)));
				g2->drawLine(0, 0, w - 1, 0);
				g2->drawLine(w - 1, 0, w - 1, h - 1);
				g2->drawLine(0, h - 1, 0, 1);
				g2->setColor($(c->darker()));
				g2->drawLine(w - 1, h - 1, 0, h - 1);
				g2->dispose();
				$nc(g)->drawImage(img, x, y, nullptr);
			}
		}
	}
}

void GTKPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {$of(id)}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {$of(id)}));
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintBox(g, context, id, $SynthConstants::ENABLED, $GTKConstants$ShadowType::IN, "trough"_s, x, y, w, h);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (w <= 0 || h <= 0) {
			return;
		}
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$of("fg"_s)
		}));
		$init($GTKConstants$ShadowType);
		$nc(GTKPainter::ENGINE)->paintBox(g, context, id, $SynthConstants::MOUSE_OVER, $GTKConstants$ShadowType::OUT, "bar"_s, x, y, w, h);
		$nc(GTKPainter::ENGINE)->finishPainting(false);
	}
}

void GTKPainter::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {$of(id)}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {$of(id)}));
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintShadow(g, context, id, $SynthConstants::ENABLED, $GTKConstants$ShadowType::IN, "scrolled_window"_s, x, y, w, h);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t state = context->getComponentState();
	$var($JComponent, c, context->getComponent());
	$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
	$var($String, detail, nullptr);
	if ($nc(style)->getClassSpecificBoolValue(context, "wide-separators"_s, false)) {
		$var($Insets, insets, $nc(c)->getInsets());
		x += $nc(insets)->left;
		y += insets->top;
		if (orientation == $JSeparator::HORIZONTAL) {
			w -= (insets->left + insets->right);
		} else {
			h -= (insets->top + insets->bottom);
		}
		if ($GTKLookAndFeel::is3()) {
			$init($Region);
			if (id == $Region::POPUP_MENU_SEPARATOR) {
				$assign(detail, "menuitem"_s);
				h -= (insets->top + insets->bottom);
			} else {
				$assign(detail, "separator"_s);
			}
		} else {
			$assign(detail, orientation == $JSeparator::HORIZONTAL ? "hseparator"_s : "vseparator"_s);
		}
		$init($UNIXToolkit);
		$synchronized($UNIXToolkit::GTK_LOCK) {
			if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(state))),
				$of(detail),
				$($of($Integer::valueOf(orientation)))
			}))) {
				$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
					$of(id),
					$($of($Integer::valueOf(state))),
					$of(detail),
					$($of($Integer::valueOf(orientation)))
				}));
				$init($GTKConstants$ShadowType);
				$nc(GTKPainter::ENGINE)->paintBox(g, context, id, state, $GTKConstants$ShadowType::ETCHED_OUT, detail, x, y, w, h);
				$nc(GTKPainter::ENGINE)->finishPainting();
			}
		}
		return;
	}
	if ($instanceOf($JToolBar$Separator, c)) {
		$assign(detail, "toolbar"_s);
		float pct = 0.2f;
		$var($JToolBar$Separator, sep, $cast($JToolBar$Separator, c));
		$var($Dimension, size, $nc(sep)->getSeparatorSize());
		if (orientation == $JSeparator::HORIZONTAL) {
			x += $cast(int32_t, (w * pct));
			w -= $cast(int32_t, (w * pct * 2));
			y += ($nc(size)->height - $nc(style)->getYThickness()) / 2;
		} else {
			y += $cast(int32_t, (h * pct));
			h -= $cast(int32_t, (h * pct * 2));
			x += ($nc(size)->width - $nc(style)->getXThickness()) / 2;
		}
	} else {
		$assign(detail, "separator"_s);
		$var($Insets, insets, $nc(c)->getInsets());
		x += $nc(insets)->left;
		y += insets->top;
		if (orientation == $JSeparator::HORIZONTAL) {
			w -= (insets->left + insets->right);
		} else {
			h -= (insets->top + insets->bottom);
		}
	}
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state))),
			$of(detail),
			$($of($Integer::valueOf(orientation)))
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(state))),
				$of(detail),
				$($of($Integer::valueOf(orientation)))
			}));
			if (orientation == $JSeparator::HORIZONTAL) {
				$nc(GTKPainter::ENGINE)->paintHline(g, context, id, state, detail, x, y, w, h);
			} else {
				$nc(GTKPainter::ENGINE)->paintVline(g, context, id, state, detail, x, y, w, h);
			}
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t state = context->getComponentState();
	bool focused = (((int32_t)(state & (uint32_t)$SynthConstants::FOCUSED)) != 0);
	int32_t focusSize = 0;
	if (focused) {
		$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
		int32_t var$0 = $nc(style)->getClassSpecificIntValue(context, "focus-line-width"_s, 1);
		focusSize = var$0 + style->getClassSpecificIntValue(context, "focus-padding"_s, 1);
		x -= focusSize;
		y -= focusSize;
		w += focusSize * 2;
		h += focusSize * 2;
	}
	$var($JSlider, slider, $cast($JSlider, context->getComponent()));
	if ($GTKLookAndFeel::is3()) {
		if ($nc(slider)->getOrientation() == $JSlider::VERTICAL) {
			y += 1;
			h -= 2;
		} else {
			x += 1;
			w -= 2;
		}
	}
	double value = (double)$nc(slider)->getValue();
	double min = (double)slider->getMinimum();
	double max = (double)slider->getMaximum();
	double visible = (double)20;
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (w <= 0 || h <= 0) {
			return;
		}
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state))),
			$($of($Double::valueOf(value)))
		}));
		int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
		$nc(GTKPainter::ENGINE)->setRangeValue(context, id, value, min, max, visible);
		$init($GTKConstants$ShadowType);
		$nc(GTKPainter::ENGINE)->paintBox(g, context, id, gtkState, $GTKConstants$ShadowType::IN, "trough"_s, x + focusSize, y + focusSize, w - 2 * focusSize, h - 2 * focusSize);
		if (focused) {
			$nc(GTKPainter::ENGINE)->paintFocus(g, context, id, $SynthConstants::ENABLED, "trough"_s, x, y, w, h);
		}
		$nc(GTKPainter::ENGINE)->finishPainting(false);
	}
}

void GTKPainter::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dir) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	bool var$0 = $GTKLookAndFeel::is3();
	bool hasFocus = var$0 && (((int32_t)(context->getComponentState() & (uint32_t)$SynthConstants::FOCUSED)) != 0);
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState))),
			$($of($Integer::valueOf(dir))),
			$($of($Boolean::valueOf(hasFocus)))
		}))) {
			$init($GTKConstants$Orientation);
			$GTKConstants$Orientation* orientation = (dir == $JSlider::HORIZONTAL ? $GTKConstants$Orientation::HORIZONTAL : $GTKConstants$Orientation::VERTICAL);
			$var($String, detail, dir == $JSlider::HORIZONTAL ? "hscale"_s : "vscale"_s);
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(gtkState))),
				$($of($Integer::valueOf(dir)))
			}));
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintSlider(g, context, id, gtkState, $GTKConstants$ShadowType::OUT, detail, x, y, w, h, orientation, hasFocus);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void GTKPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	$var($JSplitPane, splitPane, $cast($JSplitPane, context->getComponent()));
	$init($GTKConstants$Orientation);
	$GTKConstants$Orientation* orientation = ($nc(splitPane)->getOrientation() == $JSplitPane::HORIZONTAL_SPLIT ? $GTKConstants$Orientation::VERTICAL : $GTKConstants$Orientation::HORIZONTAL);
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState))),
			$of(orientation)
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(gtkState))),
				$of(orientation)
			}));
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintHandle(g, context, id, gtkState, $GTKConstants$ShadowType::OUT, "paned"_s, x, y, w, h, orientation);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSplitPaneDividerForeground(context, g, x, y, w, h, orientation);
}

void GTKPainter::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($JTabbedPane, pane, $cast($JTabbedPane, $nc(context)->getComponent()));
	int32_t selectedIndex = $nc(pane)->getSelectedIndex();
	$GTKConstants$PositionType* placement = $GTKLookAndFeel::SwingOrientationConstantToGTK(pane->getTabPlacement());
	int32_t gapStart = 0;
	int32_t gapSize = 0;
	if (selectedIndex != -1) {
		$var($Rectangle, tabBounds, pane->getBoundsAt(selectedIndex));
		$init($GTKConstants$PositionType);
		if (placement == $GTKConstants$PositionType::TOP || placement == $GTKConstants$PositionType::BOTTOM) {
			gapStart = $nc(tabBounds)->x - x;
			gapSize = tabBounds->width;
		} else {
			gapStart = $nc(tabBounds)->y - y;
			gapSize = tabBounds->height;
		}
	}
	$var($Region, id, context->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState))),
			$of(placement),
			$($of($Integer::valueOf(gapStart))),
			$($of($Integer::valueOf(gapSize)))
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(gtkState))),
				$of(placement),
				$($of($Integer::valueOf(gapStart))),
				$($of($Integer::valueOf(gapSize)))
			}));
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintBoxGap(g, context, id, gtkState, $GTKConstants$ShadowType::OUT, "notebook"_s, x, y, w, h, placement, gapStart, gapSize);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t state = context->getComponentState();
	int32_t gtkState = (((int32_t)(state & (uint32_t)$SynthConstants::SELECTED)) != 0 ? $SynthConstants::ENABLED : $SynthConstants::PRESSED);
	$var($JTabbedPane, pane, $cast($JTabbedPane, context->getComponent()));
	int32_t placement = $nc(pane)->getTabPlacement();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState))),
			$($of($Integer::valueOf(placement))),
			$($of($Integer::valueOf(tabIndex)))
		}))) {
			$GTKConstants$PositionType* side = $nc(GTKPainter::POSITIONS)->get(placement - 1);
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(gtkState))),
				$($of($Integer::valueOf(placement))),
				$($of($Integer::valueOf(tabIndex)))
			}));
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintExtension(g, context, id, gtkState, $GTKConstants$ShadowType::OUT, "tab"_s, x, y, w, h, side, tabIndex);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintTextAreaBackground(context, g, x, y, w, h);
}

void GTKPainter::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintTextAreaBackground(context, g, x, y, w, h);
}

void GTKPainter::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($GTKColorType);
	fillArea(context, g, x, y, w, h, $GTKColorType::TEXT_BACKGROUND);
}

void GTKPainter::paintTextBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, c, $nc(context)->getComponent());
	$var($Container, container, $nc(c)->getParent());
	$var($Container, containerParent, nullptr);
	$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
	$var($Region, id, context->getRegion());
	int32_t state = context->getComponentState();
	if ($instanceOf($ListCellRenderer, c) && container != nullptr) {
		$assign(containerParent, container->getParent());
		if ($instanceOf($JComboBox, containerParent) && $nc(containerParent)->hasFocus()) {
			state |= $SynthConstants::FOCUSED;
		}
	}
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if ($nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state)))
		}))) {
			return;
		}
		int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
		int32_t focusSize = 0;
		bool interiorFocus = $nc(style)->getClassSpecificBoolValue(context, "interior-focus"_s, true);
		focusSize = style->getClassSpecificIntValue(context, "focus-line-width"_s, 1);
		if (!interiorFocus && ((int32_t)(state & (uint32_t)$SynthConstants::FOCUSED)) != 0) {
			x += focusSize;
			y += focusSize;
			w -= 2 * focusSize;
			h -= 2 * focusSize;
		}
		int32_t xThickness = style->getXThickness();
		int32_t yThickness = style->getYThickness();
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state)))
		}));
		if ($GTKLookAndFeel::is3()) {
			$nc(GTKPainter::ENGINE)->paintBackground(g, context, id, gtkState, nullptr, x, y, w, h);
		}
		$init($GTKConstants$ShadowType);
		$nc(GTKPainter::ENGINE)->paintShadow(g, context, id, gtkState, $GTKConstants$ShadowType::IN, "entry"_s, x, y, w, h);
		if (!$GTKLookAndFeel::is3()) {
			$init($ColorType);
			$nc(GTKPainter::ENGINE)->paintFlatBox(g, context, id, gtkState, $GTKConstants$ShadowType::NONE, "entry_bg"_s, x + xThickness, y + yThickness, w - (2 * xThickness), h - (2 * yThickness), $ColorType::TEXT_BACKGROUND);
		}
		if (focusSize > 0 && ((int32_t)(state & (uint32_t)$SynthConstants::FOCUSED)) != 0) {
			if (!interiorFocus) {
				x -= focusSize;
				y -= focusSize;
				w += 2 * focusSize;
				h += 2 * focusSize;
			} else if ($instanceOf($JComboBox, containerParent)) {
				x += (focusSize + 2);
				y += focusSize + ($GTKLookAndFeel::is3() ? 3 : 1);
				w -= 2 * focusSize + ($GTKLookAndFeel::is3() ? 4 : 1);
				h -= 2 * focusSize + ($GTKLookAndFeel::is3() ? 6 : 2);
			} else {
				x += focusSize + ($GTKLookAndFeel::is3() ? 2 : 0);
				y += focusSize + ($GTKLookAndFeel::is3() ? 2 : 0);
				w -= 2 * focusSize + ($GTKLookAndFeel::is3() ? 4 : 0);
				h -= 2 * focusSize + ($GTKLookAndFeel::is3() ? 4 : 0);
			}
			$nc(GTKPainter::ENGINE)->paintFocus(g, context, id, gtkState, "entry"_s, x, y, w, h);
		}
		$nc(GTKPainter::ENGINE)->finishPainting();
	}
}

void GTKPainter::paintTreeCellEditorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState)))
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(gtkState)))
			}));
			$init($GTKConstants$ShadowType);
			$init($ColorType);
			$nc(GTKPainter::ENGINE)->paintFlatBox(g, context, id, gtkState, $GTKConstants$ShadowType::NONE, "entry_bg"_s, x, y, w, h, $ColorType::TEXT_BACKGROUND);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($GTKColorType);
	fillArea(context, g, x, y, w, h, $GTKColorType::BACKGROUND);
}

void GTKPainter::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	$var($JToggleButton, toggleButton, $cast($JToggleButton, context->getComponent()));
	bool var$0 = $nc(toggleButton)->isContentAreaFilled();
	bool paintBG = var$0 && toggleButton->isBorderPainted();
	bool paintFocus = toggleButton->isFocusPainted();
	bool toolButton = ($instanceOf($JToolBar, $(toggleButton->getParent())));
	paintButtonBackgroundImpl(context, g, id, "button"_s, x, y, w, h, paintBG, paintFocus, false, toolButton);
}

void GTKPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	bool focused = ((int32_t)(context->getComponentState() & (uint32_t)$SynthConstants::FOCUSED)) != 0;
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if ($nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Boolean::valueOf(focused)))
		}))) {
			return;
		}
		$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Boolean::valueOf(focused)))
		}));
		$var($Insets, insets, $nc($(context->getComponent()))->getInsets());
		$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
		int32_t troughBorder = $nc(style)->getClassSpecificIntValue(context, "trough-border"_s, 1);
		$nc(insets)->left -= troughBorder;
		insets->right -= troughBorder;
		insets->top -= troughBorder;
		insets->bottom -= troughBorder;
		$init($GTKConstants$ShadowType);
		$nc(GTKPainter::ENGINE)->paintBox(g, context, id, $SynthConstants::PRESSED, $GTKConstants$ShadowType::IN, "trough"_s, x + insets->left, y + insets->top, w - insets->left - insets->right, h - insets->top - insets->bottom);
		if (focused) {
			$nc(GTKPainter::ENGINE)->paintFocus(g, context, id, $SynthConstants::ENABLED, "trough"_s, x, y, w, h);
		}
		$nc(GTKPainter::ENGINE)->finishPainting();
	}
}

void GTKPainter::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t dir) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
	$var($JScrollBar, sb, $cast($JScrollBar, context->getComponent()));
	bool var$0 = $nc(sb)->getOrientation() == $JScrollBar::HORIZONTAL;
	bool rtl = var$0 && !$nc($(sb->getComponentOrientation()))->isLeftToRight();
	double min = (double)0;
	double max = (double)100;
	double visible = (double)20;
	double value = 0.0;
	int32_t var$2 = sb->getMaximum();
	int32_t var$1 = var$2 - sb->getMinimum();
	if (var$1 == sb->getVisibleAmount()) {
		value = (double)0;
		visible = (double)100;
	} else {
		int32_t var$4 = sb->getValue();
		if (var$4 == sb->getMinimum()) {
			value = (double)(rtl ? 100 : 0);
		} else {
			int32_t var$8 = sb->getValue();
			int32_t var$10 = sb->getMaximum();
			int32_t var$9 = var$10 - sb->getVisibleAmount();
			if (var$8 >= var$9) {
				value = (double)(rtl ? 0 : 100);
			} else {
				value = (double)50;
			}
		}
	}
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState))),
			$($of($Integer::valueOf(dir))),
			$($of($Double::valueOf(value))),
			$($of($Double::valueOf(visible))),
			$($of($Boolean::valueOf(rtl)))
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(gtkState))),
				$($of($Integer::valueOf(dir))),
				$($of($Double::valueOf(value))),
				$($of($Double::valueOf(visible))),
				$($of($Boolean::valueOf(rtl)))
			}));
			$init($GTKConstants$Orientation);
			$GTKConstants$Orientation* orientation = (dir == $JScrollBar::HORIZONTAL ? $GTKConstants$Orientation::HORIZONTAL : $GTKConstants$Orientation::VERTICAL);
			$nc(GTKPainter::ENGINE)->setRangeValue(context, id, value, min, max, visible);
			$init($GTKConstants$ShadowType);
			$nc(GTKPainter::ENGINE)->paintSlider(g, context, id, gtkState, $GTKConstants$ShadowType::OUT, "slider"_s, x, y, w, h, orientation, false);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {$of(id)}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {$of(id)}));
			$init($GTKConstants$ShadowType);
			$init($ColorType);
			$nc(GTKPainter::ENGINE)->paintFlatBox(g, context, id, $SynthConstants::ENABLED, $GTKConstants$ShadowType::OUT, "tooltip"_s, x, y, w, h, $ColorType::BACKGROUND);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$var($Region, id, $nc(context)->getRegion());
	int32_t state = context->getComponentState();
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(state)))
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(state)))
			}));
			$init($GTKConstants$ShadowType);
			$init($ColorType);
			$nc(GTKPainter::ENGINE)->paintFlatBox(g, context, id, gtkState, $GTKConstants$ShadowType::NONE, "cell_odd"_s, x, y, w, h, $ColorType::TEXT_BACKGROUND);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($Region);
	$var($Region, id, $Region::TREE_CELL);
	int32_t state = $nc(context)->getComponentState();
	paintFocus(context, g, id, state, "treeview"_s, x, y, w, h);
}

void GTKPainter::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($GTKColorType);
	fillArea(context, g, x, y, w, h, $GTKColorType::TEXT_BACKGROUND);
}

void GTKPainter::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($GTKColorType);
	fillArea(context, g, x, y, w, h, $GTKColorType::TEXT_BACKGROUND);
}

void GTKPainter::paintFocus($SynthContext* context, $Graphics* g, $Region* id, int32_t state, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, state);
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$of(id),
			$($of($Integer::valueOf(gtkState))),
			$of("focus"_s)
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$of(id),
				$($of($Integer::valueOf(gtkState))),
				$of("focus"_s)
			}));
			$nc(GTKPainter::ENGINE)->paintFocus(g, context, id, gtkState, detail, x, y, w, h);
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintMetacityElement($SynthContext* context, $Graphics* g, int32_t gtkState, $String* detail, int32_t x, int32_t y, int32_t w, int32_t h, $GTKConstants$ShadowType* shadow, $GTKConstants$ArrowType* direction) {
	$useLocalCurrentObjectStackCache();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$($of($Integer::valueOf(gtkState))),
			$of(detail),
			$of(shadow),
			$of(direction)
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$($of($Integer::valueOf(gtkState))),
				$of(detail),
				$of(shadow),
				$of(direction)
			}));
			if (detail == "metacity-arrow"_s) {
				$init($Region);
				$nc(GTKPainter::ENGINE)->paintArrow(g, context, $Region::INTERNAL_FRAME_TITLE_PANE, gtkState, shadow, direction, ""_s, x, y, w, h);
			} else if (detail == "metacity-box"_s) {
				$init($Region);
				$nc(GTKPainter::ENGINE)->paintBox(g, context, $Region::INTERNAL_FRAME_TITLE_PANE, gtkState, shadow, ""_s, x, y, w, h);
			} else if (detail == "metacity-vline"_s) {
				$init($Region);
				$nc(GTKPainter::ENGINE)->paintVline(g, context, $Region::INTERNAL_FRAME_TITLE_PANE, gtkState, ""_s, x, y, w, h);
			}
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintIcon($SynthContext* context, $Graphics* g, $Method* paintMethod, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t state = $nc(context)->getComponentState();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$($of($Integer::valueOf(state))),
			$of(paintMethod)
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$($of($Integer::valueOf(state))),
				$of(paintMethod)
			}));
			try {
				$nc(paintMethod)->invoke(this, $$new($ObjectArray, {
					$of(context),
					$of(g),
					$($of($Integer::valueOf(state))),
					$($of($Integer::valueOf(x))),
					$($of($Integer::valueOf(y))),
					$($of($Integer::valueOf(w))),
					$($of($Integer::valueOf(h)))
				}));
			} catch ($IllegalAccessException& iae) {
				if (!GTKPainter::$assertionsDisabled) {
					$throwNew($AssertionError);
				}
			} catch ($InvocationTargetException& ite) {
				if (!GTKPainter::$assertionsDisabled) {
					$throwNew($AssertionError);
				}
			}
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintIcon($SynthContext* context, $Graphics* g, $Method* paintMethod, int32_t x, int32_t y, int32_t w, int32_t h, Object$* direction) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t state = $nc(context)->getComponentState();
	$init($UNIXToolkit);
	$synchronized($UNIXToolkit::GTK_LOCK) {
		if (!$nc(GTKPainter::ENGINE)->paintCachedImage(g, x, y, w, h, $$new($ObjectArray, {
			$($of($Integer::valueOf(state))),
			$of(paintMethod),
			direction
		}))) {
			$nc(GTKPainter::ENGINE)->startPainting(g, x, y, w, h, $$new($ObjectArray, {
				$($of($Integer::valueOf(state))),
				$of(paintMethod),
				direction
			}));
			try {
				$nc(paintMethod)->invoke(this, $$new($ObjectArray, {
					$of(context),
					$of(g),
					$($of($Integer::valueOf(state))),
					$($of($Integer::valueOf(x))),
					$($of($Integer::valueOf(y))),
					$($of($Integer::valueOf(w))),
					$($of($Integer::valueOf(h))),
					direction
				}));
			} catch ($IllegalAccessException& iae) {
				if (!GTKPainter::$assertionsDisabled) {
					$throwNew($AssertionError);
				}
			} catch ($InvocationTargetException& ite) {
				if (!GTKPainter::$assertionsDisabled) {
					$throwNew($AssertionError);
				}
			}
			$nc(GTKPainter::ENGINE)->finishPainting();
		}
	}
}

void GTKPainter::paintTreeExpandedIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($Region);
	$init($GTKConstants$ExpanderStyle);
	$nc(GTKPainter::ENGINE)->paintExpander(g, context, $Region::TREE, $GTKLookAndFeel::synthStateToGTKState($($nc(context)->getRegion()), state), $GTKConstants$ExpanderStyle::EXPANDED, "expander"_s, x, y, w, h);
}

void GTKPainter::paintTreeCollapsedIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($Region);
	$init($GTKConstants$ExpanderStyle);
	$nc(GTKPainter::ENGINE)->paintExpander(g, context, $Region::TREE, $GTKLookAndFeel::synthStateToGTKState($($nc(context)->getRegion()), state), $GTKConstants$ExpanderStyle::COLLAPSED, "expander"_s, x, y, w, h);
}

void GTKPainter::paintCheckBoxIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($GTKStyle, style, $cast($GTKStyle, $nc(context)->getStyle()));
	int32_t size = $nc(style)->getClassSpecificIntValue(context, "indicator-size"_s, $GTKIconFactory::DEFAULT_ICON_SIZE);
	int32_t offset = style->getClassSpecificIntValue(context, "indicator-spacing"_s, $GTKIconFactory::DEFAULT_ICON_SPACING);
	$init($Region);
	$nc(GTKPainter::ENGINE)->paintCheck(g, context, $Region::CHECK_BOX, "checkbutton"_s, x + offset, y + offset, size, size);
}

void GTKPainter::paintRadioButtonIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($GTKStyle, style, $cast($GTKStyle, $nc(context)->getStyle()));
	int32_t size = $nc(style)->getClassSpecificIntValue(context, "indicator-size"_s, $GTKIconFactory::DEFAULT_ICON_SIZE);
	int32_t offset = style->getClassSpecificIntValue(context, "indicator-spacing"_s, $GTKIconFactory::DEFAULT_ICON_SPACING);
	$init($Region);
	$nc(GTKPainter::ENGINE)->paintOption(g, context, $Region::RADIO_BUTTON, "radiobutton"_s, x + offset, y + offset, size, size);
}

void GTKPainter::paintMenuArrowIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, $GTKConstants$ArrowType* dir) {
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState($($nc(context)->getRegion()), state);
	$init($GTKConstants$ShadowType);
	$GTKConstants$ShadowType* shadow = $GTKConstants$ShadowType::OUT;
	if (gtkState == $SynthConstants::MOUSE_OVER) {
		shadow = $GTKConstants$ShadowType::IN;
	}
	if (!$GTKLookAndFeel::is3()) {
		x += 3;
		y += 3;
		w = (h = 7);
	}
	$init($Region);
	$nc(GTKPainter::ENGINE)->paintArrow(g, context, $Region::MENU_ITEM, gtkState, shadow, dir, "menuitem"_s, x, y, w, h);
}

void GTKPainter::paintCheckBoxMenuItemCheckIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($GTKStyle, style, $cast($GTKStyle, $nc(context)->getStyle()));
	int32_t size = $nc(style)->getClassSpecificIntValue(context, "indicator-size"_s, $GTKIconFactory::DEFAULT_TOGGLE_MENU_ITEM_SIZE);
	$init($Region);
	$nc(GTKPainter::ENGINE)->paintCheck(g, context, $Region::CHECK_BOX_MENU_ITEM, "check"_s, x + $GTKIconFactory::CHECK_ICON_EXTRA_INSET, y + $GTKIconFactory::CHECK_ICON_EXTRA_INSET, size, size);
}

void GTKPainter::paintRadioButtonMenuItemCheckIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($GTKStyle, style, $cast($GTKStyle, $nc(context)->getStyle()));
	int32_t size = $nc(style)->getClassSpecificIntValue(context, "indicator-size"_s, $GTKIconFactory::DEFAULT_TOGGLE_MENU_ITEM_SIZE);
	$init($Region);
	$nc(GTKPainter::ENGINE)->paintOption(g, context, $Region::RADIO_BUTTON_MENU_ITEM, "option"_s, x + $GTKIconFactory::CHECK_ICON_EXTRA_INSET, y + $GTKIconFactory::CHECK_ICON_EXTRA_INSET, size, size);
}

void GTKPainter::paintToolBarHandleIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h, $GTKConstants$Orientation* orientation$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($GTKConstants$Orientation, orientation, orientation$renamed);
	int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState($($nc(context)->getRegion()), state);
	$init($GTKConstants$Orientation);
	orientation = (orientation == $GTKConstants$Orientation::HORIZONTAL) ? $GTKConstants$Orientation::VERTICAL : $GTKConstants$Orientation::HORIZONTAL;
	$init($Region);
	$init($GTKConstants$ShadowType);
	$nc(GTKPainter::ENGINE)->paintHandle(g, context, $Region::TOOL_BAR, gtkState, $GTKConstants$ShadowType::OUT, "handlebox"_s, x, y, w, h, orientation);
}

void GTKPainter::paintAscendingSortIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($Region);
	$init($GTKConstants$ShadowType);
	$init($GTKConstants$ArrowType);
	$nc(GTKPainter::ENGINE)->paintArrow(g, context, $Region::TABLE, $SynthConstants::ENABLED, $GTKConstants$ShadowType::IN, $GTKConstants$ArrowType::UP, "arrow"_s, x, y, w, h);
}

void GTKPainter::paintDescendingSortIcon($SynthContext* context, $Graphics* g, int32_t state, int32_t x, int32_t y, int32_t w, int32_t h) {
	$init($Region);
	$init($GTKConstants$ShadowType);
	$init($GTKConstants$ArrowType);
	$nc(GTKPainter::ENGINE)->paintArrow(g, context, $Region::TABLE, $SynthConstants::ENABLED, $GTKConstants$ShadowType::IN, $GTKConstants$ArrowType::DOWN, "arrow"_s, x, y, w, h);
}

void GTKPainter::fillArea($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $ColorType* colorType) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(context)->getComponent()))->isOpaque()) {
		$var($Region, id, context->getRegion());
		int32_t gtkState = $GTKLookAndFeel::synthStateToGTKState(id, context->getComponentState());
		$var($GTKStyle, style, $cast($GTKStyle, context->getStyle()));
		$nc(g)->setColor($($nc(style)->getGTKColor(context, gtkState, colorType)));
		g->fillRect(x, y, w, h);
	}
}

void clinit$GTKPainter($Class* class$) {
	GTKPainter::$assertionsDisabled = !GTKPainter::class$->desiredAssertionStatus();
	$init($GTKConstants$PositionType);
	$assignStatic(GTKPainter::POSITIONS, $new($GTKConstants$PositionTypeArray, {
		$GTKConstants$PositionType::BOTTOM,
		$GTKConstants$PositionType::RIGHT,
		$GTKConstants$PositionType::TOP,
		$GTKConstants$PositionType::LEFT
	}));
	$init($GTKConstants$ShadowType);
	$assignStatic(GTKPainter::SHADOWS, $new($GTKConstants$ShadowTypeArray, {
		$GTKConstants$ShadowType::NONE,
		$GTKConstants$ShadowType::IN,
		$GTKConstants$ShadowType::OUT,
		$GTKConstants$ShadowType::ETCHED_IN,
		$GTKConstants$ShadowType::OUT
	}));
	$init($GTKEngine);
	$assignStatic(GTKPainter::ENGINE, $GTKEngine::INSTANCE);
	$assignStatic(GTKPainter::INSTANCE, $new(GTKPainter));
}

GTKPainter::GTKPainter() {
}

$Class* GTKPainter::load$($String* name, bool initialize) {
	$loadClass(GTKPainter, name, initialize, &_GTKPainter_ClassInfo_, clinit$GTKPainter, allocate$GTKPainter);
	return class$;
}

$Class* GTKPainter::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com