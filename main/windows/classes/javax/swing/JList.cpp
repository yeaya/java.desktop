#include <javax/swing/JList.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/ObjectOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Attribute.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NamedAttribute.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/EventListener.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultListSelectionModel.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList$1.h>
#include <javax/swing/JList$2.h>
#include <javax/swing/JList$3.h>
#include <javax/swing/JList$4.h>
#include <javax/swing/JList$5.h>
#include <javax/swing/JList$6.h>
#include <javax/swing/JList$AccessibleJList.h>
#include <javax/swing/JList$DropLocation.h>
#include <javax/swing/JList$ListSelectionHandler.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/ToolTipManager.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ListUI.h>
#include <javax/swing/text/Position$Bias.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/SwingUtilities2$Section.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef HORIZONTAL_WRAP
#undef LEADING
#undef NOBUTTON
#undef TRAILING
#undef USE_SELECTION
#undef VERTICAL
#undef VERTICAL_WRAP

using $EventListenerArray = $Array<::java::util::EventListener>;
using $ListSelectionListenerArray = $Array<::javax::swing::event::ListSelectionListener>;
using $intArray2 = $Array<int32_t, 2>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $EventListener = ::java::util::EventListener;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $DefaultListSelectionModel = ::javax::swing::DefaultListSelectionModel;
using $DropMode = ::javax::swing::DropMode;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JList$1 = ::javax::swing::JList$1;
using $JList$2 = ::javax::swing::JList$2;
using $JList$3 = ::javax::swing::JList$3;
using $JList$4 = ::javax::swing::JList$4;
using $JList$5 = ::javax::swing::JList$5;
using $JList$6 = ::javax::swing::JList$6;
using $JList$AccessibleJList = ::javax::swing::JList$AccessibleJList;
using $JList$DropLocation = ::javax::swing::JList$DropLocation;
using $JList$ListSelectionHandler = ::javax::swing::JList$ListSelectionHandler;
using $JViewport = ::javax::swing::JViewport;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $Scrollable = ::javax::swing::Scrollable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ToolTipManager = ::javax::swing::ToolTipManager;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $UIManager = ::javax::swing::UIManager;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ListUI = ::javax::swing::plaf::ListUI;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SwingUtilities2$Section = ::sun::swing::SwingUtilities2$Section;

namespace javax {
	namespace swing {

$NamedAttribute JList_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component which allows for the selection of one or more objects from a list."},
	{}
};

$NamedAttribute JList_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};
$CompoundAttribute _JList_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JList_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JList_Attribute_var$1},
	{}
};

$NamedAttribute JList_Attribute_var$2[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getAccessibleContext12[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$2},
	{}
};

$NamedAttribute JList_Attribute_var$3[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getAnchorSelectionIndex13[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$3},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getCellRenderer15[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JList_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getDropLocation17[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$4},
	{}
};

$NamedAttribute JList_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getFirstVisibleIndex19[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$5},
	{}
};

$NamedAttribute JList_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getLastVisibleIndex22[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$6},
	{}
};

$NamedAttribute JList_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "The lead selection index."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getLeadSelectionIndex24[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$7},
	{}
};

$NamedAttribute JList_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getListSelectionListeners25[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$8},
	{}
};

$NamedAttribute JList_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getMaxSelectionIndex26[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$9},
	{}
};

$NamedAttribute JList_Attribute_var$10[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getMinSelectionIndex27[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$10},
	{}
};

$NamedAttribute JList_Attribute_var$11[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getPreferredScrollableViewportSize30[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$11},
	{}
};

$NamedAttribute JList_Attribute_var$12[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getScrollableTracksViewportHeight33[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$12},
	{}
};

$NamedAttribute JList_Attribute_var$13[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getScrollableTracksViewportWidth34[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$13},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getSelectedIndices37[] = {
	{"Ljava/beans/Transient;", nullptr},
	{}
};

$NamedAttribute JList_Attribute_var$14[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getSelectedValue38[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$14},
	{}
};

$NamedAttribute JList_Attribute_var$15[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getSelectedValues39[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$15},
	{}
};

$NamedAttribute JList_Attribute_var$16[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getSelectedValuesList40[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$16},
	{}
};

$NamedAttribute JList_Attribute_var$17[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_getUIClassID47[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$17},
	{}
};

$NamedAttribute JList_Attribute_var$18[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_isSelectionEmpty52[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$18},
	{}
};

$NamedAttribute JList_Attribute_var$19[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The component used to draw the cells."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setCellRenderer57[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$19},
	{}
};

$NamedAttribute JList_Attribute_var$20[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "determines whether automatic drag handling is enabled"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setDragEnabled58[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$20},
	{}
};

$NamedAttribute JList_Attribute_var$21[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Defines a fixed cell height when greater than zero."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setFixedCellHeight61[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$21},
	{}
};

$NamedAttribute JList_Attribute_var$22[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "Defines a fixed cell width when greater than zero."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setFixedCellWidth62[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$22},
	{}
};

$Attribute JList_Attribute_var$24[] = {
	{'s', "JList.VERTICAL"},
	{'s', "JList.HORIZONTAL_WRAP"},
	{'s', "JList.VERTICAL_WRAP"},
	{'-'}
};

$NamedAttribute JList_Attribute_var$23[] = {
	{"visualUpdate", 'Z', "true"},
	{"enumerationValues", '[', JList_Attribute_var$24},
	{"description", 's', "Defines the way list cells are layed out."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setLayoutOrientation63[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$23},
	{}
};

$NamedAttribute JList_Attribute_var$25[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The object that contains the data to be drawn by this JList."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setModel66[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$25},
	{}
};

$NamedAttribute JList_Attribute_var$26[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The cell prototype value, used to compute cell width and height."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setPrototypeCellValue67[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$26},
	{}
};

$NamedAttribute JList_Attribute_var$27[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "The index of the selected cell."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setSelectedIndex68[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$27},
	{}
};

$NamedAttribute JList_Attribute_var$28[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The background color of selected cells."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setSelectionBackground71[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$28},
	{}
};

$NamedAttribute JList_Attribute_var$29[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The foreground color of selected cells."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setSelectionForeground72[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$29},
	{}
};

$Attribute JList_Attribute_var$31[] = {
	{'s', "ListSelectionModel.SINGLE_SELECTION"},
	{'s', "ListSelectionModel.SINGLE_INTERVAL_SELECTION"},
	{'s', "ListSelectionModel.MULTIPLE_INTERVAL_SELECTION"},
	{'-'}
};

$NamedAttribute JList_Attribute_var$30[] = {
	{"bound", 'Z', "false"},
	{"enumerationValues", '[', JList_Attribute_var$31},
	{"description", 's', "The selection mode."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setSelectionMode74[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$30},
	{}
};

$NamedAttribute JList_Attribute_var$32[] = {
	{"description", 's', "The selection model, recording which cells are selected."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setSelectionModel75[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$32},
	{}
};

$NamedAttribute JList_Attribute_var$33[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setUI76[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$33},
	{}
};

$NamedAttribute JList_Attribute_var$34[] = {
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The preferred number of rows to display without requiring scrolling"},
	{}
};

$CompoundAttribute _JList_MethodAnnotations_setVisibleRowCount78[] = {
	{"Ljava/beans/BeanProperty;", JList_Attribute_var$34},
	{}
};


$FieldInfo _JList_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JList, $assertionsDisabled)},
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JList, uiClassID)},
	{"VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JList, VERTICAL)},
	{"VERTICAL_WRAP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JList, VERTICAL_WRAP)},
	{"HORIZONTAL_WRAP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(JList, HORIZONTAL_WRAP)},
	{"fixedCellWidth", "I", nullptr, $PRIVATE, $field(JList, fixedCellWidth)},
	{"fixedCellHeight", "I", nullptr, $PRIVATE, $field(JList, fixedCellHeight)},
	{"horizontalScrollIncrement", "I", nullptr, $PRIVATE, $field(JList, horizontalScrollIncrement)},
	{"prototypeCellValue", "Ljava/lang/Object;", "TE;", $PRIVATE, $field(JList, prototypeCellValue)},
	{"visibleRowCount", "I", nullptr, $PRIVATE, $field(JList, visibleRowCount)},
	{"selectionForeground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(JList, selectionForeground)},
	{"selectionBackground", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(JList, selectionBackground)},
	{"dragEnabled", "Z", nullptr, $PRIVATE, $field(JList, dragEnabled)},
	{"selectionModel", "Ljavax/swing/ListSelectionModel;", nullptr, $PRIVATE, $field(JList, selectionModel)},
	{"dataModel", "Ljavax/swing/ListModel;", "Ljavax/swing/ListModel<TE;>;", $PRIVATE, $field(JList, dataModel)},
	{"cellRenderer", "Ljavax/swing/ListCellRenderer;", "Ljavax/swing/ListCellRenderer<-TE;>;", $PRIVATE, $field(JList, cellRenderer)},
	{"selectionListener", "Ljavax/swing/event/ListSelectionListener;", nullptr, $PRIVATE, $field(JList, selectionListener)},
	{"layoutOrientation", "I", nullptr, $PRIVATE, $field(JList, layoutOrientation)},
	{"dropMode", "Ljavax/swing/DropMode;", nullptr, $PRIVATE, $field(JList, dropMode)},
	{"dropLocation", "Ljavax/swing/JList$DropLocation;", nullptr, $PRIVATE | $TRANSIENT, $field(JList, dropLocation)},
	{"updateInProgress", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JList, updateInProgress)},
	{}
};

$MethodInfo _JList_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/ListModel;)V", "(Ljavax/swing/ListModel<TE;>;)V", $PUBLIC, $method(static_cast<void(JList::*)($ListModel*)>(&JList::init$))},
	{"<init>", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC, $method(static_cast<void(JList::*)($ObjectArray*)>(&JList::init$))},
	{"<init>", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<+TE;>;)V", $PUBLIC, $method(static_cast<void(JList::*)($Vector*)>(&JList::init$))},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JList::*)()>(&JList::init$))},
	{"addListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC},
	{"addSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"checkScrollableParameters", "(Ljava/awt/Rectangle;I)V", nullptr, $PRIVATE, $method(static_cast<void(JList::*)($Rectangle*,int32_t)>(&JList::checkScrollableParameters))},
	{"clearSelection", "()V", nullptr, $PUBLIC},
	{"createSelectionModel", "()Ljavax/swing/ListSelectionModel;", nullptr, $PROTECTED},
	{"dropLocationForPoint", "(Ljava/awt/Point;)Ljavax/swing/JList$DropLocation;", nullptr, 0},
	{"ensureIndexIsVisible", "(I)V", nullptr, $PUBLIC},
	{"fireSelectionValueChanged", "(IIZ)V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getAccessibleContext12},
	{"getAnchorSelectionIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getAnchorSelectionIndex13},
	{"getCellBounds", "(II)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getCellRenderer", "()Ljavax/swing/ListCellRenderer;", "()Ljavax/swing/ListCellRenderer<-TE;>;", $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getCellRenderer15},
	{"getDragEnabled", "()Z", nullptr, $PUBLIC},
	{"getDropLocation", "()Ljavax/swing/JList$DropLocation;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$JList$DropLocation*(JList::*)()>(&JList::getDropLocation)), nullptr, nullptr, _JList_MethodAnnotations_getDropLocation17},
	{"getDropMode", "()Ljavax/swing/DropMode;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$DropMode*(JList::*)()>(&JList::getDropMode))},
	{"getFirstVisibleIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getFirstVisibleIndex19},
	{"getFixedCellHeight", "()I", nullptr, $PUBLIC},
	{"getFixedCellWidth", "()I", nullptr, $PUBLIC},
	{"getLastVisibleIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getLastVisibleIndex22},
	{"getLayoutOrientation", "()I", nullptr, $PUBLIC},
	{"getLeadSelectionIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getLeadSelectionIndex24},
	{"getListSelectionListeners", "()[Ljavax/swing/event/ListSelectionListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getListSelectionListeners25},
	{"getMaxSelectionIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getMaxSelectionIndex26},
	{"getMinSelectionIndex", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getMinSelectionIndex27},
	{"getModel", "()Ljavax/swing/ListModel;", "()Ljavax/swing/ListModel<TE;>;", $PUBLIC},
	{"getNextMatch", "(Ljava/lang/String;ILjavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{"getPreferredScrollableViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getPreferredScrollableViewportSize30},
	{"getPrototypeCellValue", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{"getScrollableBlockIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC},
	{"getScrollableTracksViewportHeight", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getScrollableTracksViewportHeight33},
	{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getScrollableTracksViewportWidth34},
	{"getScrollableUnitIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC},
	{"getSelectedIndex", "()I", nullptr, $PUBLIC},
	{"getSelectedIndices", "()[I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getSelectedIndices37},
	{"getSelectedValue", "()Ljava/lang/Object;", "()TE;", $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getSelectedValue38},
	{"getSelectedValues", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getSelectedValues39},
	{"getSelectedValuesList", "()Ljava/util/List;", "()Ljava/util/List<TE;>;", $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getSelectedValuesList40},
	{"getSelectionBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getSelectionForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getSelectionMode", "()I", nullptr, $PUBLIC},
	{"getSelectionModel", "()Ljavax/swing/ListSelectionModel;", nullptr, $PUBLIC},
	{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getUI", "()Ljavax/swing/plaf/ListUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_getUIClassID47},
	{"getValueIsAdjusting", "()Z", nullptr, $PUBLIC},
	{"getVisibleRowCount", "()I", nullptr, $PUBLIC},
	{"indexToLocation", "(I)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"isSelectedIndex", "(I)Z", nullptr, $PUBLIC},
	{"isSelectionEmpty", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_isSelectionEmpty52},
	{"locationToIndex", "(Ljava/awt/Point;)I", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"removeListSelectionListener", "(Ljavax/swing/event/ListSelectionListener;)V", nullptr, $PUBLIC},
	{"removeSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"setCellRenderer", "(Ljavax/swing/ListCellRenderer;)V", "(Ljavax/swing/ListCellRenderer<-TE;>;)V", $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setCellRenderer57},
	{"setDragEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setDragEnabled58},
	{"setDropLocation", "(Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, 0},
	{"setDropMode", "(Ljavax/swing/DropMode;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JList::*)($DropMode*)>(&JList::setDropMode))},
	{"setFixedCellHeight", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setFixedCellHeight61},
	{"setFixedCellWidth", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setFixedCellWidth62},
	{"setLayoutOrientation", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setLayoutOrientation63},
	{"setListData", "([Ljava/lang/Object;)V", "([TE;)V", $PUBLIC},
	{"setListData", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<+TE;>;)V", $PUBLIC},
	{"setModel", "(Ljavax/swing/ListModel;)V", "(Ljavax/swing/ListModel<TE;>;)V", $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setModel66},
	{"setPrototypeCellValue", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setPrototypeCellValue67},
	{"setSelectedIndex", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setSelectedIndex68},
	{"setSelectedIndices", "([I)V", nullptr, $PUBLIC},
	{"setSelectedValue", "(Ljava/lang/Object;Z)V", nullptr, $PUBLIC},
	{"setSelectionBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setSelectionBackground71},
	{"setSelectionForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setSelectionForeground72},
	{"setSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"setSelectionMode", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setSelectionMode74},
	{"setSelectionModel", "(Ljavax/swing/ListSelectionModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setSelectionModel75},
	{"setUI", "(Ljavax/swing/plaf/ListUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setUI76},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PUBLIC},
	{"setVisibleRowCount", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JList_MethodAnnotations_setVisibleRowCount78},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateFixedCellSize", "()V", nullptr, $PRIVATE, $method(static_cast<void(JList::*)()>(&JList::updateFixedCellSize))},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JList::*)($ObjectOutputStream*)>(&JList::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JList_InnerClassesInfo_[] = {
	{"javax.swing.JList$6", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.JList$AccessibleJList", "javax.swing.JList", "AccessibleJList", $PROTECTED},
	{"javax.swing.JList$ListSelectionHandler", "javax.swing.JList", "ListSelectionHandler", $PRIVATE},
	{"javax.swing.JList$DropLocation", "javax.swing.JList", "DropLocation", $PUBLIC | $STATIC | $FINAL},
	{"javax.swing.JList$5", nullptr, nullptr, 0},
	{"javax.swing.JList$4", nullptr, nullptr, 0},
	{"javax.swing.JList$3", nullptr, nullptr, 0},
	{"javax.swing.JList$2", nullptr, nullptr, 0},
	{"javax.swing.JList$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JList",
	"javax.swing.JComponent",
	"javax.swing.Scrollable,javax.accessibility.Accessible",
	_JList_FieldInfo_,
	_JList_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljavax/swing/JComponent;Ljavax/swing/Scrollable;Ljavax/accessibility/Accessible;",
	nullptr,
	_JList_InnerClassesInfo_,
	_JList_Annotations_,
	nullptr,
	"javax.swing.JList$6,javax.swing.JList$AccessibleJList,javax.swing.JList$AccessibleJList$AccessibleJListChild,javax.swing.JList$ListSelectionHandler,javax.swing.JList$DropLocation,javax.swing.JList$5,javax.swing.JList$4,javax.swing.JList$3,javax.swing.JList$2,javax.swing.JList$1"
};

$Object* allocate$JList($Class* clazz) {
	return $of($alloc(JList));
}

$String* JList::toString() {
	 return this->$JComponent::toString();
}

int32_t JList::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JList::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JList::clone() {
	 return this->$JComponent::clone();
}

void JList::finalize() {
	this->$JComponent::finalize();
}

bool JList::$assertionsDisabled = false;

$String* JList::uiClassID = nullptr;

void JList::init$($ListModel* dataModel) {
	$JComponent::init$();
	this->fixedCellWidth = -1;
	this->fixedCellHeight = -1;
	this->horizontalScrollIncrement = -1;
	this->visibleRowCount = 8;
	$init($DropMode);
	$set(this, dropMode, $DropMode::USE_SELECTION);
	if (dataModel == nullptr) {
		$throwNew($IllegalArgumentException, "dataModel must be non null"_s);
	}
	$var($ToolTipManager, toolTipManager, $ToolTipManager::sharedInstance());
	$nc(toolTipManager)->registerComponent(this);
	this->layoutOrientation = JList::VERTICAL;
	$set(this, dataModel, dataModel);
	$set(this, selectionModel, createSelectionModel());
	setAutoscrolls(true);
	updateUI();
}

void JList::init$($ObjectArray* listData) {
	JList::init$(static_cast<$ListModel*>($$new($JList$1, listData)));
}

void JList::init$($Vector* listData) {
	JList::init$(static_cast<$ListModel*>($$new($JList$2, listData)));
}

void JList::init$() {
	JList::init$(static_cast<$ListModel*>($$new($JList$3)));
}

$ComponentUI* JList::getUI() {
	return $cast($ListUI, this->ui);
}

void JList::setUI($ListUI* ui) {
	$JComponent::setUI(ui);
}

void JList::updateUI() {
	$useLocalCurrentObjectStackCache();
	if (!this->updateInProgress) {
		this->updateInProgress = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				setUI($cast($ListUI, $($UIManager::getUI(this))));
				$var($ListCellRenderer, renderer, getCellRenderer());
				if ($instanceOf($Component, renderer)) {
					$SwingUtilities::updateComponentTreeUI($cast($Component, renderer));
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				this->updateInProgress = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$String* JList::getUIClassID() {
	return JList::uiClassID;
}

void JList::updateFixedCellSize() {
	$useLocalCurrentObjectStackCache();
	$var($ListCellRenderer, cr, getCellRenderer());
	$var($Object, value, getPrototypeCellValue());
	if ((cr != nullptr) && (value != nullptr)) {
		$var($Component, c, cr->getListCellRendererComponent(this, value, 0, false, false));
		$var($Font, f, $nc(c)->getFont());
		c->setFont($(getFont()));
		$var($Dimension, d, c->getPreferredSize());
		this->fixedCellWidth = $nc(d)->width;
		this->fixedCellHeight = d->height;
		c->setFont(f);
	}
}

$Object* JList::getPrototypeCellValue() {
	return $of(this->prototypeCellValue);
}

void JList::setPrototypeCellValue(Object$* prototypeCellValue) {
	$var($Object, oldValue, this->prototypeCellValue);
	$set(this, prototypeCellValue, prototypeCellValue);
	if ((prototypeCellValue != nullptr) && !$of(prototypeCellValue)->equals(oldValue)) {
		updateFixedCellSize();
	}
	firePropertyChange("prototypeCellValue"_s, oldValue, prototypeCellValue);
}

int32_t JList::getFixedCellWidth() {
	return this->fixedCellWidth;
}

void JList::setFixedCellWidth(int32_t width) {
	int32_t oldValue = this->fixedCellWidth;
	this->fixedCellWidth = width;
	firePropertyChange("fixedCellWidth"_s, oldValue, this->fixedCellWidth);
}

int32_t JList::getFixedCellHeight() {
	return this->fixedCellHeight;
}

void JList::setFixedCellHeight(int32_t height) {
	int32_t oldValue = this->fixedCellHeight;
	this->fixedCellHeight = height;
	firePropertyChange("fixedCellHeight"_s, oldValue, this->fixedCellHeight);
}

$ListCellRenderer* JList::getCellRenderer() {
	return this->cellRenderer;
}

void JList::setCellRenderer($ListCellRenderer* cellRenderer) {
	$var($ListCellRenderer, oldValue, this->cellRenderer);
	$set(this, cellRenderer, cellRenderer);
	if ((cellRenderer != nullptr) && !$of(cellRenderer)->equals(oldValue)) {
		updateFixedCellSize();
	}
	firePropertyChange("cellRenderer"_s, $of(oldValue), $of(cellRenderer));
}

$Color* JList::getSelectionForeground() {
	return this->selectionForeground;
}

void JList::setSelectionForeground($Color* selectionForeground) {
	$var($Color, oldValue, this->selectionForeground);
	$set(this, selectionForeground, selectionForeground);
	firePropertyChange("selectionForeground"_s, $of(oldValue), $of(selectionForeground));
}

$Color* JList::getSelectionBackground() {
	return this->selectionBackground;
}

void JList::setSelectionBackground($Color* selectionBackground) {
	$var($Color, oldValue, this->selectionBackground);
	$set(this, selectionBackground, selectionBackground);
	firePropertyChange("selectionBackground"_s, $of(oldValue), $of(selectionBackground));
}

int32_t JList::getVisibleRowCount() {
	return this->visibleRowCount;
}

void JList::setVisibleRowCount(int32_t visibleRowCount) {
	int32_t oldValue = this->visibleRowCount;
	this->visibleRowCount = $Math::max(0, visibleRowCount);
	firePropertyChange("visibleRowCount"_s, oldValue, visibleRowCount);
}

int32_t JList::getLayoutOrientation() {
	return this->layoutOrientation;
}

void JList::setLayoutOrientation(int32_t layoutOrientation) {
	int32_t oldValue = this->layoutOrientation;
	switch (layoutOrientation) {
	case JList::VERTICAL:
		{}
	case JList::VERTICAL_WRAP:
		{}
	case JList::HORIZONTAL_WRAP:
		{
			this->layoutOrientation = layoutOrientation;
			firePropertyChange("layoutOrientation"_s, oldValue, layoutOrientation);
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "layoutOrientation must be one of: VERTICAL, HORIZONTAL_WRAP or VERTICAL_WRAP"_s);
		}
	}
}

int32_t JList::getFirstVisibleIndex() {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, r, getVisibleRect());
	int32_t first = 0;
	if ($nc($(this->getComponentOrientation()))->isLeftToRight()) {
		first = locationToIndex($($nc(r)->getLocation()));
	} else {
		first = locationToIndex($$new($Point, ($nc(r)->x + r->width) - 1, r->y));
	}
	if (first != -1) {
		$var($Rectangle, bounds, getCellBounds(first, first));
		if (bounds != nullptr) {
			$SwingUtilities::computeIntersection($nc(r)->x, r->y, r->width, r->height, bounds);
			if (bounds->width == 0 || bounds->height == 0) {
				first = -1;
			}
		}
	}
	return first;
}

int32_t JList::getLastVisibleIndex() {
	$useLocalCurrentObjectStackCache();
	bool leftToRight = $nc($(this->getComponentOrientation()))->isLeftToRight();
	$var($Rectangle, r, getVisibleRect());
	$var($Point, lastPoint, nullptr);
	if (leftToRight) {
		$assign(lastPoint, $new($Point, ($nc(r)->x + r->width) - 1, (r->y + r->height) - 1));
	} else {
		$assign(lastPoint, $new($Point, $nc(r)->x, (r->y + r->height) - 1));
	}
	int32_t location = locationToIndex(lastPoint);
	if (location != -1) {
		$var($Rectangle, bounds, getCellBounds(location, location));
		if (bounds != nullptr) {
			$SwingUtilities::computeIntersection($nc(r)->x, r->y, r->width, r->height, bounds);
			if (bounds->width == 0 || bounds->height == 0) {
				bool isHorizontalWrap = (getLayoutOrientation() == JList::HORIZONTAL_WRAP);
				$var($Point, visibleLocation, isHorizontalWrap ? $new($Point, $nc(lastPoint)->x, $nc(r)->y) : $new($Point, $nc(r)->x, $nc(lastPoint)->y));
				int32_t last = 0;
				int32_t visIndex = -1;
				int32_t lIndex = location;
				location = -1;
				do {
					last = visIndex;
					visIndex = locationToIndex(visibleLocation);
					if (visIndex != -1) {
						$assign(bounds, getCellBounds(visIndex, visIndex));
						if (visIndex != lIndex && bounds != nullptr && bounds->contains(visibleLocation)) {
							location = visIndex;
							if (isHorizontalWrap) {
								$nc(visibleLocation)->y = bounds->y + bounds->height;
								if (visibleLocation->y >= $nc(lastPoint)->y) {
									last = visIndex;
								}
							} else {
								$nc(visibleLocation)->x = bounds->x + bounds->width;
								if (visibleLocation->x >= $nc(lastPoint)->x) {
									last = visIndex;
								}
							}
						} else {
							last = visIndex;
						}
					}
				} while (visIndex != -1 && last != visIndex);
			}
		}
	}
	return location;
}

void JList::ensureIndexIsVisible(int32_t index) {
	$var($Rectangle, cellBounds, getCellBounds(index, index));
	if (cellBounds != nullptr) {
		scrollRectToVisible(cellBounds);
	}
}

void JList::setDragEnabled(bool b) {
	if (b && $GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
	this->dragEnabled = b;
}

bool JList::getDragEnabled() {
	return this->dragEnabled;
}

void JList::setDropMode($DropMode* dropMode) {
	if (dropMode != nullptr) {
		$init($JList$6);
		switch ($nc($JList$6::$SwitchMap$javax$swing$DropMode)->get((dropMode)->ordinal())) {
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{
				$set(this, dropMode, dropMode);
				return;
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({dropMode, ": Unsupported drop mode for list"_s}));
}

$DropMode* JList::getDropMode() {
	return this->dropMode;
}

$TransferHandler$DropLocation* JList::dropLocationForPoint($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($JList$DropLocation, location, nullptr);
	$var($Rectangle, rect, nullptr);
	int32_t index = locationToIndex(p);
	if (index != -1) {
		$assign(rect, getCellBounds(index, index));
	}
		$init($JList$6);
	{
		bool between = false;
		switch ($nc($JList$6::$SwitchMap$javax$swing$DropMode)->get($nc((this->dropMode))->ordinal())) {
		case 1:
			{}
		case 2:
			{
				$assign(location, $new($JList$DropLocation, p, (rect != nullptr && rect->contains(p)) ? index : -1, false));
				break;
			}
		case 3:
			{
				if (index == -1) {
					$assign(location, $new($JList$DropLocation, p, $nc($(getModel()))->getSize(), true));
					break;
				}
				if (this->layoutOrientation == JList::HORIZONTAL_WRAP) {
					bool ltr = $nc($(getComponentOrientation()))->isLeftToRight();
					$init($SwingUtilities2$Section);
					if ($SwingUtilities2::liesInHorizontal(rect, p, ltr, false) == $SwingUtilities2$Section::TRAILING) {
						++index;
					} else if (index == $nc($(getModel()))->getSize() - 1 && $nc(p)->y >= $nc(rect)->y + rect->height) {
						++index;
					}
				} else {
					$init($SwingUtilities2$Section);
					if ($SwingUtilities2::liesInVertical(rect, p, false) == $SwingUtilities2$Section::TRAILING) {
						++index;
					}
				}
				$assign(location, $new($JList$DropLocation, p, index, true));
				break;
			}
		case 4:
			{
				if (index == -1) {
					$assign(location, $new($JList$DropLocation, p, $nc($(getModel()))->getSize(), true));
					break;
				}
				between = false;
				if (this->layoutOrientation == JList::HORIZONTAL_WRAP) {
					bool ltr = $nc($(getComponentOrientation()))->isLeftToRight();
					$SwingUtilities2$Section* section = $SwingUtilities2::liesInHorizontal(rect, p, ltr, true);
					$init($SwingUtilities2$Section);
					if (section == $SwingUtilities2$Section::TRAILING) {
						++index;
						between = true;
					} else if (index == $nc($(getModel()))->getSize() - 1 && $nc(p)->y >= $nc(rect)->y + rect->height) {
						++index;
						between = true;
					} else {
						if (section == $SwingUtilities2$Section::LEADING) {
							between = true;
						}
					}
				} else {
					$SwingUtilities2$Section* section = $SwingUtilities2::liesInVertical(rect, p, true);
					$init($SwingUtilities2$Section);
					if (section == $SwingUtilities2$Section::LEADING) {
						between = true;
					} else {
						if (section == $SwingUtilities2$Section::TRAILING) {
							++index;
							between = true;
						}
					}
				}
				$assign(location, $new($JList$DropLocation, p, index, between));
				break;
			}
		default:
			{
				if (!JList::$assertionsDisabled) {
					$throwNew($AssertionError, $of("Unexpected drop mode"_s));
				}
			}
		}
	}
	return location;
}

$Object* JList::setDropLocation($TransferHandler$DropLocation* location, Object$* state, bool forDrop) {
	$useLocalCurrentObjectStackCache();
	$var($Object, retVal, nullptr);
	$var($JList$DropLocation, listLocation, $cast($JList$DropLocation, location));
	$init($DropMode);
	if (this->dropMode == $DropMode::USE_SELECTION) {
		if (listLocation == nullptr) {
			if (!forDrop && state != nullptr) {
				setSelectedIndices($nc(($cast($intArray2, state)))->get(0));
				int32_t anchor = $nc($nc(($cast($intArray2, state)))->get(1))->get(0);
				int32_t lead = $nc(($cast($intArray2, state))->get(1))->get(1);
				$SwingUtilities2::setLeadAnchorWithoutSelection($(getSelectionModel()), lead, anchor);
			}
		} else {
			if (this->dropLocation == nullptr) {
				$var($ints, inds, getSelectedIndices());
				$assign(retVal, $new($intArray2, {
					inds,
					$$new($ints, {
						getAnchorSelectionIndex(),
						getLeadSelectionIndex()
					})
				}));
			} else {
				$assign(retVal, state);
			}
			int32_t index = $nc(listLocation)->getIndex();
			if (index == -1) {
				clearSelection();
				$nc($(getSelectionModel()))->setAnchorSelectionIndex(-1);
				$nc($(getSelectionModel()))->setLeadSelectionIndex(-1);
			} else {
				setSelectionInterval(index, index);
			}
		}
	}
	$var($JList$DropLocation, old, this->dropLocation);
	$set(this, dropLocation, listLocation);
	firePropertyChange("dropLocation"_s, $of(old), $of(this->dropLocation));
	return $of(retVal);
}

$JList$DropLocation* JList::getDropLocation() {
	return this->dropLocation;
}

int32_t JList::getNextMatch($String* prefix$renamed, int32_t startIndex, $Position$Bias* bias) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($ListModel, model, getModel());
	int32_t max = $nc(model)->getSize();
	if (prefix == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	if (startIndex < 0 || startIndex >= max) {
		$throwNew($IllegalArgumentException);
	}
	$assign(prefix, $nc(prefix)->toUpperCase());
	$init($Position$Bias);
	int32_t increment = (bias == $Position$Bias::Forward) ? 1 : -1;
	int32_t index = startIndex;
	do {
		$var($Object, element, model->getElementAt(index));
		if (element != nullptr) {
			$var($String, string, nullptr);
			if ($instanceOf($String, element)) {
				$assign(string, $nc(($cast($String, element)))->toUpperCase());
			} else {
				$assign(string, $of(element)->toString());
				if (string != nullptr) {
					$assign(string, string->toUpperCase());
				}
			}
			if (string != nullptr && string->startsWith(prefix)) {
				return index;
			}
		}
		index = $mod((index + increment + max), max);
	} while (index != startIndex);
	return -1;
}

$String* JList::getToolTipText($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	if (event != nullptr) {
		$var($Point, p, event->getPoint());
		int32_t index = locationToIndex(p);
		$var($ListCellRenderer, r, getCellRenderer());
		$var($Rectangle, cellBounds, nullptr);
		bool var$0 = index != -1 && r != nullptr && ($assign(cellBounds, getCellBounds(index, index))) != nullptr;
		if (var$0 && $nc(cellBounds)->contains($nc(p)->x, p->y)) {
			$var($ListSelectionModel, lsm, getSelectionModel());
			$var($Object, var$1, $nc($(getModel()))->getElementAt(index));
			int32_t var$2 = index;
			bool var$3 = $nc(lsm)->isSelectedIndex(index);
			bool var$4 = hasFocus();
			$var($Component, rComponent, r->getListCellRendererComponent(this, var$1, var$2, var$3, (var$4 && (lsm->getLeadSelectionIndex() == index))));
			if ($instanceOf($JComponent, rComponent)) {
				$var($MouseEvent, newEvent, nullptr);
				$nc(p)->translate(-cellBounds->x, -cellBounds->y);
				$var($Component, var$5, rComponent);
				int32_t var$6 = event->getID();
				int64_t var$7 = event->getWhen();
				int32_t var$8 = event->getModifiers();
				int32_t var$9 = p->x;
				int32_t var$10 = p->y;
				int32_t var$11 = event->getXOnScreen();
				int32_t var$12 = event->getYOnScreen();
				int32_t var$13 = event->getClickCount();
				$assign(newEvent, $new($MouseEvent, var$5, var$6, var$7, var$8, var$9, var$10, var$11, var$12, var$13, event->isPopupTrigger(), $MouseEvent::NOBUTTON));
				$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
				$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(event));
				$var($String, tip, $nc(($cast($JComponent, rComponent)))->getToolTipText(newEvent));
				if (tip != nullptr) {
					return tip;
				}
			}
		}
	}
	return $JComponent::getToolTipText();
}

int32_t JList::locationToIndex($Point* location) {
	$var($ListUI, ui, $cast($ListUI, getUI()));
	return (ui != nullptr) ? $nc(ui)->locationToIndex(this, location) : -1;
}

$Point* JList::indexToLocation(int32_t index) {
	$var($ListUI, ui, $cast($ListUI, getUI()));
	return (ui != nullptr) ? $nc(ui)->indexToLocation(this, index) : ($Point*)nullptr;
}

$Rectangle* JList::getCellBounds(int32_t index0, int32_t index1) {
	$var($ListUI, ui, $cast($ListUI, getUI()));
	return (ui != nullptr) ? $nc(ui)->getCellBounds(this, index0, index1) : ($Rectangle*)nullptr;
}

$ListModel* JList::getModel() {
	return this->dataModel;
}

void JList::setModel($ListModel* model) {
	if (model == nullptr) {
		$throwNew($IllegalArgumentException, "model must be non null"_s);
	}
	$var($ListModel, oldValue, this->dataModel);
	$set(this, dataModel, model);
	firePropertyChange("model"_s, $of(oldValue), $of(this->dataModel));
	clearSelection();
}

void JList::setListData($ObjectArray* listData) {
	setModel($$new($JList$4, this, listData));
}

void JList::setListData($Vector* listData) {
	setModel($$new($JList$5, this, listData));
}

$ListSelectionModel* JList::createSelectionModel() {
	return $new($DefaultListSelectionModel);
}

$ListSelectionModel* JList::getSelectionModel() {
	return this->selectionModel;
}

void JList::fireSelectionValueChanged(int32_t firstIndex, int32_t lastIndex, bool isAdjusting) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($ListSelectionEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($ListSelectionListener);
		if ($equals(listeners->get(i), $ListSelectionListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($ListSelectionEvent, this, firstIndex, lastIndex, isAdjusting));
			}
			$nc(($cast($ListSelectionListener, listeners->get(i + 1))))->valueChanged(e);
		}
	}
}

void JList::addListSelectionListener($ListSelectionListener* listener) {
	if (this->selectionListener == nullptr) {
		$set(this, selectionListener, $new($JList$ListSelectionHandler, this));
		$nc($(getSelectionModel()))->addListSelectionListener(this->selectionListener);
	}
	$load($ListSelectionListener);
	$nc(this->listenerList)->add($ListSelectionListener::class$, listener);
}

void JList::removeListSelectionListener($ListSelectionListener* listener) {
	$load($ListSelectionListener);
	$nc(this->listenerList)->remove($ListSelectionListener::class$, listener);
}

$ListSelectionListenerArray* JList::getListSelectionListeners() {
	$load($ListSelectionListener);
	return $fcast($ListSelectionListenerArray, $nc(this->listenerList)->getListeners($ListSelectionListener::class$));
}

void JList::setSelectionModel($ListSelectionModel* selectionModel) {
	if (selectionModel == nullptr) {
		$throwNew($IllegalArgumentException, "selectionModel must be non null"_s);
	}
	if (this->selectionListener != nullptr) {
		$nc(this->selectionModel)->removeListSelectionListener(this->selectionListener);
		$nc(selectionModel)->addListSelectionListener(this->selectionListener);
	}
	$var($ListSelectionModel, oldValue, this->selectionModel);
	$set(this, selectionModel, selectionModel);
	firePropertyChange("selectionModel"_s, $of(oldValue), $of(selectionModel));
}

void JList::setSelectionMode(int32_t selectionMode) {
	$nc($(getSelectionModel()))->setSelectionMode(selectionMode);
}

int32_t JList::getSelectionMode() {
	return $nc($(getSelectionModel()))->getSelectionMode();
}

int32_t JList::getAnchorSelectionIndex() {
	return $nc($(getSelectionModel()))->getAnchorSelectionIndex();
}

int32_t JList::getLeadSelectionIndex() {
	return $nc($(getSelectionModel()))->getLeadSelectionIndex();
}

int32_t JList::getMinSelectionIndex() {
	return $nc($(getSelectionModel()))->getMinSelectionIndex();
}

int32_t JList::getMaxSelectionIndex() {
	return $nc($(getSelectionModel()))->getMaxSelectionIndex();
}

bool JList::isSelectedIndex(int32_t index) {
	return $nc($(getSelectionModel()))->isSelectedIndex(index);
}

bool JList::isSelectionEmpty() {
	return $nc($(getSelectionModel()))->isSelectionEmpty();
}

void JList::clearSelection() {
	$nc($(getSelectionModel()))->clearSelection();
}

void JList::setSelectionInterval(int32_t anchor, int32_t lead) {
	$nc($(getSelectionModel()))->setSelectionInterval(anchor, lead);
}

void JList::addSelectionInterval(int32_t anchor, int32_t lead) {
	$nc($(getSelectionModel()))->addSelectionInterval(anchor, lead);
}

void JList::removeSelectionInterval(int32_t index0, int32_t index1) {
	$nc($(getSelectionModel()))->removeSelectionInterval(index0, index1);
}

void JList::setValueIsAdjusting(bool b) {
	$nc($(getSelectionModel()))->setValueIsAdjusting(b);
}

bool JList::getValueIsAdjusting() {
	return $nc($(getSelectionModel()))->getValueIsAdjusting();
}

$ints* JList::getSelectedIndices() {
	return $nc($(getSelectionModel()))->getSelectedIndices();
}

void JList::setSelectedIndex(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index >= $nc($(getModel()))->getSize()) {
		return;
	}
	$nc($(getSelectionModel()))->setSelectionInterval(index, index);
}

void JList::setSelectedIndices($ints* indices) {
	$useLocalCurrentObjectStackCache();
	$var($ListSelectionModel, sm, getSelectionModel());
	$nc(sm)->clearSelection();
	int32_t size = $nc($(getModel()))->getSize();
	{
		$var($ints, arr$, indices);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t i = arr$->get(i$);
			{
				if (i < size) {
					sm->addSelectionInterval(i, i);
				}
			}
		}
	}
}

$ObjectArray* JList::getSelectedValues() {
	$useLocalCurrentObjectStackCache();
	$var($ListSelectionModel, sm, getSelectionModel());
	$var($ListModel, dm, getModel());
	int32_t iMin = $nc(sm)->getMinSelectionIndex();
	int32_t iMax = sm->getMaxSelectionIndex();
	int32_t size = $nc(dm)->getSize();
	if ((iMin < 0) || (iMax < 0) || (iMin >= size)) {
		return $new($ObjectArray, 0);
	}
	iMax = iMax < size ? iMax : size - 1;
	$var($ObjectArray, rvTmp, $new($ObjectArray, 1 + (iMax - iMin)));
	int32_t n = 0;
	for (int32_t i = iMin; i <= iMax; ++i) {
		if (sm->isSelectedIndex(i)) {
			rvTmp->set(n++, $(dm->getElementAt(i)));
		}
	}
	$var($ObjectArray, rv, $new($ObjectArray, n));
	$System::arraycopy(rvTmp, 0, rv, 0, n);
	return rv;
}

$List* JList::getSelectedValuesList() {
	$useLocalCurrentObjectStackCache();
	$var($ListModel, dm, getModel());
	$var($ints, selectedIndices, getSelectedIndices());
	if ($nc(selectedIndices)->length > 0) {
		int32_t size = $nc(dm)->getSize();
		if (selectedIndices->get(0) >= size) {
			return $Collections::emptyList();
		}
		$var($List, selectedItems, $new($ArrayList));
		{
			$var($ints, arr$, selectedIndices);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				int32_t i = arr$->get(i$);
				{
					if (i >= size) {
						break;
					}
					selectedItems->add($(dm->getElementAt(i)));
				}
			}
		}
		return selectedItems;
	}
	return $Collections::emptyList();
}

int32_t JList::getSelectedIndex() {
	return getMinSelectionIndex();
}

$Object* JList::getSelectedValue() {
	$useLocalCurrentObjectStackCache();
	int32_t i = getMinSelectionIndex();
	return $of(((i == -1) || (i >= $nc($(getModel()))->getSize())) ? ($Object*)nullptr : $nc($(getModel()))->getElementAt(i));
}

void JList::setSelectedValue(Object$* anObject, bool shouldScroll) {
	$useLocalCurrentObjectStackCache();
	if (anObject == nullptr) {
		clearSelection();
	} else if (!$nc($of(anObject))->equals($(getSelectedValue()))) {
		int32_t i = 0;
		int32_t c = 0;
		$var($ListModel, dm, getModel());
		for (i = 0, c = $nc(dm)->getSize(); i < c; ++i) {
			if ($of(anObject)->equals($(dm->getElementAt(i)))) {
				setSelectedIndex(i);
				if (shouldScroll) {
					ensureIndexIsVisible(i);
				}
				repaint();
				return;
			}
		}
		setSelectedIndex(-1);
	}
	repaint();
}

void JList::checkScrollableParameters($Rectangle* visibleRect, int32_t orientation) {
	if (visibleRect == nullptr) {
		$throwNew($IllegalArgumentException, "visibleRect must be non-null"_s);
	}
	switch (orientation) {
	case $SwingConstants::VERTICAL:
		{}
	case $SwingConstants::HORIZONTAL:
		{
			break;
		}
	default:
		{
			$throwNew($IllegalArgumentException, "orientation must be one of: VERTICAL, HORIZONTAL"_s);
		}
	}
}

$Dimension* JList::getPreferredScrollableViewportSize() {
	$useLocalCurrentObjectStackCache();
	if (getLayoutOrientation() != JList::VERTICAL) {
		return getPreferredSize();
	}
	$var($Insets, insets, getInsets());
	int32_t dx = $nc(insets)->left + insets->right;
	int32_t dy = insets->top + insets->bottom;
	int32_t visibleRowCount = getVisibleRowCount();
	int32_t fixedCellWidth = getFixedCellWidth();
	int32_t fixedCellHeight = getFixedCellHeight();
	if ((fixedCellWidth > 0) && (fixedCellHeight > 0)) {
		int32_t width = fixedCellWidth + dx;
		int32_t height = (visibleRowCount * fixedCellHeight) + dy;
		return $new($Dimension, width, height);
	} else if ($nc($(getModel()))->getSize() > 0) {
		int32_t width = $nc($(getPreferredSize()))->width;
		int32_t height = 0;
		$var($Rectangle, r, getCellBounds(0, 0));
		if (r != nullptr) {
			height = (visibleRowCount * r->height) + dy;
		} else {
			height = 1;
		}
		return $new($Dimension, width, height);
	} else {
		fixedCellWidth = (fixedCellWidth > 0) ? fixedCellWidth : 256;
		fixedCellHeight = (fixedCellHeight > 0) ? fixedCellHeight : 16;
		return $new($Dimension, fixedCellWidth, fixedCellHeight * visibleRowCount);
	}
}

int32_t JList::getScrollableUnitIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	checkScrollableParameters(visibleRect, orientation);
	if (orientation == $SwingConstants::VERTICAL) {
		int32_t row = locationToIndex($($nc(visibleRect)->getLocation()));
		if (row == -1) {
			return 0;
		} else if (direction > 0) {
			$var($Rectangle, r, getCellBounds(row, row));
			return (r == nullptr) ? 0 : $nc(r)->height - ($nc(visibleRect)->y - r->y);
		} else {
			$var($Rectangle, r, getCellBounds(row, row));
			if (($nc(r)->y == $nc(visibleRect)->y) && (row == 0)) {
				return 0;
			} else if (r->y == visibleRect->y) {
				$var($Point, loc, r->getLocation());
				--$nc(loc)->y;
				int32_t prevIndex = locationToIndex(loc);
				$var($Rectangle, prevR, getCellBounds(prevIndex, prevIndex));
				if (prevR == nullptr || $nc(prevR)->y >= r->y) {
					return 0;
				}
				return $nc(prevR)->height;
			} else {
				return visibleRect->y - r->y;
			}
		}
	} else if (orientation == $SwingConstants::HORIZONTAL && getLayoutOrientation() != JList::VERTICAL) {
		bool leftToRight = $nc($(getComponentOrientation()))->isLeftToRight();
		int32_t index = 0;
		$var($Point, leadingPoint, nullptr);
		if (leftToRight) {
			$assign(leadingPoint, $nc(visibleRect)->getLocation());
		} else {
			$assign(leadingPoint, $new($Point, $nc(visibleRect)->x + visibleRect->width - 1, visibleRect->y));
		}
		index = locationToIndex(leadingPoint);
		if (index != -1) {
			$var($Rectangle, cellBounds, getCellBounds(index, index));
			if (cellBounds != nullptr && cellBounds->contains(leadingPoint)) {
				int32_t leadingVisibleEdge = 0;
				int32_t leadingCellEdge = 0;
				if (leftToRight) {
					leadingVisibleEdge = $nc(visibleRect)->x;
					leadingCellEdge = cellBounds->x;
				} else {
					leadingVisibleEdge = $nc(visibleRect)->x + visibleRect->width;
					leadingCellEdge = cellBounds->x + cellBounds->width;
				}
				if (leadingCellEdge != leadingVisibleEdge) {
					if (direction < 0) {
						return $Math::abs(leadingVisibleEdge - leadingCellEdge);
					} else if (leftToRight) {
						return leadingCellEdge + cellBounds->width - leadingVisibleEdge;
					} else {
						return leadingVisibleEdge - cellBounds->x;
					}
				}
				return cellBounds->width;
			}
		}
	}
	$var($Font, f, getFont());
	return (f != nullptr) ? $nc(f)->getSize() : 1;
}

int32_t JList::getScrollableBlockIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	$useLocalCurrentObjectStackCache();
	checkScrollableParameters(visibleRect, orientation);
	if (orientation == $SwingConstants::VERTICAL) {
		int32_t inc = $nc(visibleRect)->height;
		if (direction > 0) {
			int32_t last = locationToIndex($$new($Point, visibleRect->x, visibleRect->y + visibleRect->height - 1));
			if (last != -1) {
				$var($Rectangle, lastRect, getCellBounds(last, last));
				if (lastRect != nullptr) {
					inc = lastRect->y - visibleRect->y;
					if ((inc == 0) && (last < $nc($(getModel()))->getSize() - 1)) {
						inc = lastRect->height;
					}
				}
			}
		} else {
			int32_t newFirst = locationToIndex($$new($Point, visibleRect->x, visibleRect->y - visibleRect->height));
			int32_t first = getFirstVisibleIndex();
			if (newFirst != -1) {
				if (first == -1) {
					first = locationToIndex($(visibleRect->getLocation()));
				}
				$var($Rectangle, newFirstRect, getCellBounds(newFirst, newFirst));
				$var($Rectangle, firstRect, getCellBounds(first, first));
				if ((newFirstRect != nullptr) && (firstRect != nullptr)) {
					while (($nc(newFirstRect)->y + visibleRect->height < firstRect->y + firstRect->height) && (newFirstRect->y < firstRect->y)) {
						++newFirst;
						$assign(newFirstRect, getCellBounds(newFirst, newFirst));
					}
					inc = visibleRect->y - $nc(newFirstRect)->y;
					if ((inc <= 0) && (newFirstRect->y > 0)) {
						--newFirst;
						$assign(newFirstRect, getCellBounds(newFirst, newFirst));
						if (newFirstRect != nullptr) {
							inc = visibleRect->y - newFirstRect->y;
						}
					}
				}
			}
		}
		return inc;
	} else if (orientation == $SwingConstants::HORIZONTAL && getLayoutOrientation() != JList::VERTICAL) {
		bool leftToRight = $nc($(getComponentOrientation()))->isLeftToRight();
		int32_t inc = $nc(visibleRect)->width;
		if (direction > 0) {
			int32_t x = visibleRect->x + (leftToRight ? (visibleRect->width - 1) : 0);
			int32_t last = locationToIndex($$new($Point, x, visibleRect->y));
			if (last != -1) {
				$var($Rectangle, lastRect, getCellBounds(last, last));
				if (lastRect != nullptr) {
					if (leftToRight) {
						inc = lastRect->x - visibleRect->x;
					} else {
						inc = visibleRect->x + visibleRect->width - (lastRect->x + lastRect->width);
					}
					if (inc < 0) {
						inc += lastRect->width;
					} else if ((inc == 0) && (last < $nc($(getModel()))->getSize() - 1)) {
						inc = lastRect->width;
					}
				}
			}
		} else {
			int32_t x = visibleRect->x + (leftToRight ? -visibleRect->width : visibleRect->width - 1 + visibleRect->width);
			int32_t first = locationToIndex($$new($Point, x, visibleRect->y));
			if (first != -1) {
				$var($Rectangle, firstRect, getCellBounds(first, first));
				if (firstRect != nullptr) {
					int32_t firstRight = firstRect->x + firstRect->width;
					if (leftToRight) {
						if ((firstRect->x < visibleRect->x - visibleRect->width) && (firstRight < visibleRect->x)) {
							inc = visibleRect->x - firstRight;
						} else {
							inc = visibleRect->x - firstRect->x;
						}
					} else {
						int32_t visibleRight = visibleRect->x + visibleRect->width;
						if ((firstRight > visibleRight + visibleRect->width) && (firstRect->x > visibleRight)) {
							inc = firstRect->x - visibleRight;
						} else {
							inc = firstRight - visibleRight;
						}
					}
				}
			}
		}
		return inc;
	}
	return $nc(visibleRect)->width;
}

bool JList::getScrollableTracksViewportWidth() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = getLayoutOrientation() == JList::HORIZONTAL_WRAP;
	if (var$0 && getVisibleRowCount() <= 0) {
		return true;
	}
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		int32_t var$1 = $nc(parent)->getWidth();
		return var$1 > $nc($(getPreferredSize()))->width;
	}
	return false;
}

bool JList::getScrollableTracksViewportHeight() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = getLayoutOrientation() == JList::VERTICAL_WRAP;
	if (var$0 && getVisibleRowCount() <= 0) {
		return true;
	}
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		int32_t var$1 = $nc(parent)->getHeight();
		return var$1 > $nc($(getPreferredSize()))->height;
	}
	return false;
}

void JList::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if ($nc($(getUIClassID()))->equals(JList::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

$String* JList::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, selectionForegroundString, this->selectionForeground != nullptr ? $nc(this->selectionForeground)->toString() : ""_s);
	$var($String, selectionBackgroundString, this->selectionBackground != nullptr ? $nc(this->selectionBackground)->toString() : ""_s);
	return $str({$($JComponent::paramString()), ",fixedCellHeight="_s, $$str(this->fixedCellHeight), ",fixedCellWidth="_s, $$str(this->fixedCellWidth), ",horizontalScrollIncrement="_s, $$str(this->horizontalScrollIncrement), ",selectionBackground="_s, selectionBackgroundString, ",selectionForeground="_s, selectionForegroundString, ",visibleRowCount="_s, $$str(this->visibleRowCount), ",layoutOrientation="_s, $$str(this->layoutOrientation)});
}

$AccessibleContext* JList::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JList$AccessibleJList, this));
	}
	return this->accessibleContext;
}

void clinit$JList($Class* class$) {
	$assignStatic(JList::uiClassID, "ListUI"_s);
	JList::$assertionsDisabled = !JList::class$->desiredAssertionStatus();
}

JList::JList() {
}

$Class* JList::load$($String* name, bool initialize) {
	$loadClass(JList, name, initialize, &_JList_ClassInfo_, clinit$JList, allocate$JList);
	return class$;
}

$Class* JList::class$ = nullptr;

	} // swing
} // javax