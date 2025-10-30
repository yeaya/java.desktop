#include <javax/swing/plaf/synth/ParsedSynthStyle$DelegatingPainter.h>

#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/ParsedSynthStyle.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParsedSynthStyle = ::javax::swing::plaf::synth::ParsedSynthStyle;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _ParsedSynthStyle$DelegatingPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ParsedSynthStyle$DelegatingPainter::*)()>(&ParsedSynthStyle$DelegatingPainter::init$))},
	{"getPainter", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/lang/String;I)Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SynthPainter*(*)($SynthContext*,$String*,int32_t)>(&ParsedSynthStyle$DelegatingPainter::getPainter))},
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

$InnerClassInfo _ParsedSynthStyle$DelegatingPainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.ParsedSynthStyle$DelegatingPainter", "javax.swing.plaf.synth.ParsedSynthStyle", "DelegatingPainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ParsedSynthStyle$DelegatingPainter_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.ParsedSynthStyle$DelegatingPainter",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	nullptr,
	_ParsedSynthStyle$DelegatingPainter_MethodInfo_,
	nullptr,
	nullptr,
	_ParsedSynthStyle$DelegatingPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.ParsedSynthStyle"
};

$Object* allocate$ParsedSynthStyle$DelegatingPainter($Class* clazz) {
	return $of($alloc(ParsedSynthStyle$DelegatingPainter));
}

void ParsedSynthStyle$DelegatingPainter::init$() {
	$SynthPainter::init$();
}

$SynthPainter* ParsedSynthStyle$DelegatingPainter::getPainter($SynthContext* context, $String* method, int32_t direction) {
	$init(ParsedSynthStyle$DelegatingPainter);
	return $nc(($cast($ParsedSynthStyle, $($nc(context)->getStyle()))))->getBestPainter(context, method, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "arrowbuttonbackground"_s, -1)))->paintArrowButtonBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "arrowbuttonborder"_s, -1)))->paintArrowButtonBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "arrowbuttonforeground"_s, direction)))->paintArrowButtonForeground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "buttonbackground"_s, -1)))->paintButtonBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "buttonborder"_s, -1)))->paintButtonBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "checkboxmenuitembackground"_s, -1)))->paintCheckBoxMenuItemBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "checkboxmenuitemborder"_s, -1)))->paintCheckBoxMenuItemBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "checkboxbackground"_s, -1)))->paintCheckBoxBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "checkboxborder"_s, -1)))->paintCheckBoxBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "colorchooserbackground"_s, -1)))->paintColorChooserBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "colorchooserborder"_s, -1)))->paintColorChooserBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "comboboxbackground"_s, -1)))->paintComboBoxBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "comboboxborder"_s, -1)))->paintComboBoxBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "desktopiconbackground"_s, -1)))->paintDesktopIconBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "desktopiconborder"_s, -1)))->paintDesktopIconBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "desktoppanebackground"_s, -1)))->paintDesktopPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "desktoppaneborder"_s, -1)))->paintDesktopPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "editorpanebackground"_s, -1)))->paintEditorPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "editorpaneborder"_s, -1)))->paintEditorPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "filechooserbackground"_s, -1)))->paintFileChooserBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "filechooserborder"_s, -1)))->paintFileChooserBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "formattedtextfieldbackground"_s, -1)))->paintFormattedTextFieldBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "formattedtextfieldborder"_s, -1)))->paintFormattedTextFieldBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "internalframetitlepanebackground"_s, -1)))->paintInternalFrameTitlePaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "internalframetitlepaneborder"_s, -1)))->paintInternalFrameTitlePaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "internalframebackground"_s, -1)))->paintInternalFrameBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "internalframeborder"_s, -1)))->paintInternalFrameBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "labelbackground"_s, -1)))->paintLabelBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "labelborder"_s, -1)))->paintLabelBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "listbackground"_s, -1)))->paintListBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "listborder"_s, -1)))->paintListBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menubarbackground"_s, -1)))->paintMenuBarBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menubarborder"_s, -1)))->paintMenuBarBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menuitembackground"_s, -1)))->paintMenuItemBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menuitemborder"_s, -1)))->paintMenuItemBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menubackground"_s, -1)))->paintMenuBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "menuborder"_s, -1)))->paintMenuBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "optionpanebackground"_s, -1)))->paintOptionPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "optionpaneborder"_s, -1)))->paintOptionPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "panelbackground"_s, -1)))->paintPanelBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "panelborder"_s, -1)))->paintPanelBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "passwordfieldbackground"_s, -1)))->paintPasswordFieldBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "passwordfieldborder"_s, -1)))->paintPasswordFieldBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "popupmenubackground"_s, -1)))->paintPopupMenuBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "popupmenuborder"_s, -1)))->paintPopupMenuBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "progressbarbackground"_s, -1)))->paintProgressBarBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "progressbarbackground"_s, direction)))->paintProgressBarBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "progressbarborder"_s, -1)))->paintProgressBarBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "progressbarborder"_s, direction)))->paintProgressBarBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "progressbarforeground"_s, direction)))->paintProgressBarForeground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "radiobuttonmenuitembackground"_s, -1)))->paintRadioButtonMenuItemBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "radiobuttonmenuitemborder"_s, -1)))->paintRadioButtonMenuItemBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "radiobuttonbackground"_s, -1)))->paintRadioButtonBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "radiobuttonborder"_s, -1)))->paintRadioButtonBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "rootpanebackground"_s, -1)))->paintRootPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "rootpaneborder"_s, -1)))->paintRootPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollbarbackground"_s, -1)))->paintScrollBarBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "scrollbarbackground"_s, direction)))->paintScrollBarBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollbarborder"_s, -1)))->paintScrollBarBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "scrollbarborder"_s, orientation)))->paintScrollBarBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "scrollbarthumbbackground"_s, direction)))->paintScrollBarThumbBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "scrollbarthumbborder"_s, direction)))->paintScrollBarThumbBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollbartrackbackground"_s, -1)))->paintScrollBarTrackBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "scrollbartrackbackground"_s, direction)))->paintScrollBarTrackBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollbartrackborder"_s, -1)))->paintScrollBarTrackBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "scrollbartrackborder"_s, orientation)))->paintScrollBarTrackBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollpanebackground"_s, -1)))->paintScrollPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "scrollpaneborder"_s, -1)))->paintScrollPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "separatorbackground"_s, -1)))->paintSeparatorBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "separatorbackground"_s, orientation)))->paintSeparatorBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "separatorborder"_s, -1)))->paintSeparatorBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "separatorborder"_s, orientation)))->paintSeparatorBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "separatorforeground"_s, direction)))->paintSeparatorForeground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "sliderbackground"_s, -1)))->paintSliderBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "sliderbackground"_s, direction)))->paintSliderBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "sliderborder"_s, -1)))->paintSliderBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "sliderborder"_s, direction)))->paintSliderBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "sliderthumbbackground"_s, direction)))->paintSliderThumbBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "sliderthumbborder"_s, direction)))->paintSliderThumbBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "slidertrackbackground"_s, -1)))->paintSliderTrackBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "slidertrackbackground"_s, direction)))->paintSliderTrackBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "slidertrackborder"_s, -1)))->paintSliderTrackBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "slidertrackborder"_s, direction)))->paintSliderTrackBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "spinnerbackground"_s, -1)))->paintSpinnerBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "spinnerborder"_s, -1)))->paintSpinnerBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "splitpanedividerbackground"_s, -1)))->paintSplitPaneDividerBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "splitpanedividerbackground"_s, orientation)))->paintSplitPaneDividerBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "splitpanedividerforeground"_s, direction)))->paintSplitPaneDividerForeground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "splitpanedragdivider"_s, direction)))->paintSplitPaneDragDivider(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "splitpanebackground"_s, -1)))->paintSplitPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "splitpaneborder"_s, -1)))->paintSplitPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanebackground"_s, -1)))->paintTabbedPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpaneborder"_s, -1)))->paintTabbedPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanetabareabackground"_s, -1)))->paintTabbedPaneTabAreaBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "tabbedpanetabareabackground"_s, orientation)))->paintTabbedPaneTabAreaBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanetabareaborder"_s, -1)))->paintTabbedPaneTabAreaBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "tabbedpanetabareaborder"_s, orientation)))->paintTabbedPaneTabAreaBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "tabbedpanetabbackground"_s, -1)))->paintTabbedPaneTabBackground(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t direction) {
	$nc($(getPainter(context, "tabbedpanetabbackground"_s, direction)))->paintTabbedPaneTabBackground(context, g, x, y, w, h, tabIndex, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$nc($(getPainter(context, "tabbedpanetabborder"_s, -1)))->paintTabbedPaneTabBorder(context, g, x, y, w, h, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t direction) {
	$nc($(getPainter(context, "tabbedpanetabborder"_s, direction)))->paintTabbedPaneTabBorder(context, g, x, y, w, h, tabIndex, direction);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanecontentbackground"_s, -1)))->paintTabbedPaneContentBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tabbedpanecontentborder"_s, -1)))->paintTabbedPaneContentBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tableheaderbackground"_s, -1)))->paintTableHeaderBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tableheaderborder"_s, -1)))->paintTableHeaderBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tablebackground"_s, -1)))->paintTableBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tableborder"_s, -1)))->paintTableBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textareabackground"_s, -1)))->paintTextAreaBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textareaborder"_s, -1)))->paintTextAreaBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textpanebackground"_s, -1)))->paintTextPaneBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textpaneborder"_s, -1)))->paintTextPaneBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textfieldbackground"_s, -1)))->paintTextFieldBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "textfieldborder"_s, -1)))->paintTextFieldBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "togglebuttonbackground"_s, -1)))->paintToggleButtonBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "togglebuttonborder"_s, -1)))->paintToggleButtonBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbarbackground"_s, -1)))->paintToolBarBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbarbackground"_s, orientation)))->paintToolBarBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbarborder"_s, -1)))->paintToolBarBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbarborder"_s, orientation)))->paintToolBarBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbarcontentbackground"_s, -1)))->paintToolBarContentBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbarcontentbackground"_s, orientation)))->paintToolBarContentBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbarcontentborder"_s, -1)))->paintToolBarContentBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbarcontentborder"_s, orientation)))->paintToolBarContentBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbardragwindowbackground"_s, -1)))->paintToolBarDragWindowBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbardragwindowbackground"_s, orientation)))->paintToolBarDragWindowBackground(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "toolbardragwindowborder"_s, -1)))->paintToolBarDragWindowBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$nc($(getPainter(context, "toolbardragwindowborder"_s, orientation)))->paintToolBarDragWindowBorder(context, g, x, y, w, h, orientation);
}

void ParsedSynthStyle$DelegatingPainter::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tooltipbackground"_s, -1)))->paintToolTipBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "tooltipborder"_s, -1)))->paintToolTipBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treebackground"_s, -1)))->paintTreeBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treeborder"_s, -1)))->paintTreeBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treecellbackground"_s, -1)))->paintTreeCellBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treecellborder"_s, -1)))->paintTreeCellBorder(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "treecellfocus"_s, -1)))->paintTreeCellFocus(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "viewportbackground"_s, -1)))->paintViewportBackground(context, g, x, y, w, h);
}

void ParsedSynthStyle$DelegatingPainter::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($(getPainter(context, "viewportborder"_s, -1)))->paintViewportBorder(context, g, x, y, w, h);
}

ParsedSynthStyle$DelegatingPainter::ParsedSynthStyle$DelegatingPainter() {
}

$Class* ParsedSynthStyle$DelegatingPainter::load$($String* name, bool initialize) {
	$loadClass(ParsedSynthStyle$DelegatingPainter, name, initialize, &_ParsedSynthStyle$DelegatingPainter_ClassInfo_, allocate$ParsedSynthStyle$DelegatingPainter);
	return class$;
}

$Class* ParsedSynthStyle$DelegatingPainter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax