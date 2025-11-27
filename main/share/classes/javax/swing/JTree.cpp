#include <javax/swing/JTree.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/HeadlessException.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseEvent.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Error.h>
#include <java/lang/Math.h>
#include <java/lang/Number.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/EventListener.h>
#include <java/util/Hashtable.h>
#include <java/util/Set.h>
#include <java/util/Stack.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleState.h>
#include <javax/swing/DropMode.h>
#include <javax/swing/JComponent$AccessibleJComponent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree$1.h>
#include <javax/swing/JTree$AccessibleJTree.h>
#include <javax/swing/JTree$DropLocation.h>
#include <javax/swing/JTree$DynamicUtilTreeNode.h>
#include <javax/swing/JTree$EmptySelectionModel.h>
#include <javax/swing/JTree$TreeModelHandler.h>
#include <javax/swing/JTree$TreeSelectionRedirector.h>
#include <javax/swing/JTree$TreeTimer.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <javax/swing/event/TreeExpansionListener.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/event/TreeWillExpandListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/DefaultTreeSelectionModel.h>
#include <javax/swing/tree/ExpandVetoException.h>
#include <javax/swing/tree/MutableTreeNode.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/swing/SwingUtilities2$Section.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACCESSIBLE_SELECTION_PROPERTY
#undef ACCESSIBLE_STATE_PROPERTY
#undef ANCHOR_SELECTION_PATH_PROPERTY
#undef CELL_EDITOR_PROPERTY
#undef CELL_RENDERER_PROPERTY
#undef EDITABLE
#undef EDITABLE_PROPERTY
#undef EXPANDS_SELECTED_PATHS_PROPERTY
#undef FALSE
#undef INVOKES_STOP_CELL_EDITING_PROPERTY
#undef LARGE_MODEL_PROPERTY
#undef LEADING
#undef LEAD_SELECTION_PATH_PROPERTY
#undef NOBUTTON
#undef ON_OR_INSERT
#undef ROOT_VISIBLE_PROPERTY
#undef ROW_HEIGHT_PROPERTY
#undef SCROLLS_ON_EXPAND_PROPERTY
#undef SELECTION_MODEL_PROPERTY
#undef SHOWS_ROOT_HANDLES_PROPERTY
#undef TEMP_STACK_SIZE
#undef TOGGLE_CLICK_COUNT_PROPERTY
#undef TRAILING
#undef TREE_MODEL_PROPERTY
#undef TRUE
#undef USE_SELECTION
#undef VERTICAL
#undef VISIBLE_ROW_COUNT_PROPERTY

using $EventListenerArray = $Array<::java::util::EventListener>;
using $TreeExpansionListenerArray = $Array<::javax::swing::event::TreeExpansionListener>;
using $TreeSelectionListenerArray = $Array<::javax::swing::event::TreeSelectionListener>;
using $TreeWillExpandListenerArray = $Array<::javax::swing::event::TreeWillExpandListener>;
using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $TreePathArray2 = $Array<::javax::swing::tree::TreePath, 2>;
using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Dimension = ::java::awt::Dimension;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $HeadlessException = ::java::awt::HeadlessException;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $InputEvent = ::java::awt::event::InputEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Attribute = ::java::lang::Attribute;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Enum = ::java::lang::Enum;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Number = ::java::lang::Number;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $EventListener = ::java::util::EventListener;
using $Hashtable = ::java::util::Hashtable;
using $Set = ::java::util::Set;
using $Stack = ::java::util::Stack;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleState = ::javax::accessibility::AccessibleState;
using $DropMode = ::javax::swing::DropMode;
using $JComponent = ::javax::swing::JComponent;
using $JComponent$AccessibleJComponent = ::javax::swing::JComponent$AccessibleJComponent;
using $JTree$1 = ::javax::swing::JTree$1;
using $JTree$AccessibleJTree = ::javax::swing::JTree$AccessibleJTree;
using $JTree$DropLocation = ::javax::swing::JTree$DropLocation;
using $JTree$DynamicUtilTreeNode = ::javax::swing::JTree$DynamicUtilTreeNode;
using $JTree$EmptySelectionModel = ::javax::swing::JTree$EmptySelectionModel;
using $JTree$TreeModelHandler = ::javax::swing::JTree$TreeModelHandler;
using $JTree$TreeSelectionRedirector = ::javax::swing::JTree$TreeSelectionRedirector;
using $JTree$TreeTimer = ::javax::swing::JTree$TreeTimer;
using $JViewport = ::javax::swing::JViewport;
using $Scrollable = ::javax::swing::Scrollable;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;
using $UIManager = ::javax::swing::UIManager;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;
using $TreeExpansionListener = ::javax::swing::event::TreeExpansionListener;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $TreeWillExpandListener = ::javax::swing::event::TreeWillExpandListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $DefaultTreeSelectionModel = ::javax::swing::tree::DefaultTreeSelectionModel;
using $ExpandVetoException = ::javax::swing::tree::ExpandVetoException;
using $MutableTreeNode = ::javax::swing::tree::MutableTreeNode;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $SwingUtilities2$Section = ::sun::swing::SwingUtilities2$Section;

namespace javax {
	namespace swing {

$NamedAttribute JTree_Attribute_var$0[] = {
	{"defaultProperty", 's', "UI"},
	{"description", 's', "A component that displays a set of hierarchical data as an outline."},
	{}
};

$NamedAttribute JTree_Attribute_var$1[] = {
	{"value", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_Annotations_[] = {
	{"Ljava/beans/JavaBean;", JTree_Attribute_var$0},
	{"Ljavax/swing/SwingContainer;", JTree_Attribute_var$1},
	{}
};

$Attribute JTree_Attribute_var$3[] = {
	{'s', "model"},
	{'-'}
};

$NamedAttribute JTree_Attribute_var$2[] = {
	{"value", '[', JTree_Attribute_var$3},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_init$6[] = {
	{"Ljava/beans/ConstructorProperties;", JTree_Attribute_var$2},
	{}
};

$NamedAttribute JTree_Attribute_var$4[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getAccessibleContext36[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$4},
	{}
};

$NamedAttribute JTree_Attribute_var$5[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getDropLocation47[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$5},
	{}
};

$NamedAttribute JTree_Attribute_var$6[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getEditingPath49[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$6},
	{}
};

$NamedAttribute JTree_Attribute_var$7[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getLastSelectedPathComponent53[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$7},
	{}
};

$NamedAttribute JTree_Attribute_var$8[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getLeadSelectionRow55[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$8},
	{}
};

$NamedAttribute JTree_Attribute_var$9[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getMaxSelectionRow56[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$9},
	{}
};

$NamedAttribute JTree_Attribute_var$10[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getMinSelectionRow57[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$10},
	{}
};

$NamedAttribute JTree_Attribute_var$11[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getPathForRow65[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$11},
	{}
};

$NamedAttribute JTree_Attribute_var$12[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getPreferredScrollableViewportSize66[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$12},
	{}
};

$NamedAttribute JTree_Attribute_var$13[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getRowCount68[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$13},
	{}
};

$NamedAttribute JTree_Attribute_var$14[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getScrollableTracksViewportHeight73[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$14},
	{}
};

$NamedAttribute JTree_Attribute_var$15[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getScrollableTracksViewportWidth74[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$15},
	{}
};

$NamedAttribute JTree_Attribute_var$16[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getSelectionCount77[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$16},
	{}
};

$NamedAttribute JTree_Attribute_var$17[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getTreeExpansionListeners85[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$17},
	{}
};

$NamedAttribute JTree_Attribute_var$18[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getTreeSelectionListeners86[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$18},
	{}
};

$NamedAttribute JTree_Attribute_var$19[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getTreeWillExpandListeners87[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$19},
	{}
};

$NamedAttribute JTree_Attribute_var$20[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_getUIClassID89[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$20},
	{}
};

$NamedAttribute JTree_Attribute_var$21[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_isEditing95[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$21},
	{}
};

$NamedAttribute JTree_Attribute_var$22[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_isFixedRowHeight98[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$22},
	{}
};

$NamedAttribute JTree_Attribute_var$23[] = {
	{"bound", 'Z', "false"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_isSelectionEmpty104[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$23},
	{}
};

$NamedAttribute JTree_Attribute_var$24[] = {
	{"description", 's', "Anchor selection path"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setAnchorSelectionPath122[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$24},
	{}
};

$NamedAttribute JTree_Attribute_var$25[] = {
	{"description", 's', "The cell editor. A null value implies the tree cannot be edited."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setCellEditor123[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$25},
	{}
};

$NamedAttribute JTree_Attribute_var$26[] = {
	{"description", 's', "The TreeCellRenderer that will be used to draw each cell."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setCellRenderer124[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$26},
	{}
};

$NamedAttribute JTree_Attribute_var$27[] = {
	{"bound", 'Z', "false"},
	{"description", 's', "determines whether automatic drag handling is enabled"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setDragEnabled125[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$27},
	{}
};

$NamedAttribute JTree_Attribute_var$28[] = {
	{"description", 's', "Whether the tree is editable."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setEditable128[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$28},
	{}
};

$NamedAttribute JTree_Attribute_var$29[] = {
	{"description", 's', "Indicates whether changes to the selection should make the parent of the path visible."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setExpandsSelectedPaths130[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$29},
	{}
};

$NamedAttribute JTree_Attribute_var$30[] = {
	{"description", 's', "Determines what happens when editing is interrupted, selecting another node in the tree, a change in the tree\'s data, or some other means."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setInvokesStopCellEditing131[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$30},
	{}
};

$NamedAttribute JTree_Attribute_var$31[] = {
	{"description", 's', "Whether the UI should use a large model."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setLargeModel132[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$31},
	{}
};

$NamedAttribute JTree_Attribute_var$32[] = {
	{"description", 's', "Lead selection path"},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setLeadSelectionPath133[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$32},
	{}
};

$NamedAttribute JTree_Attribute_var$33[] = {
	{"description", 's', "The TreeModel that will provide the data."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setModel134[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$33},
	{}
};

$NamedAttribute JTree_Attribute_var$34[] = {
	{"description", 's', "Whether or not the root node from the TreeModel is visible."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setRootVisible135[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$34},
	{}
};

$NamedAttribute JTree_Attribute_var$35[] = {
	{"description", 's', "The height of each cell."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setRowHeight136[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$35},
	{}
};

$NamedAttribute JTree_Attribute_var$36[] = {
	{"description", 's', "Indicates if a node descendant should be scrolled when expanded."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setScrollsOnExpand137[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$36},
	{}
};

$NamedAttribute JTree_Attribute_var$37[] = {
	{"description", 's', "The tree\'s selection model."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setSelectionModel139[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$37},
	{}
};

$NamedAttribute JTree_Attribute_var$38[] = {
	{"description", 's', "Whether the node handles are to be displayed."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setShowsRootHandles144[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$38},
	{}
};

$NamedAttribute JTree_Attribute_var$39[] = {
	{"description", 's', "Number of clicks before a node will expand/collapse."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setToggleClickCount145[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$39},
	{}
};

$NamedAttribute JTree_Attribute_var$40[] = {
	{"hidden", 'Z', "true"},
	{"visualUpdate", 'Z', "true"},
	{"description", 's', "The UI object that implements the Component\'s LookAndFeel."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setUI146[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$40},
	{}
};

$NamedAttribute JTree_Attribute_var$41[] = {
	{"description", 's', "The number of rows that are to be displayed."},
	{}
};

$CompoundAttribute _JTree_MethodAnnotations_setVisibleRowCount148[] = {
	{"Ljava/beans/BeanProperty;", JTree_Attribute_var$41},
	{}
};

$FieldInfo _JTree_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JTree, $assertionsDisabled)},
	{"uiClassID", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JTree, uiClassID)},
	{"treeModel", "Ljavax/swing/tree/TreeModel;", nullptr, $PROTECTED | $TRANSIENT, $field(JTree, treeModel)},
	{"selectionModel", "Ljavax/swing/tree/TreeSelectionModel;", nullptr, $PROTECTED | $TRANSIENT, $field(JTree, selectionModel)},
	{"rootVisible", "Z", nullptr, $PROTECTED, $field(JTree, rootVisible)},
	{"cellRenderer", "Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PROTECTED | $TRANSIENT, $field(JTree, cellRenderer)},
	{"rowHeight", "I", nullptr, $PROTECTED, $field(JTree, rowHeight)},
	{"rowHeightSet", "Z", nullptr, $PRIVATE, $field(JTree, rowHeightSet)},
	{"expandedState", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljavax/swing/tree/TreePath;Ljava/lang/Boolean;>;", $PRIVATE | $TRANSIENT, $field(JTree, expandedState)},
	{"showsRootHandles", "Z", nullptr, $PROTECTED, $field(JTree, showsRootHandles)},
	{"showsRootHandlesSet", "Z", nullptr, $PRIVATE, $field(JTree, showsRootHandlesSet)},
	{"selectionRedirector", "Ljavax/swing/JTree$TreeSelectionRedirector;", nullptr, $PROTECTED | $TRANSIENT, $field(JTree, selectionRedirector)},
	{"cellEditor", "Ljavax/swing/tree/TreeCellEditor;", nullptr, $PROTECTED | $TRANSIENT, $field(JTree, cellEditor)},
	{"editable", "Z", nullptr, $PROTECTED, $field(JTree, editable)},
	{"largeModel", "Z", nullptr, $PROTECTED, $field(JTree, largeModel)},
	{"visibleRowCount", "I", nullptr, $PROTECTED, $field(JTree, visibleRowCount)},
	{"invokesStopCellEditing", "Z", nullptr, $PROTECTED, $field(JTree, invokesStopCellEditing)},
	{"scrollsOnExpand", "Z", nullptr, $PROTECTED, $field(JTree, scrollsOnExpand)},
	{"scrollsOnExpandSet", "Z", nullptr, $PRIVATE, $field(JTree, scrollsOnExpandSet)},
	{"toggleClickCount", "I", nullptr, $PROTECTED, $field(JTree, toggleClickCount)},
	{"treeModelListener", "Ljavax/swing/event/TreeModelListener;", nullptr, $PROTECTED | $TRANSIENT, $field(JTree, treeModelListener)},
	{"expandedStack", "Ljava/util/Stack;", "Ljava/util/Stack<Ljava/util/Stack<Ljavax/swing/tree/TreePath;>;>;", $PRIVATE | $TRANSIENT, $field(JTree, expandedStack)},
	{"leadPath", "Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $field(JTree, leadPath)},
	{"anchorPath", "Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $field(JTree, anchorPath)},
	{"expandsSelectedPaths", "Z", nullptr, $PRIVATE, $field(JTree, expandsSelectedPaths)},
	{"settingUI", "Z", nullptr, $PRIVATE, $field(JTree, settingUI)},
	{"dragEnabled", "Z", nullptr, $PRIVATE, $field(JTree, dragEnabled)},
	{"dropMode", "Ljavax/swing/DropMode;", nullptr, $PRIVATE, $field(JTree, dropMode)},
	{"dropLocation", "Ljavax/swing/JTree$DropLocation;", nullptr, $PRIVATE | $TRANSIENT, $field(JTree, dropLocation)},
	{"updateInProgress", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(JTree, updateInProgress)},
	{"expandRow", "I", nullptr, $PRIVATE, $field(JTree, expandRow$)},
	{"dropTimer", "Ljavax/swing/JTree$TreeTimer;", nullptr, $PRIVATE, $field(JTree, dropTimer)},
	{"uiTreeExpansionListener", "Ljavax/swing/event/TreeExpansionListener;", nullptr, $PRIVATE | $TRANSIENT, $field(JTree, uiTreeExpansionListener)},
	{"TEMP_STACK_SIZE", "I", nullptr, $PRIVATE | $STATIC, $staticField(JTree, TEMP_STACK_SIZE)},
	{"CELL_RENDERER_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, CELL_RENDERER_PROPERTY)},
	{"TREE_MODEL_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, TREE_MODEL_PROPERTY)},
	{"ROOT_VISIBLE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, ROOT_VISIBLE_PROPERTY)},
	{"SHOWS_ROOT_HANDLES_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, SHOWS_ROOT_HANDLES_PROPERTY)},
	{"ROW_HEIGHT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, ROW_HEIGHT_PROPERTY)},
	{"CELL_EDITOR_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, CELL_EDITOR_PROPERTY)},
	{"EDITABLE_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, EDITABLE_PROPERTY)},
	{"LARGE_MODEL_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, LARGE_MODEL_PROPERTY)},
	{"SELECTION_MODEL_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, SELECTION_MODEL_PROPERTY)},
	{"VISIBLE_ROW_COUNT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, VISIBLE_ROW_COUNT_PROPERTY)},
	{"INVOKES_STOP_CELL_EDITING_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, INVOKES_STOP_CELL_EDITING_PROPERTY)},
	{"SCROLLS_ON_EXPAND_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, SCROLLS_ON_EXPAND_PROPERTY)},
	{"TOGGLE_CLICK_COUNT_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, TOGGLE_CLICK_COUNT_PROPERTY)},
	{"LEAD_SELECTION_PATH_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, LEAD_SELECTION_PATH_PROPERTY)},
	{"ANCHOR_SELECTION_PATH_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, ANCHOR_SELECTION_PATH_PROPERTY)},
	{"EXPANDS_SELECTED_PATHS_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JTree, EXPANDS_SELECTED_PATHS_PROPERTY)},
	{}
};

$MethodInfo _JTree_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTree::*)()>(&JTree::init$))},
	{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(JTree::*)($ObjectArray*)>(&JTree::init$))},
	{"<init>", "(Ljava/util/Vector;)V", "(Ljava/util/Vector<*>;)V", $PUBLIC, $method(static_cast<void(JTree::*)($Vector*)>(&JTree::init$))},
	{"<init>", "(Ljava/util/Hashtable;)V", "(Ljava/util/Hashtable<**>;)V", $PUBLIC, $method(static_cast<void(JTree::*)($Hashtable*)>(&JTree::init$))},
	{"<init>", "(Ljavax/swing/tree/TreeNode;)V", nullptr, $PUBLIC, $method(static_cast<void(JTree::*)($TreeNode*)>(&JTree::init$))},
	{"<init>", "(Ljavax/swing/tree/TreeNode;Z)V", nullptr, $PUBLIC, $method(static_cast<void(JTree::*)($TreeNode*,bool)>(&JTree::init$))},
	{"<init>", "(Ljavax/swing/tree/TreeModel;)V", nullptr, $PUBLIC, $method(static_cast<void(JTree::*)($TreeModel*)>(&JTree::init$)), nullptr, nullptr, _JTree_MethodAnnotations_init$6},
	{"addSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"addSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"addSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"addSelectionRow", "(I)V", nullptr, $PUBLIC},
	{"addSelectionRows", "([I)V", nullptr, $PUBLIC},
	{"addTreeExpansionListener", "(Ljavax/swing/event/TreeExpansionListener;)V", nullptr, $PUBLIC},
	{"addTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC},
	{"addTreeWillExpandListener", "(Ljavax/swing/event/TreeWillExpandListener;)V", nullptr, $PUBLIC},
	{"cancelDropTimer", "()V", nullptr, $PRIVATE, $method(static_cast<void(JTree::*)()>(&JTree::cancelDropTimer))},
	{"cancelEditing", "()V", nullptr, $PUBLIC},
	{"checkDragEnabled", "(Z)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(bool)>(&JTree::checkDragEnabled))},
	{"checkDropMode", "(Ljavax/swing/DropMode;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DropMode*)>(&JTree::checkDropMode))},
	{"clearSelection", "()V", nullptr, $PUBLIC},
	{"clearToggledPaths", "()V", nullptr, $PROTECTED},
	{"collapsePath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"collapseRow", "(I)V", nullptr, $PUBLIC},
	{"convertValueToText", "(Ljava/lang/Object;ZZZIZ)Ljava/lang/String;", nullptr, $PUBLIC},
	{"createTreeModel", "(Ljava/lang/Object;)Ljavax/swing/tree/TreeModel;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$TreeModel*(*)(Object$*)>(&JTree::createTreeModel))},
	{"createTreeModelListener", "()Ljavax/swing/event/TreeModelListener;", nullptr, $PROTECTED},
	{"dndDone", "()V", nullptr, 0},
	{"dropLocationForPoint", "(Ljava/awt/Point;)Ljavax/swing/JTree$DropLocation;", nullptr, 0},
	{"expandPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"expandRoot", "()V", nullptr, $PRIVATE, $method(static_cast<void(JTree::*)()>(&JTree::expandRoot))},
	{"expandRow", "(I)V", nullptr, $PUBLIC},
	{"fireTreeCollapsed", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"fireTreeExpanded", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"fireTreeWillCollapse", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, nullptr, "javax.swing.tree.ExpandVetoException"},
	{"fireTreeWillExpand", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, nullptr, "javax.swing.tree.ExpandVetoException"},
	{"fireValueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getAccessibleContext36},
	{"getAnchorSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getArchivableExpandedState", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(JTree::*)()>(&JTree::getArchivableExpandedState))},
	{"getCellEditor", "()Ljavax/swing/tree/TreeCellEditor;", nullptr, $PUBLIC},
	{"getCellRenderer", "()Ljavax/swing/tree/TreeCellRenderer;", nullptr, $PUBLIC},
	{"getClosestPathForLocation", "(II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getClosestRowForLocation", "(II)I", nullptr, $PUBLIC},
	{"getDefaultTreeModel", "()Ljavax/swing/tree/TreeModel;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$TreeModel*(*)()>(&JTree::getDefaultTreeModel))},
	{"getDescendantSelectedPaths", "(Ljavax/swing/tree/TreePath;Z)[Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $method(static_cast<$TreePathArray*(JTree::*)($TreePath*,bool)>(&JTree::getDescendantSelectedPaths))},
	{"getDescendantToggledPaths", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration;", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration<Ljavax/swing/tree/TreePath;>;", $PROTECTED},
	{"getDragEnabled", "()Z", nullptr, $PUBLIC},
	{"getDropLocation", "()Ljavax/swing/JTree$DropLocation;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$JTree$DropLocation*(JTree::*)()>(&JTree::getDropLocation)), nullptr, nullptr, _JTree_MethodAnnotations_getDropLocation47},
	{"getDropMode", "()Ljavax/swing/DropMode;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$DropMode*(JTree::*)()>(&JTree::getDropMode))},
	{"getEditingPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getEditingPath49},
	{"getExpandedDescendants", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration;", "(Ljavax/swing/tree/TreePath;)Ljava/util/Enumeration<Ljavax/swing/tree/TreePath;>;", $PUBLIC},
	{"getExpandsSelectedPaths", "()Z", nullptr, $PUBLIC},
	{"getInvokesStopCellEditing", "()Z", nullptr, $PUBLIC},
	{"getLastSelectedPathComponent", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getLastSelectedPathComponent53},
	{"getLeadSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getLeadSelectionRow", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getLeadSelectionRow55},
	{"getMaxSelectionRow", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getMaxSelectionRow56},
	{"getMinSelectionRow", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getMinSelectionRow57},
	{"getModel", "()Ljavax/swing/tree/TreeModel;", nullptr, $PUBLIC},
	{"getModelIndexsForPath", "(Ljavax/swing/tree/TreePath;)[I", nullptr, $PRIVATE, $method(static_cast<$ints*(JTree::*)($TreePath*)>(&JTree::getModelIndexsForPath))},
	{"getNextMatch", "(Ljava/lang/String;ILjavax/swing/text/Position$Bias;)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPathBetweenRows", "(II)[Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED},
	{"getPathBounds", "(Ljavax/swing/tree/TreePath;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getPathForIndexs", "([I)Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $method(static_cast<$TreePath*(JTree::*)($ints*)>(&JTree::getPathForIndexs))},
	{"getPathForLocation", "(II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getPathForRow", "(I)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getPathForRow65},
	{"getPreferredScrollableViewportSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getPreferredScrollableViewportSize66},
	{"getRowBounds", "(I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getRowCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getRowCount68},
	{"getRowForLocation", "(II)I", nullptr, $PUBLIC},
	{"getRowForPath", "(Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC},
	{"getRowHeight", "()I", nullptr, $PUBLIC},
	{"getScrollableBlockIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC},
	{"getScrollableTracksViewportHeight", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getScrollableTracksViewportHeight73},
	{"getScrollableTracksViewportWidth", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getScrollableTracksViewportWidth74},
	{"getScrollableUnitIncrement", "(Ljava/awt/Rectangle;II)I", nullptr, $PUBLIC},
	{"getScrollsOnExpand", "()Z", nullptr, $PUBLIC},
	{"getSelectionCount", "()I", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getSelectionCount77},
	{"getSelectionModel", "()Ljavax/swing/tree/TreeSelectionModel;", nullptr, $PUBLIC},
	{"getSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getSelectionPaths", "()[Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC},
	{"getSelectionRows", "()[I", nullptr, $PUBLIC},
	{"getShowsRootHandles", "()Z", nullptr, $PUBLIC},
	{"getToggleClickCount", "()I", nullptr, $PUBLIC},
	{"getToolTipText", "(Ljava/awt/event/MouseEvent;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTreeExpansionListeners", "()[Ljavax/swing/event/TreeExpansionListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getTreeExpansionListeners85},
	{"getTreeSelectionListeners", "()[Ljavax/swing/event/TreeSelectionListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getTreeSelectionListeners86},
	{"getTreeWillExpandListeners", "()[Ljavax/swing/event/TreeWillExpandListener;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getTreeWillExpandListeners87},
	{"getUI", "()Ljavax/swing/plaf/TreeUI;", nullptr, $PUBLIC},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_getUIClassID89},
	{"getVisibleRowCount", "()I", nullptr, $PUBLIC},
	{"hasBeenExpanded", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"isCollapsed", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"isCollapsed", "(I)Z", nullptr, $PUBLIC},
	{"isEditable", "()Z", nullptr, $PUBLIC},
	{"isEditing", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_isEditing95},
	{"isExpanded", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"isExpanded", "(I)Z", nullptr, $PUBLIC},
	{"isFixedRowHeight", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_isFixedRowHeight98},
	{"isLargeModel", "()Z", nullptr, $PUBLIC},
	{"isPathEditable", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"isPathSelected", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"isRootVisible", "()Z", nullptr, $PUBLIC},
	{"isRowSelected", "(I)Z", nullptr, $PUBLIC},
	{"isSelectionEmpty", "()Z", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_isSelectionEmpty104},
	{"isVisible", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC},
	{"makeVisible", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JTree::*)($ObjectInputStream*)>(&JTree::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeDescendantSelectedPaths", "(Ljavax/swing/tree/TreePath;Z)Z", nullptr, $PROTECTED},
	{"removeDescendantSelectedPaths", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, 0},
	{"removeDescendantToggledPaths", "(Ljava/util/Enumeration;)V", "(Ljava/util/Enumeration<Ljavax/swing/tree/TreePath;>;)V", $PROTECTED},
	{"removeSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"removeSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"removeSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"removeSelectionRow", "(I)V", nullptr, $PUBLIC},
	{"removeSelectionRows", "([I)V", nullptr, $PUBLIC},
	{"removeTreeExpansionListener", "(Ljavax/swing/event/TreeExpansionListener;)V", nullptr, $PUBLIC},
	{"removeTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC},
	{"removeTreeWillExpandListener", "(Ljavax/swing/event/TreeWillExpandListener;)V", nullptr, $PUBLIC},
	{"scrollPathToVisible", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"scrollRowToVisible", "(I)V", nullptr, $PUBLIC},
	{"setAnchorSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setAnchorSelectionPath122},
	{"setCellEditor", "(Ljavax/swing/tree/TreeCellEditor;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setCellEditor123},
	{"setCellRenderer", "(Ljavax/swing/tree/TreeCellRenderer;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setCellRenderer124},
	{"setDragEnabled", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setDragEnabled125},
	{"setDropLocation", "(Ljavax/swing/TransferHandler$DropLocation;Ljava/lang/Object;Z)Ljava/lang/Object;", nullptr, 0},
	{"setDropMode", "(Ljavax/swing/DropMode;)V", nullptr, $PUBLIC | $FINAL, $method(static_cast<void(JTree::*)($DropMode*)>(&JTree::setDropMode))},
	{"setEditable", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setEditable128},
	{"setExpandedState", "(Ljavax/swing/tree/TreePath;Z)V", nullptr, $PROTECTED},
	{"setExpandsSelectedPaths", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setExpandsSelectedPaths130},
	{"setInvokesStopCellEditing", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setInvokesStopCellEditing131},
	{"setLargeModel", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setLargeModel132},
	{"setLeadSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setLeadSelectionPath133},
	{"setModel", "(Ljavax/swing/tree/TreeModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setModel134},
	{"setRootVisible", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setRootVisible135},
	{"setRowHeight", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setRowHeight136},
	{"setScrollsOnExpand", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setScrollsOnExpand137},
	{"setSelectionInterval", "(II)V", nullptr, $PUBLIC},
	{"setSelectionModel", "(Ljavax/swing/tree/TreeSelectionModel;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setSelectionModel139},
	{"setSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"setSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"setSelectionRow", "(I)V", nullptr, $PUBLIC},
	{"setSelectionRows", "([I)V", nullptr, $PUBLIC},
	{"setShowsRootHandles", "(Z)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setShowsRootHandles144},
	{"setToggleClickCount", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setToggleClickCount145},
	{"setUI", "(Ljavax/swing/plaf/TreeUI;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setUI146},
	{"setUIProperty", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, 0},
	{"setVisibleRowCount", "(I)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, _JTree_MethodAnnotations_setVisibleRowCount148},
	{"startDropTimer", "()V", nullptr, $PRIVATE, $method(static_cast<void(JTree::*)()>(&JTree::startDropTimer))},
	{"startEditingAtPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC},
	{"stopEditing", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"treeDidChange", "()V", nullptr, $PUBLIC},
	{"unarchiveExpandedState", "(Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(static_cast<void(JTree::*)(Object$*)>(&JTree::unarchiveExpandedState))},
	{"updateUI", "()V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(JTree::*)($ObjectOutputStream*)>(&JTree::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _JTree_InnerClassesInfo_[] = {
	{"javax.swing.JTree$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.swing.JTree$AccessibleJTree", "javax.swing.JTree", "AccessibleJTree", $PROTECTED},
	{"javax.swing.JTree$DynamicUtilTreeNode", "javax.swing.JTree", "DynamicUtilTreeNode", $PUBLIC | $STATIC},
	{"javax.swing.JTree$TreeModelHandler", "javax.swing.JTree", "TreeModelHandler", $PROTECTED},
	{"javax.swing.JTree$TreeSelectionRedirector", "javax.swing.JTree", "TreeSelectionRedirector", $PROTECTED},
	{"javax.swing.JTree$EmptySelectionModel", "javax.swing.JTree", "EmptySelectionModel", $PROTECTED | $STATIC},
	{"javax.swing.JTree$TreeTimer", "javax.swing.JTree", "TreeTimer", $PRIVATE},
	{"javax.swing.JTree$DropLocation", "javax.swing.JTree", "DropLocation", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _JTree_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JTree",
	"javax.swing.JComponent",
	"javax.swing.Scrollable,javax.accessibility.Accessible",
	_JTree_FieldInfo_,
	_JTree_MethodInfo_,
	nullptr,
	nullptr,
	_JTree_InnerClassesInfo_,
	_JTree_Annotations_,
	nullptr,
	"javax.swing.JTree$1,javax.swing.JTree$AccessibleJTree,javax.swing.JTree$AccessibleJTree$AccessibleJTreeNode,javax.swing.JTree$DynamicUtilTreeNode,javax.swing.JTree$TreeModelHandler,javax.swing.JTree$TreeSelectionRedirector,javax.swing.JTree$EmptySelectionModel,javax.swing.JTree$TreeTimer,javax.swing.JTree$DropLocation"
};

$Object* allocate$JTree($Class* clazz) {
	return $of($alloc(JTree));
}

$String* JTree::toString() {
	 return this->$JComponent::toString();
}

int32_t JTree::hashCode() {
	 return this->$JComponent::hashCode();
}

bool JTree::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* JTree::clone() {
	 return this->$JComponent::clone();
}

void JTree::finalize() {
	this->$JComponent::finalize();
}

bool JTree::$assertionsDisabled = false;
$String* JTree::uiClassID = nullptr;
int32_t JTree::TEMP_STACK_SIZE = 0;
$String* JTree::CELL_RENDERER_PROPERTY = nullptr;
$String* JTree::TREE_MODEL_PROPERTY = nullptr;
$String* JTree::ROOT_VISIBLE_PROPERTY = nullptr;
$String* JTree::SHOWS_ROOT_HANDLES_PROPERTY = nullptr;
$String* JTree::ROW_HEIGHT_PROPERTY = nullptr;
$String* JTree::CELL_EDITOR_PROPERTY = nullptr;
$String* JTree::EDITABLE_PROPERTY = nullptr;
$String* JTree::LARGE_MODEL_PROPERTY = nullptr;
$String* JTree::SELECTION_MODEL_PROPERTY = nullptr;
$String* JTree::VISIBLE_ROW_COUNT_PROPERTY = nullptr;
$String* JTree::INVOKES_STOP_CELL_EDITING_PROPERTY = nullptr;
$String* JTree::SCROLLS_ON_EXPAND_PROPERTY = nullptr;
$String* JTree::TOGGLE_CLICK_COUNT_PROPERTY = nullptr;
$String* JTree::LEAD_SELECTION_PATH_PROPERTY = nullptr;
$String* JTree::ANCHOR_SELECTION_PATH_PROPERTY = nullptr;
$String* JTree::EXPANDS_SELECTED_PATHS_PROPERTY = nullptr;

$TreeModel* JTree::getDefaultTreeModel() {
	$init(JTree);
	$useLocalCurrentObjectStackCache();
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode, "JTree"_s));
	$var($DefaultMutableTreeNode, parent, nullptr);
	$assign(parent, $new($DefaultMutableTreeNode, "colors"_s));
	root->add(parent);
	parent->add($$new($DefaultMutableTreeNode, "blue"_s));
	parent->add($$new($DefaultMutableTreeNode, "violet"_s));
	parent->add($$new($DefaultMutableTreeNode, "red"_s));
	parent->add($$new($DefaultMutableTreeNode, "yellow"_s));
	$assign(parent, $new($DefaultMutableTreeNode, "sports"_s));
	root->add(parent);
	parent->add($$new($DefaultMutableTreeNode, "basketball"_s));
	parent->add($$new($DefaultMutableTreeNode, "soccer"_s));
	parent->add($$new($DefaultMutableTreeNode, "football"_s));
	parent->add($$new($DefaultMutableTreeNode, "hockey"_s));
	$assign(parent, $new($DefaultMutableTreeNode, "food"_s));
	root->add(parent);
	parent->add($$new($DefaultMutableTreeNode, "hot dogs"_s));
	parent->add($$new($DefaultMutableTreeNode, "pizza"_s));
	parent->add($$new($DefaultMutableTreeNode, "ravioli"_s));
	parent->add($$new($DefaultMutableTreeNode, "bananas"_s));
	return $new($DefaultTreeModel, root);
}

$TreeModel* JTree::createTreeModel(Object$* value) {
	$init(JTree);
	$var($DefaultMutableTreeNode, root, nullptr);
	if (($instanceOf($ObjectArray, value)) || ($instanceOf($Hashtable, value)) || ($instanceOf($Vector, value))) {
		$assign(root, $new($DefaultMutableTreeNode, "root"_s));
		$JTree$DynamicUtilTreeNode::createChildren(root, value);
	} else {
		$assign(root, $new($JTree$DynamicUtilTreeNode, "root"_s, value));
	}
	return $new($DefaultTreeModel, root, false);
}

void JTree::init$() {
	JTree::init$($(getDefaultTreeModel()));
}

void JTree::init$($ObjectArray* value) {
	JTree::init$($(createTreeModel(value)));
	this->setRootVisible(false);
	this->setShowsRootHandles(true);
	expandRoot();
}

void JTree::init$($Vector* value) {
	JTree::init$($(createTreeModel(value)));
	this->setRootVisible(false);
	this->setShowsRootHandles(true);
	expandRoot();
}

void JTree::init$($Hashtable* value) {
	JTree::init$($(createTreeModel(value)));
	this->setRootVisible(false);
	this->setShowsRootHandles(true);
	expandRoot();
}

void JTree::init$($TreeNode* root) {
	JTree::init$(root, false);
}

void JTree::init$($TreeNode* root, bool asksAllowsChildren) {
	JTree::init$(static_cast<$TreeModel*>($$new($DefaultTreeModel, root, asksAllowsChildren)));
}

void JTree::init$($TreeModel* newModel) {
	$JComponent::init$();
	this->rowHeightSet = false;
	this->showsRootHandlesSet = false;
	this->scrollsOnExpandSet = false;
	$init($DropMode);
	$set(this, dropMode, $DropMode::USE_SELECTION);
	this->expandRow$ = -1;
	$set(this, expandedStack, $new($Stack));
	this->toggleClickCount = 2;
	$set(this, expandedState, $new($Hashtable));
	setLayout(nullptr);
	this->rowHeight = 16;
	this->visibleRowCount = 20;
	this->rootVisible = true;
	$set(this, selectionModel, $new($DefaultTreeSelectionModel));
	$set(this, cellRenderer, nullptr);
	this->scrollsOnExpand = true;
	this->expandsSelectedPaths = true;
	updateUI();
	setModel(newModel);
}

$ComponentUI* JTree::getUI() {
	return $cast($TreeUI, this->ui);
}

void JTree::setUI($TreeUI* ui) {
	if (!$equals(this->ui, ui)) {
		this->settingUI = true;
		$set(this, uiTreeExpansionListener, nullptr);
		{
			$var($Throwable, var$0, nullptr);
			try {
				$JComponent::setUI(ui);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->settingUI = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void JTree::updateUI() {
	$useLocalCurrentObjectStackCache();
	if (!this->updateInProgress) {
		this->updateInProgress = true;
		{
			$var($Throwable, var$0, nullptr);
			try {
				setUI($cast($TreeUI, $($UIManager::getUI(this))));
				$SwingUtilities::updateRendererOrEditorUI($(getCellRenderer()));
				$SwingUtilities::updateRendererOrEditorUI($(getCellEditor()));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				this->updateInProgress = false;
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$String* JTree::getUIClassID() {
	return JTree::uiClassID;
}

$TreeCellRenderer* JTree::getCellRenderer() {
	return this->cellRenderer;
}

void JTree::setCellRenderer($TreeCellRenderer* x) {
	$var($TreeCellRenderer, oldValue, this->cellRenderer);
	$set(this, cellRenderer, x);
	firePropertyChange(JTree::CELL_RENDERER_PROPERTY, $of(oldValue), $of(this->cellRenderer));
	invalidate();
}

void JTree::setEditable(bool flag) {
	bool oldValue = this->editable;
	this->editable = flag;
	firePropertyChange(JTree::EDITABLE_PROPERTY, oldValue, flag);
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$init($AccessibleState);
		$nc(this->accessibleContext)->firePropertyChange($AccessibleContext::ACCESSIBLE_STATE_PROPERTY, (oldValue ? $of($AccessibleState::EDITABLE) : ($Object*)nullptr), (flag ? $of($AccessibleState::EDITABLE) : ($Object*)nullptr));
	}
}

bool JTree::isEditable() {
	return this->editable;
}

void JTree::setCellEditor($TreeCellEditor* cellEditor) {
	$var($TreeCellEditor, oldEditor, this->cellEditor);
	$set(this, cellEditor, cellEditor);
	firePropertyChange(JTree::CELL_EDITOR_PROPERTY, $of(oldEditor), $of(cellEditor));
	invalidate();
}

$TreeCellEditor* JTree::getCellEditor() {
	return this->cellEditor;
}

$TreeModel* JTree::getModel() {
	return this->treeModel;
}

void JTree::setModel($TreeModel* newModel) {
	$useLocalCurrentObjectStackCache();
	clearSelection();
	$var($TreeModel, oldModel, this->treeModel);
	if (this->treeModel != nullptr && this->treeModelListener != nullptr) {
		$nc(this->treeModel)->removeTreeModelListener(this->treeModelListener);
	}
	if (this->accessibleContext != nullptr) {
		if (this->treeModel != nullptr) {
			$nc(this->treeModel)->removeTreeModelListener($cast($TreeModelListener, this->accessibleContext));
		}
		if (newModel != nullptr) {
			newModel->addTreeModelListener($cast($TreeModelListener, this->accessibleContext));
		}
	}
	$set(this, treeModel, newModel);
	clearToggledPaths();
	if (this->treeModel != nullptr) {
		if (this->treeModelListener == nullptr) {
			$set(this, treeModelListener, createTreeModelListener());
		}
		if (this->treeModelListener != nullptr) {
			$nc(this->treeModel)->addTreeModelListener(this->treeModelListener);
		}
		$var($Object, treeRoot, $nc(this->treeModel)->getRoot());
		if (treeRoot != nullptr && !$nc(this->treeModel)->isLeaf(treeRoot)) {
			$init($Boolean);
			$nc(this->expandedState)->put($$new($TreePath, treeRoot), $Boolean::TRUE);
		}
	}
	firePropertyChange(JTree::TREE_MODEL_PROPERTY, $of(oldModel), $of(this->treeModel));
	invalidate();
}

bool JTree::isRootVisible() {
	return this->rootVisible;
}

void JTree::setRootVisible(bool rootVisible) {
	bool oldValue = this->rootVisible;
	this->rootVisible = rootVisible;
	firePropertyChange(JTree::ROOT_VISIBLE_PROPERTY, oldValue, this->rootVisible);
	if (this->accessibleContext != nullptr) {
		$nc(($cast($JTree$AccessibleJTree, this->accessibleContext)))->fireVisibleDataPropertyChange();
	}
}

void JTree::setShowsRootHandles(bool newValue) {
	bool oldValue = this->showsRootHandles;
	$var($TreeModel, model, getModel());
	this->showsRootHandles = newValue;
	this->showsRootHandlesSet = true;
	firePropertyChange(JTree::SHOWS_ROOT_HANDLES_PROPERTY, oldValue, this->showsRootHandles);
	if (this->accessibleContext != nullptr) {
		$nc(($cast($JTree$AccessibleJTree, this->accessibleContext)))->fireVisibleDataPropertyChange();
	}
	invalidate();
}

bool JTree::getShowsRootHandles() {
	return this->showsRootHandles;
}

void JTree::setRowHeight(int32_t rowHeight) {
	int32_t oldValue = this->rowHeight;
	this->rowHeight = rowHeight;
	this->rowHeightSet = true;
	firePropertyChange(JTree::ROW_HEIGHT_PROPERTY, oldValue, this->rowHeight);
	invalidate();
}

int32_t JTree::getRowHeight() {
	return this->rowHeight;
}

bool JTree::isFixedRowHeight() {
	return (this->rowHeight > 0);
}

void JTree::setLargeModel(bool newValue) {
	bool oldValue = this->largeModel;
	this->largeModel = newValue;
	firePropertyChange(JTree::LARGE_MODEL_PROPERTY, oldValue, newValue);
}

bool JTree::isLargeModel() {
	return this->largeModel;
}

void JTree::setInvokesStopCellEditing(bool newValue) {
	bool oldValue = this->invokesStopCellEditing;
	this->invokesStopCellEditing = newValue;
	firePropertyChange(JTree::INVOKES_STOP_CELL_EDITING_PROPERTY, oldValue, newValue);
}

bool JTree::getInvokesStopCellEditing() {
	return this->invokesStopCellEditing;
}

void JTree::setScrollsOnExpand(bool newValue) {
	bool oldValue = this->scrollsOnExpand;
	this->scrollsOnExpand = newValue;
	this->scrollsOnExpandSet = true;
	firePropertyChange(JTree::SCROLLS_ON_EXPAND_PROPERTY, oldValue, newValue);
}

bool JTree::getScrollsOnExpand() {
	return this->scrollsOnExpand;
}

void JTree::setToggleClickCount(int32_t clickCount) {
	int32_t oldCount = this->toggleClickCount;
	this->toggleClickCount = clickCount;
	firePropertyChange(JTree::TOGGLE_CLICK_COUNT_PROPERTY, oldCount, clickCount);
}

int32_t JTree::getToggleClickCount() {
	return this->toggleClickCount;
}

void JTree::setExpandsSelectedPaths(bool newValue) {
	bool oldValue = this->expandsSelectedPaths;
	this->expandsSelectedPaths = newValue;
	firePropertyChange(JTree::EXPANDS_SELECTED_PATHS_PROPERTY, oldValue, newValue);
}

bool JTree::getExpandsSelectedPaths() {
	return this->expandsSelectedPaths;
}

void JTree::setDragEnabled(bool b) {
	checkDragEnabled(b);
	this->dragEnabled = b;
}

void JTree::checkDragEnabled(bool b) {
	$init(JTree);
	if (b && $GraphicsEnvironment::isHeadless()) {
		$throwNew($HeadlessException);
	}
}

bool JTree::getDragEnabled() {
	return this->dragEnabled;
}

void JTree::setDropMode($DropMode* dropMode) {
	checkDropMode(dropMode);
	$set(this, dropMode, dropMode);
}

void JTree::checkDropMode($DropMode* dropMode) {
	$init(JTree);
	if (dropMode != nullptr) {
		$init($JTree$1);
		switch ($nc($JTree$1::$SwitchMap$javax$swing$DropMode)->get((dropMode)->ordinal())) {
		case 1:
			{}
		case 2:
			{}
		case 3:
			{}
		case 4:
			{
				return;
			}
		}
	}
	$throwNew($IllegalArgumentException, $$str({dropMode, ": Unsupported drop mode for tree"_s}));
}

$DropMode* JTree::getDropMode() {
	return this->dropMode;
}

$TransferHandler$DropLocation* JTree::dropLocationForPoint($Point* p) {
	$useLocalCurrentObjectStackCache();
	$var($JTree$DropLocation, location, nullptr);
	int32_t row = getClosestRowForLocation($nc(p)->x, p->y);
	$var($Rectangle, bounds, getRowBounds(row));
	$var($TreeModel, model, getModel());
	$var($Object, root, (model == nullptr) ? ($Object*)nullptr : $nc(model)->getRoot());
	$var($TreePath, rootPath, (root == nullptr) ? ($TreePath*)nullptr : $new($TreePath, root));
	$var($TreePath, child, nullptr);
	$var($TreePath, parent, nullptr);
	bool outside = row == -1 || $nc(p)->y < $nc(bounds)->y || $nc(p)->y >= $nc(bounds)->y + bounds->height;
	$init($JTree$1);
	{
		bool checkOn = false;
		$var($SwingUtilities2$Section, section, nullptr)
		switch ($nc($JTree$1::$SwitchMap$javax$swing$DropMode)->get($nc((this->dropMode))->ordinal())) {
		case 1:
			{}
		case 2:
			{
				if (outside) {
					$assign(location, $new($JTree$DropLocation, p, nullptr, -1));
				} else {
					$assign(location, $new($JTree$DropLocation, p, $(getPathForRow(row)), -1));
				}
				break;
			}
		case 3:
			{}
		case 4:
			{
				if (row == -1) {
					bool var$0 = root != nullptr && !model->isLeaf(root);
					if (var$0 && isExpanded(rootPath)) {
						$assign(location, $new($JTree$DropLocation, p, rootPath, 0));
					} else {
						$assign(location, $new($JTree$DropLocation, p, nullptr, -1));
					}
					break;
				}
				$init($DropMode);
				checkOn = this->dropMode == $DropMode::ON_OR_INSERT || !model->isLeaf($($nc($(getPathForRow(row)))->getLastPathComponent()));
				$assign(section, $SwingUtilities2::liesInVertical(bounds, p, checkOn));
				$init($SwingUtilities2$Section);
				if (section == $SwingUtilities2$Section::LEADING) {
					$assign(child, getPathForRow(row));
					$assign(parent, $nc(child)->getParentPath());
				} else {
					if (section == $SwingUtilities2$Section::TRAILING) {
						int32_t index = row + 1;
						if (index >= getRowCount()) {
							bool var$1 = model->isLeaf(root);
							if (var$1 || !isExpanded(rootPath)) {
								$assign(location, $new($JTree$DropLocation, p, nullptr, -1));
							} else {
								$assign(parent, rootPath);
								index = model->getChildCount(root);
								$assign(location, $new($JTree$DropLocation, p, parent, index));
							}
							break;
						}
						$assign(child, getPathForRow(index));
						$assign(parent, $nc(child)->getParentPath());
						$var($TreePath, prev, $nc($(getPathForRow(row)))->getParentPath());
						if (prev != nullptr && !prev->equals(parent)) {
							$assign(location, $new($JTree$DropLocation, p, prev, model->getChildCount($(prev->getLastPathComponent()))));
							break;
						}
					} else {
						if (!JTree::$assertionsDisabled && !checkOn) {
							$throwNew($AssertionError);
						}
						$assign(location, $new($JTree$DropLocation, p, $(getPathForRow(row)), -1));
						break;
					}
				}
				if (parent != nullptr) {
					$var($Object, var$2, parent->getLastPathComponent());
					$assign(location, $new($JTree$DropLocation, p, parent, model->getIndexOfChild(var$2, $($nc(child)->getLastPathComponent()))));
				} else if (checkOn || !model->isLeaf(root)) {
					$assign(location, $new($JTree$DropLocation, p, rootPath, -1));
				} else {
					$assign(location, $new($JTree$DropLocation, p, nullptr, -1));
				}
				break;
			}
		default:
			{
				if (!JTree::$assertionsDisabled) {
					$throwNew($AssertionError, $of("Unexpected drop mode"_s));
				}
			}
		}
	}
	if (outside || row != this->expandRow$) {
		cancelDropTimer();
	}
	if (!outside && row != this->expandRow$) {
		if (isCollapsed(row)) {
			this->expandRow$ = row;
			startDropTimer();
		}
	}
	return location;
}

$Object* JTree::setDropLocation($TransferHandler$DropLocation* location, Object$* state, bool forDrop) {
	$useLocalCurrentObjectStackCache();
	$var($Object, retVal, nullptr);
	$var($JTree$DropLocation, treeLocation, $cast($JTree$DropLocation, location));
	$init($DropMode);
	if (this->dropMode == $DropMode::USE_SELECTION) {
		if (treeLocation == nullptr) {
			if (!forDrop && state != nullptr) {
				setSelectionPaths($nc(($cast($TreePathArray2, state)))->get(0));
				setAnchorSelectionPath($nc($nc(($cast($TreePathArray2, state)))->get(1))->get(0));
				setLeadSelectionPath($nc($nc(($cast($TreePathArray2, state)))->get(1))->get(1));
			}
		} else {
			if (this->dropLocation == nullptr) {
				$var($TreePathArray, paths, getSelectionPaths());
				if (paths == nullptr) {
					$assign(paths, $new($TreePathArray, 0));
				}
				$assign(retVal, $new($TreePathArray2, {
					paths,
					$$new($TreePathArray, {
						$(getAnchorSelectionPath()),
						$(getLeadSelectionPath())
					})
				}));
			} else {
				$assign(retVal, state);
			}
			setSelectionPath($($nc(treeLocation)->getPath()));
		}
	}
	$var($JTree$DropLocation, old, this->dropLocation);
	$set(this, dropLocation, treeLocation);
	firePropertyChange("dropLocation"_s, $of(old), $of(this->dropLocation));
	return $of(retVal);
}

void JTree::dndDone() {
	cancelDropTimer();
	$set(this, dropTimer, nullptr);
}

$JTree$DropLocation* JTree::getDropLocation() {
	return this->dropLocation;
}

void JTree::startDropTimer() {
	if (this->dropTimer == nullptr) {
		$set(this, dropTimer, $new($JTree$TreeTimer, this));
	}
	$nc(this->dropTimer)->start();
}

void JTree::cancelDropTimer() {
	if (this->dropTimer != nullptr && $nc(this->dropTimer)->isRunning()) {
		this->expandRow$ = -1;
		$nc(this->dropTimer)->stop();
	}
}

bool JTree::isPathEditable($TreePath* path) {
	return isEditable();
}

$String* JTree::getToolTipText($MouseEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($String, tip, nullptr);
	if (event != nullptr) {
		$var($Point, p, event->getPoint());
		int32_t selRow = getRowForLocation($nc(p)->x, p->y);
		$var($TreeCellRenderer, r, getCellRenderer());
		if (selRow != -1 && r != nullptr) {
			$var($TreePath, path, getPathForRow(selRow));
			$var($Object, lastPath, $nc(path)->getLastPathComponent());
			$var($Object, var$0, lastPath);
			bool var$1 = isRowSelected(selRow);
			bool var$2 = isExpanded(selRow);
			$var($Component, rComponent, r->getTreeCellRendererComponent(this, var$0, var$1, var$2, $nc($(getModel()))->isLeaf(lastPath), selRow, true));
			if ($instanceOf($JComponent, rComponent)) {
				$var($MouseEvent, newEvent, nullptr);
				$var($Rectangle, pathBounds, getPathBounds(path));
				$nc(p)->translate(-$nc(pathBounds)->x, -pathBounds->y);
				int32_t modifiers = event->getModifiers();
				$var($Component, var$3, rComponent);
				int32_t var$4 = event->getID();
				int64_t var$5 = event->getWhen();
				int32_t var$6 = modifiers;
				int32_t var$7 = p->x;
				int32_t var$8 = p->y;
				int32_t var$9 = event->getXOnScreen();
				int32_t var$10 = event->getYOnScreen();
				int32_t var$11 = event->getClickCount();
				$assign(newEvent, $new($MouseEvent, var$3, var$4, var$5, var$6, var$7, var$8, var$9, var$10, var$11, event->isPopupTrigger(), $MouseEvent::NOBUTTON));
				$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
				$nc(meAccessor)->setCausedByTouchEvent(newEvent, meAccessor->isCausedByTouchEvent(event));
				$assign(tip, $nc(($cast($JComponent, rComponent)))->getToolTipText(newEvent));
			}
		}
	}
	if (tip == nullptr) {
		$assign(tip, getToolTipText());
	}
	return tip;
}

$String* JTree::convertValueToText(Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	if (value != nullptr) {
		$var($String, sValue, $of(value)->toString());
		if (sValue != nullptr) {
			return sValue;
		}
	}
	return ""_s;
}

int32_t JTree::getRowCount() {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		return tree->getRowCount(this);
	}
	return 0;
}

void JTree::setSelectionPath($TreePath* path) {
	$nc($(getSelectionModel()))->setSelectionPath(path);
}

void JTree::setSelectionPaths($TreePathArray* paths) {
	$nc($(getSelectionModel()))->setSelectionPaths(paths);
}

void JTree::setLeadSelectionPath($TreePath* newPath) {
	$var($TreePath, oldValue, this->leadPath);
	$set(this, leadPath, newPath);
	firePropertyChange(JTree::LEAD_SELECTION_PATH_PROPERTY, $of(oldValue), $of(newPath));
	if (this->accessibleContext != nullptr) {
		$nc(($cast($JTree$AccessibleJTree, this->accessibleContext)))->fireActiveDescendantPropertyChange(oldValue, newPath);
	}
}

void JTree::setAnchorSelectionPath($TreePath* newPath) {
	$var($TreePath, oldValue, this->anchorPath);
	$set(this, anchorPath, newPath);
	firePropertyChange(JTree::ANCHOR_SELECTION_PATH_PROPERTY, $of(oldValue), $of(newPath));
}

void JTree::setSelectionRow(int32_t row) {
	$var($ints, rows, $new($ints, {row}));
	setSelectionRows(rows);
}

void JTree::setSelectionRows($ints* rows) {
	$useLocalCurrentObjectStackCache();
	$var($TreeUI, ui, $cast($TreeUI, getUI()));
	if (ui != nullptr && rows != nullptr) {
		int32_t numRows = rows->length;
		$var($TreePathArray, paths, $new($TreePathArray, numRows));
		for (int32_t counter = 0; counter < numRows; ++counter) {
			paths->set(counter, $(ui->getPathForRow(this, rows->get(counter))));
		}
		setSelectionPaths(paths);
	}
}

void JTree::addSelectionPath($TreePath* path) {
	$nc($(getSelectionModel()))->addSelectionPath(path);
}

void JTree::addSelectionPaths($TreePathArray* paths) {
	$nc($(getSelectionModel()))->addSelectionPaths(paths);
}

void JTree::addSelectionRow(int32_t row) {
	$var($ints, rows, $new($ints, {row}));
	addSelectionRows(rows);
}

void JTree::addSelectionRows($ints* rows) {
	$useLocalCurrentObjectStackCache();
	$var($TreeUI, ui, $cast($TreeUI, getUI()));
	if (ui != nullptr && rows != nullptr) {
		int32_t numRows = rows->length;
		$var($TreePathArray, paths, $new($TreePathArray, numRows));
		for (int32_t counter = 0; counter < numRows; ++counter) {
			paths->set(counter, $(ui->getPathForRow(this, rows->get(counter))));
		}
		addSelectionPaths(paths);
	}
}

$Object* JTree::getLastSelectedPathComponent() {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, selPath, $nc($(getSelectionModel()))->getSelectionPath());
	if (selPath != nullptr) {
		return $of(selPath->getLastPathComponent());
	}
	return $of(nullptr);
}

$TreePath* JTree::getLeadSelectionPath() {
	return this->leadPath;
}

$TreePath* JTree::getAnchorSelectionPath() {
	return this->anchorPath;
}

$TreePath* JTree::getSelectionPath() {
	return $nc($(getSelectionModel()))->getSelectionPath();
}

$TreePathArray* JTree::getSelectionPaths() {
	$useLocalCurrentObjectStackCache();
	$var($TreePathArray, selectionPaths, $nc($(getSelectionModel()))->getSelectionPaths());
	return (selectionPaths != nullptr && selectionPaths->length > 0) ? selectionPaths : ($TreePathArray*)nullptr;
}

$ints* JTree::getSelectionRows() {
	return $nc($(getSelectionModel()))->getSelectionRows();
}

int32_t JTree::getSelectionCount() {
	return $nc(this->selectionModel)->getSelectionCount();
}

int32_t JTree::getMinSelectionRow() {
	return $nc($(getSelectionModel()))->getMinSelectionRow();
}

int32_t JTree::getMaxSelectionRow() {
	return $nc($(getSelectionModel()))->getMaxSelectionRow();
}

int32_t JTree::getLeadSelectionRow() {
	$var($TreePath, leadPath, getLeadSelectionPath());
	if (leadPath != nullptr) {
		return getRowForPath(leadPath);
	}
	return -1;
}

bool JTree::isPathSelected($TreePath* path) {
	return $nc($(getSelectionModel()))->isPathSelected(path);
}

bool JTree::isRowSelected(int32_t row) {
	return $nc($(getSelectionModel()))->isRowSelected(row);
}

$Enumeration* JTree::getExpandedDescendants($TreePath* parent) {
	$useLocalCurrentObjectStackCache();
	if (!isExpanded(parent)) {
		return nullptr;
	}
	$var($Enumeration, toggledPaths, $nc(this->expandedState)->keys());
	$var($Vector, elements, nullptr);
	$var($TreePath, path, nullptr);
	$var($Object, value, nullptr);
	if (toggledPaths != nullptr) {
		while (toggledPaths->hasMoreElements()) {
			$assign(path, $cast($TreePath, toggledPaths->nextElement()));
			$assign(value, $nc(this->expandedState)->get(path));
			bool var$1 = path != parent && value != nullptr && $nc(($cast($Boolean, value)))->booleanValue();
			bool var$0 = var$1 && $nc(parent)->isDescendant(path);
			if (var$0 && isVisible(path)) {
				if (elements == nullptr) {
					$assign(elements, $new($Vector));
				}
				$nc(elements)->addElement(path);
			}
		}
	}
	if (elements == nullptr) {
		$var($Set, empty, $Collections::emptySet());
		return $Collections::enumeration(empty);
	}
	return $nc(elements)->elements();
}

bool JTree::hasBeenExpanded($TreePath* path) {
	return (path != nullptr && $nc(this->expandedState)->get(path) != nullptr);
}

bool JTree::isExpanded($TreePath* path$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, path, path$renamed);
	if (path == nullptr) {
		return false;
	}
	$var($Object, value, nullptr);
	do {
		$assign(value, $nc(this->expandedState)->get(path));
		if (value == nullptr || !$nc(($cast($Boolean, value)))->booleanValue()) {
			return false;
		}
	} while (($assign(path, $nc(path)->getParentPath())) != nullptr);
	return true;
}

bool JTree::isExpanded(int32_t row) {
	$useLocalCurrentObjectStackCache();
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		$var($TreePath, path, tree->getPathForRow(this, row));
		if (path != nullptr) {
			$var($Boolean, value, $cast($Boolean, $nc(this->expandedState)->get(path)));
			return (value != nullptr && value->booleanValue());
		}
	}
	return false;
}

bool JTree::isCollapsed($TreePath* path) {
	return !isExpanded(path);
}

bool JTree::isCollapsed(int32_t row) {
	return !isExpanded(row);
}

void JTree::makeVisible($TreePath* path) {
	if (path != nullptr) {
		$var($TreePath, parentPath, path->getParentPath());
		if (parentPath != nullptr) {
			expandPath(parentPath);
		}
	}
}

bool JTree::isVisible($TreePath* path) {
	if (path != nullptr) {
		$var($TreePath, parentPath, path->getParentPath());
		if (parentPath != nullptr) {
			return isExpanded(parentPath);
		}
		return true;
	}
	return false;
}

$Rectangle* JTree::getPathBounds($TreePath* path) {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		return tree->getPathBounds(this, path);
	}
	return nullptr;
}

$Rectangle* JTree::getRowBounds(int32_t row) {
	return getPathBounds($(getPathForRow(row)));
}

void JTree::scrollPathToVisible($TreePath* path) {
	if (path != nullptr) {
		makeVisible(path);
		$var($Rectangle, bounds, getPathBounds(path));
		if (bounds != nullptr) {
			scrollRectToVisible(bounds);
			if (this->accessibleContext != nullptr) {
				$nc(($cast($JTree$AccessibleJTree, this->accessibleContext)))->fireVisibleDataPropertyChange();
			}
		}
	}
}

void JTree::scrollRowToVisible(int32_t row) {
	scrollPathToVisible($(getPathForRow(row)));
}

$TreePath* JTree::getPathForRow(int32_t row) {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		return tree->getPathForRow(this, row);
	}
	return nullptr;
}

int32_t JTree::getRowForPath($TreePath* path) {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		return tree->getRowForPath(this, path);
	}
	return -1;
}

void JTree::expandPath($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, getModel());
	if (path != nullptr && model != nullptr && !model->isLeaf($(path->getLastPathComponent()))) {
		setExpandedState(path, true);
	}
}

void JTree::expandRow(int32_t row) {
	expandPath($(getPathForRow(row)));
}

void JTree::collapsePath($TreePath* path) {
	setExpandedState(path, false);
}

void JTree::collapseRow(int32_t row) {
	collapsePath($(getPathForRow(row)));
}

$TreePath* JTree::getPathForLocation(int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, closestPath, getClosestPathForLocation(x, y));
	if (closestPath != nullptr) {
		$var($Rectangle, pathBounds, getPathBounds(closestPath));
		if (pathBounds != nullptr && x >= pathBounds->x && x < (pathBounds->x + pathBounds->width) && y >= pathBounds->y && y < (pathBounds->y + pathBounds->height)) {
			return closestPath;
		}
	}
	return nullptr;
}

int32_t JTree::getRowForLocation(int32_t x, int32_t y) {
	return getRowForPath($(getPathForLocation(x, y)));
}

$TreePath* JTree::getClosestPathForLocation(int32_t x, int32_t y) {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		return tree->getClosestPathForLocation(this, x, y);
	}
	return nullptr;
}

int32_t JTree::getClosestRowForLocation(int32_t x, int32_t y) {
	return getRowForPath($(getClosestPathForLocation(x, y)));
}

bool JTree::isEditing() {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		return tree->isEditing(this);
	}
	return false;
}

bool JTree::stopEditing() {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		return tree->stopEditing(this);
	}
	return false;
}

void JTree::cancelEditing() {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		tree->cancelEditing(this);
	}
}

void JTree::startEditingAtPath($TreePath* path) {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		tree->startEditingAtPath(this, path);
	}
}

$TreePath* JTree::getEditingPath() {
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		return tree->getEditingPath(this);
	}
	return nullptr;
}

void JTree::setSelectionModel($TreeSelectionModel* selectionModel$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($TreeSelectionModel, selectionModel, selectionModel$renamed);
	if (selectionModel == nullptr) {
		$assign(selectionModel, $JTree$EmptySelectionModel::sharedInstance());
	}
	$var($TreeSelectionModel, oldValue, this->selectionModel);
	if (this->selectionModel != nullptr && this->selectionRedirector != nullptr) {
		$nc(this->selectionModel)->removeTreeSelectionListener(this->selectionRedirector);
	}
	if (this->accessibleContext != nullptr) {
		$nc(this->selectionModel)->removeTreeSelectionListener($cast($TreeSelectionListener, this->accessibleContext));
		$nc(selectionModel)->addTreeSelectionListener($cast($TreeSelectionListener, this->accessibleContext));
	}
	$set(this, selectionModel, selectionModel);
	if (this->selectionRedirector != nullptr) {
		$nc(this->selectionModel)->addTreeSelectionListener(this->selectionRedirector);
	}
	firePropertyChange(JTree::SELECTION_MODEL_PROPERTY, $of(oldValue), $of(this->selectionModel));
	if (this->accessibleContext != nullptr) {
		$init($AccessibleContext);
		$var($String, var$0, $AccessibleContext::ACCESSIBLE_SELECTION_PROPERTY);
		$var($Object, var$1, $of($Boolean::valueOf(false)));
		$nc(this->accessibleContext)->firePropertyChange(var$0, var$1, $($Boolean::valueOf(true)));
	}
}

$TreeSelectionModel* JTree::getSelectionModel() {
	return this->selectionModel;
}

$TreePathArray* JTree::getPathBetweenRows(int32_t index0, int32_t index1) {
	$useLocalCurrentObjectStackCache();
	$var($TreeUI, tree, $cast($TreeUI, getUI()));
	if (tree != nullptr) {
		int32_t rowCount = getRowCount();
		if (rowCount > 0 && !((index0 < 0 && index1 < 0) || (index0 >= rowCount && index1 >= rowCount))) {
			index0 = $Math::min(rowCount - 1, $Math::max(index0, 0));
			index1 = $Math::min(rowCount - 1, $Math::max(index1, 0));
			int32_t minIndex = $Math::min(index0, index1);
			int32_t maxIndex = $Math::max(index0, index1);
			$var($TreePathArray, selection, $new($TreePathArray, maxIndex - minIndex + 1));
			for (int32_t counter = minIndex; counter <= maxIndex; ++counter) {
				selection->set(counter - minIndex, $(tree->getPathForRow(this, counter)));
			}
			return selection;
		}
	}
	return $new($TreePathArray, 0);
}

void JTree::setSelectionInterval(int32_t index0, int32_t index1) {
	$useLocalCurrentObjectStackCache();
	$var($TreePathArray, paths, getPathBetweenRows(index0, index1));
	$nc($(this->getSelectionModel()))->setSelectionPaths(paths);
}

void JTree::addSelectionInterval(int32_t index0, int32_t index1) {
	$useLocalCurrentObjectStackCache();
	$var($TreePathArray, paths, getPathBetweenRows(index0, index1));
	if (paths != nullptr && paths->length > 0) {
		$nc($(this->getSelectionModel()))->addSelectionPaths(paths);
	}
}

void JTree::removeSelectionInterval(int32_t index0, int32_t index1) {
	$useLocalCurrentObjectStackCache();
	$var($TreePathArray, paths, getPathBetweenRows(index0, index1));
	if (paths != nullptr && paths->length > 0) {
		$nc($(this->getSelectionModel()))->removeSelectionPaths(paths);
	}
}

void JTree::removeSelectionPath($TreePath* path) {
	$nc($(this->getSelectionModel()))->removeSelectionPath(path);
}

void JTree::removeSelectionPaths($TreePathArray* paths) {
	$nc($(this->getSelectionModel()))->removeSelectionPaths(paths);
}

void JTree::removeSelectionRow(int32_t row) {
	$var($ints, rows, $new($ints, {row}));
	removeSelectionRows(rows);
}

void JTree::removeSelectionRows($ints* rows) {
	$useLocalCurrentObjectStackCache();
	$var($TreeUI, ui, $cast($TreeUI, getUI()));
	if (ui != nullptr && rows != nullptr) {
		int32_t numRows = rows->length;
		$var($TreePathArray, paths, $new($TreePathArray, numRows));
		for (int32_t counter = 0; counter < numRows; ++counter) {
			paths->set(counter, $(ui->getPathForRow(this, rows->get(counter))));
		}
		removeSelectionPaths(paths);
	}
}

void JTree::clearSelection() {
	$nc($(getSelectionModel()))->clearSelection();
}

bool JTree::isSelectionEmpty() {
	return $nc($(getSelectionModel()))->isSelectionEmpty();
}

void JTree::addTreeExpansionListener($TreeExpansionListener* tel) {
	if (this->settingUI) {
		$set(this, uiTreeExpansionListener, tel);
	}
	$load($TreeExpansionListener);
	$nc(this->listenerList)->add($TreeExpansionListener::class$, tel);
}

void JTree::removeTreeExpansionListener($TreeExpansionListener* tel) {
	$load($TreeExpansionListener);
	$nc(this->listenerList)->remove($TreeExpansionListener::class$, tel);
	if (this->uiTreeExpansionListener == tel) {
		$set(this, uiTreeExpansionListener, nullptr);
	}
}

$TreeExpansionListenerArray* JTree::getTreeExpansionListeners() {
	$load($TreeExpansionListener);
	return $fcast($TreeExpansionListenerArray, $nc(this->listenerList)->getListeners($TreeExpansionListener::class$));
}

void JTree::addTreeWillExpandListener($TreeWillExpandListener* tel) {
	$load($TreeWillExpandListener);
	$nc(this->listenerList)->add($TreeWillExpandListener::class$, tel);
}

void JTree::removeTreeWillExpandListener($TreeWillExpandListener* tel) {
	$load($TreeWillExpandListener);
	$nc(this->listenerList)->remove($TreeWillExpandListener::class$, tel);
}

$TreeWillExpandListenerArray* JTree::getTreeWillExpandListeners() {
	$load($TreeWillExpandListener);
	return $fcast($TreeWillExpandListenerArray, $nc(this->listenerList)->getListeners($TreeWillExpandListener::class$));
}

void JTree::fireTreeExpanded($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeExpansionEvent, e, nullptr);
	if (this->uiTreeExpansionListener != nullptr) {
		$assign(e, $new($TreeExpansionEvent, this, path));
		$nc(this->uiTreeExpansionListener)->treeExpanded(e);
	}
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeExpansionListener);
		if ($equals(listeners->get(i), $TreeExpansionListener::class$) && !$equals(listeners->get(i + 1), this->uiTreeExpansionListener)) {
			if (e == nullptr) {
				$assign(e, $new($TreeExpansionEvent, this, path));
			}
			$nc(($cast($TreeExpansionListener, listeners->get(i + 1))))->treeExpanded(e);
		}
	}
}

void JTree::fireTreeCollapsed($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeExpansionEvent, e, nullptr);
	if (this->uiTreeExpansionListener != nullptr) {
		$assign(e, $new($TreeExpansionEvent, this, path));
		$nc(this->uiTreeExpansionListener)->treeCollapsed(e);
	}
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeExpansionListener);
		if ($equals(listeners->get(i), $TreeExpansionListener::class$) && !$equals(listeners->get(i + 1), this->uiTreeExpansionListener)) {
			if (e == nullptr) {
				$assign(e, $new($TreeExpansionEvent, this, path));
			}
			$nc(($cast($TreeExpansionListener, listeners->get(i + 1))))->treeCollapsed(e);
		}
	}
}

void JTree::fireTreeWillExpand($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeExpansionEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeWillExpandListener);
		if ($equals(listeners->get(i), $TreeWillExpandListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($TreeExpansionEvent, this, path));
			}
			$nc(($cast($TreeWillExpandListener, listeners->get(i + 1))))->treeWillExpand(e);
		}
	}
}

void JTree::fireTreeWillCollapse($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	$var($TreeExpansionEvent, e, nullptr);
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeWillExpandListener);
		if ($equals(listeners->get(i), $TreeWillExpandListener::class$)) {
			if (e == nullptr) {
				$assign(e, $new($TreeExpansionEvent, this, path));
			}
			$nc(($cast($TreeWillExpandListener, listeners->get(i + 1))))->treeWillCollapse(e);
		}
	}
}

void JTree::addTreeSelectionListener($TreeSelectionListener* tsl) {
	$load($TreeSelectionListener);
	$nc(this->listenerList)->add($TreeSelectionListener::class$, tsl);
	if ($nc(this->listenerList)->getListenerCount($TreeSelectionListener::class$) != 0 && this->selectionRedirector == nullptr) {
		$set(this, selectionRedirector, $new($JTree$TreeSelectionRedirector, this));
		$nc(this->selectionModel)->addTreeSelectionListener(this->selectionRedirector);
	}
}

void JTree::removeTreeSelectionListener($TreeSelectionListener* tsl) {
	$load($TreeSelectionListener);
	$nc(this->listenerList)->remove($TreeSelectionListener::class$, tsl);
	if ($nc(this->listenerList)->getListenerCount($TreeSelectionListener::class$) == 0 && this->selectionRedirector != nullptr) {
		$nc(this->selectionModel)->removeTreeSelectionListener(this->selectionRedirector);
		$set(this, selectionRedirector, nullptr);
	}
}

$TreeSelectionListenerArray* JTree::getTreeSelectionListeners() {
	$load($TreeSelectionListener);
	return $fcast($TreeSelectionListenerArray, $nc(this->listenerList)->getListeners($TreeSelectionListener::class$));
}

void JTree::fireValueChanged($TreeSelectionEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TreeSelectionListener);
		if ($equals(listeners->get(i), $TreeSelectionListener::class$)) {
			$nc(($cast($TreeSelectionListener, listeners->get(i + 1))))->valueChanged(e);
		}
	}
}

void JTree::treeDidChange() {
	revalidate();
	repaint();
}

void JTree::setVisibleRowCount(int32_t newCount) {
	int32_t oldCount = this->visibleRowCount;
	this->visibleRowCount = newCount;
	firePropertyChange(JTree::VISIBLE_ROW_COUNT_PROPERTY, oldCount, this->visibleRowCount);
	invalidate();
	if (this->accessibleContext != nullptr) {
		$nc(($cast($JTree$AccessibleJTree, this->accessibleContext)))->fireVisibleDataPropertyChange();
	}
}

int32_t JTree::getVisibleRowCount() {
	return this->visibleRowCount;
}

void JTree::expandRoot() {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, getModel());
	if (model != nullptr && model->getRoot() != nullptr) {
		expandPath($$new($TreePath, $(model->getRoot())));
	}
}

$TreePath* JTree::getNextMatch($String* prefix$renamed, int32_t startingRow, $Position$Bias* bias) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	int32_t max = getRowCount();
	if (prefix == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	if (startingRow < 0 || startingRow >= max) {
		$throwNew($IllegalArgumentException);
	}
	$assign(prefix, $nc(prefix)->toUpperCase());
	$init($Position$Bias);
	int32_t increment = (bias == $Position$Bias::Forward) ? 1 : -1;
	int32_t row = startingRow;
	do {
		$var($TreePath, path, getPathForRow(row));
		$var($Object, var$0, $nc(path)->getLastPathComponent());
		bool var$1 = isRowSelected(row);
		$var($String, text, convertValueToText(var$0, var$1, isExpanded(row), true, row, false));
		if ($($nc(text)->toUpperCase())->startsWith(prefix)) {
			return path;
		}
		row = $mod((row + increment + max), max);
	} while (row != startingRow);
	return nullptr;
}

void JTree::writeObject($ObjectOutputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, values, $new($Vector));
	$nc(s)->defaultWriteObject();
	if (this->cellRenderer != nullptr && $instanceOf($Serializable, this->cellRenderer)) {
		values->addElement("cellRenderer"_s);
		values->addElement(this->cellRenderer);
	}
	if (this->cellEditor != nullptr && $instanceOf($Serializable, this->cellEditor)) {
		values->addElement("cellEditor"_s);
		values->addElement(this->cellEditor);
	}
	if (this->treeModel != nullptr && $instanceOf($Serializable, this->treeModel)) {
		values->addElement("treeModel"_s);
		values->addElement(this->treeModel);
	}
	if (this->selectionModel != nullptr && $instanceOf($Serializable, this->selectionModel)) {
		values->addElement("selectionModel"_s);
		values->addElement(this->selectionModel);
	}
	$var($Object, expandedData, getArchivableExpandedState());
	if (expandedData != nullptr) {
		values->addElement("expandedState"_s);
		values->addElement(expandedData);
	}
	s->writeObject(values);
	if ($nc($(getUIClassID()))->equals(JTree::uiClassID)) {
		int8_t count = $JComponent::getWriteObjCounter(this);
		$JComponent::setWriteObjCounter(this, --count);
		if (count == 0 && this->ui != nullptr) {
			$nc(this->ui)->installUI(this);
		}
	}
}

void JTree::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(s)->readFields());
	this->rootVisible = $nc(f)->get("rootVisible"_s, false);
	this->rowHeight = f->get("rowHeight"_s, 0);
	this->rowHeightSet = f->get("rowHeightSet"_s, false);
	this->showsRootHandles = f->get("showsRootHandles"_s, false);
	this->showsRootHandlesSet = f->get("showsRootHandlesSet"_s, false);
	this->editable = f->get("editable"_s, false);
	this->largeModel = f->get("largeModel"_s, false);
	this->visibleRowCount = f->get("visibleRowCount"_s, 0);
	this->invokesStopCellEditing = f->get("invokesStopCellEditing"_s, false);
	this->scrollsOnExpand = f->get("scrollsOnExpand"_s, false);
	this->scrollsOnExpandSet = f->get("scrollsOnExpandSet"_s, false);
	this->toggleClickCount = f->get("toggleClickCount"_s, 0);
	$set(this, leadPath, $cast($TreePath, f->get("leadPath"_s, ($Object*)nullptr)));
	$set(this, anchorPath, $cast($TreePath, f->get("anchorPath"_s, ($Object*)nullptr)));
	this->expandsSelectedPaths = f->get("expandsSelectedPaths"_s, false);
	this->settingUI = f->get("settingUI"_s, false);
	bool newDragEnabled = f->get("dragEnabled"_s, false);
	checkDragEnabled(newDragEnabled);
	this->dragEnabled = newDragEnabled;
	$init($DropMode);
	$DropMode* newDropMode = $cast($DropMode, f->get("dropMode"_s, $of($DropMode::USE_SELECTION)));
	checkDropMode(newDropMode);
	$set(this, dropMode, newDropMode);
	this->expandRow$ = f->get("expandRow"_s, -1);
	$set(this, dropTimer, $cast($JTree$TreeTimer, f->get("dropTimer"_s, ($Object*)nullptr)));
	$set(this, expandedState, $new($Hashtable));
	$set(this, expandedStack, $new($Stack));
	$var($Vector, values, $cast($Vector, s->readObject()));
	int32_t indexCounter = 0;
	int32_t maxCounter = $nc(values)->size();
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("cellRenderer"_s)) {
		$set(this, cellRenderer, $cast($TreeCellRenderer, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("cellEditor"_s)) {
		$set(this, cellEditor, $cast($TreeCellEditor, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("treeModel"_s)) {
		$set(this, treeModel, $cast($TreeModel, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("selectionModel"_s)) {
		$set(this, selectionModel, $cast($TreeSelectionModel, values->elementAt(++indexCounter)));
		++indexCounter;
	}
	if (indexCounter < maxCounter && $nc($of($(values->elementAt(indexCounter))))->equals("expandedState"_s)) {
		unarchiveExpandedState($(values->elementAt(++indexCounter)));
		++indexCounter;
	}
	$load($TreeSelectionListener);
	if ($nc(this->listenerList)->getListenerCount($TreeSelectionListener::class$) != 0) {
		$set(this, selectionRedirector, $new($JTree$TreeSelectionRedirector, this));
		$nc(this->selectionModel)->addTreeSelectionListener(this->selectionRedirector);
	}
	if (this->treeModel != nullptr) {
		$set(this, treeModelListener, createTreeModelListener());
		if (this->treeModelListener != nullptr) {
			$nc(this->treeModel)->addTreeModelListener(this->treeModelListener);
		}
	}
}

$Object* JTree::getArchivableExpandedState() {
	$useLocalCurrentObjectStackCache();
	$var($TreeModel, model, getModel());
	if (model != nullptr) {
		$var($Enumeration, paths, $nc(this->expandedState)->keys());
		if (paths != nullptr) {
			$var($Vector, state, $new($Vector));
			while (paths->hasMoreElements()) {
				$var($TreePath, path, $cast($TreePath, paths->nextElement()));
				$var($Object, archivePath, nullptr);
				try {
					$assign(archivePath, getModelIndexsForPath(path));
				} catch ($Error& error) {
					$assign(archivePath, nullptr);
				}
				if (archivePath != nullptr) {
					state->addElement(archivePath);
					state->addElement($($nc(this->expandedState)->get(path)));
				}
			}
			return $of(state);
		}
	}
	return $of(nullptr);
}

void JTree::unarchiveExpandedState(Object$* state) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($Vector, state)) {
		$var($Vector, paths, $cast($Vector, state));
		for (int32_t counter = $nc(paths)->size() - 1; counter >= 0; --counter) {
			$var($Boolean, eState, $cast($Boolean, paths->elementAt(counter--)));
			$var($TreePath, path, nullptr);
			try {
				$assign(path, getPathForIndexs($cast($ints, $(paths->elementAt(counter)))));
				if (path != nullptr) {
					$nc(this->expandedState)->put(path, eState);
				}
			} catch ($Error& error) {
			}
		}
	}
}

$ints* JTree::getModelIndexsForPath($TreePath* path) {
	$useLocalCurrentObjectStackCache();
	if (path != nullptr) {
		$var($TreeModel, model, getModel());
		int32_t count = path->getPathCount();
		$var($ints, indexs, $new($ints, count - 1));
		$var($Object, parent, $nc(model)->getRoot());
		for (int32_t counter = 1; counter < count; ++counter) {
			indexs->set(counter - 1, model->getIndexOfChild(parent, $(path->getPathComponent(counter))));
			$assign(parent, path->getPathComponent(counter));
			if (indexs->get(counter - 1) < 0) {
				return nullptr;
			}
		}
		return indexs;
	}
	return nullptr;
}

$TreePath* JTree::getPathForIndexs($ints* indexs) {
	$useLocalCurrentObjectStackCache();
	if (indexs == nullptr) {
		return nullptr;
	}
	$var($TreeModel, model, getModel());
	if (model == nullptr) {
		return nullptr;
	}
	int32_t count = $nc(indexs)->length;
	$var($Object, parent, $nc(model)->getRoot());
	if (parent == nullptr) {
		return nullptr;
	}
	$var($TreePath, parentPath, $new($TreePath, parent));
	for (int32_t counter = 0; counter < count; ++counter) {
		$assign(parent, model->getChild(parent, indexs->get(counter)));
		if (parent == nullptr) {
			return nullptr;
		}
		$assign(parentPath, $nc(parentPath)->pathByAddingChild(parent));
	}
	return parentPath;
}

$Dimension* JTree::getPreferredScrollableViewportSize() {
	$useLocalCurrentObjectStackCache();
	int32_t width = $nc($(getPreferredSize()))->width;
	int32_t visRows = getVisibleRowCount();
	int32_t height = -1;
	if (isFixedRowHeight()) {
		height = visRows * getRowHeight();
	} else {
		$var($TreeUI, ui, $cast($TreeUI, getUI()));
		if (ui != nullptr && visRows > 0) {
			int32_t rc = ui->getRowCount(this);
			if (rc >= visRows) {
				$var($Rectangle, bounds, getRowBounds(visRows - 1));
				if (bounds != nullptr) {
					height = bounds->y + bounds->height;
				}
			} else if (rc > 0) {
				$var($Rectangle, bounds, getRowBounds(0));
				if (bounds != nullptr) {
					height = bounds->height * visRows;
				}
			}
		}
		if (height == -1) {
			height = 16 * visRows;
		}
	}
	return $new($Dimension, width, height);
}

int32_t JTree::getScrollableUnitIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	if (orientation == $SwingConstants::VERTICAL) {
		$var($Rectangle, rowBounds, nullptr);
		int32_t firstIndex = getClosestRowForLocation(0, $nc(visibleRect)->y);
		if (firstIndex != -1) {
			$assign(rowBounds, getRowBounds(firstIndex));
			if ($nc(rowBounds)->y != $nc(visibleRect)->y) {
				if (direction < 0) {
					return $Math::max(0, (visibleRect->y - rowBounds->y));
				}
				return (rowBounds->y + rowBounds->height - visibleRect->y);
			}
			if (direction < 0) {
				if (firstIndex != 0) {
					$assign(rowBounds, getRowBounds(firstIndex - 1));
					return $nc(rowBounds)->height;
				}
			} else {
				return $nc(rowBounds)->height;
			}
		}
		return 0;
	}
	return 4;
}

int32_t JTree::getScrollableBlockIncrement($Rectangle* visibleRect, int32_t orientation, int32_t direction) {
	return (orientation == $SwingConstants::VERTICAL) ? $nc(visibleRect)->height : visibleRect->width;
}

bool JTree::getScrollableTracksViewportWidth() {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		int32_t var$0 = $nc(parent)->getWidth();
		return var$0 > $nc($(getPreferredSize()))->width;
	}
	return false;
}

bool JTree::getScrollableTracksViewportHeight() {
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, $SwingUtilities::getUnwrappedParent(this));
	if ($instanceOf($JViewport, parent)) {
		int32_t var$0 = $nc(parent)->getHeight();
		return var$0 > $nc($(getPreferredSize()))->height;
	}
	return false;
}

void JTree::setExpandedState($TreePath* path, bool state) {
	$useLocalCurrentObjectStackCache();
	if (path != nullptr) {
		$var($Stack, stack, nullptr);
		$var($TreePath, parentPath, path->getParentPath());
		if ($nc(this->expandedStack)->size() == 0) {
			$assign(stack, $new($Stack));
		} else {
			$assign(stack, $cast($Stack, $nc(this->expandedStack)->pop()));
		}
		{
			$var($Throwable, var$0, nullptr);
			bool return$1 = false;
			try {
				while (parentPath != nullptr) {
					if (isExpanded(parentPath)) {
						$assign(parentPath, nullptr);
					} else {
						$nc(stack)->push(parentPath);
						$assign(parentPath, parentPath->getParentPath());
					}
				}
				for (int32_t counter = $nc(stack)->size() - 1; counter >= 0; --counter) {
					$assign(parentPath, $cast($TreePath, stack->pop()));
					if (!isExpanded(parentPath)) {
						try {
							fireTreeWillExpand(parentPath);
						} catch ($ExpandVetoException& eve) {
							return$1 = true;
							goto $finally;
						}
						$init($Boolean);
						$nc(this->expandedState)->put(parentPath, $Boolean::TRUE);
						fireTreeExpanded(parentPath);
						if (this->accessibleContext != nullptr) {
							$nc(($cast($JTree$AccessibleJTree, this->accessibleContext)))->fireVisibleDataPropertyChange();
						}
					}
				}
			} catch ($Throwable& var$2) {
				$assign(var$0, var$2);
			} $finally: {
				if ($nc(this->expandedStack)->size() < JTree::TEMP_STACK_SIZE) {
					$nc(stack)->removeAllElements();
					$nc(this->expandedStack)->push(stack);
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return;
			}
		}
		if (!state) {
			$var($Object, cValue, $nc(this->expandedState)->get(path));
			if (cValue != nullptr && $nc(($cast($Boolean, cValue)))->booleanValue()) {
				try {
					fireTreeWillCollapse(path);
				} catch ($ExpandVetoException& eve) {
					return;
				}
				$init($Boolean);
				$nc(this->expandedState)->put(path, $Boolean::FALSE);
				fireTreeCollapsed(path);
				bool var$3 = removeDescendantSelectedPaths(path, false);
				if (var$3 && !isPathSelected(path)) {
					addSelectionPath(path);
				}
				if (this->accessibleContext != nullptr) {
					$nc(($cast($JTree$AccessibleJTree, this->accessibleContext)))->fireVisibleDataPropertyChange();
				}
			}
		} else {
			$var($Object, cValue, $nc(this->expandedState)->get(path));
			if (cValue == nullptr || !$nc(($cast($Boolean, cValue)))->booleanValue()) {
				try {
					fireTreeWillExpand(path);
				} catch ($ExpandVetoException& eve) {
					return;
				}
				$init($Boolean);
				$nc(this->expandedState)->put(path, $Boolean::TRUE);
				fireTreeExpanded(path);
				if (this->accessibleContext != nullptr) {
					$nc(($cast($JTree$AccessibleJTree, this->accessibleContext)))->fireVisibleDataPropertyChange();
				}
			}
		}
	}
}

$Enumeration* JTree::getDescendantToggledPaths($TreePath* parent) {
	$useLocalCurrentObjectStackCache();
	if (parent == nullptr) {
		return nullptr;
	}
	$var($Vector, descendants, $new($Vector));
	$var($Enumeration, nodes, $nc(this->expandedState)->keys());
	while ($nc(nodes)->hasMoreElements()) {
		$var($TreePath, path, $cast($TreePath, nodes->nextElement()));
		if ($nc(parent)->isDescendant(path)) {
			descendants->addElement(path);
		}
	}
	return descendants->elements();
}

void JTree::removeDescendantToggledPaths($Enumeration* toRemove) {
	$useLocalCurrentObjectStackCache();
	if (toRemove != nullptr) {
		while (toRemove->hasMoreElements()) {
			$var($Enumeration, descendants, getDescendantToggledPaths($cast($TreePath, $(toRemove->nextElement()))));
			if (descendants != nullptr) {
				while (descendants->hasMoreElements()) {
					$nc(this->expandedState)->remove($(descendants->nextElement()));
				}
			}
		}
	}
}

void JTree::clearToggledPaths() {
	$nc(this->expandedState)->clear();
}

$TreeModelListener* JTree::createTreeModelListener() {
	return $new($JTree$TreeModelHandler, this);
}

bool JTree::removeDescendantSelectedPaths($TreePath* path, bool includePath) {
	$useLocalCurrentObjectStackCache();
	$var($TreePathArray, toRemove, getDescendantSelectedPaths(path, includePath));
	if (toRemove != nullptr) {
		$nc($(getSelectionModel()))->removeSelectionPaths(toRemove);
		return true;
	}
	return false;
}

$TreePathArray* JTree::getDescendantSelectedPaths($TreePath* path, bool includePath) {
	$useLocalCurrentObjectStackCache();
	$var($TreeSelectionModel, sm, getSelectionModel());
	$var($TreePathArray, selPaths, (sm != nullptr) ? $nc(sm)->getSelectionPaths() : ($TreePathArray*)nullptr);
	if (selPaths != nullptr) {
		bool shouldRemove = false;
		for (int32_t counter = selPaths->length - 1; counter >= 0; --counter) {
			bool var$0 = selPaths->get(counter) != nullptr && $nc(path)->isDescendant(selPaths->get(counter));
			if (var$0 && (!path->equals(selPaths->get(counter)) || includePath)) {
				shouldRemove = true;
			} else {
				selPaths->set(counter, nullptr);
			}
		}
		if (!shouldRemove) {
			$assign(selPaths, nullptr);
		}
		return selPaths;
	}
	return nullptr;
}

void JTree::removeDescendantSelectedPaths($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($TreePath, pPath, $SwingUtilities2::getTreePath(e, $(getModel())));
	$var($ObjectArray, oldChildren, $nc(e)->getChildren());
	$var($TreeSelectionModel, sm, getSelectionModel());
	if (sm != nullptr && pPath != nullptr && oldChildren != nullptr && oldChildren->length > 0) {
		for (int32_t counter = oldChildren->length - 1; counter >= 0; --counter) {
			removeDescendantSelectedPaths($(pPath->pathByAddingChild(oldChildren->get(counter))), true);
		}
	}
}

void JTree::setUIProperty($String* propertyName, Object$* value) {
	if (propertyName == "rowHeight"_s) {
		if (!this->rowHeightSet) {
			setRowHeight($nc(($cast($Number, value)))->intValue());
			this->rowHeightSet = false;
		}
	} else if (propertyName == "scrollsOnExpand"_s) {
		if (!this->scrollsOnExpandSet) {
			setScrollsOnExpand($nc(($cast($Boolean, value)))->booleanValue());
			this->scrollsOnExpandSet = false;
		}
	} else if (propertyName == "showsRootHandles"_s) {
		if (!this->showsRootHandlesSet) {
			setShowsRootHandles($nc(($cast($Boolean, value)))->booleanValue());
			this->showsRootHandlesSet = false;
		}
	} else {
		$JComponent::setUIProperty(propertyName, value);
	}
}

$String* JTree::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, rootVisibleString, this->rootVisible ? "true"_s : "false"_s);
	$var($String, showsRootHandlesString, this->showsRootHandles ? "true"_s : "false"_s);
	$var($String, editableString, this->editable ? "true"_s : "false"_s);
	$var($String, largeModelString, this->largeModel ? "true"_s : "false"_s);
	$var($String, invokesStopCellEditingString, this->invokesStopCellEditing ? "true"_s : "false"_s);
	$var($String, scrollsOnExpandString, this->scrollsOnExpand ? "true"_s : "false"_s);
	return $str({$($JComponent::paramString()), ",editable="_s, editableString, ",invokesStopCellEditing="_s, invokesStopCellEditingString, ",largeModel="_s, largeModelString, ",rootVisible="_s, rootVisibleString, ",rowHeight="_s, $$str(this->rowHeight), ",scrollsOnExpand="_s, scrollsOnExpandString, ",showsRootHandles="_s, showsRootHandlesString, ",toggleClickCount="_s, 
	$$str(this->toggleClickCount), ",visibleRowCount="_s, $$str(this->visibleRowCount)});
}

$AccessibleContext* JTree::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($JTree$AccessibleJTree, this));
	}
	return this->accessibleContext;
}

void clinit$JTree($Class* class$) {
	$assignStatic(JTree::uiClassID, "TreeUI"_s);
	$assignStatic(JTree::CELL_RENDERER_PROPERTY, "cellRenderer"_s);
	$assignStatic(JTree::TREE_MODEL_PROPERTY, "model"_s);
	$assignStatic(JTree::ROOT_VISIBLE_PROPERTY, "rootVisible"_s);
	$assignStatic(JTree::SHOWS_ROOT_HANDLES_PROPERTY, "showsRootHandles"_s);
	$assignStatic(JTree::ROW_HEIGHT_PROPERTY, "rowHeight"_s);
	$assignStatic(JTree::CELL_EDITOR_PROPERTY, "cellEditor"_s);
	$assignStatic(JTree::EDITABLE_PROPERTY, "editable"_s);
	$assignStatic(JTree::LARGE_MODEL_PROPERTY, "largeModel"_s);
	$assignStatic(JTree::SELECTION_MODEL_PROPERTY, "selectionModel"_s);
	$assignStatic(JTree::VISIBLE_ROW_COUNT_PROPERTY, "visibleRowCount"_s);
	$assignStatic(JTree::INVOKES_STOP_CELL_EDITING_PROPERTY, "invokesStopCellEditing"_s);
	$assignStatic(JTree::SCROLLS_ON_EXPAND_PROPERTY, "scrollsOnExpand"_s);
	$assignStatic(JTree::TOGGLE_CLICK_COUNT_PROPERTY, "toggleClickCount"_s);
	$assignStatic(JTree::LEAD_SELECTION_PATH_PROPERTY, "leadSelectionPath"_s);
	$assignStatic(JTree::ANCHOR_SELECTION_PATH_PROPERTY, "anchorSelectionPath"_s);
	$assignStatic(JTree::EXPANDS_SELECTED_PATHS_PROPERTY, "expandsSelectedPaths"_s);
	JTree::$assertionsDisabled = !JTree::class$->desiredAssertionStatus();
	JTree::TEMP_STACK_SIZE = 11;
}

JTree::JTree() {
}

$Class* JTree::load$($String* name, bool initialize) {
	$loadClass(JTree, name, initialize, &_JTree_ClassInfo_, clinit$JTree, allocate$JTree);
	return class$;
}

$Class* JTree::class$ = nullptr;

	} // swing
} // javax