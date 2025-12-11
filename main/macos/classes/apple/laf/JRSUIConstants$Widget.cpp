#include <apple/laf/JRSUIConstants$Widget.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$PropertyEncoding.h>
#include <apple/laf/JRSUIConstants.h>
#include <jcpp.h>

#undef BACKGROUND
#undef BUTTON_BEVEL
#undef BUTTON_BEVEL_INSET
#undef BUTTON_BEVEL_ROUND
#undef BUTTON_CHECK_BOX
#undef BUTTON_COMBO_BOX
#undef BUTTON_COMBO_BOX_INSET
#undef BUTTON_DISCLOSURE
#undef BUTTON_LIST_HEADER
#undef BUTTON_LITTLE_ARROWS
#undef BUTTON_POP_DOWN
#undef BUTTON_POP_DOWN_INSET
#undef BUTTON_POP_DOWN_SQUARE
#undef BUTTON_POP_UP
#undef BUTTON_POP_UP_INSET
#undef BUTTON_POP_UP_SQUARE
#undef BUTTON_PUSH
#undef BUTTON_PUSH_INSET
#undef BUTTON_PUSH_INSET2
#undef BUTTON_PUSH_SCOPE
#undef BUTTON_PUSH_SCOPE2
#undef BUTTON_PUSH_TEXTURED
#undef BUTTON_RADIO
#undef BUTTON_ROUND
#undef BUTTON_ROUND_HELP
#undef BUTTON_ROUND_INSET
#undef BUTTON_ROUND_INSET2
#undef BUTTON_SEARCH_FIELD_CANCEL
#undef BUTTON_SEARCH_FIELD_FIND
#undef BUTTON_SEGMENTED
#undef BUTTON_SEGMENTED_INSET
#undef BUTTON_SEGMENTED_INSET2
#undef BUTTON_SEGMENTED_SCURVE
#undef BUTTON_SEGMENTED_TEXTURED
#undef BUTTON_SEGMENTED_TOOLBAR
#undef DIAL
#undef DISCLOSURE_TRIANGLE
#undef DIVIDER_GRABBER
#undef DIVIDER_SEPARATOR_BAR
#undef DIVIDER_SPLITTER
#undef FOCUS
#undef FRAME_GROUP_BOX
#undef FRAME_GROUP_BOX_SECONDARY
#undef FRAME_LIST_BOX
#undef FRAME_PLACARD
#undef FRAME_TEXT_FIELD
#undef FRAME_TEXT_FIELD_ROUND
#undef FRAME_WELL
#undef GRADIENT
#undef GROW_BOX
#undef GROW_BOX_TEXTURED
#undef MASK
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef MENU_TITLE
#undef PROGRESS_BAR
#undef PROGRESS_INDETERMINATE_BAR
#undef PROGRESS_RELEVANCE
#undef PROGRESS_SPINNER
#undef SCROLL_BAR
#undef SCROLL_COLUMN_SIZER
#undef SHIFT
#undef SIZE
#undef SLIDER
#undef SLIDER_THUMB
#undef SYNCHRONIZATION
#undef TAB
#undef TITLE_BAR_CLOSE_BOX
#undef TITLE_BAR_COLLAPSE_BOX
#undef TITLE_BAR_TOOLBAR_BUTTON
#undef TITLE_BAR_ZOOM_BOX
#undef TOOLBAR_ITEM_WELL
#undef WINDOW_FRAME

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$PropertyEncoding = ::apple::laf::JRSUIConstants$PropertyEncoding;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace apple {
	namespace laf {

$FieldInfo _JRSUIConstants$Widget_FieldInfo_[] = {
	{"SHIFT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, SHIFT)},
	{"SIZE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, SIZE)},
	{"MASK", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, MASK)},
	{"widget", "Lapple/laf/JRSUIConstants$PropertyEncoding;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, widget)},
	{"_background", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _background)},
	{"BACKGROUND", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BACKGROUND)},
	{"_buttonBevel", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonBevel)},
	{"BUTTON_BEVEL", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_BEVEL)},
	{"_buttonBevelInset", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonBevelInset)},
	{"BUTTON_BEVEL_INSET", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_BEVEL_INSET)},
	{"_buttonBevelRound", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonBevelRound)},
	{"BUTTON_BEVEL_ROUND", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_BEVEL_ROUND)},
	{"_buttonCheckBox", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonCheckBox)},
	{"BUTTON_CHECK_BOX", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_CHECK_BOX)},
	{"_buttonComboBox", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonComboBox)},
	{"BUTTON_COMBO_BOX", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_COMBO_BOX)},
	{"_buttonComboBoxInset", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonComboBoxInset)},
	{"BUTTON_COMBO_BOX_INSET", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_COMBO_BOX_INSET)},
	{"_buttonDisclosure", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonDisclosure)},
	{"BUTTON_DISCLOSURE", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_DISCLOSURE)},
	{"_buttonListHeader", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonListHeader)},
	{"BUTTON_LIST_HEADER", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_LIST_HEADER)},
	{"_buttonLittleArrows", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonLittleArrows)},
	{"BUTTON_LITTLE_ARROWS", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_LITTLE_ARROWS)},
	{"_buttonPopDown", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPopDown)},
	{"BUTTON_POP_DOWN", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_POP_DOWN)},
	{"_buttonPopDownInset", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPopDownInset)},
	{"BUTTON_POP_DOWN_INSET", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_POP_DOWN_INSET)},
	{"_buttonPopDownSquare", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPopDownSquare)},
	{"BUTTON_POP_DOWN_SQUARE", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_POP_DOWN_SQUARE)},
	{"_buttonPopUp", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPopUp)},
	{"BUTTON_POP_UP", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_POP_UP)},
	{"_buttonPopUpInset", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPopUpInset)},
	{"BUTTON_POP_UP_INSET", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_POP_UP_INSET)},
	{"_buttonPopUpSquare", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPopUpSquare)},
	{"BUTTON_POP_UP_SQUARE", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_POP_UP_SQUARE)},
	{"_buttonPush", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPush)},
	{"BUTTON_PUSH", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_PUSH)},
	{"_buttonPushScope", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPushScope)},
	{"BUTTON_PUSH_SCOPE", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_PUSH_SCOPE)},
	{"_buttonPushScope2", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPushScope2)},
	{"BUTTON_PUSH_SCOPE2", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_PUSH_SCOPE2)},
	{"_buttonPushTextured", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPushTextured)},
	{"BUTTON_PUSH_TEXTURED", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_PUSH_TEXTURED)},
	{"_buttonPushInset", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPushInset)},
	{"BUTTON_PUSH_INSET", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_PUSH_INSET)},
	{"_buttonPushInset2", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonPushInset2)},
	{"BUTTON_PUSH_INSET2", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_PUSH_INSET2)},
	{"_buttonRadio", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonRadio)},
	{"BUTTON_RADIO", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_RADIO)},
	{"_buttonRound", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonRound)},
	{"BUTTON_ROUND", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_ROUND)},
	{"_buttonRoundHelp", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonRoundHelp)},
	{"BUTTON_ROUND_HELP", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_ROUND_HELP)},
	{"_buttonRoundInset", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonRoundInset)},
	{"BUTTON_ROUND_INSET", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_ROUND_INSET)},
	{"_buttonRoundInset2", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonRoundInset2)},
	{"BUTTON_ROUND_INSET2", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_ROUND_INSET2)},
	{"_buttonSearchFieldCancel", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonSearchFieldCancel)},
	{"BUTTON_SEARCH_FIELD_CANCEL", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_SEARCH_FIELD_CANCEL)},
	{"_buttonSearchFieldFind", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonSearchFieldFind)},
	{"BUTTON_SEARCH_FIELD_FIND", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_SEARCH_FIELD_FIND)},
	{"_buttonSegmented", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonSegmented)},
	{"BUTTON_SEGMENTED", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_SEGMENTED)},
	{"_buttonSegmentedInset", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonSegmentedInset)},
	{"BUTTON_SEGMENTED_INSET", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_SEGMENTED_INSET)},
	{"_buttonSegmentedInset2", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonSegmentedInset2)},
	{"BUTTON_SEGMENTED_INSET2", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_SEGMENTED_INSET2)},
	{"_buttonSegmentedSCurve", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonSegmentedSCurve)},
	{"BUTTON_SEGMENTED_SCURVE", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_SEGMENTED_SCURVE)},
	{"_buttonSegmentedTextured", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonSegmentedTextured)},
	{"BUTTON_SEGMENTED_TEXTURED", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_SEGMENTED_TEXTURED)},
	{"_buttonSegmentedToolbar", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _buttonSegmentedToolbar)},
	{"BUTTON_SEGMENTED_TOOLBAR", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, BUTTON_SEGMENTED_TOOLBAR)},
	{"_dial", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _dial)},
	{"DIAL", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, DIAL)},
	{"_disclosureTriangle", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _disclosureTriangle)},
	{"DISCLOSURE_TRIANGLE", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, DISCLOSURE_TRIANGLE)},
	{"_dividerGrabber", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _dividerGrabber)},
	{"DIVIDER_GRABBER", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, DIVIDER_GRABBER)},
	{"_dividerSeparatorBar", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _dividerSeparatorBar)},
	{"DIVIDER_SEPARATOR_BAR", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, DIVIDER_SEPARATOR_BAR)},
	{"_dividerSplitter", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _dividerSplitter)},
	{"DIVIDER_SPLITTER", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, DIVIDER_SPLITTER)},
	{"_focus", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _focus)},
	{"FOCUS", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, FOCUS)},
	{"_frameGroupBox", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _frameGroupBox)},
	{"FRAME_GROUP_BOX", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, FRAME_GROUP_BOX)},
	{"_frameGroupBoxSecondary", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _frameGroupBoxSecondary)},
	{"FRAME_GROUP_BOX_SECONDARY", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, FRAME_GROUP_BOX_SECONDARY)},
	{"_frameListBox", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _frameListBox)},
	{"FRAME_LIST_BOX", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, FRAME_LIST_BOX)},
	{"_framePlacard", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _framePlacard)},
	{"FRAME_PLACARD", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, FRAME_PLACARD)},
	{"_frameTextField", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _frameTextField)},
	{"FRAME_TEXT_FIELD", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, FRAME_TEXT_FIELD)},
	{"_frameTextFieldRound", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _frameTextFieldRound)},
	{"FRAME_TEXT_FIELD_ROUND", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, FRAME_TEXT_FIELD_ROUND)},
	{"_frameWell", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _frameWell)},
	{"FRAME_WELL", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, FRAME_WELL)},
	{"_growBox", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _growBox)},
	{"GROW_BOX", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, GROW_BOX)},
	{"_growBoxTextured", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _growBoxTextured)},
	{"GROW_BOX_TEXTURED", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, GROW_BOX_TEXTURED)},
	{"_gradient", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _gradient)},
	{"GRADIENT", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, GRADIENT)},
	{"_menu", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _menu)},
	{"MENU", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, MENU)},
	{"_menuItem", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _menuItem)},
	{"MENU_ITEM", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, MENU_ITEM)},
	{"_menuBar", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _menuBar)},
	{"MENU_BAR", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, MENU_BAR)},
	{"_menuTitle", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _menuTitle)},
	{"MENU_TITLE", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, MENU_TITLE)},
	{"_progressBar", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _progressBar)},
	{"PROGRESS_BAR", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, PROGRESS_BAR)},
	{"_progressIndeterminateBar", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _progressIndeterminateBar)},
	{"PROGRESS_INDETERMINATE_BAR", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, PROGRESS_INDETERMINATE_BAR)},
	{"_progressRelevance", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _progressRelevance)},
	{"PROGRESS_RELEVANCE", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, PROGRESS_RELEVANCE)},
	{"_progressSpinner", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _progressSpinner)},
	{"PROGRESS_SPINNER", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, PROGRESS_SPINNER)},
	{"_scrollBar", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _scrollBar)},
	{"SCROLL_BAR", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, SCROLL_BAR)},
	{"_scrollColumnSizer", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _scrollColumnSizer)},
	{"SCROLL_COLUMN_SIZER", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, SCROLL_COLUMN_SIZER)},
	{"_slider", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _slider)},
	{"SLIDER", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, SLIDER)},
	{"_sliderThumb", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _sliderThumb)},
	{"SLIDER_THUMB", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, SLIDER_THUMB)},
	{"_synchronization", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _synchronization)},
	{"SYNCHRONIZATION", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, SYNCHRONIZATION)},
	{"_tab", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _tab)},
	{"TAB", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, TAB)},
	{"_titleBarCloseBox", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _titleBarCloseBox)},
	{"TITLE_BAR_CLOSE_BOX", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, TITLE_BAR_CLOSE_BOX)},
	{"_titleBarCollapseBox", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _titleBarCollapseBox)},
	{"TITLE_BAR_COLLAPSE_BOX", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, TITLE_BAR_COLLAPSE_BOX)},
	{"_titleBarZoomBox", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _titleBarZoomBox)},
	{"TITLE_BAR_ZOOM_BOX", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, TITLE_BAR_ZOOM_BOX)},
	{"_titleBarToolbarButton", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _titleBarToolbarButton)},
	{"TITLE_BAR_TOOLBAR_BUTTON", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, TITLE_BAR_TOOLBAR_BUTTON)},
	{"_toolbarItemWell", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _toolbarItemWell)},
	{"TOOLBAR_ITEM_WELL", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, TOOLBAR_ITEM_WELL)},
	{"_windowFrame", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JRSUIConstants$Widget, _windowFrame)},
	{"WINDOW_FRAME", "Lapple/laf/JRSUIConstants$Widget;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JRSUIConstants$Widget, WINDOW_FRAME)},
	{}
};

$MethodInfo _JRSUIConstants$Widget_MethodInfo_[] = {
	{"<init>", "(B)V", nullptr, 0, $method(static_cast<void(JRSUIConstants$Widget::*)(int8_t)>(&JRSUIConstants$Widget::init$))},
	{"apply", "(J)J", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _JRSUIConstants$Widget_InnerClassesInfo_[] = {
	{"apple.laf.JRSUIConstants$Widget", "apple.laf.JRSUIConstants", "Widget", $PUBLIC | $STATIC},
	{"apple.laf.JRSUIConstants$Property", "apple.laf.JRSUIConstants", "Property", $STATIC},
	{}
};

$ClassInfo _JRSUIConstants$Widget_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"apple.laf.JRSUIConstants$Widget",
	"apple.laf.JRSUIConstants$Property",
	nullptr,
	_JRSUIConstants$Widget_FieldInfo_,
	_JRSUIConstants$Widget_MethodInfo_,
	nullptr,
	nullptr,
	_JRSUIConstants$Widget_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"apple.laf.JRSUIConstants"
};

$Object* allocate$JRSUIConstants$Widget($Class* clazz) {
	return $of($alloc(JRSUIConstants$Widget));
}

$JRSUIConstants$PropertyEncoding* JRSUIConstants$Widget::widget = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BACKGROUND = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_BEVEL = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_BEVEL_INSET = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_BEVEL_ROUND = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_CHECK_BOX = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_COMBO_BOX = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_COMBO_BOX_INSET = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_DISCLOSURE = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_LIST_HEADER = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_LITTLE_ARROWS = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_POP_DOWN = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_POP_DOWN_INSET = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_POP_DOWN_SQUARE = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_POP_UP = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_POP_UP_INSET = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_POP_UP_SQUARE = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_PUSH = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_PUSH_SCOPE = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_PUSH_SCOPE2 = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_PUSH_TEXTURED = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_PUSH_INSET = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_PUSH_INSET2 = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_RADIO = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_ROUND = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_ROUND_HELP = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_ROUND_INSET = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_ROUND_INSET2 = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_SEARCH_FIELD_CANCEL = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_SEARCH_FIELD_FIND = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_SEGMENTED = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_SEGMENTED_INSET = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_SEGMENTED_INSET2 = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_SEGMENTED_SCURVE = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_SEGMENTED_TEXTURED = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::BUTTON_SEGMENTED_TOOLBAR = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::DIAL = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::DISCLOSURE_TRIANGLE = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::DIVIDER_GRABBER = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::DIVIDER_SEPARATOR_BAR = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::DIVIDER_SPLITTER = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::FOCUS = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::FRAME_GROUP_BOX = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::FRAME_GROUP_BOX_SECONDARY = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::FRAME_LIST_BOX = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::FRAME_PLACARD = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::FRAME_TEXT_FIELD = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::FRAME_TEXT_FIELD_ROUND = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::FRAME_WELL = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::GROW_BOX = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::GROW_BOX_TEXTURED = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::GRADIENT = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::MENU = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::MENU_ITEM = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::MENU_BAR = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::MENU_TITLE = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::PROGRESS_BAR = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::PROGRESS_INDETERMINATE_BAR = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::PROGRESS_RELEVANCE = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::PROGRESS_SPINNER = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::SCROLL_BAR = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::SCROLL_COLUMN_SIZER = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::SLIDER = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::SLIDER_THUMB = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::SYNCHRONIZATION = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::TAB = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::TITLE_BAR_CLOSE_BOX = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::TITLE_BAR_COLLAPSE_BOX = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::TITLE_BAR_ZOOM_BOX = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::TITLE_BAR_TOOLBAR_BUTTON = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::TOOLBAR_ITEM_WELL = nullptr;
JRSUIConstants$Widget* JRSUIConstants$Widget::WINDOW_FRAME = nullptr;

void JRSUIConstants$Widget::init$(int8_t constant) {
	$JRSUIConstants$Property::init$(JRSUIConstants$Widget::widget, constant);
}

$String* JRSUIConstants$Widget::toString() {
	return $JRSUIConstants$Property::toString();
}

int64_t JRSUIConstants$Widget::apply(int64_t encodedState) {
	return $JRSUIConstants$Property::apply(encodedState);
}

void clinit$JRSUIConstants$Widget($Class* class$) {
	$assignStatic(JRSUIConstants$Widget::widget, $new($JRSUIConstants$PropertyEncoding, JRSUIConstants$Widget::MASK, JRSUIConstants$Widget::SHIFT));
	$assignStatic(JRSUIConstants$Widget::BACKGROUND, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_background));
	$assignStatic(JRSUIConstants$Widget::BUTTON_BEVEL, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonBevel));
	$assignStatic(JRSUIConstants$Widget::BUTTON_BEVEL_INSET, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonBevelInset));
	$assignStatic(JRSUIConstants$Widget::BUTTON_BEVEL_ROUND, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonBevelRound));
	$assignStatic(JRSUIConstants$Widget::BUTTON_CHECK_BOX, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonCheckBox));
	$assignStatic(JRSUIConstants$Widget::BUTTON_COMBO_BOX, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonComboBox));
	$assignStatic(JRSUIConstants$Widget::BUTTON_COMBO_BOX_INSET, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonComboBoxInset));
	$assignStatic(JRSUIConstants$Widget::BUTTON_DISCLOSURE, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonDisclosure));
	$assignStatic(JRSUIConstants$Widget::BUTTON_LIST_HEADER, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonListHeader));
	$assignStatic(JRSUIConstants$Widget::BUTTON_LITTLE_ARROWS, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonLittleArrows));
	$assignStatic(JRSUIConstants$Widget::BUTTON_POP_DOWN, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPopDown));
	$assignStatic(JRSUIConstants$Widget::BUTTON_POP_DOWN_INSET, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPopDownInset));
	$assignStatic(JRSUIConstants$Widget::BUTTON_POP_DOWN_SQUARE, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPopDownSquare));
	$assignStatic(JRSUIConstants$Widget::BUTTON_POP_UP, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPopUp));
	$assignStatic(JRSUIConstants$Widget::BUTTON_POP_UP_INSET, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPopUpInset));
	$assignStatic(JRSUIConstants$Widget::BUTTON_POP_UP_SQUARE, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPopUpSquare));
	$assignStatic(JRSUIConstants$Widget::BUTTON_PUSH, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPush));
	$assignStatic(JRSUIConstants$Widget::BUTTON_PUSH_SCOPE, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPushScope));
	$assignStatic(JRSUIConstants$Widget::BUTTON_PUSH_SCOPE2, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPushScope2));
	$assignStatic(JRSUIConstants$Widget::BUTTON_PUSH_TEXTURED, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPushTextured));
	$assignStatic(JRSUIConstants$Widget::BUTTON_PUSH_INSET, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPushInset));
	$assignStatic(JRSUIConstants$Widget::BUTTON_PUSH_INSET2, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonPushInset2));
	$assignStatic(JRSUIConstants$Widget::BUTTON_RADIO, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonRadio));
	$assignStatic(JRSUIConstants$Widget::BUTTON_ROUND, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonRound));
	$assignStatic(JRSUIConstants$Widget::BUTTON_ROUND_HELP, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonRoundHelp));
	$assignStatic(JRSUIConstants$Widget::BUTTON_ROUND_INSET, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonRoundInset));
	$assignStatic(JRSUIConstants$Widget::BUTTON_ROUND_INSET2, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonRoundInset2));
	$assignStatic(JRSUIConstants$Widget::BUTTON_SEARCH_FIELD_CANCEL, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonSearchFieldCancel));
	$assignStatic(JRSUIConstants$Widget::BUTTON_SEARCH_FIELD_FIND, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonSearchFieldFind));
	$assignStatic(JRSUIConstants$Widget::BUTTON_SEGMENTED, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonSegmented));
	$assignStatic(JRSUIConstants$Widget::BUTTON_SEGMENTED_INSET, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonSegmentedInset));
	$assignStatic(JRSUIConstants$Widget::BUTTON_SEGMENTED_INSET2, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonSegmentedInset2));
	$assignStatic(JRSUIConstants$Widget::BUTTON_SEGMENTED_SCURVE, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonSegmentedSCurve));
	$assignStatic(JRSUIConstants$Widget::BUTTON_SEGMENTED_TEXTURED, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonSegmentedTextured));
	$assignStatic(JRSUIConstants$Widget::BUTTON_SEGMENTED_TOOLBAR, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_buttonSegmentedToolbar));
	$assignStatic(JRSUIConstants$Widget::DIAL, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_dial));
	$assignStatic(JRSUIConstants$Widget::DISCLOSURE_TRIANGLE, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_disclosureTriangle));
	$assignStatic(JRSUIConstants$Widget::DIVIDER_GRABBER, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_dividerGrabber));
	$assignStatic(JRSUIConstants$Widget::DIVIDER_SEPARATOR_BAR, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_dividerSeparatorBar));
	$assignStatic(JRSUIConstants$Widget::DIVIDER_SPLITTER, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_dividerSplitter));
	$assignStatic(JRSUIConstants$Widget::FOCUS, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_focus));
	$assignStatic(JRSUIConstants$Widget::FRAME_GROUP_BOX, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_frameGroupBox));
	$assignStatic(JRSUIConstants$Widget::FRAME_GROUP_BOX_SECONDARY, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_frameGroupBoxSecondary));
	$assignStatic(JRSUIConstants$Widget::FRAME_LIST_BOX, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_frameListBox));
	$assignStatic(JRSUIConstants$Widget::FRAME_PLACARD, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_framePlacard));
	$assignStatic(JRSUIConstants$Widget::FRAME_TEXT_FIELD, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_frameTextField));
	$assignStatic(JRSUIConstants$Widget::FRAME_TEXT_FIELD_ROUND, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_frameTextFieldRound));
	$assignStatic(JRSUIConstants$Widget::FRAME_WELL, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_frameWell));
	$assignStatic(JRSUIConstants$Widget::GROW_BOX, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_growBox));
	$assignStatic(JRSUIConstants$Widget::GROW_BOX_TEXTURED, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_growBoxTextured));
	$assignStatic(JRSUIConstants$Widget::GRADIENT, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_gradient));
	$assignStatic(JRSUIConstants$Widget::MENU, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_menu));
	$assignStatic(JRSUIConstants$Widget::MENU_ITEM, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_menuItem));
	$assignStatic(JRSUIConstants$Widget::MENU_BAR, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_menuBar));
	$assignStatic(JRSUIConstants$Widget::MENU_TITLE, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_menuTitle));
	$assignStatic(JRSUIConstants$Widget::PROGRESS_BAR, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_progressBar));
	$assignStatic(JRSUIConstants$Widget::PROGRESS_INDETERMINATE_BAR, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_progressIndeterminateBar));
	$assignStatic(JRSUIConstants$Widget::PROGRESS_RELEVANCE, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_progressRelevance));
	$assignStatic(JRSUIConstants$Widget::PROGRESS_SPINNER, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_progressSpinner));
	$assignStatic(JRSUIConstants$Widget::SCROLL_BAR, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_scrollBar));
	$assignStatic(JRSUIConstants$Widget::SCROLL_COLUMN_SIZER, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_scrollColumnSizer));
	$assignStatic(JRSUIConstants$Widget::SLIDER, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_slider));
	$assignStatic(JRSUIConstants$Widget::SLIDER_THUMB, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_sliderThumb));
	$assignStatic(JRSUIConstants$Widget::SYNCHRONIZATION, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_synchronization));
	$assignStatic(JRSUIConstants$Widget::TAB, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_tab));
	$assignStatic(JRSUIConstants$Widget::TITLE_BAR_CLOSE_BOX, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_titleBarCloseBox));
	$assignStatic(JRSUIConstants$Widget::TITLE_BAR_COLLAPSE_BOX, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_titleBarCollapseBox));
	$assignStatic(JRSUIConstants$Widget::TITLE_BAR_ZOOM_BOX, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_titleBarZoomBox));
	$assignStatic(JRSUIConstants$Widget::TITLE_BAR_TOOLBAR_BUTTON, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_titleBarToolbarButton));
	$assignStatic(JRSUIConstants$Widget::TOOLBAR_ITEM_WELL, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_toolbarItemWell));
	$assignStatic(JRSUIConstants$Widget::WINDOW_FRAME, $new(JRSUIConstants$Widget, JRSUIConstants$Widget::_windowFrame));
}

JRSUIConstants$Widget::JRSUIConstants$Widget() {
}

$Class* JRSUIConstants$Widget::load$($String* name, bool initialize) {
	$loadClass(JRSUIConstants$Widget, name, initialize, &_JRSUIConstants$Widget_ClassInfo_, clinit$JRSUIConstants$Widget, allocate$JRSUIConstants$Widget);
	return class$;
}

$Class* JRSUIConstants$Widget::class$ = nullptr;

	} // laf
} // apple