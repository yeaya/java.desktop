#include <javax/swing/plaf/nimbus/NimbusDefaults.h>

#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/WeakHashMap.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/BorderUIResource.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/DimensionUIResource.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/nimbus/AbstractRegionPainter$PaintContext$CacheMode.h>
#include <javax/swing/plaf/nimbus/ArrowButtonPainter.h>
#include <javax/swing/plaf/nimbus/ButtonPainter.h>
#include <javax/swing/plaf/nimbus/CheckBoxMenuItemPainter.h>
#include <javax/swing/plaf/nimbus/CheckBoxPainter.h>
#include <javax/swing/plaf/nimbus/ComboBoxArrowButtonEditableState.h>
#include <javax/swing/plaf/nimbus/ComboBoxArrowButtonPainter.h>
#include <javax/swing/plaf/nimbus/ComboBoxEditableState.h>
#include <javax/swing/plaf/nimbus/ComboBoxPainter.h>
#include <javax/swing/plaf/nimbus/ComboBoxTextFieldPainter.h>
#include <javax/swing/plaf/nimbus/DerivedColor$UIResource.h>
#include <javax/swing/plaf/nimbus/DerivedColor.h>
#include <javax/swing/plaf/nimbus/DesktopIconPainter.h>
#include <javax/swing/plaf/nimbus/DesktopPanePainter.h>
#include <javax/swing/plaf/nimbus/EditorPanePainter.h>
#include <javax/swing/plaf/nimbus/FileChooserPainter.h>
#include <javax/swing/plaf/nimbus/FormattedTextFieldPainter.h>
#include <javax/swing/plaf/nimbus/InternalFramePainter.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneCloseButtonPainter.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneCloseButtonWindowNotFocusedState.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneIconifyButtonPainter.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneIconifyButtonWindowNotFocusedState.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMaximizeButtonPainter.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMaximizeButtonWindowMaximizedState.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMenuButtonPainter.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneMenuButtonWindowNotFocusedState.h>
#include <javax/swing/plaf/nimbus/InternalFrameTitlePaneWindowFocusedState.h>
#include <javax/swing/plaf/nimbus/InternalFrameWindowFocusedState.h>
#include <javax/swing/plaf/nimbus/MenuBarMenuPainter.h>
#include <javax/swing/plaf/nimbus/MenuBarPainter.h>
#include <javax/swing/plaf/nimbus/MenuItemPainter.h>
#include <javax/swing/plaf/nimbus/MenuPainter.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$ColorTree.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$DefaultsListener.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$DerivedFont.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyPainter.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyStyle$Part.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$LazyStyle.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults$PainterBorder.h>
#include <javax/swing/plaf/nimbus/NimbusIcon.h>
#include <javax/swing/plaf/nimbus/OptionPaneMessageAreaOptionPaneLabelPainter.h>
#include <javax/swing/plaf/nimbus/OptionPanePainter.h>
#include <javax/swing/plaf/nimbus/PasswordFieldPainter.h>
#include <javax/swing/plaf/nimbus/PopupMenuPainter.h>
#include <javax/swing/plaf/nimbus/PopupMenuSeparatorPainter.h>
#include <javax/swing/plaf/nimbus/ProgressBarFinishedState.h>
#include <javax/swing/plaf/nimbus/ProgressBarIndeterminateState.h>
#include <javax/swing/plaf/nimbus/ProgressBarPainter.h>
#include <javax/swing/plaf/nimbus/RadioButtonMenuItemPainter.h>
#include <javax/swing/plaf/nimbus/RadioButtonPainter.h>
#include <javax/swing/plaf/nimbus/ScrollBarButtonPainter.h>
#include <javax/swing/plaf/nimbus/ScrollBarThumbPainter.h>
#include <javax/swing/plaf/nimbus/ScrollBarTrackPainter.h>
#include <javax/swing/plaf/nimbus/ScrollPanePainter.h>
#include <javax/swing/plaf/nimbus/SeparatorPainter.h>
#include <javax/swing/plaf/nimbus/SliderArrowShapeState.h>
#include <javax/swing/plaf/nimbus/SliderThumbArrowShapeState.h>
#include <javax/swing/plaf/nimbus/SliderThumbPainter.h>
#include <javax/swing/plaf/nimbus/SliderTrackArrowShapeState.h>
#include <javax/swing/plaf/nimbus/SliderTrackPainter.h>
#include <javax/swing/plaf/nimbus/SpinnerNextButtonPainter.h>
#include <javax/swing/plaf/nimbus/SpinnerPanelSpinnerFormattedTextFieldPainter.h>
#include <javax/swing/plaf/nimbus/SpinnerPreviousButtonPainter.h>
#include <javax/swing/plaf/nimbus/SplitPaneDividerPainter.h>
#include <javax/swing/plaf/nimbus/SplitPaneDividerVerticalState.h>
#include <javax/swing/plaf/nimbus/SplitPaneVerticalState.h>
#include <javax/swing/plaf/nimbus/TabbedPaneTabAreaPainter.h>
#include <javax/swing/plaf/nimbus/TabbedPaneTabPainter.h>
#include <javax/swing/plaf/nimbus/TableEditorPainter.h>
#include <javax/swing/plaf/nimbus/TableHeaderPainter.h>
#include <javax/swing/plaf/nimbus/TableHeaderRendererPainter.h>
#include <javax/swing/plaf/nimbus/TableHeaderRendererSortedState.h>
#include <javax/swing/plaf/nimbus/TextAreaNotInScrollPaneState.h>
#include <javax/swing/plaf/nimbus/TextAreaPainter.h>
#include <javax/swing/plaf/nimbus/TextFieldPainter.h>
#include <javax/swing/plaf/nimbus/TextPanePainter.h>
#include <javax/swing/plaf/nimbus/ToggleButtonPainter.h>
#include <javax/swing/plaf/nimbus/ToolBarButtonPainter.h>
#include <javax/swing/plaf/nimbus/ToolBarEastState.h>
#include <javax/swing/plaf/nimbus/ToolBarNorthState.h>
#include <javax/swing/plaf/nimbus/ToolBarPainter.h>
#include <javax/swing/plaf/nimbus/ToolBarSouthState.h>
#include <javax/swing/plaf/nimbus/ToolBarToggleButtonPainter.h>
#include <javax/swing/plaf/nimbus/ToolBarWestState.h>
#include <javax/swing/plaf/nimbus/ToolTipPainter.h>
#include <javax/swing/plaf/nimbus/TreeCellEditorPainter.h>
#include <javax/swing/plaf/nimbus/TreeCellPainter.h>
#include <javax/swing/plaf/nimbus/TreePainter.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <sun/font/FontUtilities.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle.h>
#include <jcpp.h>

#undef ARROWICON_DISABLED
#undef ARROWICON_ENABLED
#undef ARROWICON_ENABLED_SELECTED
#undef ARROW_BUTTON
#undef ASCENDINGSORTICON_ENABLED
#undef BACKGROUND_DEFAULT
#undef BACKGROUND_DEFAULT_FOCUSED
#undef BACKGROUND_DISABLED
#undef BACKGROUND_DISABLED_ARROWSHAPE
#undef BACKGROUND_DISABLED_EDITABLE
#undef BACKGROUND_DISABLED_NOTINSCROLLPANE
#undef BACKGROUND_DISABLED_PRESSED
#undef BACKGROUND_DISABLED_SELECTED
#undef BACKGROUND_DISABLED_SORTED
#undef BACKGROUND_DISABLED_WINDOWMAXIMIZED
#undef BACKGROUND_ENABLED
#undef BACKGROUND_ENABLED_ARROWSHAPE
#undef BACKGROUND_ENABLED_EDITABLE
#undef BACKGROUND_ENABLED_FOCUSED
#undef BACKGROUND_ENABLED_FOCUSED_SORTED
#undef BACKGROUND_ENABLED_MOUSEOVER
#undef BACKGROUND_ENABLED_NOTINSCROLLPANE
#undef BACKGROUND_ENABLED_PRESSED
#undef BACKGROUND_ENABLED_SELECTED
#undef BACKGROUND_ENABLED_SORTED
#undef BACKGROUND_ENABLED_WINDOWFOCUSED
#undef BACKGROUND_ENABLED_WINDOWMAXIMIZED
#undef BACKGROUND_ENABLED_WINDOWNOTFOCUSED
#undef BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED
#undef BACKGROUND_FOCUSED
#undef BACKGROUND_FOCUSED_ARROWSHAPE
#undef BACKGROUND_FOCUSED_EDITABLE
#undef BACKGROUND_FOCUSED_MOUSEOVER
#undef BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE
#undef BACKGROUND_FOCUSED_PRESSED
#undef BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE
#undef BACKGROUND_MOUSEOVER
#undef BACKGROUND_MOUSEOVER_ARROWSHAPE
#undef BACKGROUND_MOUSEOVER_DEFAULT
#undef BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED
#undef BACKGROUND_MOUSEOVER_EDITABLE
#undef BACKGROUND_MOUSEOVER_FOCUSED
#undef BACKGROUND_MOUSEOVER_SELECTED
#undef BACKGROUND_MOUSEOVER_SELECTED_FOCUSED
#undef BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED
#undef BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED
#undef BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED
#undef BACKGROUND_PRESSED
#undef BACKGROUND_PRESSED_ARROWSHAPE
#undef BACKGROUND_PRESSED_DEFAULT
#undef BACKGROUND_PRESSED_DEFAULT_FOCUSED
#undef BACKGROUND_PRESSED_EDITABLE
#undef BACKGROUND_PRESSED_FOCUSED
#undef BACKGROUND_PRESSED_SELECTED
#undef BACKGROUND_PRESSED_SELECTED_FOCUSED
#undef BACKGROUND_PRESSED_WINDOWMAXIMIZED
#undef BACKGROUND_PRESSED_WINDOWNOTFOCUSED
#undef BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED
#undef BACKGROUND_SELECTED
#undef BACKGROUND_SELECTED_DISABLED
#undef BACKGROUND_SELECTED_EDITABLE
#undef BACKGROUND_SELECTED_FOCUSED
#undef BACKGROUND_SELECTED_MOUSEOVER
#undef BACKGROUND_SELECTED_MOUSEOVER_FOCUSED
#undef BACKGROUND_SELECTED_PRESSED
#undef BACKGROUND_SELECTED_PRESSED_FOCUSED
#undef BORDER_DISABLED
#undef BORDER_DISABLED_NOTINSCROLLPANE
#undef BORDER_EAST
#undef BORDER_ENABLED
#undef BORDER_ENABLED_FOCUSED
#undef BORDER_ENABLED_NOTINSCROLLPANE
#undef BORDER_FOCUSED
#undef BORDER_FOCUSED_NOTINSCROLLPANE
#undef BORDER_NORTH
#undef BORDER_SOUTH
#undef BORDER_WEST
#undef BUTTON
#undef CHECKICON_DISABLED_SELECTED
#undef CHECKICON_ENABLED_SELECTED
#undef CHECKICON_SELECTED_MOUSEOVER
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef CLOSEDICON_ENABLED
#undef COLLAPSEDICON_ENABLED
#undef COLLAPSEDICON_ENABLED_SELECTED
#undef COLOR_CHOOSER
#undef COMBO_BOX
#undef DESCENDINGSORTICON_ENABLED
#undef DESKTOP_ICON
#undef DESKTOP_PANE
#undef DETAILSVIEWICON_ENABLED
#undef DIRECTORYICON_ENABLED
#undef EDITOR_PANE
#undef ERRORICON_ENABLED
#undef EXPANDEDICON_ENABLED
#undef EXPANDEDICON_ENABLED_SELECTED
#undef FALSE
#undef FILEICON_ENABLED
#undef FILE_CHOOSER
#undef FIXED_SIZES
#undef FLOPPYDRIVEICON_ENABLED
#undef FOREGROUND_DISABLED
#undef FOREGROUND_DISABLED_FINISHED
#undef FOREGROUND_DISABLED_INDETERMINATE
#undef FOREGROUND_ENABLED
#undef FOREGROUND_ENABLED_FINISHED
#undef FOREGROUND_ENABLED_INDETERMINATE
#undef FOREGROUND_ENABLED_VERTICAL
#undef FOREGROUND_FOCUSED
#undef FOREGROUND_MOUSEOVER
#undef FOREGROUND_MOUSEOVER_FOCUSED
#undef FOREGROUND_PRESSED
#undef FOREGROUND_PRESSED_FOCUSED
#undef FOREGROUND_SELECTED
#undef FORMATTED_TEXT_FIELD
#undef HANDLEICON_ENABLED
#undef HARDDRIVEICON_ENABLED
#undef HOMEFOLDERICON_ENABLED
#undef ICON_DISABLED
#undef ICON_DISABLED_SELECTED
#undef ICON_ENABLED
#undef ICON_ENABLED_WINDOWNOTFOCUSED
#undef ICON_FOCUSED
#undef ICON_MOUSEOVER
#undef ICON_MOUSEOVER_FOCUSED
#undef ICON_MOUSEOVER_SELECTED
#undef ICON_MOUSEOVER_SELECTED_FOCUSED
#undef ICON_MOUSEOVER_WINDOWNOTFOCUSED
#undef ICON_PRESSED
#undef ICON_PRESSED_FOCUSED
#undef ICON_PRESSED_SELECTED
#undef ICON_PRESSED_SELECTED_FOCUSED
#undef ICON_PRESSED_WINDOWNOTFOCUSED
#undef ICON_SELECTED
#undef ICON_SELECTED_FOCUSED
#undef INFORMATIONICON_ENABLED
#undef INTERNAL_FRAME
#undef INTERNAL_FRAME_TITLE_PANE
#undef LABEL
#undef LEAFICON_ENABLED
#undef LIST
#undef LISTVIEWICON_ENABLED
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef MENU_ITEM_ACCELERATOR
#undef NEWFOLDERICON_ENABLED
#undef NINE_SQUARE_SCALE
#undef NO_CACHING
#undef OPENICON_ENABLED
#undef OPTION_PANE
#undef PANEL
#undef PASSWORD_FIELD
#undef PLAIN
#undef POPUP_MENU
#undef POPUP_MENU_SEPARATOR
#undef POSITIVE_INFINITY
#undef PROGRESS_BAR
#undef QUESTIONICON_ENABLED
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef ROOT_PANE
#undef SCROLL_BAR
#undef SCROLL_BAR_THUMB
#undef SCROLL_BAR_TRACK
#undef SCROLL_PANE
#undef SEPARATOR
#undef SLIDER
#undef SLIDER_THUMB
#undef SLIDER_TRACK
#undef SPINNER
#undef SPLIT_PANE
#undef SPLIT_PANE_DIVIDER
#undef TABBED_PANE
#undef TABBED_PANE_CONTENT
#undef TABBED_PANE_TAB
#undef TABBED_PANE_TAB_AREA
#undef TABLE
#undef TABLE_HEADER
#undef TEXT_AREA
#undef TEXT_FIELD
#undef TEXT_PANE
#undef TOGGLE_BUTTON
#undef TOOL_BAR
#undef TOOL_BAR_SEPARATOR
#undef TOOL_TIP
#undef TREE
#undef TREE_CELL
#undef TRUE
#undef UPFOLDERICON_ENABLED
#undef VIEWPORT
#undef WARNINGICON_ENABLED

using $NimbusDefaults$LazyStyle$PartArray = $Array<::javax::swing::plaf::nimbus::NimbusDefaults$LazyStyle$Part>;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $WeakHashMap = ::java::util::WeakHashMap;
using $BorderFactory = ::javax::swing::BorderFactory;
using $JComponent = ::javax::swing::JComponent;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $BorderUIResource = ::javax::swing::plaf::BorderUIResource;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $DimensionUIResource = ::javax::swing::plaf::DimensionUIResource;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $AbstractRegionPainter$PaintContext$CacheMode = ::javax::swing::plaf::nimbus::AbstractRegionPainter$PaintContext$CacheMode;
using $ArrowButtonPainter = ::javax::swing::plaf::nimbus::ArrowButtonPainter;
using $ButtonPainter = ::javax::swing::plaf::nimbus::ButtonPainter;
using $CheckBoxMenuItemPainter = ::javax::swing::plaf::nimbus::CheckBoxMenuItemPainter;
using $CheckBoxPainter = ::javax::swing::plaf::nimbus::CheckBoxPainter;
using $ComboBoxArrowButtonEditableState = ::javax::swing::plaf::nimbus::ComboBoxArrowButtonEditableState;
using $ComboBoxArrowButtonPainter = ::javax::swing::plaf::nimbus::ComboBoxArrowButtonPainter;
using $ComboBoxEditableState = ::javax::swing::plaf::nimbus::ComboBoxEditableState;
using $ComboBoxPainter = ::javax::swing::plaf::nimbus::ComboBoxPainter;
using $ComboBoxTextFieldPainter = ::javax::swing::plaf::nimbus::ComboBoxTextFieldPainter;
using $DerivedColor = ::javax::swing::plaf::nimbus::DerivedColor;
using $DerivedColor$UIResource = ::javax::swing::plaf::nimbus::DerivedColor$UIResource;
using $DesktopIconPainter = ::javax::swing::plaf::nimbus::DesktopIconPainter;
using $DesktopPanePainter = ::javax::swing::plaf::nimbus::DesktopPanePainter;
using $EditorPanePainter = ::javax::swing::plaf::nimbus::EditorPanePainter;
using $FileChooserPainter = ::javax::swing::plaf::nimbus::FileChooserPainter;
using $FormattedTextFieldPainter = ::javax::swing::plaf::nimbus::FormattedTextFieldPainter;
using $InternalFramePainter = ::javax::swing::plaf::nimbus::InternalFramePainter;
using $InternalFrameTitlePaneCloseButtonPainter = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneCloseButtonPainter;
using $InternalFrameTitlePaneCloseButtonWindowNotFocusedState = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneCloseButtonWindowNotFocusedState;
using $InternalFrameTitlePaneIconifyButtonPainter = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneIconifyButtonPainter;
using $InternalFrameTitlePaneIconifyButtonWindowNotFocusedState = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneIconifyButtonWindowNotFocusedState;
using $InternalFrameTitlePaneMaximizeButtonPainter = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneMaximizeButtonPainter;
using $InternalFrameTitlePaneMaximizeButtonWindowMaximizedState = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneMaximizeButtonWindowMaximizedState;
using $InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState;
using $InternalFrameTitlePaneMenuButtonPainter = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneMenuButtonPainter;
using $InternalFrameTitlePaneMenuButtonWindowNotFocusedState = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneMenuButtonWindowNotFocusedState;
using $InternalFrameTitlePaneWindowFocusedState = ::javax::swing::plaf::nimbus::InternalFrameTitlePaneWindowFocusedState;
using $InternalFrameWindowFocusedState = ::javax::swing::plaf::nimbus::InternalFrameWindowFocusedState;
using $MenuBarMenuPainter = ::javax::swing::plaf::nimbus::MenuBarMenuPainter;
using $MenuBarPainter = ::javax::swing::plaf::nimbus::MenuBarPainter;
using $MenuItemPainter = ::javax::swing::plaf::nimbus::MenuItemPainter;
using $MenuPainter = ::javax::swing::plaf::nimbus::MenuPainter;
using $NimbusDefaults$ColorTree = ::javax::swing::plaf::nimbus::NimbusDefaults$ColorTree;
using $NimbusDefaults$DefaultsListener = ::javax::swing::plaf::nimbus::NimbusDefaults$DefaultsListener;
using $NimbusDefaults$DerivedFont = ::javax::swing::plaf::nimbus::NimbusDefaults$DerivedFont;
using $NimbusDefaults$LazyPainter = ::javax::swing::plaf::nimbus::NimbusDefaults$LazyPainter;
using $NimbusDefaults$LazyStyle = ::javax::swing::plaf::nimbus::NimbusDefaults$LazyStyle;
using $NimbusDefaults$PainterBorder = ::javax::swing::plaf::nimbus::NimbusDefaults$PainterBorder;
using $NimbusIcon = ::javax::swing::plaf::nimbus::NimbusIcon;
using $OptionPaneMessageAreaOptionPaneLabelPainter = ::javax::swing::plaf::nimbus::OptionPaneMessageAreaOptionPaneLabelPainter;
using $OptionPanePainter = ::javax::swing::plaf::nimbus::OptionPanePainter;
using $PasswordFieldPainter = ::javax::swing::plaf::nimbus::PasswordFieldPainter;
using $PopupMenuPainter = ::javax::swing::plaf::nimbus::PopupMenuPainter;
using $PopupMenuSeparatorPainter = ::javax::swing::plaf::nimbus::PopupMenuSeparatorPainter;
using $ProgressBarFinishedState = ::javax::swing::plaf::nimbus::ProgressBarFinishedState;
using $ProgressBarIndeterminateState = ::javax::swing::plaf::nimbus::ProgressBarIndeterminateState;
using $ProgressBarPainter = ::javax::swing::plaf::nimbus::ProgressBarPainter;
using $RadioButtonMenuItemPainter = ::javax::swing::plaf::nimbus::RadioButtonMenuItemPainter;
using $RadioButtonPainter = ::javax::swing::plaf::nimbus::RadioButtonPainter;
using $ScrollBarButtonPainter = ::javax::swing::plaf::nimbus::ScrollBarButtonPainter;
using $ScrollBarThumbPainter = ::javax::swing::plaf::nimbus::ScrollBarThumbPainter;
using $ScrollBarTrackPainter = ::javax::swing::plaf::nimbus::ScrollBarTrackPainter;
using $ScrollPanePainter = ::javax::swing::plaf::nimbus::ScrollPanePainter;
using $SeparatorPainter = ::javax::swing::plaf::nimbus::SeparatorPainter;
using $SliderArrowShapeState = ::javax::swing::plaf::nimbus::SliderArrowShapeState;
using $SliderThumbArrowShapeState = ::javax::swing::plaf::nimbus::SliderThumbArrowShapeState;
using $SliderThumbPainter = ::javax::swing::plaf::nimbus::SliderThumbPainter;
using $SliderTrackArrowShapeState = ::javax::swing::plaf::nimbus::SliderTrackArrowShapeState;
using $SliderTrackPainter = ::javax::swing::plaf::nimbus::SliderTrackPainter;
using $SpinnerNextButtonPainter = ::javax::swing::plaf::nimbus::SpinnerNextButtonPainter;
using $SpinnerPanelSpinnerFormattedTextFieldPainter = ::javax::swing::plaf::nimbus::SpinnerPanelSpinnerFormattedTextFieldPainter;
using $SpinnerPreviousButtonPainter = ::javax::swing::plaf::nimbus::SpinnerPreviousButtonPainter;
using $SplitPaneDividerPainter = ::javax::swing::plaf::nimbus::SplitPaneDividerPainter;
using $SplitPaneDividerVerticalState = ::javax::swing::plaf::nimbus::SplitPaneDividerVerticalState;
using $SplitPaneVerticalState = ::javax::swing::plaf::nimbus::SplitPaneVerticalState;
using $TabbedPaneTabAreaPainter = ::javax::swing::plaf::nimbus::TabbedPaneTabAreaPainter;
using $TabbedPaneTabPainter = ::javax::swing::plaf::nimbus::TabbedPaneTabPainter;
using $TableEditorPainter = ::javax::swing::plaf::nimbus::TableEditorPainter;
using $TableHeaderPainter = ::javax::swing::plaf::nimbus::TableHeaderPainter;
using $TableHeaderRendererPainter = ::javax::swing::plaf::nimbus::TableHeaderRendererPainter;
using $TableHeaderRendererSortedState = ::javax::swing::plaf::nimbus::TableHeaderRendererSortedState;
using $TextAreaNotInScrollPaneState = ::javax::swing::plaf::nimbus::TextAreaNotInScrollPaneState;
using $TextAreaPainter = ::javax::swing::plaf::nimbus::TextAreaPainter;
using $TextFieldPainter = ::javax::swing::plaf::nimbus::TextFieldPainter;
using $TextPanePainter = ::javax::swing::plaf::nimbus::TextPanePainter;
using $ToggleButtonPainter = ::javax::swing::plaf::nimbus::ToggleButtonPainter;
using $ToolBarButtonPainter = ::javax::swing::plaf::nimbus::ToolBarButtonPainter;
using $ToolBarEastState = ::javax::swing::plaf::nimbus::ToolBarEastState;
using $ToolBarNorthState = ::javax::swing::plaf::nimbus::ToolBarNorthState;
using $ToolBarPainter = ::javax::swing::plaf::nimbus::ToolBarPainter;
using $ToolBarSouthState = ::javax::swing::plaf::nimbus::ToolBarSouthState;
using $ToolBarToggleButtonPainter = ::javax::swing::plaf::nimbus::ToolBarToggleButtonPainter;
using $ToolBarWestState = ::javax::swing::plaf::nimbus::ToolBarWestState;
using $ToolTipPainter = ::javax::swing::plaf::nimbus::ToolTipPainter;
using $TreeCellEditorPainter = ::javax::swing::plaf::nimbus::TreeCellEditorPainter;
using $TreeCellPainter = ::javax::swing::plaf::nimbus::TreeCellPainter;
using $TreePainter = ::javax::swing::plaf::nimbus::TreePainter;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $FontUtilities = ::sun::font::FontUtilities;
using $DefaultSynthStyle = ::sun::swing::plaf::synth::DefaultSynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusDefaults_FieldInfo_[] = {
	{"m", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/swing/plaf/synth/Region;Ljava/util/List<Ljavax/swing/plaf/nimbus/NimbusDefaults$LazyStyle;>;>;", $PRIVATE, $field(NimbusDefaults, m)},
	{"registeredRegions", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/swing/plaf/synth/Region;>;", $PRIVATE, $field(NimbusDefaults, registeredRegions)},
	{"overridesCache", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/swing/JComponent;Ljava/util/Map<Ljavax/swing/plaf/synth/Region;Ljavax/swing/plaf/synth/SynthStyle;>;>;", $PRIVATE, $field(NimbusDefaults, overridesCache)},
	{"defaultStyle", "Lsun/swing/plaf/synth/DefaultSynthStyle;", nullptr, $PRIVATE, $field(NimbusDefaults, defaultStyle)},
	{"defaultFont", "Ljavax/swing/plaf/FontUIResource;", nullptr, $PRIVATE, $field(NimbusDefaults, defaultFont)},
	{"colorTree", "Ljavax/swing/plaf/nimbus/NimbusDefaults$ColorTree;", nullptr, $PRIVATE, $field(NimbusDefaults, colorTree)},
	{"defaultsListener", "Ljavax/swing/plaf/nimbus/NimbusDefaults$DefaultsListener;", nullptr, $PRIVATE, $field(NimbusDefaults, defaultsListener)},
	{"derivedColors", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/swing/plaf/nimbus/DerivedColor;Ljavax/swing/plaf/nimbus/DerivedColor;>;", $PRIVATE, $field(NimbusDefaults, derivedColors)},
	{}
};

$MethodInfo _NimbusDefaults_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NimbusDefaults::*)()>(&NimbusDefaults::init$))},
	{"addColor", "(Ljavax/swing/UIDefaults;Ljava/lang/String;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusDefaults::*)($UIDefaults*,$String*,int32_t,int32_t,int32_t,int32_t)>(&NimbusDefaults::addColor))},
	{"addColor", "(Ljavax/swing/UIDefaults;Ljava/lang/String;Ljava/lang/String;FFFI)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusDefaults::*)($UIDefaults*,$String*,$String*,float,float,float,int32_t)>(&NimbusDefaults::addColor))},
	{"addColor", "(Ljavax/swing/UIDefaults;Ljava/lang/String;Ljava/lang/String;FFFIZ)V", nullptr, $PRIVATE, $method(static_cast<void(NimbusDefaults::*)($UIDefaults*,$String*,$String*,float,float,float,int32_t,bool)>(&NimbusDefaults::addColor))},
	{"clearOverridesCache", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(static_cast<void(NimbusDefaults::*)($JComponent*)>(&NimbusDefaults::clearOverridesCache))},
	{"getDerivedColor", "(Ljava/lang/String;FFFIZ)Ljavax/swing/plaf/nimbus/DerivedColor;", nullptr, $PUBLIC, $method(static_cast<$DerivedColor*(NimbusDefaults::*)($String*,float,float,float,int32_t,bool)>(&NimbusDefaults::getDerivedColor))},
	{"getDerivedColor", "(Ljava/lang/String;Ljava/lang/String;FFFIZ)Ljavax/swing/plaf/nimbus/DerivedColor;", nullptr, $PRIVATE, $method(static_cast<$DerivedColor*(NimbusDefaults::*)($String*,$String*,float,float,float,int32_t,bool)>(&NimbusDefaults::getDerivedColor))},
	{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, 0, $method(static_cast<$SynthStyle*(NimbusDefaults::*)($JComponent*,$Region*)>(&NimbusDefaults::getStyle))},
	{"initialize", "()V", nullptr, 0, $method(static_cast<void(NimbusDefaults::*)()>(&NimbusDefaults::initialize))},
	{"initializeDefaults", "(Ljavax/swing/UIDefaults;)V", nullptr, 0, $method(static_cast<void(NimbusDefaults::*)($UIDefaults*)>(&NimbusDefaults::initializeDefaults))},
	{"register", "(Ljavax/swing/plaf/synth/Region;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(NimbusDefaults::*)($Region*,$String*)>(&NimbusDefaults::register$))},
	{"uninitialize", "()V", nullptr, 0, $method(static_cast<void(NimbusDefaults::*)()>(&NimbusDefaults::uninitialize))},
	{}
};

$InnerClassInfo _NimbusDefaults_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusDefaults$PainterBorder", "javax.swing.plaf.nimbus.NimbusDefaults", "PainterBorder", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.plaf.nimbus.NimbusDefaults$DefaultsListener", "javax.swing.plaf.nimbus.NimbusDefaults", "DefaultsListener", $PRIVATE},
	{"javax.swing.plaf.nimbus.NimbusDefaults$ColorTree", "javax.swing.plaf.nimbus.NimbusDefaults", "ColorTree", $PRIVATE},
	{"javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle", "javax.swing.plaf.nimbus.NimbusDefaults", "LazyStyle", $PRIVATE | $FINAL},
	{"javax.swing.plaf.nimbus.NimbusDefaults$LazyPainter", "javax.swing.plaf.nimbus.NimbusDefaults", "LazyPainter", $PRIVATE | $STATIC | $FINAL},
	{"javax.swing.plaf.nimbus.NimbusDefaults$DerivedFont", "javax.swing.plaf.nimbus.NimbusDefaults", "DerivedFont", $STATIC | $FINAL},
	{}
};

$ClassInfo _NimbusDefaults_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusDefaults",
	"java.lang.Object",
	nullptr,
	_NimbusDefaults_FieldInfo_,
	_NimbusDefaults_MethodInfo_,
	nullptr,
	nullptr,
	_NimbusDefaults_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusDefaults$PainterBorder,javax.swing.plaf.nimbus.NimbusDefaults$DefaultsListener,javax.swing.plaf.nimbus.NimbusDefaults$ColorTree,javax.swing.plaf.nimbus.NimbusDefaults$ColorTree$Node,javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle,javax.swing.plaf.nimbus.NimbusDefaults$LazyStyle$Part,javax.swing.plaf.nimbus.NimbusDefaults$LazyPainter,javax.swing.plaf.nimbus.NimbusDefaults$DerivedFont"
};

$Object* allocate$NimbusDefaults($Class* clazz) {
	return $of($alloc(NimbusDefaults));
}

void NimbusDefaults::initialize() {
	$UIManager::addPropertyChangeListener(this->defaultsListener);
	$nc($($UIManager::getDefaults()))->addPropertyChangeListener(this->colorTree);
}

void NimbusDefaults::uninitialize() {
	$UIManager::removePropertyChangeListener(this->defaultsListener);
	$nc($($UIManager::getDefaults()))->removePropertyChangeListener(this->colorTree);
}

void NimbusDefaults::init$() {
	$set(this, registeredRegions, $new($HashMap));
	$set(this, overridesCache, $new($WeakHashMap));
	$set(this, colorTree, $new($NimbusDefaults$ColorTree, this));
	$set(this, defaultsListener, $new($NimbusDefaults$DefaultsListener, this));
	$set(this, derivedColors, $new($HashMap));
	$set(this, m, $new($HashMap));
	$set(this, defaultFont, $FontUtilities::getFontConfigFUIR("sans"_s, $Font::PLAIN, 12));
	$set(this, defaultStyle, $new($DefaultSynthStyle));
	$nc(this->defaultStyle)->setFont(this->defaultFont);
	$init($Region);
	register$($Region::ARROW_BUTTON, "ArrowButton"_s);
	register$($Region::BUTTON, "Button"_s);
	register$($Region::TOGGLE_BUTTON, "ToggleButton"_s);
	register$($Region::RADIO_BUTTON, "RadioButton"_s);
	register$($Region::CHECK_BOX, "CheckBox"_s);
	register$($Region::COLOR_CHOOSER, "ColorChooser"_s);
	register$($Region::PANEL, "ColorChooser:\"ColorChooser.previewPanelHolder\""_s);
	register$($Region::LABEL, "ColorChooser:\"ColorChooser.previewPanelHolder\":\"OptionPane.label\""_s);
	register$($Region::COMBO_BOX, "ComboBox"_s);
	register$($Region::TEXT_FIELD, "ComboBox:\"ComboBox.textField\""_s);
	register$($Region::ARROW_BUTTON, "ComboBox:\"ComboBox.arrowButton\""_s);
	register$($Region::LABEL, "ComboBox:\"ComboBox.listRenderer\""_s);
	register$($Region::LABEL, "ComboBox:\"ComboBox.renderer\""_s);
	register$($Region::SCROLL_PANE, "\"ComboBox.scrollPane\""_s);
	register$($Region::FILE_CHOOSER, "FileChooser"_s);
	register$($Region::INTERNAL_FRAME_TITLE_PANE, "InternalFrameTitlePane"_s);
	register$($Region::INTERNAL_FRAME, "InternalFrame"_s);
	register$($Region::INTERNAL_FRAME_TITLE_PANE, "InternalFrame:InternalFrameTitlePane"_s);
	register$($Region::BUTTON, "InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\""_s);
	register$($Region::BUTTON, "InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\""_s);
	register$($Region::BUTTON, "InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\""_s);
	register$($Region::BUTTON, "InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\""_s);
	register$($Region::DESKTOP_ICON, "DesktopIcon"_s);
	register$($Region::DESKTOP_PANE, "DesktopPane"_s);
	register$($Region::LABEL, "Label"_s);
	register$($Region::LIST, "List"_s);
	register$($Region::LABEL, "List:\"List.cellRenderer\""_s);
	register$($Region::MENU_BAR, "MenuBar"_s);
	register$($Region::MENU, "MenuBar:Menu"_s);
	register$($Region::MENU_ITEM_ACCELERATOR, "MenuBar:Menu:MenuItemAccelerator"_s);
	register$($Region::MENU_ITEM, "MenuItem"_s);
	register$($Region::MENU_ITEM_ACCELERATOR, "MenuItem:MenuItemAccelerator"_s);
	register$($Region::RADIO_BUTTON_MENU_ITEM, "RadioButtonMenuItem"_s);
	register$($Region::MENU_ITEM_ACCELERATOR, "RadioButtonMenuItem:MenuItemAccelerator"_s);
	register$($Region::CHECK_BOX_MENU_ITEM, "CheckBoxMenuItem"_s);
	register$($Region::MENU_ITEM_ACCELERATOR, "CheckBoxMenuItem:MenuItemAccelerator"_s);
	register$($Region::MENU, "Menu"_s);
	register$($Region::MENU_ITEM_ACCELERATOR, "Menu:MenuItemAccelerator"_s);
	register$($Region::POPUP_MENU, "PopupMenu"_s);
	register$($Region::POPUP_MENU_SEPARATOR, "PopupMenuSeparator"_s);
	register$($Region::OPTION_PANE, "OptionPane"_s);
	register$($Region::SEPARATOR, "OptionPane:\"OptionPane.separator\""_s);
	register$($Region::PANEL, "OptionPane:\"OptionPane.messageArea\""_s);
	register$($Region::LABEL, "OptionPane:\"OptionPane.messageArea\":\"OptionPane.label\""_s);
	register$($Region::PANEL, "Panel"_s);
	register$($Region::PROGRESS_BAR, "ProgressBar"_s);
	register$($Region::SEPARATOR, "Separator"_s);
	register$($Region::SCROLL_BAR, "ScrollBar"_s);
	register$($Region::ARROW_BUTTON, "ScrollBar:\"ScrollBar.button\""_s);
	register$($Region::SCROLL_BAR_THUMB, "ScrollBar:ScrollBarThumb"_s);
	register$($Region::SCROLL_BAR_TRACK, "ScrollBar:ScrollBarTrack"_s);
	register$($Region::SCROLL_PANE, "ScrollPane"_s);
	register$($Region::VIEWPORT, "Viewport"_s);
	register$($Region::SLIDER, "Slider"_s);
	register$($Region::SLIDER_THUMB, "Slider:SliderThumb"_s);
	register$($Region::SLIDER_TRACK, "Slider:SliderTrack"_s);
	register$($Region::SPINNER, "Spinner"_s);
	register$($Region::PANEL, "Spinner:\"Spinner.editor\""_s);
	register$($Region::FORMATTED_TEXT_FIELD, "Spinner:Panel:\"Spinner.formattedTextField\""_s);
	register$($Region::ARROW_BUTTON, "Spinner:\"Spinner.previousButton\""_s);
	register$($Region::ARROW_BUTTON, "Spinner:\"Spinner.nextButton\""_s);
	register$($Region::SPLIT_PANE, "SplitPane"_s);
	register$($Region::SPLIT_PANE_DIVIDER, "SplitPane:SplitPaneDivider"_s);
	register$($Region::TABBED_PANE, "TabbedPane"_s);
	register$($Region::TABBED_PANE_TAB, "TabbedPane:TabbedPaneTab"_s);
	register$($Region::TABBED_PANE_TAB_AREA, "TabbedPane:TabbedPaneTabArea"_s);
	register$($Region::TABBED_PANE_CONTENT, "TabbedPane:TabbedPaneContent"_s);
	register$($Region::TABLE, "Table"_s);
	register$($Region::LABEL, "Table:\"Table.cellRenderer\""_s);
	register$($Region::TABLE_HEADER, "TableHeader"_s);
	register$($Region::LABEL, "TableHeader:\"TableHeader.renderer\""_s);
	register$($Region::TEXT_FIELD, "\"Table.editor\""_s);
	register$($Region::TEXT_FIELD, "\"Tree.cellEditor\""_s);
	register$($Region::TEXT_FIELD, "TextField"_s);
	register$($Region::FORMATTED_TEXT_FIELD, "FormattedTextField"_s);
	register$($Region::PASSWORD_FIELD, "PasswordField"_s);
	register$($Region::TEXT_AREA, "TextArea"_s);
	register$($Region::TEXT_PANE, "TextPane"_s);
	register$($Region::EDITOR_PANE, "EditorPane"_s);
	register$($Region::TOOL_BAR, "ToolBar"_s);
	register$($Region::BUTTON, "ToolBar:Button"_s);
	register$($Region::TOGGLE_BUTTON, "ToolBar:ToggleButton"_s);
	register$($Region::TOOL_BAR_SEPARATOR, "ToolBarSeparator"_s);
	register$($Region::TOOL_TIP, "ToolTip"_s);
	register$($Region::TREE, "Tree"_s);
	register$($Region::TREE_CELL, "Tree:TreeCell"_s);
	register$($Region::LABEL, "Tree:\"Tree.cellRenderer\""_s);
	register$($Region::ROOT_PANE, "RootPane"_s);
}

void NimbusDefaults::initializeDefaults($UIDefaults* d) {
	addColor(d, "text"_s, 0, 0, 0, 255);
	addColor(d, "control"_s, 214, 217, 223, 255);
	addColor(d, "nimbusBase"_s, 51, 98, 140, 255);
	addColor(d, "nimbusBlueGrey"_s, "nimbusBase"_s, 0.032459438f, -0.52518797f, 0.19607842f, 0);
	addColor(d, "nimbusOrange"_s, 191, 98, 4, 255);
	addColor(d, "nimbusGreen"_s, 176, 179, 50, 255);
	addColor(d, "nimbusRed"_s, 169, 46, 34, 255);
	addColor(d, "nimbusBorder"_s, "nimbusBlueGrey"_s, 0.0f, -0.017358616f, -0.11372548f, 0);
	addColor(d, "nimbusSelection"_s, "nimbusBase"_s, -0.010750473f, -0.04875779f, -0.007843137f, 0);
	addColor(d, "nimbusInfoBlue"_s, 47, 92, 180, 255);
	addColor(d, "nimbusAlertYellow"_s, 255, 220, 35, 255);
	addColor(d, "nimbusFocus"_s, 115, 164, 209, 255);
	addColor(d, "nimbusSelectedText"_s, 255, 255, 255, 255);
	addColor(d, "nimbusSelectionBackground"_s, 57, 105, 138, 255);
	addColor(d, "nimbusDisabledText"_s, 142, 143, 145, 255);
	addColor(d, "nimbusLightBackground"_s, 255, 255, 255, 255);
	addColor(d, "infoText"_s, "text"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "info"_s, 242, 242, 189, 255);
	addColor(d, "menuText"_s, "text"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "menu"_s, "nimbusBase"_s, 0.021348298f, -0.6150531f, 0.39999998f, 0);
	addColor(d, "scrollbar"_s, "nimbusBlueGrey"_s, -0.006944418f, -0.07296763f, 0.09019607f, 0);
	addColor(d, "controlText"_s, "text"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "controlHighlight"_s, "nimbusBlueGrey"_s, 0.0f, -0.07333623f, 0.20392156f, 0);
	addColor(d, "controlLHighlight"_s, "nimbusBlueGrey"_s, 0.0f, -0.098526314f, 0.2352941f, 0);
	addColor(d, "controlShadow"_s, "nimbusBlueGrey"_s, -0.0027777553f, -0.0212406f, 0.13333333f, 0);
	addColor(d, "controlDkShadow"_s, "nimbusBlueGrey"_s, -0.0027777553f, -0.0018306673f, -0.02352941f, 0);
	addColor(d, "textHighlight"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "textHighlightText"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "textInactiveText"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "desktop"_s, "nimbusBase"_s, -0.009207249f, -0.13984653f, -0.07450983f, 0);
	addColor(d, "activeCaption"_s, "nimbusBlueGrey"_s, 0.0f, -0.049920253f, 0.031372547f, 0);
	addColor(d, "inactiveCaption"_s, "nimbusBlueGrey"_s, -0.00505054f, -0.055526316f, 0.039215684f, 0);
	$nc(d)->put("defaultFont"_s, $$new($FontUIResource, this->defaultFont));
	d->put("InternalFrame.titleFont"_s, $$new($NimbusDefaults$DerivedFont, "defaultFont"_s, 1.0f, $($Boolean::valueOf(true)), nullptr));
	addColor(d, "textForeground"_s, "text"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "textBackground"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "background"_s, "control"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("TitledBorder.position"_s, "ABOVE_TOP"_s);
	d->put("FileView.fullRowSelection"_s, $Boolean::TRUE);
	d->put("ArrowButton.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("ArrowButton.size"_s, $($Integer::valueOf(16)));
	$var($String, var$0, "javax.swing.plaf.nimbus.ArrowButtonPainter"_s);
	$var($Insets, var$1, $new($Insets, 0, 0, 0, 0));
	$init($AbstractRegionPainter$PaintContext$CacheMode);
	d->put("ArrowButton[Disabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$0, $ArrowButtonPainter::FOREGROUND_DISABLED, var$1, $$new($Dimension, 10, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$2, "javax.swing.plaf.nimbus.ArrowButtonPainter"_s);
	$var($Insets, var$3, $new($Insets, 0, 0, 0, 0));
	d->put("ArrowButton[Enabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$2, $ArrowButtonPainter::FOREGROUND_ENABLED, var$3, $$new($Dimension, 10, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Button.contentMargins"_s, $$new($InsetsUIResource, 6, 14, 6, 14));
	d->put("Button.defaultButtonFollowsFocus"_s, $Boolean::FALSE);
	$var($String, var$4, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$5, $new($Insets, 7, 7, 7, 7));
	$init($Double);
	d->put("Button[Default].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$4, $ButtonPainter::BACKGROUND_DEFAULT, var$5, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$6, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$7, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Default+Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$6, $ButtonPainter::BACKGROUND_DEFAULT_FOCUSED, var$7, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$8, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$9, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Default+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$8, $ButtonPainter::BACKGROUND_MOUSEOVER_DEFAULT, var$9, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$10, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$11, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Default+Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$10, $ButtonPainter::BACKGROUND_MOUSEOVER_DEFAULT_FOCUSED, var$11, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	addColor(d, "Button[Default+Pressed].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$12, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$13, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Default+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$12, $ButtonPainter::BACKGROUND_PRESSED_DEFAULT, var$13, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$14, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$15, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Default+Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$14, $ButtonPainter::BACKGROUND_PRESSED_DEFAULT_FOCUSED, var$15, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	addColor(d, "Button[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$16, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$17, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$16, $ButtonPainter::BACKGROUND_DISABLED, var$17, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$18, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$19, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$18, $ButtonPainter::BACKGROUND_ENABLED, var$19, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$20, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$21, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$20, $ButtonPainter::BACKGROUND_FOCUSED, var$21, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$22, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$23, $new($Insets, 7, 7, 7, 7));
	d->put("Button[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$22, $ButtonPainter::BACKGROUND_MOUSEOVER, var$23, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$24, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$25, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$24, $ButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED, var$25, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$26, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$27, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$26, $ButtonPainter::BACKGROUND_PRESSED, var$27, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$28, "javax.swing.plaf.nimbus.ButtonPainter"_s);
	$var($Insets, var$29, $new($Insets, 7, 7, 7, 7));
	d->put("Button[Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$28, $ButtonPainter::BACKGROUND_PRESSED_FOCUSED, var$29, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("ToggleButton.contentMargins"_s, $$new($InsetsUIResource, 6, 14, 6, 14));
	addColor(d, "ToggleButton[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$30, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$31, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$30, $ToggleButtonPainter::BACKGROUND_DISABLED, var$31, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$32, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$33, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$32, $ToggleButtonPainter::BACKGROUND_ENABLED, var$33, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$34, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$35, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$34, $ToggleButtonPainter::BACKGROUND_FOCUSED, var$35, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$36, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$37, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$36, $ToggleButtonPainter::BACKGROUND_MOUSEOVER, var$37, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$38, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$39, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$38, $ToggleButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED, var$39, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$40, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$41, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$40, $ToggleButtonPainter::BACKGROUND_PRESSED, var$41, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$42, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$43, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$42, $ToggleButtonPainter::BACKGROUND_PRESSED_FOCUSED, var$43, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$44, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$45, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$44, $ToggleButtonPainter::BACKGROUND_SELECTED, var$45, $$new($Dimension, 72, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$46, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$47, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Focused+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$46, $ToggleButtonPainter::BACKGROUND_SELECTED_FOCUSED, var$47, $$new($Dimension, 72, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$48, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$49, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Pressed+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$48, $ToggleButtonPainter::BACKGROUND_PRESSED_SELECTED, var$49, $$new($Dimension, 72, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$50, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$51, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Focused+Pressed+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$50, $ToggleButtonPainter::BACKGROUND_PRESSED_SELECTED_FOCUSED, var$51, $$new($Dimension, 72, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$52, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$53, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[MouseOver+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$52, $ToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED, var$53, $$new($Dimension, 72, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$54, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$55, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Focused+MouseOver+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$54, $ToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED_FOCUSED, var$55, $$new($Dimension, 72, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	addColor(d, "ToggleButton[Disabled+Selected].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$56, "javax.swing.plaf.nimbus.ToggleButtonPainter"_s);
	$var($Insets, var$57, $new($Insets, 7, 7, 7, 7));
	d->put("ToggleButton[Disabled+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$56, $ToggleButtonPainter::BACKGROUND_DISABLED_SELECTED, var$57, $$new($Dimension, 72, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("RadioButton.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "RadioButton[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$58, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$59, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Disabled].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$58, $RadioButtonPainter::ICON_DISABLED, var$59, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$60, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$61, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Enabled].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$60, $RadioButtonPainter::ICON_ENABLED, var$61, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$62, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$63, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Focused].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$62, $RadioButtonPainter::ICON_FOCUSED, var$63, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$64, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$65, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[MouseOver].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$64, $RadioButtonPainter::ICON_MOUSEOVER, var$65, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$66, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$67, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Focused+MouseOver].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$66, $RadioButtonPainter::ICON_MOUSEOVER_FOCUSED, var$67, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$68, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$69, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Pressed].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$68, $RadioButtonPainter::ICON_PRESSED, var$69, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$70, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$71, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Focused+Pressed].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$70, $RadioButtonPainter::ICON_PRESSED_FOCUSED, var$71, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$72, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$73, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$72, $RadioButtonPainter::ICON_SELECTED, var$73, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$74, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$75, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Focused+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$74, $RadioButtonPainter::ICON_SELECTED_FOCUSED, var$75, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$76, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$77, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Pressed+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$76, $RadioButtonPainter::ICON_PRESSED_SELECTED, var$77, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$78, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$79, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Focused+Pressed+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$78, $RadioButtonPainter::ICON_PRESSED_SELECTED_FOCUSED, var$79, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$80, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$81, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[MouseOver+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$80, $RadioButtonPainter::ICON_MOUSEOVER_SELECTED, var$81, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$82, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$83, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Focused+MouseOver+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$82, $RadioButtonPainter::ICON_MOUSEOVER_SELECTED_FOCUSED, var$83, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$84, "javax.swing.plaf.nimbus.RadioButtonPainter"_s);
	$var($Insets, var$85, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButton[Disabled+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$84, $RadioButtonPainter::ICON_DISABLED_SELECTED, var$85, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("RadioButton.icon"_s, $$new($NimbusIcon, "RadioButton"_s, "iconPainter"_s, 18, 18));
	d->put("CheckBox.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "CheckBox[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$86, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$87, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Disabled].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$86, $CheckBoxPainter::ICON_DISABLED, var$87, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$88, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$89, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Enabled].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$88, $CheckBoxPainter::ICON_ENABLED, var$89, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$90, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$91, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Focused].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$90, $CheckBoxPainter::ICON_FOCUSED, var$91, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$92, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$93, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[MouseOver].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$92, $CheckBoxPainter::ICON_MOUSEOVER, var$93, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$94, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$95, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Focused+MouseOver].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$94, $CheckBoxPainter::ICON_MOUSEOVER_FOCUSED, var$95, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$96, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$97, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Pressed].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$96, $CheckBoxPainter::ICON_PRESSED, var$97, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$98, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$99, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Focused+Pressed].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$98, $CheckBoxPainter::ICON_PRESSED_FOCUSED, var$99, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$100, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$101, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$100, $CheckBoxPainter::ICON_SELECTED, var$101, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$102, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$103, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Focused+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$102, $CheckBoxPainter::ICON_SELECTED_FOCUSED, var$103, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$104, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$105, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Pressed+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$104, $CheckBoxPainter::ICON_PRESSED_SELECTED, var$105, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$106, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$107, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Focused+Pressed+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$106, $CheckBoxPainter::ICON_PRESSED_SELECTED_FOCUSED, var$107, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$108, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$109, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[MouseOver+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$108, $CheckBoxPainter::ICON_MOUSEOVER_SELECTED, var$109, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$110, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$111, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Focused+MouseOver+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$110, $CheckBoxPainter::ICON_MOUSEOVER_SELECTED_FOCUSED, var$111, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$112, "javax.swing.plaf.nimbus.CheckBoxPainter"_s);
	$var($Insets, var$113, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBox[Disabled+Selected].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$112, $CheckBoxPainter::ICON_DISABLED_SELECTED, var$113, $$new($Dimension, 18, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("CheckBox.icon"_s, $$new($NimbusIcon, "CheckBox"_s, "iconPainter"_s, 18, 18));
	d->put("ColorChooser.contentMargins"_s, $$new($InsetsUIResource, 5, 0, 0, 0));
	addColor(d, "ColorChooser.swatchesDefaultRecentColor"_s, 255, 255, 255, 255);
	d->put("ColorChooser:\"ColorChooser.previewPanelHolder\".contentMargins"_s, $$new($InsetsUIResource, 0, 5, 10, 5));
	d->put("ColorChooser:\"ColorChooser.previewPanelHolder\":\"OptionPane.label\".contentMargins"_s, $$new($InsetsUIResource, 0, 10, 10, 10));
	d->put("ComboBox.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("ComboBox.States"_s, "Enabled,MouseOver,Pressed,Selected,Disabled,Focused,Editable"_s);
	d->put("ComboBox.Editable"_s, $$new($ComboBoxEditableState));
	d->put("ComboBox.forceOpaque"_s, $Boolean::TRUE);
	d->put("ComboBox.buttonWhenNotEditable"_s, $Boolean::TRUE);
	d->put("ComboBox.rendererUseListColors"_s, $Boolean::FALSE);
	d->put("ComboBox.pressedWhenPopupVisible"_s, $Boolean::TRUE);
	d->put("ComboBox.squareButton"_s, $Boolean::FALSE);
	d->put("ComboBox.popupInsets"_s, $$new($InsetsUIResource, -2, 2, 0, 2));
	d->put("ComboBox.padding"_s, $$new($InsetsUIResource, 3, 3, 3, 3));
	$var($String, var$114, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$115, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$114, $ComboBoxPainter::BACKGROUND_DISABLED, var$115, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$116, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$117, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[Disabled+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$116, $ComboBoxPainter::BACKGROUND_DISABLED_PRESSED, var$117, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$118, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$119, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$118, $ComboBoxPainter::BACKGROUND_ENABLED, var$119, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$120, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$121, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$120, $ComboBoxPainter::BACKGROUND_FOCUSED, var$121, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$122, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$123, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$122, $ComboBoxPainter::BACKGROUND_MOUSEOVER_FOCUSED, var$123, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$124, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$125, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$124, $ComboBoxPainter::BACKGROUND_MOUSEOVER, var$125, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$126, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$127, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$126, $ComboBoxPainter::BACKGROUND_PRESSED_FOCUSED, var$127, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$128, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$129, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$128, $ComboBoxPainter::BACKGROUND_PRESSED, var$129, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$130, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$131, $new($Insets, 8, 9, 8, 19));
	d->put("ComboBox[Enabled+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$130, $ComboBoxPainter::BACKGROUND_ENABLED_SELECTED, var$131, $$new($Dimension, 83, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$132, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$133, $new($Insets, 6, 5, 6, 17));
	d->put("ComboBox[Disabled+Editable].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$132, $ComboBoxPainter::BACKGROUND_DISABLED_EDITABLE, var$133, $$new($Dimension, 79, 21), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$134, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$135, $new($Insets, 6, 5, 6, 17));
	d->put("ComboBox[Editable+Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$134, $ComboBoxPainter::BACKGROUND_ENABLED_EDITABLE, var$135, $$new($Dimension, 79, 21), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$136, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$137, $new($Insets, 5, 5, 5, 5));
	d->put("ComboBox[Editable+Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$136, $ComboBoxPainter::BACKGROUND_FOCUSED_EDITABLE, var$137, $$new($Dimension, 142, 27), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$138, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$139, $new($Insets, 4, 5, 5, 17));
	d->put("ComboBox[Editable+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$138, $ComboBoxPainter::BACKGROUND_MOUSEOVER_EDITABLE, var$139, $$new($Dimension, 79, 21), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$140, "javax.swing.plaf.nimbus.ComboBoxPainter"_s);
	$var($Insets, var$141, $new($Insets, 4, 5, 5, 17));
	d->put("ComboBox[Editable+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$140, $ComboBoxPainter::BACKGROUND_PRESSED_EDITABLE, var$141, $$new($Dimension, 79, 21), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("ComboBox:\"ComboBox.textField\".contentMargins"_s, $$new($InsetsUIResource, 0, 6, 0, 3));
	addColor(d, "ComboBox:\"ComboBox.textField\"[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$142, "javax.swing.plaf.nimbus.ComboBoxTextFieldPainter"_s);
	$var($Insets, var$143, $new($Insets, 5, 3, 3, 1));
	d->put("ComboBox:\"ComboBox.textField\"[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$142, $ComboBoxTextFieldPainter::BACKGROUND_DISABLED, var$143, $$new($Dimension, 64, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$144, "javax.swing.plaf.nimbus.ComboBoxTextFieldPainter"_s);
	$var($Insets, var$145, $new($Insets, 5, 3, 3, 1));
	d->put("ComboBox:\"ComboBox.textField\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$144, $ComboBoxTextFieldPainter::BACKGROUND_ENABLED, var$145, $$new($Dimension, 64, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	addColor(d, "ComboBox:\"ComboBox.textField\"[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$146, "javax.swing.plaf.nimbus.ComboBoxTextFieldPainter"_s);
	$var($Insets, var$147, $new($Insets, 5, 3, 3, 1));
	d->put("ComboBox:\"ComboBox.textField\"[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$146, $ComboBoxTextFieldPainter::BACKGROUND_SELECTED, var$147, $$new($Dimension, 64, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("ComboBox:\"ComboBox.arrowButton\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("ComboBox:\"ComboBox.arrowButton\".States"_s, "Enabled,MouseOver,Pressed,Disabled,Editable"_s);
	d->put("ComboBox:\"ComboBox.arrowButton\".Editable"_s, $$new($ComboBoxArrowButtonEditableState));
	d->put("ComboBox:\"ComboBox.arrowButton\".size"_s, $($Integer::valueOf(19)));
	$var($String, var$148, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$149, $new($Insets, 8, 1, 8, 8));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Disabled+Editable].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$148, $ComboBoxArrowButtonPainter::BACKGROUND_DISABLED_EDITABLE, var$149, $$new($Dimension, 20, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$150, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$151, $new($Insets, 8, 1, 8, 8));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Editable+Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$150, $ComboBoxArrowButtonPainter::BACKGROUND_ENABLED_EDITABLE, var$151, $$new($Dimension, 20, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$152, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$153, $new($Insets, 8, 1, 8, 8));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Editable+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$152, $ComboBoxArrowButtonPainter::BACKGROUND_MOUSEOVER_EDITABLE, var$153, $$new($Dimension, 20, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$154, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$155, $new($Insets, 8, 1, 8, 8));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Editable+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$154, $ComboBoxArrowButtonPainter::BACKGROUND_PRESSED_EDITABLE, var$155, $$new($Dimension, 20, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$156, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$157, $new($Insets, 8, 1, 8, 8));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Editable+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$156, $ComboBoxArrowButtonPainter::BACKGROUND_SELECTED_EDITABLE, var$157, $$new($Dimension, 20, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$158, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$159, $new($Insets, 6, 9, 6, 10));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Enabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$158, $ComboBoxArrowButtonPainter::FOREGROUND_ENABLED, var$159, $$new($Dimension, 24, 19), true, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$160, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$161, $new($Insets, 6, 9, 6, 10));
	d->put("ComboBox:\"ComboBox.arrowButton\"[MouseOver].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$160, $ComboBoxArrowButtonPainter::FOREGROUND_MOUSEOVER, var$161, $$new($Dimension, 24, 19), true, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$162, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$163, $new($Insets, 6, 9, 6, 10));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Disabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$162, $ComboBoxArrowButtonPainter::FOREGROUND_DISABLED, var$163, $$new($Dimension, 24, 19), true, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$164, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$165, $new($Insets, 6, 9, 6, 10));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Pressed].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$164, $ComboBoxArrowButtonPainter::FOREGROUND_PRESSED, var$165, $$new($Dimension, 24, 19), true, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$166, "javax.swing.plaf.nimbus.ComboBoxArrowButtonPainter"_s);
	$var($Insets, var$167, $new($Insets, 6, 9, 6, 10));
	d->put("ComboBox:\"ComboBox.arrowButton\"[Selected].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$166, $ComboBoxArrowButtonPainter::FOREGROUND_SELECTED, var$167, $$new($Dimension, 24, 19), true, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("ComboBox:\"ComboBox.listRenderer\".contentMargins"_s, $$new($InsetsUIResource, 2, 4, 2, 4));
	d->put("ComboBox:\"ComboBox.listRenderer\".opaque"_s, $Boolean::TRUE);
	addColor(d, "ComboBox:\"ComboBox.listRenderer\".background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "ComboBox:\"ComboBox.listRenderer\"[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "ComboBox:\"ComboBox.listRenderer\"[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "ComboBox:\"ComboBox.listRenderer\"[Selected].background"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("ComboBox:\"ComboBox.renderer\".contentMargins"_s, $$new($InsetsUIResource, 2, 4, 2, 4));
	addColor(d, "ComboBox:\"ComboBox.renderer\"[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "ComboBox:\"ComboBox.renderer\"[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "ComboBox:\"ComboBox.renderer\"[Selected].background"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("\"ComboBox.scrollPane\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("FileChooser.contentMargins"_s, $$new($InsetsUIResource, 10, 10, 10, 10));
	d->put("FileChooser.opaque"_s, $Boolean::TRUE);
	d->put("FileChooser.usesSingleFilePane"_s, $Boolean::TRUE);
	$var($String, var$168, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$169, $new($Insets, 0, 0, 0, 0));
	d->put("FileChooser[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$168, $FileChooserPainter::BACKGROUND_ENABLED, var$169, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$170, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$171, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].fileIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$170, $FileChooserPainter::FILEICON_ENABLED, var$171, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.fileIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "fileIconPainter"_s, 16, 16));
	$var($String, var$172, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$173, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].directoryIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$172, $FileChooserPainter::DIRECTORYICON_ENABLED, var$173, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.directoryIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "directoryIconPainter"_s, 16, 16));
	$var($String, var$174, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$175, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].upFolderIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$174, $FileChooserPainter::UPFOLDERICON_ENABLED, var$175, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.upFolderIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "upFolderIconPainter"_s, 16, 16));
	$var($String, var$176, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$177, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].newFolderIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$176, $FileChooserPainter::NEWFOLDERICON_ENABLED, var$177, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.newFolderIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "newFolderIconPainter"_s, 16, 16));
	$var($String, var$178, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$179, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].hardDriveIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$178, $FileChooserPainter::HARDDRIVEICON_ENABLED, var$179, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.hardDriveIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "hardDriveIconPainter"_s, 16, 16));
	$var($String, var$180, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$181, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].floppyDriveIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$180, $FileChooserPainter::FLOPPYDRIVEICON_ENABLED, var$181, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.floppyDriveIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "floppyDriveIconPainter"_s, 16, 16));
	$var($String, var$182, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$183, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].homeFolderIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$182, $FileChooserPainter::HOMEFOLDERICON_ENABLED, var$183, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.homeFolderIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "homeFolderIconPainter"_s, 16, 16));
	$var($String, var$184, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$185, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].detailsViewIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$184, $FileChooserPainter::DETAILSVIEWICON_ENABLED, var$185, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.detailsViewIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "detailsViewIconPainter"_s, 16, 16));
	$var($String, var$186, "javax.swing.plaf.nimbus.FileChooserPainter"_s);
	$var($Insets, var$187, $new($Insets, 5, 5, 5, 5));
	d->put("FileChooser[Enabled].listViewIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$186, $FileChooserPainter::LISTVIEWICON_ENABLED, var$187, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("FileChooser.listViewIcon"_s, $$new($NimbusIcon, "FileChooser"_s, "listViewIconPainter"_s, 16, 16));
	d->put("InternalFrameTitlePane.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("InternalFrameTitlePane.maxFrameIconSize"_s, $$new($DimensionUIResource, 18, 18));
	d->put("InternalFrame.contentMargins"_s, $$new($InsetsUIResource, 1, 6, 6, 6));
	d->put("InternalFrame.States"_s, "Enabled,WindowFocused"_s);
	d->put("InternalFrame.WindowFocused"_s, $$new($InternalFrameWindowFocusedState));
	$var($String, var$188, "javax.swing.plaf.nimbus.InternalFramePainter"_s);
	$var($Insets, var$189, $new($Insets, 25, 6, 6, 6));
	d->put("InternalFrame[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$188, $InternalFramePainter::BACKGROUND_ENABLED, var$189, $$new($Dimension, 25, 36), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$190, "javax.swing.plaf.nimbus.InternalFramePainter"_s);
	$var($Insets, var$191, $new($Insets, 25, 6, 6, 6));
	d->put("InternalFrame[Enabled+WindowFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$190, $InternalFramePainter::BACKGROUND_ENABLED_WINDOWFOCUSED, var$191, $$new($Dimension, 25, 36), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("InternalFrame:InternalFrameTitlePane.contentMargins"_s, $$new($InsetsUIResource, 3, 0, 3, 0));
	d->put("InternalFrame:InternalFrameTitlePane.States"_s, "Enabled,WindowFocused"_s);
	d->put("InternalFrame:InternalFrameTitlePane.WindowFocused"_s, $$new($InternalFrameTitlePaneWindowFocusedState));
	d->put("InternalFrame:InternalFrameTitlePane.titleAlignment"_s, "CENTER"_s);
	addColor(d, "InternalFrame:InternalFrameTitlePane[Enabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\".States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,WindowNotFocused"_s);
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\".WindowNotFocused"_s, $$new($InternalFrameTitlePaneMenuButtonWindowNotFocusedState));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\".test"_s, "am InternalFrameTitlePane.menuButton"_s);
	$var($String, var$192, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter"_s);
	$var($Insets, var$193, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\"[Enabled].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$192, $InternalFrameTitlePaneMenuButtonPainter::ICON_ENABLED, var$193, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$194, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter"_s);
	$var($Insets, var$195, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\"[Disabled].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$194, $InternalFrameTitlePaneMenuButtonPainter::ICON_DISABLED, var$195, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$196, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter"_s);
	$var($Insets, var$197, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\"[MouseOver].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$196, $InternalFrameTitlePaneMenuButtonPainter::ICON_MOUSEOVER, var$197, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$198, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter"_s);
	$var($Insets, var$199, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\"[Pressed].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$198, $InternalFrameTitlePaneMenuButtonPainter::ICON_PRESSED, var$199, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$200, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter"_s);
	$var($Insets, var$201, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\"[Enabled+WindowNotFocused].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$200, $InternalFrameTitlePaneMenuButtonPainter::ICON_ENABLED_WINDOWNOTFOCUSED, var$201, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$202, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter"_s);
	$var($Insets, var$203, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\"[MouseOver+WindowNotFocused].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$202, $InternalFrameTitlePaneMenuButtonPainter::ICON_MOUSEOVER_WINDOWNOTFOCUSED, var$203, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$204, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMenuButtonPainter"_s);
	$var($Insets, var$205, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\"[Pressed+WindowNotFocused].iconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$204, $InternalFrameTitlePaneMenuButtonPainter::ICON_PRESSED_WINDOWNOTFOCUSED, var$205, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\".icon"_s, $$new($NimbusIcon, "InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.menuButton\""_s, "iconPainter"_s, 19, 18));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\".contentMargins"_s, $$new($InsetsUIResource, 9, 9, 9, 9));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\".States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,WindowNotFocused"_s);
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\".WindowNotFocused"_s, $$new($InternalFrameTitlePaneIconifyButtonWindowNotFocusedState));
	$var($String, var$206, "javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonPainter"_s);
	$var($Insets, var$207, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$206, $InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_ENABLED, var$207, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$208, "javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonPainter"_s);
	$var($Insets, var$209, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\"[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$208, $InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_DISABLED, var$209, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$210, "javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonPainter"_s);
	$var($Insets, var$211, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\"[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$210, $InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_MOUSEOVER, var$211, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$212, "javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonPainter"_s);
	$var($Insets, var$213, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\"[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$212, $InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_PRESSED, var$213, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$214, "javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonPainter"_s);
	$var($Insets, var$215, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\"[Enabled+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$214, $InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_ENABLED_WINDOWNOTFOCUSED, var$215, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$216, "javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonPainter"_s);
	$var($Insets, var$217, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\"[MouseOver+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$216, $InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED, var$217, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$218, "javax.swing.plaf.nimbus.InternalFrameTitlePaneIconifyButtonPainter"_s);
	$var($Insets, var$219, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.iconifyButton\"[Pressed+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$218, $InternalFrameTitlePaneIconifyButtonPainter::BACKGROUND_PRESSED_WINDOWNOTFOCUSED, var$219, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\".contentMargins"_s, $$new($InsetsUIResource, 9, 9, 9, 9));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\".States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,WindowNotFocused,WindowMaximized"_s);
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\".WindowNotFocused"_s, $$new($InternalFrameTitlePaneMaximizeButtonWindowNotFocusedState));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\".WindowMaximized"_s, $$new($InternalFrameTitlePaneMaximizeButtonWindowMaximizedState));
	$var($String, var$220, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$221, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Disabled+WindowMaximized].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$220, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_DISABLED_WINDOWMAXIMIZED, var$221, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$222, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$223, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Enabled+WindowMaximized].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$222, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_ENABLED_WINDOWMAXIMIZED, var$223, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$224, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$225, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[MouseOver+WindowMaximized].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$224, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_MOUSEOVER_WINDOWMAXIMIZED, var$225, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$226, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$227, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Pressed+WindowMaximized].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$226, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_PRESSED_WINDOWMAXIMIZED, var$227, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$228, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$229, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Enabled+WindowMaximized+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$228, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_ENABLED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED, var$229, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$230, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$231, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[MouseOver+WindowMaximized+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$230, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED_WINDOWMAXIMIZED, var$231, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$232, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$233, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Pressed+WindowMaximized+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$232, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_PRESSED_WINDOWNOTFOCUSED_WINDOWMAXIMIZED, var$233, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$234, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$235, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$234, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_DISABLED, var$235, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$236, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$237, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$236, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_ENABLED, var$237, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$238, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$239, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$238, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_MOUSEOVER, var$239, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$240, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$241, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$240, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_PRESSED, var$241, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$242, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$243, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Enabled+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$242, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_ENABLED_WINDOWNOTFOCUSED, var$243, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$244, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$245, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[MouseOver+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$244, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED, var$245, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$246, "javax.swing.plaf.nimbus.InternalFrameTitlePaneMaximizeButtonPainter"_s);
	$var($Insets, var$247, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.maximizeButton\"[Pressed+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$246, $InternalFrameTitlePaneMaximizeButtonPainter::BACKGROUND_PRESSED_WINDOWNOTFOCUSED, var$247, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\".contentMargins"_s, $$new($InsetsUIResource, 9, 9, 9, 9));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\".States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,WindowNotFocused"_s);
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\".WindowNotFocused"_s, $$new($InternalFrameTitlePaneCloseButtonWindowNotFocusedState));
	$var($String, var$248, "javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonPainter"_s);
	$var($Insets, var$249, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\"[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$248, $InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_DISABLED, var$249, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$250, "javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonPainter"_s);
	$var($Insets, var$251, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$250, $InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_ENABLED, var$251, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$252, "javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonPainter"_s);
	$var($Insets, var$253, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\"[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$252, $InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_MOUSEOVER, var$253, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$254, "javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonPainter"_s);
	$var($Insets, var$255, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\"[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$254, $InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_PRESSED, var$255, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$256, "javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonPainter"_s);
	$var($Insets, var$257, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\"[Enabled+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$256, $InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_ENABLED_WINDOWNOTFOCUSED, var$257, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$258, "javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonPainter"_s);
	$var($Insets, var$259, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\"[MouseOver+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$258, $InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_MOUSEOVER_WINDOWNOTFOCUSED, var$259, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$260, "javax.swing.plaf.nimbus.InternalFrameTitlePaneCloseButtonPainter"_s);
	$var($Insets, var$261, $new($Insets, 0, 0, 0, 0));
	d->put("InternalFrame:InternalFrameTitlePane:\"InternalFrameTitlePane.closeButton\"[Pressed+WindowNotFocused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$260, $InternalFrameTitlePaneCloseButtonPainter::BACKGROUND_PRESSED_WINDOWNOTFOCUSED, var$261, $$new($Dimension, 19, 18), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("DesktopIcon.contentMargins"_s, $$new($InsetsUIResource, 4, 6, 5, 4));
	$var($String, var$262, "javax.swing.plaf.nimbus.DesktopIconPainter"_s);
	$var($Insets, var$263, $new($Insets, 5, 5, 5, 5));
	d->put("DesktopIcon[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$262, $DesktopIconPainter::BACKGROUND_ENABLED, var$263, $$new($Dimension, 28, 26), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("DesktopPane.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("DesktopPane.opaque"_s, $Boolean::TRUE);
	$var($String, var$264, "javax.swing.plaf.nimbus.DesktopPanePainter"_s);
	$var($Insets, var$265, $new($Insets, 0, 0, 0, 0));
	d->put("DesktopPane[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$264, $DesktopPanePainter::BACKGROUND_ENABLED, var$265, $$new($Dimension, 300, 232), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("Label.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "Label[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("List.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("List.opaque"_s, $Boolean::TRUE);
	addColor(d, "List.background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("List.rendererUseListColors"_s, $Boolean::FALSE);
	d->put("List.rendererUseUIBorder"_s, $Boolean::TRUE);
	d->put("List.cellNoFocusBorder"_s, $$new($BorderUIResource, $($BorderFactory::createEmptyBorder(2, 5, 2, 5))));
	d->put("List.focusCellHighlightBorder"_s, $$new($BorderUIResource, $$new($NimbusDefaults$PainterBorder, "Tree:TreeCell[Enabled+Focused].backgroundPainter"_s, $$new($Insets, 2, 5, 2, 5))));
	addColor(d, "List.dropLineColor"_s, "nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "List[Selected].textForeground"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "List[Selected].textBackground"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "List[Disabled+Selected].textBackground"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "List[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("List:\"List.cellRenderer\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("List:\"List.cellRenderer\".opaque"_s, $Boolean::TRUE);
	addColor(d, "List:\"List.cellRenderer\"[Selected].textForeground"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "List:\"List.cellRenderer\"[Selected].background"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "List:\"List.cellRenderer\"[Disabled+Selected].background"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "List:\"List.cellRenderer\"[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("MenuBar.contentMargins"_s, $$new($InsetsUIResource, 2, 6, 2, 6));
	$var($String, var$266, "javax.swing.plaf.nimbus.MenuBarPainter"_s);
	$var($Insets, var$267, $new($Insets, 1, 0, 0, 0));
	d->put("MenuBar[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$266, $MenuBarPainter::BACKGROUND_ENABLED, var$267, $$new($Dimension, 18, 22), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$268, "javax.swing.plaf.nimbus.MenuBarPainter"_s);
	$var($Insets, var$269, $new($Insets, 0, 0, 1, 0));
	d->put("MenuBar[Enabled].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$268, $MenuBarPainter::BORDER_ENABLED, var$269, $$new($Dimension, 30, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("MenuBar:Menu.contentMargins"_s, $$new($InsetsUIResource, 1, 4, 2, 4));
	addColor(d, "MenuBar:Menu[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "MenuBar:Menu[Enabled].textForeground"_s, 35, 35, 36, 255);
	addColor(d, "MenuBar:Menu[Selected].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$270, "javax.swing.plaf.nimbus.MenuBarMenuPainter"_s);
	$var($Insets, var$271, $new($Insets, 0, 0, 0, 0));
	d->put("MenuBar:Menu[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$270, $MenuBarMenuPainter::BACKGROUND_SELECTED, var$271, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	d->put("MenuBar:Menu:MenuItemAccelerator.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("MenuItem.contentMargins"_s, $$new($InsetsUIResource, 1, 12, 2, 13));
	d->put("MenuItem.textIconGap"_s, $($Integer::valueOf(5)));
	addColor(d, "MenuItem[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "MenuItem[Enabled].textForeground"_s, 35, 35, 36, 255);
	addColor(d, "MenuItem[MouseOver].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$272, "javax.swing.plaf.nimbus.MenuItemPainter"_s);
	$var($Insets, var$273, $new($Insets, 0, 0, 0, 0));
	d->put("MenuItem[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$272, $MenuItemPainter::BACKGROUND_MOUSEOVER, var$273, $$new($Dimension, 100, 3), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	d->put("MenuItem:MenuItemAccelerator.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "MenuItem:MenuItemAccelerator[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "MenuItem:MenuItemAccelerator[MouseOver].textForeground"_s, 255, 255, 255, 255);
	d->put("RadioButtonMenuItem.contentMargins"_s, $$new($InsetsUIResource, 1, 12, 2, 13));
	d->put("RadioButtonMenuItem.textIconGap"_s, $($Integer::valueOf(5)));
	addColor(d, "RadioButtonMenuItem[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "RadioButtonMenuItem[Enabled].textForeground"_s, 35, 35, 36, 255);
	addColor(d, "RadioButtonMenuItem[MouseOver].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$274, "javax.swing.plaf.nimbus.RadioButtonMenuItemPainter"_s);
	$var($Insets, var$275, $new($Insets, 0, 0, 0, 0));
	d->put("RadioButtonMenuItem[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$274, $RadioButtonMenuItemPainter::BACKGROUND_MOUSEOVER, var$275, $$new($Dimension, 100, 3), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "RadioButtonMenuItem[MouseOver+Selected].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$276, "javax.swing.plaf.nimbus.RadioButtonMenuItemPainter"_s);
	$var($Insets, var$277, $new($Insets, 0, 0, 0, 0));
	d->put("RadioButtonMenuItem[MouseOver+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$276, $RadioButtonMenuItemPainter::BACKGROUND_SELECTED_MOUSEOVER, var$277, $$new($Dimension, 100, 3), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$278, "javax.swing.plaf.nimbus.RadioButtonMenuItemPainter"_s);
	$var($Insets, var$279, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButtonMenuItem[Disabled+Selected].checkIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$278, $RadioButtonMenuItemPainter::CHECKICON_DISABLED_SELECTED, var$279, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$280, "javax.swing.plaf.nimbus.RadioButtonMenuItemPainter"_s);
	$var($Insets, var$281, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButtonMenuItem[Enabled+Selected].checkIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$280, $RadioButtonMenuItemPainter::CHECKICON_ENABLED_SELECTED, var$281, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$282, "javax.swing.plaf.nimbus.RadioButtonMenuItemPainter"_s);
	$var($Insets, var$283, $new($Insets, 5, 5, 5, 5));
	d->put("RadioButtonMenuItem[MouseOver+Selected].checkIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$282, $RadioButtonMenuItemPainter::CHECKICON_SELECTED_MOUSEOVER, var$283, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("RadioButtonMenuItem.checkIcon"_s, $$new($NimbusIcon, "RadioButtonMenuItem"_s, "checkIconPainter"_s, 9, 10));
	d->put("RadioButtonMenuItem:MenuItemAccelerator.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "RadioButtonMenuItem:MenuItemAccelerator[MouseOver].textForeground"_s, 255, 255, 255, 255);
	d->put("CheckBoxMenuItem.contentMargins"_s, $$new($InsetsUIResource, 1, 12, 2, 13));
	d->put("CheckBoxMenuItem.textIconGap"_s, $($Integer::valueOf(5)));
	addColor(d, "CheckBoxMenuItem[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "CheckBoxMenuItem[Enabled].textForeground"_s, 35, 35, 36, 255);
	addColor(d, "CheckBoxMenuItem[MouseOver].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$284, "javax.swing.plaf.nimbus.CheckBoxMenuItemPainter"_s);
	$var($Insets, var$285, $new($Insets, 0, 0, 0, 0));
	d->put("CheckBoxMenuItem[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$284, $CheckBoxMenuItemPainter::BACKGROUND_MOUSEOVER, var$285, $$new($Dimension, 100, 3), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "CheckBoxMenuItem[MouseOver+Selected].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$286, "javax.swing.plaf.nimbus.CheckBoxMenuItemPainter"_s);
	$var($Insets, var$287, $new($Insets, 0, 0, 0, 0));
	d->put("CheckBoxMenuItem[MouseOver+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$286, $CheckBoxMenuItemPainter::BACKGROUND_SELECTED_MOUSEOVER, var$287, $$new($Dimension, 100, 3), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$288, "javax.swing.plaf.nimbus.CheckBoxMenuItemPainter"_s);
	$var($Insets, var$289, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBoxMenuItem[Disabled+Selected].checkIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$288, $CheckBoxMenuItemPainter::CHECKICON_DISABLED_SELECTED, var$289, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$290, "javax.swing.plaf.nimbus.CheckBoxMenuItemPainter"_s);
	$var($Insets, var$291, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBoxMenuItem[Enabled+Selected].checkIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$290, $CheckBoxMenuItemPainter::CHECKICON_ENABLED_SELECTED, var$291, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$292, "javax.swing.plaf.nimbus.CheckBoxMenuItemPainter"_s);
	$var($Insets, var$293, $new($Insets, 5, 5, 5, 5));
	d->put("CheckBoxMenuItem[MouseOver+Selected].checkIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$292, $CheckBoxMenuItemPainter::CHECKICON_SELECTED_MOUSEOVER, var$293, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("CheckBoxMenuItem.checkIcon"_s, $$new($NimbusIcon, "CheckBoxMenuItem"_s, "checkIconPainter"_s, 9, 10));
	d->put("CheckBoxMenuItem:MenuItemAccelerator.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "CheckBoxMenuItem:MenuItemAccelerator[MouseOver].textForeground"_s, 255, 255, 255, 255);
	d->put("Menu.contentMargins"_s, $$new($InsetsUIResource, 1, 12, 2, 5));
	d->put("Menu.textIconGap"_s, $($Integer::valueOf(5)));
	addColor(d, "Menu[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "Menu[Enabled].textForeground"_s, 35, 35, 36, 255);
	addColor(d, "Menu[Enabled+Selected].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$294, "javax.swing.plaf.nimbus.MenuPainter"_s);
	$var($Insets, var$295, $new($Insets, 0, 0, 0, 0));
	d->put("Menu[Enabled+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$294, $MenuPainter::BACKGROUND_ENABLED_SELECTED, var$295, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$296, "javax.swing.plaf.nimbus.MenuPainter"_s);
	$var($Insets, var$297, $new($Insets, 5, 5, 5, 5));
	d->put("Menu[Disabled].arrowIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$296, $MenuPainter::ARROWICON_DISABLED, var$297, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$298, "javax.swing.plaf.nimbus.MenuPainter"_s);
	$var($Insets, var$299, $new($Insets, 5, 5, 5, 5));
	d->put("Menu[Enabled].arrowIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$298, $MenuPainter::ARROWICON_ENABLED, var$299, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$300, "javax.swing.plaf.nimbus.MenuPainter"_s);
	$var($Insets, var$301, $new($Insets, 1, 1, 1, 1));
	d->put("Menu[Enabled+Selected].arrowIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$300, $MenuPainter::ARROWICON_ENABLED_SELECTED, var$301, $$new($Dimension, 9, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Menu.arrowIcon"_s, $$new($NimbusIcon, "Menu"_s, "arrowIconPainter"_s, 9, 10));
	d->put("Menu:MenuItemAccelerator.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "Menu:MenuItemAccelerator[MouseOver].textForeground"_s, 255, 255, 255, 255);
	d->put("PopupMenu.contentMargins"_s, $$new($InsetsUIResource, 6, 1, 6, 1));
	d->put("PopupMenu.opaque"_s, $Boolean::TRUE);
	d->put("PopupMenu.consumeEventOnClose"_s, $Boolean::FALSE);
	$var($String, var$302, "javax.swing.plaf.nimbus.PopupMenuPainter"_s);
	$var($Insets, var$303, $new($Insets, 9, 0, 11, 0));
	d->put("PopupMenu[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$302, $PopupMenuPainter::BACKGROUND_DISABLED, var$303, $$new($Dimension, 220, 313), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$304, "javax.swing.plaf.nimbus.PopupMenuPainter"_s);
	$var($Insets, var$305, $new($Insets, 11, 2, 11, 2));
	d->put("PopupMenu[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$304, $PopupMenuPainter::BACKGROUND_ENABLED, var$305, $$new($Dimension, 220, 313), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	d->put("PopupMenuSeparator.contentMargins"_s, $$new($InsetsUIResource, 1, 0, 2, 0));
	$var($String, var$306, "javax.swing.plaf.nimbus.PopupMenuSeparatorPainter"_s);
	$var($Insets, var$307, $new($Insets, 1, 1, 1, 1));
	d->put("PopupMenuSeparator[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$306, $PopupMenuSeparatorPainter::BACKGROUND_ENABLED, var$307, $$new($Dimension, 3, 3), true, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	d->put("OptionPane.contentMargins"_s, $$new($InsetsUIResource, 15, 15, 15, 15));
	d->put("OptionPane.opaque"_s, $Boolean::TRUE);
	d->put("OptionPane.buttonOrientation"_s, $($Integer::valueOf(4)));
	d->put("OptionPane.messageAnchor"_s, $($Integer::valueOf(17)));
	d->put("OptionPane.separatorPadding"_s, $($Integer::valueOf(0)));
	d->put("OptionPane.sameSizeButtons"_s, $Boolean::FALSE);
	d->put("OptionPane:\"OptionPane.separator\".contentMargins"_s, $$new($InsetsUIResource, 1, 0, 0, 0));
	d->put("OptionPane:\"OptionPane.messageArea\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 10, 0));
	d->put("OptionPane:\"OptionPane.messageArea\":\"OptionPane.label\".contentMargins"_s, $$new($InsetsUIResource, 0, 10, 10, 10));
	$var($String, var$308, "javax.swing.plaf.nimbus.OptionPaneMessageAreaOptionPaneLabelPainter"_s);
	$var($Insets, var$309, $new($Insets, 5, 5, 5, 5));
	d->put("OptionPane:\"OptionPane.messageArea\":\"OptionPane.label\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$308, $OptionPaneMessageAreaOptionPaneLabelPainter::BACKGROUND_ENABLED, var$309, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$310, "javax.swing.plaf.nimbus.OptionPanePainter"_s);
	$var($Insets, var$311, $new($Insets, 0, 0, 0, 0));
	d->put("OptionPane[Enabled].errorIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$310, $OptionPanePainter::ERRORICON_ENABLED, var$311, $$new($Dimension, 48, 48), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("OptionPane.errorIcon"_s, $$new($NimbusIcon, "OptionPane"_s, "errorIconPainter"_s, 48, 48));
	$var($String, var$312, "javax.swing.plaf.nimbus.OptionPanePainter"_s);
	$var($Insets, var$313, $new($Insets, 0, 0, 0, 0));
	d->put("OptionPane[Enabled].informationIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$312, $OptionPanePainter::INFORMATIONICON_ENABLED, var$313, $$new($Dimension, 48, 48), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("OptionPane.informationIcon"_s, $$new($NimbusIcon, "OptionPane"_s, "informationIconPainter"_s, 48, 48));
	$var($String, var$314, "javax.swing.plaf.nimbus.OptionPanePainter"_s);
	$var($Insets, var$315, $new($Insets, 0, 0, 0, 0));
	d->put("OptionPane[Enabled].questionIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$314, $OptionPanePainter::QUESTIONICON_ENABLED, var$315, $$new($Dimension, 48, 48), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("OptionPane.questionIcon"_s, $$new($NimbusIcon, "OptionPane"_s, "questionIconPainter"_s, 48, 48));
	$var($String, var$316, "javax.swing.plaf.nimbus.OptionPanePainter"_s);
	$var($Insets, var$317, $new($Insets, 0, 0, 0, 0));
	d->put("OptionPane[Enabled].warningIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$316, $OptionPanePainter::WARNINGICON_ENABLED, var$317, $$new($Dimension, 48, 48), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("OptionPane.warningIcon"_s, $$new($NimbusIcon, "OptionPane"_s, "warningIconPainter"_s, 48, 48));
	d->put("Panel.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Panel.opaque"_s, $Boolean::TRUE);
	d->put("ProgressBar.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("ProgressBar.States"_s, "Enabled,Disabled,Indeterminate,Finished"_s);
	d->put("ProgressBar.Indeterminate"_s, $$new($ProgressBarIndeterminateState));
	d->put("ProgressBar.Finished"_s, $$new($ProgressBarFinishedState));
	d->put("ProgressBar.tileWhenIndeterminate"_s, $Boolean::TRUE);
	d->put("ProgressBar.tileWidth"_s, $($Integer::valueOf(27)));
	d->put("ProgressBar.paintOutsideClip"_s, $Boolean::TRUE);
	d->put("ProgressBar.rotateText"_s, $Boolean::TRUE);
	d->put("ProgressBar.vertictalSize"_s, $$new($DimensionUIResource, 19, 150));
	d->put("ProgressBar.horizontalSize"_s, $$new($DimensionUIResource, 150, 19));
	d->put("ProgressBar.cycleTime"_s, $($Integer::valueOf(250)));
	d->put("ProgressBar.minBarSize"_s, $$new($DimensionUIResource, 6, 6));
	d->put("ProgressBar.glowWidth"_s, $($Integer::valueOf(2)));
	$var($String, var$318, "javax.swing.plaf.nimbus.ProgressBarPainter"_s);
	$var($Insets, var$319, $new($Insets, 5, 5, 5, 5));
	d->put("ProgressBar[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$318, $ProgressBarPainter::BACKGROUND_ENABLED, var$319, $$new($Dimension, 29, 19), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	addColor(d, "ProgressBar[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$320, "javax.swing.plaf.nimbus.ProgressBarPainter"_s);
	$var($Insets, var$321, $new($Insets, 5, 5, 5, 5));
	d->put("ProgressBar[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$320, $ProgressBarPainter::BACKGROUND_DISABLED, var$321, $$new($Dimension, 29, 19), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$322, "javax.swing.plaf.nimbus.ProgressBarPainter"_s);
	$var($Insets, var$323, $new($Insets, 3, 3, 3, 3));
	d->put("ProgressBar[Enabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$322, $ProgressBarPainter::FOREGROUND_ENABLED, var$323, $$new($Dimension, 27, 19), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$324, "javax.swing.plaf.nimbus.ProgressBarPainter"_s);
	$var($Insets, var$325, $new($Insets, 3, 3, 3, 3));
	d->put("ProgressBar[Enabled+Finished].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$324, $ProgressBarPainter::FOREGROUND_ENABLED_FINISHED, var$325, $$new($Dimension, 27, 19), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("ProgressBar[Enabled+Indeterminate].progressPadding"_s, $($Integer::valueOf(3)));
	$var($String, var$326, "javax.swing.plaf.nimbus.ProgressBarPainter"_s);
	$var($Insets, var$327, $new($Insets, 3, 3, 3, 3));
	d->put("ProgressBar[Enabled+Indeterminate].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$326, $ProgressBarPainter::FOREGROUND_ENABLED_INDETERMINATE, var$327, $$new($Dimension, 30, 13), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$328, "javax.swing.plaf.nimbus.ProgressBarPainter"_s);
	$var($Insets, var$329, $new($Insets, 3, 3, 3, 3));
	d->put("ProgressBar[Disabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$328, $ProgressBarPainter::FOREGROUND_DISABLED, var$329, $$new($Dimension, 27, 19), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$330, "javax.swing.plaf.nimbus.ProgressBarPainter"_s);
	$var($Insets, var$331, $new($Insets, 3, 3, 3, 3));
	d->put("ProgressBar[Disabled+Finished].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$330, $ProgressBarPainter::FOREGROUND_DISABLED_FINISHED, var$331, $$new($Dimension, 27, 19), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("ProgressBar[Disabled+Indeterminate].progressPadding"_s, $($Integer::valueOf(3)));
	$var($String, var$332, "javax.swing.plaf.nimbus.ProgressBarPainter"_s);
	$var($Insets, var$333, $new($Insets, 3, 3, 3, 3));
	d->put("ProgressBar[Disabled+Indeterminate].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$332, $ProgressBarPainter::FOREGROUND_DISABLED_INDETERMINATE, var$333, $$new($Dimension, 30, 13), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("Separator.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	$var($String, var$334, "javax.swing.plaf.nimbus.SeparatorPainter"_s);
	$var($Insets, var$335, $new($Insets, 0, 40, 0, 40));
	d->put("Separator[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$334, $SeparatorPainter::BACKGROUND_ENABLED, var$335, $$new($Dimension, 100, 3), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("ScrollBar.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("ScrollBar.opaque"_s, $Boolean::TRUE);
	d->put("ScrollBar.incrementButtonGap"_s, $($Integer::valueOf(-8)));
	d->put("ScrollBar.decrementButtonGap"_s, $($Integer::valueOf(-8)));
	d->put("ScrollBar.thumbHeight"_s, $($Integer::valueOf(15)));
	d->put("ScrollBar.minimumThumbSize"_s, $$new($DimensionUIResource, 29, 29));
	d->put("ScrollBar.maximumThumbSize"_s, $$new($DimensionUIResource, 1000, 1000));
	d->put("ScrollBar:\"ScrollBar.button\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("ScrollBar:\"ScrollBar.button\".size"_s, $($Integer::valueOf(25)));
	$var($String, var$336, "javax.swing.plaf.nimbus.ScrollBarButtonPainter"_s);
	$var($Insets, var$337, $new($Insets, 1, 1, 1, 1));
	d->put("ScrollBar:\"ScrollBar.button\"[Enabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$336, $ScrollBarButtonPainter::FOREGROUND_ENABLED, var$337, $$new($Dimension, 25, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$338, "javax.swing.plaf.nimbus.ScrollBarButtonPainter"_s);
	$var($Insets, var$339, $new($Insets, 1, 1, 1, 1));
	d->put("ScrollBar:\"ScrollBar.button\"[Disabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$338, $ScrollBarButtonPainter::FOREGROUND_DISABLED, var$339, $$new($Dimension, 25, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$340, "javax.swing.plaf.nimbus.ScrollBarButtonPainter"_s);
	$var($Insets, var$341, $new($Insets, 1, 1, 1, 1));
	d->put("ScrollBar:\"ScrollBar.button\"[MouseOver].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$340, $ScrollBarButtonPainter::FOREGROUND_MOUSEOVER, var$341, $$new($Dimension, 25, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$342, "javax.swing.plaf.nimbus.ScrollBarButtonPainter"_s);
	$var($Insets, var$343, $new($Insets, 1, 1, 1, 1));
	d->put("ScrollBar:\"ScrollBar.button\"[Pressed].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$342, $ScrollBarButtonPainter::FOREGROUND_PRESSED, var$343, $$new($Dimension, 25, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("ScrollBar:ScrollBarThumb.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	$var($String, var$344, "javax.swing.plaf.nimbus.ScrollBarThumbPainter"_s);
	$var($Insets, var$345, $new($Insets, 0, 15, 0, 15));
	d->put("ScrollBar:ScrollBarThumb[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$344, $ScrollBarThumbPainter::BACKGROUND_ENABLED, var$345, $$new($Dimension, 38, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$346, "javax.swing.plaf.nimbus.ScrollBarThumbPainter"_s);
	$var($Insets, var$347, $new($Insets, 0, 15, 0, 15));
	d->put("ScrollBar:ScrollBarThumb[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$346, $ScrollBarThumbPainter::BACKGROUND_MOUSEOVER, var$347, $$new($Dimension, 38, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$348, "javax.swing.plaf.nimbus.ScrollBarThumbPainter"_s);
	$var($Insets, var$349, $new($Insets, 0, 15, 0, 15));
	d->put("ScrollBar:ScrollBarThumb[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$348, $ScrollBarThumbPainter::BACKGROUND_PRESSED, var$349, $$new($Dimension, 38, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	d->put("ScrollBar:ScrollBarTrack.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	$var($String, var$350, "javax.swing.plaf.nimbus.ScrollBarTrackPainter"_s);
	$var($Insets, var$351, $new($Insets, 5, 5, 5, 5));
	d->put("ScrollBar:ScrollBarTrack[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$350, $ScrollBarTrackPainter::BACKGROUND_DISABLED, var$351, $$new($Dimension, 18, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$352, "javax.swing.plaf.nimbus.ScrollBarTrackPainter"_s);
	$var($Insets, var$353, $new($Insets, 5, 10, 5, 9));
	d->put("ScrollBar:ScrollBarTrack[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$352, $ScrollBarTrackPainter::BACKGROUND_ENABLED, var$353, $$new($Dimension, 34, 15), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("ScrollPane.contentMargins"_s, $$new($InsetsUIResource, 3, 3, 3, 3));
	d->put("ScrollPane.useChildTextComponentFocus"_s, $Boolean::TRUE);
	$var($String, var$354, "javax.swing.plaf.nimbus.ScrollPanePainter"_s);
	$var($Insets, var$355, $new($Insets, 5, 5, 5, 5));
	d->put("ScrollPane[Enabled+Focused].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$354, $ScrollPanePainter::BORDER_ENABLED_FOCUSED, var$355, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$356, "javax.swing.plaf.nimbus.ScrollPanePainter"_s);
	$var($Insets, var$357, $new($Insets, 5, 5, 5, 5));
	d->put("ScrollPane[Enabled].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$356, $ScrollPanePainter::BORDER_ENABLED, var$357, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("Viewport.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Viewport.opaque"_s, $Boolean::TRUE);
	d->put("Slider.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Slider.States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,ArrowShape"_s);
	d->put("Slider.ArrowShape"_s, $$new($SliderArrowShapeState));
	d->put("Slider.thumbWidth"_s, $($Integer::valueOf(17)));
	d->put("Slider.thumbHeight"_s, $($Integer::valueOf(17)));
	d->put("Slider.trackBorder"_s, $($Integer::valueOf(0)));
	d->put("Slider.paintValue"_s, $Boolean::FALSE);
	addColor(d, "Slider.tickColor"_s, 35, 40, 48, 255);
	d->put("Slider:SliderThumb.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Slider:SliderThumb.States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,ArrowShape"_s);
	d->put("Slider:SliderThumb.ArrowShape"_s, $$new($SliderThumbArrowShapeState));
	$var($String, var$358, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$359, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$358, $SliderThumbPainter::BACKGROUND_DISABLED, var$359, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$360, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$361, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$360, $SliderThumbPainter::BACKGROUND_ENABLED, var$361, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$362, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$363, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$362, $SliderThumbPainter::BACKGROUND_FOCUSED, var$363, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$364, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$365, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$364, $SliderThumbPainter::BACKGROUND_FOCUSED_MOUSEOVER, var$365, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$366, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$367, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$366, $SliderThumbPainter::BACKGROUND_FOCUSED_PRESSED, var$367, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$368, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$369, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$368, $SliderThumbPainter::BACKGROUND_MOUSEOVER, var$369, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$370, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$371, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$370, $SliderThumbPainter::BACKGROUND_PRESSED, var$371, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$372, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$373, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[ArrowShape+Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$372, $SliderThumbPainter::BACKGROUND_ENABLED_ARROWSHAPE, var$373, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$374, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$375, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[ArrowShape+Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$374, $SliderThumbPainter::BACKGROUND_DISABLED_ARROWSHAPE, var$375, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$376, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$377, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[ArrowShape+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$376, $SliderThumbPainter::BACKGROUND_MOUSEOVER_ARROWSHAPE, var$377, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$378, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$379, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[ArrowShape+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$378, $SliderThumbPainter::BACKGROUND_PRESSED_ARROWSHAPE, var$379, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$380, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$381, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[ArrowShape+Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$380, $SliderThumbPainter::BACKGROUND_FOCUSED_ARROWSHAPE, var$381, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$382, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$383, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[ArrowShape+Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$382, $SliderThumbPainter::BACKGROUND_FOCUSED_MOUSEOVER_ARROWSHAPE, var$383, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$384, "javax.swing.plaf.nimbus.SliderThumbPainter"_s);
	$var($Insets, var$385, $new($Insets, 5, 5, 5, 5));
	d->put("Slider:SliderThumb[ArrowShape+Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$384, $SliderThumbPainter::BACKGROUND_FOCUSED_PRESSED_ARROWSHAPE, var$385, $$new($Dimension, 17, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Slider:SliderTrack.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Slider:SliderTrack.States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,ArrowShape"_s);
	d->put("Slider:SliderTrack.ArrowShape"_s, $$new($SliderTrackArrowShapeState));
	$var($String, var$386, "javax.swing.plaf.nimbus.SliderTrackPainter"_s);
	$var($Insets, var$387, $new($Insets, 6, 5, 6, 5));
	d->put("Slider:SliderTrack[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$386, $SliderTrackPainter::BACKGROUND_DISABLED, var$387, $$new($Dimension, 23, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, 2.0));
	$var($String, var$388, "javax.swing.plaf.nimbus.SliderTrackPainter"_s);
	$var($Insets, var$389, $new($Insets, 6, 5, 6, 5));
	d->put("Slider:SliderTrack[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$388, $SliderTrackPainter::BACKGROUND_ENABLED, var$389, $$new($Dimension, 23, 17), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Spinner.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Spinner:\"Spinner.editor\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Spinner:Panel:\"Spinner.formattedTextField\".contentMargins"_s, $$new($InsetsUIResource, 6, 6, 5, 6));
	addColor(d, "Spinner:Panel:\"Spinner.formattedTextField\"[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$390, "javax.swing.plaf.nimbus.SpinnerPanelSpinnerFormattedTextFieldPainter"_s);
	$var($Insets, var$391, $new($Insets, 5, 3, 3, 1));
	d->put("Spinner:Panel:\"Spinner.formattedTextField\"[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$390, $SpinnerPanelSpinnerFormattedTextFieldPainter::BACKGROUND_DISABLED, var$391, $$new($Dimension, 64, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$392, "javax.swing.plaf.nimbus.SpinnerPanelSpinnerFormattedTextFieldPainter"_s);
	$var($Insets, var$393, $new($Insets, 5, 3, 3, 1));
	d->put("Spinner:Panel:\"Spinner.formattedTextField\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$392, $SpinnerPanelSpinnerFormattedTextFieldPainter::BACKGROUND_ENABLED, var$393, $$new($Dimension, 64, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$394, "javax.swing.plaf.nimbus.SpinnerPanelSpinnerFormattedTextFieldPainter"_s);
	$var($Insets, var$395, $new($Insets, 5, 3, 3, 1));
	d->put("Spinner:Panel:\"Spinner.formattedTextField\"[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$394, $SpinnerPanelSpinnerFormattedTextFieldPainter::BACKGROUND_FOCUSED, var$395, $$new($Dimension, 64, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "Spinner:Panel:\"Spinner.formattedTextField\"[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$396, "javax.swing.plaf.nimbus.SpinnerPanelSpinnerFormattedTextFieldPainter"_s);
	$var($Insets, var$397, $new($Insets, 5, 3, 3, 1));
	d->put("Spinner:Panel:\"Spinner.formattedTextField\"[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$396, $SpinnerPanelSpinnerFormattedTextFieldPainter::BACKGROUND_SELECTED, var$397, $$new($Dimension, 64, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "Spinner:Panel:\"Spinner.formattedTextField\"[Focused+Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$398, "javax.swing.plaf.nimbus.SpinnerPanelSpinnerFormattedTextFieldPainter"_s);
	$var($Insets, var$399, $new($Insets, 5, 3, 3, 1));
	d->put("Spinner:Panel:\"Spinner.formattedTextField\"[Focused+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$398, $SpinnerPanelSpinnerFormattedTextFieldPainter::BACKGROUND_SELECTED_FOCUSED, var$399, $$new($Dimension, 64, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("Spinner:\"Spinner.previousButton\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Spinner:\"Spinner.previousButton\".size"_s, $($Integer::valueOf(20)));
	$var($String, var$400, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$401, $new($Insets, 0, 1, 6, 7));
	d->put("Spinner:\"Spinner.previousButton\"[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$400, $SpinnerPreviousButtonPainter::BACKGROUND_DISABLED, var$401, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$402, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$403, $new($Insets, 0, 1, 6, 7));
	d->put("Spinner:\"Spinner.previousButton\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$402, $SpinnerPreviousButtonPainter::BACKGROUND_ENABLED, var$403, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$404, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$405, $new($Insets, 0, 1, 6, 7));
	d->put("Spinner:\"Spinner.previousButton\"[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$404, $SpinnerPreviousButtonPainter::BACKGROUND_FOCUSED, var$405, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$406, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$407, $new($Insets, 3, 1, 6, 7));
	d->put("Spinner:\"Spinner.previousButton\"[Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$406, $SpinnerPreviousButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED, var$407, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$408, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$409, $new($Insets, 0, 1, 6, 7));
	d->put("Spinner:\"Spinner.previousButton\"[Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$408, $SpinnerPreviousButtonPainter::BACKGROUND_PRESSED_FOCUSED, var$409, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$410, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$411, $new($Insets, 0, 1, 6, 7));
	d->put("Spinner:\"Spinner.previousButton\"[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$410, $SpinnerPreviousButtonPainter::BACKGROUND_MOUSEOVER, var$411, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$412, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$413, $new($Insets, 0, 1, 6, 7));
	d->put("Spinner:\"Spinner.previousButton\"[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$412, $SpinnerPreviousButtonPainter::BACKGROUND_PRESSED, var$413, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$414, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$415, $new($Insets, 3, 6, 5, 9));
	d->put("Spinner:\"Spinner.previousButton\"[Disabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$414, $SpinnerPreviousButtonPainter::FOREGROUND_DISABLED, var$415, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$416, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$417, $new($Insets, 3, 6, 5, 9));
	d->put("Spinner:\"Spinner.previousButton\"[Enabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$416, $SpinnerPreviousButtonPainter::FOREGROUND_ENABLED, var$417, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$418, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$419, $new($Insets, 3, 6, 5, 9));
	d->put("Spinner:\"Spinner.previousButton\"[Focused].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$418, $SpinnerPreviousButtonPainter::FOREGROUND_FOCUSED, var$419, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$420, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$421, $new($Insets, 3, 6, 5, 9));
	d->put("Spinner:\"Spinner.previousButton\"[Focused+MouseOver].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$420, $SpinnerPreviousButtonPainter::FOREGROUND_MOUSEOVER_FOCUSED, var$421, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$422, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$423, $new($Insets, 3, 6, 5, 9));
	d->put("Spinner:\"Spinner.previousButton\"[Focused+Pressed].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$422, $SpinnerPreviousButtonPainter::FOREGROUND_PRESSED_FOCUSED, var$423, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$424, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$425, $new($Insets, 3, 6, 5, 9));
	d->put("Spinner:\"Spinner.previousButton\"[MouseOver].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$424, $SpinnerPreviousButtonPainter::FOREGROUND_MOUSEOVER, var$425, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$426, "javax.swing.plaf.nimbus.SpinnerPreviousButtonPainter"_s);
	$var($Insets, var$427, $new($Insets, 3, 6, 5, 9));
	d->put("Spinner:\"Spinner.previousButton\"[Pressed].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$426, $SpinnerPreviousButtonPainter::FOREGROUND_PRESSED, var$427, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Spinner:\"Spinner.nextButton\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Spinner:\"Spinner.nextButton\".size"_s, $($Integer::valueOf(20)));
	$var($String, var$428, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$429, $new($Insets, 7, 1, 1, 7));
	d->put("Spinner:\"Spinner.nextButton\"[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$428, $SpinnerNextButtonPainter::BACKGROUND_DISABLED, var$429, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$430, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$431, $new($Insets, 7, 1, 1, 7));
	d->put("Spinner:\"Spinner.nextButton\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$430, $SpinnerNextButtonPainter::BACKGROUND_ENABLED, var$431, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$432, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$433, $new($Insets, 7, 1, 1, 7));
	d->put("Spinner:\"Spinner.nextButton\"[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$432, $SpinnerNextButtonPainter::BACKGROUND_FOCUSED, var$433, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$434, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$435, $new($Insets, 7, 1, 1, 7));
	d->put("Spinner:\"Spinner.nextButton\"[Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$434, $SpinnerNextButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED, var$435, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$436, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$437, $new($Insets, 7, 1, 1, 7));
	d->put("Spinner:\"Spinner.nextButton\"[Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$436, $SpinnerNextButtonPainter::BACKGROUND_PRESSED_FOCUSED, var$437, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$438, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$439, $new($Insets, 7, 1, 1, 7));
	d->put("Spinner:\"Spinner.nextButton\"[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$438, $SpinnerNextButtonPainter::BACKGROUND_MOUSEOVER, var$439, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$440, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$441, $new($Insets, 7, 1, 1, 7));
	d->put("Spinner:\"Spinner.nextButton\"[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$440, $SpinnerNextButtonPainter::BACKGROUND_PRESSED, var$441, $$new($Dimension, 20, 12), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$442, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$443, $new($Insets, 5, 6, 3, 9));
	d->put("Spinner:\"Spinner.nextButton\"[Disabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$442, $SpinnerNextButtonPainter::FOREGROUND_DISABLED, var$443, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$444, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$445, $new($Insets, 5, 6, 3, 9));
	d->put("Spinner:\"Spinner.nextButton\"[Enabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$444, $SpinnerNextButtonPainter::FOREGROUND_ENABLED, var$445, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$446, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$447, $new($Insets, 3, 6, 3, 9));
	d->put("Spinner:\"Spinner.nextButton\"[Focused].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$446, $SpinnerNextButtonPainter::FOREGROUND_FOCUSED, var$447, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$448, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$449, $new($Insets, 3, 6, 3, 9));
	d->put("Spinner:\"Spinner.nextButton\"[Focused+MouseOver].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$448, $SpinnerNextButtonPainter::FOREGROUND_MOUSEOVER_FOCUSED, var$449, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$450, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$451, $new($Insets, 5, 6, 3, 9));
	d->put("Spinner:\"Spinner.nextButton\"[Focused+Pressed].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$450, $SpinnerNextButtonPainter::FOREGROUND_PRESSED_FOCUSED, var$451, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$452, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$453, $new($Insets, 5, 6, 3, 9));
	d->put("Spinner:\"Spinner.nextButton\"[MouseOver].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$452, $SpinnerNextButtonPainter::FOREGROUND_MOUSEOVER, var$453, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$454, "javax.swing.plaf.nimbus.SpinnerNextButtonPainter"_s);
	$var($Insets, var$455, $new($Insets, 5, 6, 3, 9));
	d->put("Spinner:\"Spinner.nextButton\"[Pressed].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$454, $SpinnerNextButtonPainter::FOREGROUND_PRESSED, var$455, $$new($Dimension, 20, 12), true, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("SplitPane.contentMargins"_s, $$new($InsetsUIResource, 1, 1, 1, 1));
	d->put("SplitPane.States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,Vertical"_s);
	d->put("SplitPane.Vertical"_s, $$new($SplitPaneVerticalState));
	d->put("SplitPane.size"_s, $($Integer::valueOf(10)));
	d->put("SplitPane.dividerSize"_s, $($Integer::valueOf(10)));
	d->put("SplitPane.centerOneTouchButtons"_s, $Boolean::TRUE);
	d->put("SplitPane.oneTouchButtonOffset"_s, $($Integer::valueOf(30)));
	d->put("SplitPane.oneTouchExpandable"_s, $Boolean::FALSE);
	d->put("SplitPane.continuousLayout"_s, $Boolean::TRUE);
	d->put("SplitPane:SplitPaneDivider.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("SplitPane:SplitPaneDivider.States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,Vertical"_s);
	d->put("SplitPane:SplitPaneDivider.Vertical"_s, $$new($SplitPaneDividerVerticalState));
	$var($String, var$456, "javax.swing.plaf.nimbus.SplitPaneDividerPainter"_s);
	$var($Insets, var$457, $new($Insets, 3, 0, 3, 0));
	d->put("SplitPane:SplitPaneDivider[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$456, $SplitPaneDividerPainter::BACKGROUND_ENABLED, var$457, $$new($Dimension, 68, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$458, "javax.swing.plaf.nimbus.SplitPaneDividerPainter"_s);
	$var($Insets, var$459, $new($Insets, 3, 0, 3, 0));
	d->put("SplitPane:SplitPaneDivider[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$458, $SplitPaneDividerPainter::BACKGROUND_FOCUSED, var$459, $$new($Dimension, 68, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$460, "javax.swing.plaf.nimbus.SplitPaneDividerPainter"_s);
	$var($Insets, var$461, $new($Insets, 0, 24, 0, 24));
	d->put("SplitPane:SplitPaneDivider[Enabled].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$460, $SplitPaneDividerPainter::FOREGROUND_ENABLED, var$461, $$new($Dimension, 68, 10), true, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$462, "javax.swing.plaf.nimbus.SplitPaneDividerPainter"_s);
	$var($Insets, var$463, $new($Insets, 5, 0, 5, 0));
	d->put("SplitPane:SplitPaneDivider[Enabled+Vertical].foregroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$462, $SplitPaneDividerPainter::FOREGROUND_ENABLED_VERTICAL, var$463, $$new($Dimension, 10, 38), true, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("TabbedPane.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("TabbedPane.tabAreaStatesMatchSelectedTab"_s, $Boolean::TRUE);
	d->put("TabbedPane.nudgeSelectedLabel"_s, $Boolean::FALSE);
	d->put("TabbedPane.tabRunOverlay"_s, $($Integer::valueOf(2)));
	d->put("TabbedPane.tabOverlap"_s, $($Integer::valueOf(-1)));
	d->put("TabbedPane.extendTabsToBase"_s, $Boolean::TRUE);
	d->put("TabbedPane.useBasicArrows"_s, $Boolean::TRUE);
	addColor(d, "TabbedPane.shadow"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "TabbedPane.darkShadow"_s, "text"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "TabbedPane.highlight"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("TabbedPane:TabbedPaneTab.contentMargins"_s, $$new($InsetsUIResource, 2, 8, 3, 8));
	$var($String, var$464, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$465, $new($Insets, 7, 7, 1, 7));
	d->put("TabbedPane:TabbedPaneTab[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$464, $TabbedPaneTabPainter::BACKGROUND_ENABLED, var$465, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$466, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$467, $new($Insets, 7, 7, 1, 7));
	d->put("TabbedPane:TabbedPaneTab[Enabled+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$466, $TabbedPaneTabPainter::BACKGROUND_ENABLED_MOUSEOVER, var$467, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$468, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$469, $new($Insets, 7, 6, 1, 7));
	d->put("TabbedPane:TabbedPaneTab[Enabled+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$468, $TabbedPaneTabPainter::BACKGROUND_ENABLED_PRESSED, var$469, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "TabbedPane:TabbedPaneTab[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$470, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$471, $new($Insets, 6, 7, 1, 7));
	d->put("TabbedPane:TabbedPaneTab[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$470, $TabbedPaneTabPainter::BACKGROUND_DISABLED, var$471, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$472, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$473, $new($Insets, 7, 7, 0, 7));
	d->put("TabbedPane:TabbedPaneTab[Disabled+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$472, $TabbedPaneTabPainter::BACKGROUND_SELECTED_DISABLED, var$473, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$474, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$475, $new($Insets, 7, 7, 0, 7));
	d->put("TabbedPane:TabbedPaneTab[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$474, $TabbedPaneTabPainter::BACKGROUND_SELECTED, var$475, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$476, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$477, $new($Insets, 7, 9, 0, 9));
	d->put("TabbedPane:TabbedPaneTab[MouseOver+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$476, $TabbedPaneTabPainter::BACKGROUND_SELECTED_MOUSEOVER, var$477, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "TabbedPane:TabbedPaneTab[Pressed+Selected].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$478, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$479, $new($Insets, 7, 9, 0, 9));
	d->put("TabbedPane:TabbedPaneTab[Pressed+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$478, $TabbedPaneTabPainter::BACKGROUND_SELECTED_PRESSED, var$479, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$480, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$481, $new($Insets, 7, 7, 3, 7));
	d->put("TabbedPane:TabbedPaneTab[Focused+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$480, $TabbedPaneTabPainter::BACKGROUND_SELECTED_FOCUSED, var$481, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$482, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$483, $new($Insets, 7, 9, 3, 9));
	d->put("TabbedPane:TabbedPaneTab[Focused+MouseOver+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$482, $TabbedPaneTabPainter::BACKGROUND_SELECTED_MOUSEOVER_FOCUSED, var$483, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "TabbedPane:TabbedPaneTab[Focused+Pressed+Selected].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$484, "javax.swing.plaf.nimbus.TabbedPaneTabPainter"_s);
	$var($Insets, var$485, $new($Insets, 7, 9, 3, 9));
	d->put("TabbedPane:TabbedPaneTab[Focused+Pressed+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$484, $TabbedPaneTabPainter::BACKGROUND_SELECTED_PRESSED_FOCUSED, var$485, $$new($Dimension, 44, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("TabbedPane:TabbedPaneTabArea.contentMargins"_s, $$new($InsetsUIResource, 3, 10, 4, 10));
	$var($String, var$486, "javax.swing.plaf.nimbus.TabbedPaneTabAreaPainter"_s);
	$var($Insets, var$487, $new($Insets, 0, 5, 6, 5));
	d->put("TabbedPane:TabbedPaneTabArea[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$486, $TabbedPaneTabAreaPainter::BACKGROUND_ENABLED, var$487, $$new($Dimension, 5, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$488, "javax.swing.plaf.nimbus.TabbedPaneTabAreaPainter"_s);
	$var($Insets, var$489, $new($Insets, 0, 5, 6, 5));
	d->put("TabbedPane:TabbedPaneTabArea[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$488, $TabbedPaneTabAreaPainter::BACKGROUND_DISABLED, var$489, $$new($Dimension, 5, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$490, "javax.swing.plaf.nimbus.TabbedPaneTabAreaPainter"_s);
	$var($Insets, var$491, $new($Insets, 0, 5, 6, 5));
	d->put("TabbedPane:TabbedPaneTabArea[Enabled+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$490, $TabbedPaneTabAreaPainter::BACKGROUND_ENABLED_MOUSEOVER, var$491, $$new($Dimension, 5, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$492, "javax.swing.plaf.nimbus.TabbedPaneTabAreaPainter"_s);
	$var($Insets, var$493, $new($Insets, 0, 5, 6, 5));
	d->put("TabbedPane:TabbedPaneTabArea[Enabled+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$492, $TabbedPaneTabAreaPainter::BACKGROUND_ENABLED_PRESSED, var$493, $$new($Dimension, 5, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("TabbedPane:TabbedPaneContent.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Table.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Table.opaque"_s, $Boolean::TRUE);
	addColor(d, "Table.textForeground"_s, 35, 35, 36, 255);
	addColor(d, "Table.background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("Table.showGrid"_s, $Boolean::FALSE);
	d->put("Table.intercellSpacing"_s, $$new($DimensionUIResource, 0, 0));
	addColor(d, "Table.alternateRowColor"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, -0.05098039f, 0, false);
	d->put("Table.rendererUseTableColors"_s, $Boolean::TRUE);
	d->put("Table.rendererUseUIBorder"_s, $Boolean::TRUE);
	d->put("Table.cellNoFocusBorder"_s, $$new($BorderUIResource, $($BorderFactory::createEmptyBorder(2, 5, 2, 5))));
	d->put("Table.focusCellHighlightBorder"_s, $$new($BorderUIResource, $$new($NimbusDefaults$PainterBorder, "Tree:TreeCell[Enabled+Focused].backgroundPainter"_s, $$new($Insets, 2, 5, 2, 5))));
	addColor(d, "Table.dropLineColor"_s, "nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "Table.dropLineShortColor"_s, "nimbusOrange"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "Table[Enabled+Selected].textForeground"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0, false);
	addColor(d, "Table[Enabled+Selected].textBackground"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0, false);
	addColor(d, "Table[Disabled+Selected].textBackground"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0, false);
	d->put("Table:\"Table.cellRenderer\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Table:\"Table.cellRenderer\".opaque"_s, $Boolean::TRUE);
	addColor(d, "Table:\"Table.cellRenderer\".background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0, false);
	d->put("TableHeader.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("TableHeader.opaque"_s, $Boolean::TRUE);
	d->put("TableHeader.rightAlignSortArrow"_s, $Boolean::TRUE);
	$var($String, var$494, "javax.swing.plaf.nimbus.TableHeaderPainter"_s);
	$var($Insets, var$495, $new($Insets, 0, 0, 0, 2));
	d->put("TableHeader[Enabled].ascendingSortIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$494, $TableHeaderPainter::ASCENDINGSORTICON_ENABLED, var$495, $$new($Dimension, 7, 7), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Table.ascendingSortIcon"_s, $$new($NimbusIcon, "TableHeader"_s, "ascendingSortIconPainter"_s, 7, 7));
	$var($String, var$496, "javax.swing.plaf.nimbus.TableHeaderPainter"_s);
	$var($Insets, var$497, $new($Insets, 0, 0, 0, 0));
	d->put("TableHeader[Enabled].descendingSortIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$496, $TableHeaderPainter::DESCENDINGSORTICON_ENABLED, var$497, $$new($Dimension, 7, 7), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Table.descendingSortIcon"_s, $$new($NimbusIcon, "TableHeader"_s, "descendingSortIconPainter"_s, 7, 7));
	d->put("TableHeader:\"TableHeader.renderer\".contentMargins"_s, $$new($InsetsUIResource, 2, 5, 4, 5));
	d->put("TableHeader:\"TableHeader.renderer\".opaque"_s, $Boolean::TRUE);
	d->put("TableHeader:\"TableHeader.renderer\".States"_s, "Enabled,MouseOver,Pressed,Disabled,Focused,Selected,Sorted"_s);
	d->put("TableHeader:\"TableHeader.renderer\".Sorted"_s, $$new($TableHeaderRendererSortedState));
	$var($String, var$498, "javax.swing.plaf.nimbus.TableHeaderRendererPainter"_s);
	$var($Insets, var$499, $new($Insets, 5, 5, 5, 5));
	d->put("TableHeader:\"TableHeader.renderer\"[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$498, $TableHeaderRendererPainter::BACKGROUND_DISABLED, var$499, $$new($Dimension, 22, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$500, "javax.swing.plaf.nimbus.TableHeaderRendererPainter"_s);
	$var($Insets, var$501, $new($Insets, 5, 5, 5, 5));
	d->put("TableHeader:\"TableHeader.renderer\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$500, $TableHeaderRendererPainter::BACKGROUND_ENABLED, var$501, $$new($Dimension, 22, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$502, "javax.swing.plaf.nimbus.TableHeaderRendererPainter"_s);
	$var($Insets, var$503, $new($Insets, 5, 5, 5, 5));
	d->put("TableHeader:\"TableHeader.renderer\"[Enabled+Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$502, $TableHeaderRendererPainter::BACKGROUND_ENABLED_FOCUSED, var$503, $$new($Dimension, 22, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$504, "javax.swing.plaf.nimbus.TableHeaderRendererPainter"_s);
	$var($Insets, var$505, $new($Insets, 5, 5, 5, 5));
	d->put("TableHeader:\"TableHeader.renderer\"[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$504, $TableHeaderRendererPainter::BACKGROUND_MOUSEOVER, var$505, $$new($Dimension, 22, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$506, "javax.swing.plaf.nimbus.TableHeaderRendererPainter"_s);
	$var($Insets, var$507, $new($Insets, 5, 5, 5, 5));
	d->put("TableHeader:\"TableHeader.renderer\"[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$506, $TableHeaderRendererPainter::BACKGROUND_PRESSED, var$507, $$new($Dimension, 22, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$508, "javax.swing.plaf.nimbus.TableHeaderRendererPainter"_s);
	$var($Insets, var$509, $new($Insets, 5, 5, 5, 5));
	d->put("TableHeader:\"TableHeader.renderer\"[Enabled+Sorted].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$508, $TableHeaderRendererPainter::BACKGROUND_ENABLED_SORTED, var$509, $$new($Dimension, 22, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$510, "javax.swing.plaf.nimbus.TableHeaderRendererPainter"_s);
	$var($Insets, var$511, $new($Insets, 5, 5, 5, 5));
	d->put("TableHeader:\"TableHeader.renderer\"[Enabled+Focused+Sorted].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$510, $TableHeaderRendererPainter::BACKGROUND_ENABLED_FOCUSED_SORTED, var$511, $$new($Dimension, 22, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$512, "javax.swing.plaf.nimbus.TableHeaderRendererPainter"_s);
	$var($Insets, var$513, $new($Insets, 5, 5, 5, 5));
	d->put("TableHeader:\"TableHeader.renderer\"[Disabled+Sorted].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$512, $TableHeaderRendererPainter::BACKGROUND_DISABLED_SORTED, var$513, $$new($Dimension, 22, 20), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("\"Table.editor\".contentMargins"_s, $$new($InsetsUIResource, 3, 5, 3, 5));
	d->put("\"Table.editor\".opaque"_s, $Boolean::TRUE);
	addColor(d, "\"Table.editor\".background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "\"Table.editor\"[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$514, "javax.swing.plaf.nimbus.TableEditorPainter"_s);
	$var($Insets, var$515, $new($Insets, 5, 5, 5, 5));
	d->put("\"Table.editor\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$514, $TableEditorPainter::BACKGROUND_ENABLED, var$515, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$516, "javax.swing.plaf.nimbus.TableEditorPainter"_s);
	$var($Insets, var$517, $new($Insets, 5, 5, 5, 5));
	d->put("\"Table.editor\"[Enabled+Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$516, $TableEditorPainter::BACKGROUND_ENABLED_FOCUSED, var$517, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "\"Table.editor\"[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("\"Tree.cellEditor\".contentMargins"_s, $$new($InsetsUIResource, 2, 5, 2, 5));
	d->put("\"Tree.cellEditor\".opaque"_s, $Boolean::TRUE);
	addColor(d, "\"Tree.cellEditor\".background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "\"Tree.cellEditor\"[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$518, "javax.swing.plaf.nimbus.TreeCellEditorPainter"_s);
	$var($Insets, var$519, $new($Insets, 5, 5, 5, 5));
	d->put("\"Tree.cellEditor\"[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$518, $TreeCellEditorPainter::BACKGROUND_ENABLED, var$519, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$520, "javax.swing.plaf.nimbus.TreeCellEditorPainter"_s);
	$var($Insets, var$521, $new($Insets, 5, 5, 5, 5));
	d->put("\"Tree.cellEditor\"[Enabled+Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$520, $TreeCellEditorPainter::BACKGROUND_ENABLED_FOCUSED, var$521, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "\"Tree.cellEditor\"[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("TextField.contentMargins"_s, $$new($InsetsUIResource, 6, 6, 6, 6));
	addColor(d, "TextField.background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "TextField[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$522, "javax.swing.plaf.nimbus.TextFieldPainter"_s);
	$var($Insets, var$523, $new($Insets, 5, 5, 5, 5));
	d->put("TextField[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$522, $TextFieldPainter::BACKGROUND_DISABLED, var$523, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$524, "javax.swing.plaf.nimbus.TextFieldPainter"_s);
	$var($Insets, var$525, $new($Insets, 5, 5, 5, 5));
	d->put("TextField[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$524, $TextFieldPainter::BACKGROUND_ENABLED, var$525, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "TextField[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$526, "javax.swing.plaf.nimbus.TextFieldPainter"_s);
	$var($Insets, var$527, $new($Insets, 5, 5, 5, 5));
	d->put("TextField[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$526, $TextFieldPainter::BACKGROUND_SELECTED, var$527, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "TextField[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$528, "javax.swing.plaf.nimbus.TextFieldPainter"_s);
	$var($Insets, var$529, $new($Insets, 5, 3, 3, 3));
	d->put("TextField[Disabled].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$528, $TextFieldPainter::BORDER_DISABLED, var$529, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$530, "javax.swing.plaf.nimbus.TextFieldPainter"_s);
	$var($Insets, var$531, $new($Insets, 5, 5, 5, 5));
	d->put("TextField[Focused].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$530, $TextFieldPainter::BORDER_FOCUSED, var$531, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$532, "javax.swing.plaf.nimbus.TextFieldPainter"_s);
	$var($Insets, var$533, $new($Insets, 5, 5, 5, 5));
	d->put("TextField[Enabled].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$532, $TextFieldPainter::BORDER_ENABLED, var$533, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("FormattedTextField.contentMargins"_s, $$new($InsetsUIResource, 6, 6, 6, 6));
	addColor(d, "FormattedTextField[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$534, "javax.swing.plaf.nimbus.FormattedTextFieldPainter"_s);
	$var($Insets, var$535, $new($Insets, 5, 5, 5, 5));
	d->put("FormattedTextField[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$534, $FormattedTextFieldPainter::BACKGROUND_DISABLED, var$535, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$536, "javax.swing.plaf.nimbus.FormattedTextFieldPainter"_s);
	$var($Insets, var$537, $new($Insets, 5, 5, 5, 5));
	d->put("FormattedTextField[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$536, $FormattedTextFieldPainter::BACKGROUND_ENABLED, var$537, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "FormattedTextField[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$538, "javax.swing.plaf.nimbus.FormattedTextFieldPainter"_s);
	$var($Insets, var$539, $new($Insets, 5, 5, 5, 5));
	d->put("FormattedTextField[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$538, $FormattedTextFieldPainter::BACKGROUND_SELECTED, var$539, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "FormattedTextField[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$540, "javax.swing.plaf.nimbus.FormattedTextFieldPainter"_s);
	$var($Insets, var$541, $new($Insets, 5, 3, 3, 3));
	d->put("FormattedTextField[Disabled].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$540, $FormattedTextFieldPainter::BORDER_DISABLED, var$541, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$542, "javax.swing.plaf.nimbus.FormattedTextFieldPainter"_s);
	$var($Insets, var$543, $new($Insets, 5, 5, 5, 5));
	d->put("FormattedTextField[Focused].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$542, $FormattedTextFieldPainter::BORDER_FOCUSED, var$543, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$544, "javax.swing.plaf.nimbus.FormattedTextFieldPainter"_s);
	$var($Insets, var$545, $new($Insets, 5, 5, 5, 5));
	d->put("FormattedTextField[Enabled].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$544, $FormattedTextFieldPainter::BORDER_ENABLED, var$545, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("PasswordField.contentMargins"_s, $$new($InsetsUIResource, 6, 6, 6, 6));
	addColor(d, "PasswordField[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$546, "javax.swing.plaf.nimbus.PasswordFieldPainter"_s);
	$var($Insets, var$547, $new($Insets, 5, 5, 5, 5));
	d->put("PasswordField[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$546, $PasswordFieldPainter::BACKGROUND_DISABLED, var$547, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$548, "javax.swing.plaf.nimbus.PasswordFieldPainter"_s);
	$var($Insets, var$549, $new($Insets, 5, 5, 5, 5));
	d->put("PasswordField[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$548, $PasswordFieldPainter::BACKGROUND_ENABLED, var$549, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "PasswordField[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$550, "javax.swing.plaf.nimbus.PasswordFieldPainter"_s);
	$var($Insets, var$551, $new($Insets, 5, 5, 5, 5));
	d->put("PasswordField[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$550, $PasswordFieldPainter::BACKGROUND_SELECTED, var$551, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	addColor(d, "PasswordField[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$552, "javax.swing.plaf.nimbus.PasswordFieldPainter"_s);
	$var($Insets, var$553, $new($Insets, 5, 3, 3, 3));
	d->put("PasswordField[Disabled].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$552, $PasswordFieldPainter::BORDER_DISABLED, var$553, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$554, "javax.swing.plaf.nimbus.PasswordFieldPainter"_s);
	$var($Insets, var$555, $new($Insets, 5, 5, 5, 5));
	d->put("PasswordField[Focused].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$554, $PasswordFieldPainter::BORDER_FOCUSED, var$555, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$556, "javax.swing.plaf.nimbus.PasswordFieldPainter"_s);
	$var($Insets, var$557, $new($Insets, 5, 5, 5, 5));
	d->put("PasswordField[Enabled].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$556, $PasswordFieldPainter::BORDER_ENABLED, var$557, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("TextArea.contentMargins"_s, $$new($InsetsUIResource, 6, 6, 6, 6));
	d->put("TextArea.States"_s, "Enabled,MouseOver,Pressed,Selected,Disabled,Focused,NotInScrollPane"_s);
	d->put("TextArea.NotInScrollPane"_s, $$new($TextAreaNotInScrollPaneState));
	addColor(d, "TextArea[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$558, "javax.swing.plaf.nimbus.TextAreaPainter"_s);
	$var($Insets, var$559, $new($Insets, 5, 5, 5, 5));
	d->put("TextArea[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$558, $TextAreaPainter::BACKGROUND_DISABLED, var$559, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$560, "javax.swing.plaf.nimbus.TextAreaPainter"_s);
	$var($Insets, var$561, $new($Insets, 5, 5, 5, 5));
	d->put("TextArea[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$560, $TextAreaPainter::BACKGROUND_ENABLED, var$561, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "TextArea[Disabled+NotInScrollPane].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$562, "javax.swing.plaf.nimbus.TextAreaPainter"_s);
	$var($Insets, var$563, $new($Insets, 5, 5, 5, 5));
	d->put("TextArea[Disabled+NotInScrollPane].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$562, $TextAreaPainter::BACKGROUND_DISABLED_NOTINSCROLLPANE, var$563, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$564, "javax.swing.plaf.nimbus.TextAreaPainter"_s);
	$var($Insets, var$565, $new($Insets, 5, 5, 5, 5));
	d->put("TextArea[Enabled+NotInScrollPane].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$564, $TextAreaPainter::BACKGROUND_ENABLED_NOTINSCROLLPANE, var$565, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "TextArea[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$566, "javax.swing.plaf.nimbus.TextAreaPainter"_s);
	$var($Insets, var$567, $new($Insets, 5, 5, 5, 5));
	d->put("TextArea[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$566, $TextAreaPainter::BACKGROUND_SELECTED, var$567, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "TextArea[Disabled+NotInScrollPane].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$568, "javax.swing.plaf.nimbus.TextAreaPainter"_s);
	$var($Insets, var$569, $new($Insets, 5, 3, 3, 3));
	d->put("TextArea[Disabled+NotInScrollPane].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$568, $TextAreaPainter::BORDER_DISABLED_NOTINSCROLLPANE, var$569, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$570, "javax.swing.plaf.nimbus.TextAreaPainter"_s);
	$var($Insets, var$571, $new($Insets, 5, 5, 5, 5));
	d->put("TextArea[Focused+NotInScrollPane].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$570, $TextAreaPainter::BORDER_FOCUSED_NOTINSCROLLPANE, var$571, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	$var($String, var$572, "javax.swing.plaf.nimbus.TextAreaPainter"_s);
	$var($Insets, var$573, $new($Insets, 5, 5, 5, 5));
	d->put("TextArea[Enabled+NotInScrollPane].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$572, $TextAreaPainter::BORDER_ENABLED_NOTINSCROLLPANE, var$573, $$new($Dimension, 122, 24), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, $Double::POSITIVE_INFINITY, $Double::POSITIVE_INFINITY));
	d->put("TextPane.contentMargins"_s, $$new($InsetsUIResource, 4, 6, 4, 6));
	d->put("TextPane.opaque"_s, $Boolean::TRUE);
	addColor(d, "TextPane[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$574, "javax.swing.plaf.nimbus.TextPanePainter"_s);
	$var($Insets, var$575, $new($Insets, 5, 5, 5, 5));
	d->put("TextPane[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$574, $TextPanePainter::BACKGROUND_DISABLED, var$575, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$576, "javax.swing.plaf.nimbus.TextPanePainter"_s);
	$var($Insets, var$577, $new($Insets, 5, 5, 5, 5));
	d->put("TextPane[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$576, $TextPanePainter::BACKGROUND_ENABLED, var$577, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "TextPane[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$578, "javax.swing.plaf.nimbus.TextPanePainter"_s);
	$var($Insets, var$579, $new($Insets, 5, 5, 5, 5));
	d->put("TextPane[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$578, $TextPanePainter::BACKGROUND_SELECTED, var$579, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	d->put("EditorPane.contentMargins"_s, $$new($InsetsUIResource, 4, 6, 4, 6));
	d->put("EditorPane.opaque"_s, $Boolean::TRUE);
	addColor(d, "EditorPane[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$580, "javax.swing.plaf.nimbus.EditorPanePainter"_s);
	$var($Insets, var$581, $new($Insets, 5, 5, 5, 5));
	d->put("EditorPane[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$580, $EditorPanePainter::BACKGROUND_DISABLED, var$581, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$582, "javax.swing.plaf.nimbus.EditorPanePainter"_s);
	$var($Insets, var$583, $new($Insets, 5, 5, 5, 5));
	d->put("EditorPane[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$582, $EditorPanePainter::BACKGROUND_ENABLED, var$583, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "EditorPane[Selected].textForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$584, "javax.swing.plaf.nimbus.EditorPanePainter"_s);
	$var($Insets, var$585, $new($Insets, 5, 5, 5, 5));
	d->put("EditorPane[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$584, $EditorPanePainter::BACKGROUND_SELECTED, var$585, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	d->put("ToolBar.contentMargins"_s, $$new($InsetsUIResource, 2, 2, 2, 2));
	d->put("ToolBar.opaque"_s, $Boolean::TRUE);
	d->put("ToolBar.States"_s, "North,East,West,South"_s);
	d->put("ToolBar.North"_s, $$new($ToolBarNorthState));
	d->put("ToolBar.East"_s, $$new($ToolBarEastState));
	d->put("ToolBar.West"_s, $$new($ToolBarWestState));
	d->put("ToolBar.South"_s, $$new($ToolBarSouthState));
	$var($String, var$586, "javax.swing.plaf.nimbus.ToolBarPainter"_s);
	$var($Insets, var$587, $new($Insets, 0, 0, 1, 0));
	d->put("ToolBar[North].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$586, $ToolBarPainter::BORDER_NORTH, var$587, $$new($Dimension, 30, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$588, "javax.swing.plaf.nimbus.ToolBarPainter"_s);
	$var($Insets, var$589, $new($Insets, 1, 0, 0, 0));
	d->put("ToolBar[South].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$588, $ToolBarPainter::BORDER_SOUTH, var$589, $$new($Dimension, 30, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$590, "javax.swing.plaf.nimbus.ToolBarPainter"_s);
	$var($Insets, var$591, $new($Insets, 1, 0, 0, 0));
	d->put("ToolBar[East].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$590, $ToolBarPainter::BORDER_EAST, var$591, $$new($Dimension, 30, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$592, "javax.swing.plaf.nimbus.ToolBarPainter"_s);
	$var($Insets, var$593, $new($Insets, 0, 0, 1, 0));
	d->put("ToolBar[West].borderPainter"_s, $$new($NimbusDefaults$LazyPainter, var$592, $ToolBarPainter::BORDER_WEST, var$593, $$new($Dimension, 30, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$594, "javax.swing.plaf.nimbus.ToolBarPainter"_s);
	$var($Insets, var$595, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar[Enabled].handleIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$594, $ToolBarPainter::HANDLEICON_ENABLED, var$595, $$new($Dimension, 11, 38), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	d->put("ToolBar.handleIcon"_s, $$new($NimbusIcon, "ToolBar"_s, "handleIconPainter"_s, 11, 38));
	d->put("ToolBar:Button.contentMargins"_s, $$new($InsetsUIResource, 4, 4, 4, 4));
	$var($String, var$596, "javax.swing.plaf.nimbus.ToolBarButtonPainter"_s);
	$var($Insets, var$597, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:Button[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$596, $ToolBarButtonPainter::BACKGROUND_FOCUSED, var$597, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$598, "javax.swing.plaf.nimbus.ToolBarButtonPainter"_s);
	$var($Insets, var$599, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:Button[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$598, $ToolBarButtonPainter::BACKGROUND_MOUSEOVER, var$599, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$600, "javax.swing.plaf.nimbus.ToolBarButtonPainter"_s);
	$var($Insets, var$601, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:Button[Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$600, $ToolBarButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED, var$601, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$602, "javax.swing.plaf.nimbus.ToolBarButtonPainter"_s);
	$var($Insets, var$603, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:Button[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$602, $ToolBarButtonPainter::BACKGROUND_PRESSED, var$603, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$604, "javax.swing.plaf.nimbus.ToolBarButtonPainter"_s);
	$var($Insets, var$605, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:Button[Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$604, $ToolBarButtonPainter::BACKGROUND_PRESSED_FOCUSED, var$605, $$new($Dimension, 104, 33), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	d->put("ToolBar:ToggleButton.contentMargins"_s, $$new($InsetsUIResource, 4, 4, 4, 4));
	$var($String, var$606, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$607, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$606, $ToolBarToggleButtonPainter::BACKGROUND_FOCUSED, var$607, $$new($Dimension, 104, 34), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$608, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$609, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$608, $ToolBarToggleButtonPainter::BACKGROUND_MOUSEOVER, var$609, $$new($Dimension, 104, 34), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$610, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$611, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Focused+MouseOver].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$610, $ToolBarToggleButtonPainter::BACKGROUND_MOUSEOVER_FOCUSED, var$611, $$new($Dimension, 104, 34), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$612, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$613, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$612, $ToolBarToggleButtonPainter::BACKGROUND_PRESSED, var$613, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$614, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$615, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Focused+Pressed].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$614, $ToolBarToggleButtonPainter::BACKGROUND_PRESSED_FOCUSED, var$615, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$616, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$617, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$616, $ToolBarToggleButtonPainter::BACKGROUND_SELECTED, var$617, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$618, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$619, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Focused+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$618, $ToolBarToggleButtonPainter::BACKGROUND_SELECTED_FOCUSED, var$619, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$620, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$621, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Pressed+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$620, $ToolBarToggleButtonPainter::BACKGROUND_PRESSED_SELECTED, var$621, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$622, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$623, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Focused+Pressed+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$622, $ToolBarToggleButtonPainter::BACKGROUND_PRESSED_SELECTED_FOCUSED, var$623, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$624, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$625, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[MouseOver+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$624, $ToolBarToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED, var$625, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	$var($String, var$626, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$627, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Focused+MouseOver+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$626, $ToolBarToggleButtonPainter::BACKGROUND_MOUSEOVER_SELECTED_FOCUSED, var$627, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	addColor(d, "ToolBar:ToggleButton[Disabled+Selected].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$628, "javax.swing.plaf.nimbus.ToolBarToggleButtonPainter"_s);
	$var($Insets, var$629, $new($Insets, 5, 5, 5, 5));
	d->put("ToolBar:ToggleButton[Disabled+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$628, $ToolBarToggleButtonPainter::BACKGROUND_DISABLED_SELECTED, var$629, $$new($Dimension, 72, 25), false, $AbstractRegionPainter$PaintContext$CacheMode::NINE_SQUARE_SCALE, 2.0, $Double::POSITIVE_INFINITY));
	d->put("ToolBarSeparator.contentMargins"_s, $$new($InsetsUIResource, 2, 0, 3, 0));
	addColor(d, "ToolBarSeparator.textForeground"_s, "nimbusBorder"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("ToolTip.contentMargins"_s, $$new($InsetsUIResource, 4, 4, 4, 4));
	d->put("ToolTip.opaque"_s, $Boolean::TRUE);
	$var($String, var$630, "javax.swing.plaf.nimbus.ToolTipPainter"_s);
	$var($Insets, var$631, $new($Insets, 1, 1, 1, 1));
	d->put("ToolTip[Enabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$630, $ToolTipPainter::BACKGROUND_ENABLED, var$631, $$new($Dimension, 10, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	$var($String, var$632, "javax.swing.plaf.nimbus.ToolTipPainter"_s);
	$var($Insets, var$633, $new($Insets, 1, 1, 1, 1));
	d->put("ToolTip[Disabled].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$632, $ToolTipPainter::BACKGROUND_DISABLED, var$633, $$new($Dimension, 10, 10), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	d->put("Tree.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("Tree.opaque"_s, $Boolean::TRUE);
	addColor(d, "Tree.textForeground"_s, "text"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "Tree.textBackground"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "Tree.background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("Tree.rendererFillBackground"_s, $Boolean::FALSE);
	d->put("Tree.leftChildIndent"_s, $($Integer::valueOf(12)));
	d->put("Tree.rightChildIndent"_s, $($Integer::valueOf(4)));
	d->put("Tree.drawHorizontalLines"_s, $Boolean::FALSE);
	d->put("Tree.drawVerticalLines"_s, $Boolean::FALSE);
	d->put("Tree.showRootHandles"_s, $Boolean::FALSE);
	d->put("Tree.rendererUseTreeColors"_s, $Boolean::TRUE);
	d->put("Tree.repaintWholeRow"_s, $Boolean::TRUE);
	d->put("Tree.rowHeight"_s, $($Integer::valueOf(0)));
	d->put("Tree.rendererMargins"_s, $$new($InsetsUIResource, 2, 0, 1, 5));
	addColor(d, "Tree.selectionForeground"_s, "nimbusSelectedText"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "Tree.selectionBackground"_s, "nimbusSelectionBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "Tree.dropLineColor"_s, "nimbusFocus"_s, 0.0f, 0.0f, 0.0f, 0);
	d->put("Tree:TreeCell.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "Tree:TreeCell[Enabled].background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	addColor(d, "Tree:TreeCell[Enabled+Focused].background"_s, "nimbusLightBackground"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$634, "javax.swing.plaf.nimbus.TreeCellPainter"_s);
	$var($Insets, var$635, $new($Insets, 5, 5, 5, 5));
	d->put("Tree:TreeCell[Enabled+Focused].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$634, $TreeCellPainter::BACKGROUND_ENABLED_FOCUSED, var$635, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "Tree:TreeCell[Enabled+Selected].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$636, "javax.swing.plaf.nimbus.TreeCellPainter"_s);
	$var($Insets, var$637, $new($Insets, 5, 5, 5, 5));
	d->put("Tree:TreeCell[Enabled+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$636, $TreeCellPainter::BACKGROUND_ENABLED_SELECTED, var$637, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	addColor(d, "Tree:TreeCell[Focused+Selected].textForeground"_s, 255, 255, 255, 255);
	$var($String, var$638, "javax.swing.plaf.nimbus.TreeCellPainter"_s);
	$var($Insets, var$639, $new($Insets, 5, 5, 5, 5));
	d->put("Tree:TreeCell[Focused+Selected].backgroundPainter"_s, $$new($NimbusDefaults$LazyPainter, var$638, $TreeCellPainter::BACKGROUND_SELECTED_FOCUSED, var$639, $$new($Dimension, 100, 30), false, $AbstractRegionPainter$PaintContext$CacheMode::NO_CACHING, 1.0, 1.0));
	d->put("Tree:\"Tree.cellRenderer\".contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	addColor(d, "Tree:\"Tree.cellRenderer\"[Disabled].textForeground"_s, "nimbusDisabledText"_s, 0.0f, 0.0f, 0.0f, 0);
	$var($String, var$640, "javax.swing.plaf.nimbus.TreePainter"_s);
	$var($Insets, var$641, $new($Insets, 5, 5, 5, 5));
	d->put("Tree[Enabled].leafIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$640, $TreePainter::LEAFICON_ENABLED, var$641, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Tree.leafIcon"_s, $$new($NimbusIcon, "Tree"_s, "leafIconPainter"_s, 16, 16));
	$var($String, var$642, "javax.swing.plaf.nimbus.TreePainter"_s);
	$var($Insets, var$643, $new($Insets, 5, 5, 5, 5));
	d->put("Tree[Enabled].closedIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$642, $TreePainter::CLOSEDICON_ENABLED, var$643, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Tree.closedIcon"_s, $$new($NimbusIcon, "Tree"_s, "closedIconPainter"_s, 16, 16));
	$var($String, var$644, "javax.swing.plaf.nimbus.TreePainter"_s);
	$var($Insets, var$645, $new($Insets, 5, 5, 5, 5));
	d->put("Tree[Enabled].openIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$644, $TreePainter::OPENICON_ENABLED, var$645, $$new($Dimension, 16, 16), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Tree.openIcon"_s, $$new($NimbusIcon, "Tree"_s, "openIconPainter"_s, 16, 16));
	$var($String, var$646, "javax.swing.plaf.nimbus.TreePainter"_s);
	$var($Insets, var$647, $new($Insets, 5, 5, 5, 5));
	d->put("Tree[Enabled].collapsedIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$646, $TreePainter::COLLAPSEDICON_ENABLED, var$647, $$new($Dimension, 18, 7), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$648, "javax.swing.plaf.nimbus.TreePainter"_s);
	$var($Insets, var$649, $new($Insets, 5, 5, 5, 5));
	d->put("Tree[Enabled+Selected].collapsedIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$648, $TreePainter::COLLAPSEDICON_ENABLED_SELECTED, var$649, $$new($Dimension, 18, 7), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Tree.collapsedIcon"_s, $$new($NimbusIcon, "Tree"_s, "collapsedIconPainter"_s, 18, 7));
	$var($String, var$650, "javax.swing.plaf.nimbus.TreePainter"_s);
	$var($Insets, var$651, $new($Insets, 5, 5, 5, 5));
	d->put("Tree[Enabled].expandedIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$650, $TreePainter::EXPANDEDICON_ENABLED, var$651, $$new($Dimension, 18, 7), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	$var($String, var$652, "javax.swing.plaf.nimbus.TreePainter"_s);
	$var($Insets, var$653, $new($Insets, 5, 5, 5, 5));
	d->put("Tree[Enabled+Selected].expandedIconPainter"_s, $$new($NimbusDefaults$LazyPainter, var$652, $TreePainter::EXPANDEDICON_ENABLED_SELECTED, var$653, $$new($Dimension, 18, 7), false, $AbstractRegionPainter$PaintContext$CacheMode::FIXED_SIZES, 1.0, 1.0));
	d->put("Tree.expandedIcon"_s, $$new($NimbusIcon, "Tree"_s, "expandedIconPainter"_s, 18, 7));
	d->put("RootPane.contentMargins"_s, $$new($InsetsUIResource, 0, 0, 0, 0));
	d->put("RootPane.opaque"_s, $Boolean::TRUE);
	addColor(d, "RootPane.background"_s, "control"_s, 0.0f, 0.0f, 0.0f, 0);
}

void NimbusDefaults::register$($Region* region, $String* prefix) {
	if (region == nullptr || prefix == nullptr) {
		$throwNew($IllegalArgumentException, "Neither Region nor Prefix may be null"_s);
	}
	$var($List, styles, $cast($List, $nc(this->m)->get(region)));
	if (styles == nullptr) {
		$assign(styles, $new($LinkedList));
		styles->add($$new($NimbusDefaults$LazyStyle, this, prefix));
		$nc(this->m)->put(region, styles);
	} else {
		{
			$var($Iterator, i$, $nc(styles)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($NimbusDefaults$LazyStyle, s, $cast($NimbusDefaults$LazyStyle, i$->next()));
				{
					if ($nc(prefix)->equals($nc(s)->prefix)) {
						return;
					}
				}
			}
		}
		styles->add($$new($NimbusDefaults$LazyStyle, this, prefix));
	}
	$nc(this->registeredRegions)->put($($nc(region)->getName()), region);
}

$SynthStyle* NimbusDefaults::getStyle($JComponent* comp, $Region* r) {
	if (comp == nullptr || r == nullptr) {
		$throwNew($IllegalArgumentException, "Neither comp nor r may be null"_s);
	}
	$var($List, styles, $cast($List, $nc(this->m)->get(r)));
	if (styles == nullptr || $nc(styles)->size() == 0) {
		return this->defaultStyle;
	}
	$var($NimbusDefaults$LazyStyle, foundStyle, nullptr);
	{
		$var($Iterator, i$, $nc(styles)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NimbusDefaults$LazyStyle, s, $cast($NimbusDefaults$LazyStyle, i$->next()));
			{
				if ($nc(s)->matches(comp)) {
					if (foundStyle == nullptr || ($nc($nc(foundStyle)->parts)->length < $nc(s->parts)->length) || ($nc($nc(foundStyle)->parts)->length == $nc(s->parts)->length && foundStyle->simple && !s->simple)) {
						$assign(foundStyle, s);
					}
				}
			}
		}
	}
	return foundStyle == nullptr ? static_cast<$SynthStyle*>(this->defaultStyle) : $nc(foundStyle)->getStyle(comp, r);
}

void NimbusDefaults::clearOverridesCache($JComponent* c) {
	$nc(this->overridesCache)->remove(c);
}

void NimbusDefaults::addColor($UIDefaults* d, $String* uin, int32_t r, int32_t g, int32_t b, int32_t a) {
	$var($Color, color, $new($ColorUIResource, $$new($Color, r, g, b, a)));
	$nc(this->colorTree)->addColor(uin, color);
	$nc(d)->put(uin, color);
}

void NimbusDefaults::addColor($UIDefaults* d, $String* uin, $String* parentUin, float hOffset, float sOffset, float bOffset, int32_t aOffset) {
	addColor(d, uin, parentUin, hOffset, sOffset, bOffset, aOffset, true);
}

void NimbusDefaults::addColor($UIDefaults* d, $String* uin, $String* parentUin, float hOffset, float sOffset, float bOffset, int32_t aOffset, bool uiResource) {
	$var($Color, color, getDerivedColor(uin, parentUin, hOffset, sOffset, bOffset, aOffset, uiResource));
	$nc(d)->put(uin, color);
}

$DerivedColor* NimbusDefaults::getDerivedColor($String* parentUin, float hOffset, float sOffset, float bOffset, int32_t aOffset, bool uiResource) {
	return getDerivedColor(nullptr, parentUin, hOffset, sOffset, bOffset, aOffset, uiResource);
}

$DerivedColor* NimbusDefaults::getDerivedColor($String* uin, $String* parentUin, float hOffset, float sOffset, float bOffset, int32_t aOffset, bool uiResource) {
	$var($DerivedColor, color, nullptr);
	if (uiResource) {
		$assign(color, $new($DerivedColor$UIResource, parentUin, hOffset, sOffset, bOffset, aOffset));
	} else {
		$assign(color, $new($DerivedColor, parentUin, hOffset, sOffset, bOffset, aOffset));
	}
	if ($nc(this->derivedColors)->containsKey(color)) {
		return $cast($DerivedColor, $nc(this->derivedColors)->get(color));
	} else {
		$nc(this->derivedColors)->put(color, color);
		$nc(color)->rederiveColor();
		$nc(this->colorTree)->addColor(uin, color);
		return color;
	}
}

NimbusDefaults::NimbusDefaults() {
}

$Class* NimbusDefaults::load$($String* name, bool initialize) {
	$loadClass(NimbusDefaults, name, initialize, &_NimbusDefaults_ClassInfo_, allocate$NimbusDefaults);
	return class$;
}

$Class* NimbusDefaults::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax