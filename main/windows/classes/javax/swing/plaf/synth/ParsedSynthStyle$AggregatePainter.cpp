#include <javax/swing/plaf/synth/ParsedSynthStyle$AggregatePainter.h>

#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSequentialList.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSequentialList = ::java::util::AbstractSequentialList;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $ParsedSynthStyle = ::javax::swing::plaf::synth::ParsedSynthStyle;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _ParsedSynthStyle$AggregatePainter_FieldInfo_[] = {
	{"painters", "Ljava/util/List;", "Ljava/util/List<Ljavax/swing/plaf/synth/SynthPainter;>;", $PRIVATE, $field(ParsedSynthStyle$AggregatePainter, painters)},
	{}
};

$MethodInfo _ParsedSynthStyle$AggregatePainter_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthPainter;)V", nullptr, 0, $method(static_cast<void(ParsedSynthStyle$AggregatePainter::*)($SynthPainter*)>(&ParsedSynthStyle$AggregatePainter::init$))},
	{"addPainter", "(Ljavax/swing/plaf/synth/SynthPainter;)V", nullptr, 0},
	{"paintArrowButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintArrowButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintArrowButtonForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCheckBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCheckBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCheckBoxMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintCheckBoxMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintColorChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintColorChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintComboBoxBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintComboBoxBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintDesktopIconBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintDesktopIconBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintDesktopPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintDesktopPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintEditorPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintEditorPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintFileChooserBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintFileChooserBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintFormattedTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintFormattedTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintInternalFrameBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintInternalFrameBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintInternalFrameTitlePaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintInternalFrameTitlePaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintLabelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintLabelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintListBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintListBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintOptionPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintOptionPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintPanelBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintPanelBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintPasswordFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintPasswordFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintPopupMenuBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintPopupMenuBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintProgressBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintProgressBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintProgressBarForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintRadioButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintRadioButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintRadioButtonMenuItemBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintRadioButtonMenuItemBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintRootPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintRootPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintScrollBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintScrollBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintScrollBarThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintScrollBarThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintScrollBarTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintScrollBarTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintScrollPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintScrollPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSeparatorBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSeparatorBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSeparatorForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSliderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSliderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSliderThumbBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSliderThumbBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSliderTrackBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSliderTrackBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSpinnerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSpinnerBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSplitPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSplitPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintSplitPaneDividerBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSplitPaneDividerForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintSplitPaneDragDivider", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintTabbedPaneTabBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIIII)V", nullptr, $PUBLIC},
	{"paintTableBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTableBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTableHeaderBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTableHeaderBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTextAreaBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTextAreaBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTextFieldBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTextFieldBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTextPaneBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTextPaneBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToggleButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToggleButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarContentBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarDragWindowBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolBarDragWindowBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintToolTipBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintToolTipBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeCellBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeCellBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintTreeCellFocus", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintViewportBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintViewportBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParsedSynthStyle$AggregatePainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.ParsedSynthStyle$AggregatePainter", "javax.swing.plaf.synth.ParsedSynthStyle", "AggregatePainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ParsedSynthStyle$AggregatePainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.ParsedSynthStyle$AggregatePainter",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	_ParsedSynthStyle$AggregatePainter_FieldInfo_,
	_ParsedSynthStyle$AggregatePainter_MethodInfo_,
	nullptr,
	nullptr,
	_ParsedSynthStyle$AggregatePainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.ParsedSynthStyle"
};

$Object* allocate$ParsedSynthStyle$AggregatePainter($Class* clazz) {
	return $of($alloc(ParsedSynthStyle$AggregatePainter));
}

void ParsedSynthStyle$AggregatePainter::init$($SynthPainter* painter) {
	$SynthPainter::init$();
	$set(this, painters, $new($LinkedList));
	$nc(this->painters)->add(painter);
}

void ParsedSynthStyle$AggregatePainter::addPainter($SynthPainter* painter) {
	if (painter != nullptr) {
		$nc(this->painters)->add(painter);
	}
}

void ParsedSynthStyle$AggregatePainter::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintArrowButtonBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintArrowButtonBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintArrowButtonForeground(context, g, x, y, w, h, direction);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintButtonBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintButtonBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintCheckBoxMenuItemBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintCheckBoxMenuItemBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintCheckBoxBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintCheckBoxBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintColorChooserBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintColorChooserBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintComboBoxBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintComboBoxBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintDesktopIconBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintDesktopIconBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintDesktopPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintDesktopPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintEditorPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintEditorPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintFileChooserBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintFileChooserBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintFormattedTextFieldBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintFormattedTextFieldBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintInternalFrameTitlePaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintInternalFrameTitlePaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintInternalFrameBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintInternalFrameBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintLabelBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintLabelBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintListBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintListBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuBarBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuBarBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuItemBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuItemBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintMenuBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintOptionPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintOptionPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPanelBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPanelBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPasswordFieldBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPasswordFieldBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPopupMenuBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintPopupMenuBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintProgressBarForeground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRadioButtonMenuItemBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRadioButtonMenuItemBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRadioButtonBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRadioButtonBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRootPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintRootPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarThumbBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarThumbBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarTrackBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarTrackBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarTrackBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollBarTrackBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintScrollPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSeparatorForeground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderThumbBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderThumbBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderTrackBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderTrackBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderTrackBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSliderTrackBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSpinnerBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSpinnerBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneDividerBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneDividerBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneDividerForeground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneDragDivider(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintSplitPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabAreaBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabAreaBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabAreaBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabAreaBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabBackground(context, g, x, y, w, h, tabIndex);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabBackground(context, g, x, y, w, h, tabIndex, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabBorder(context, g, x, y, w, h, tabIndex);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneTabBorder(context, g, x, y, w, h, tabIndex, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneContentBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTabbedPaneContentBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTableHeaderBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTableHeaderBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTableBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTableBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextAreaBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextAreaBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextPaneBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextPaneBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextFieldBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTextFieldBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToggleButtonBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToggleButtonBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarContentBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarContentBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarContentBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarContentBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarDragWindowBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarDragWindowBackground(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarDragWindowBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolBarDragWindowBorder(context, g, x, y, w, h, orientation);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolTipBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintToolTipBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeCellBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeCellBorder(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintTreeCellFocus(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintViewportBackground(context, g, x, y, w, h);
			}
		}
	}
}

void ParsedSynthStyle$AggregatePainter::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	{
		$var($Iterator, i$, $nc(this->painters)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SynthPainter, painter, $cast($SynthPainter, i$->next()));
			{
				$nc(painter)->paintViewportBorder(context, g, x, y, w, h);
			}
		}
	}
}

ParsedSynthStyle$AggregatePainter::ParsedSynthStyle$AggregatePainter() {
}

$Class* ParsedSynthStyle$AggregatePainter::load$($String* name, bool initialize) {
	$loadClass(ParsedSynthStyle$AggregatePainter, name, initialize, &_ParsedSynthStyle$AggregatePainter_ClassInfo_, allocate$ParsedSynthStyle$AggregatePainter);
	return class$;
}

$Class* ParsedSynthStyle$AggregatePainter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax