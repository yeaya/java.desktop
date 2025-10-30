#include <javax/swing/plaf/synth/SynthPainter.h>

#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter$1.h>
#include <jcpp.h>

#undef NULL_PAINTER

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter$1 = ::javax::swing::plaf::synth::SynthPainter$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthPainter_FieldInfo_[] = {
	{"NULL_PAINTER", "Ljavax/swing/plaf/synth/SynthPainter;", nullptr, $STATIC, $staticField(SynthPainter, NULL_PAINTER)},
	{}
};

$MethodInfo _SynthPainter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SynthPainter::*)()>(&SynthPainter::init$))},
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

$InnerClassInfo _SynthPainter_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthPainter$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthPainter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.synth.SynthPainter",
	"java.lang.Object",
	nullptr,
	_SynthPainter_FieldInfo_,
	_SynthPainter_MethodInfo_,
	nullptr,
	nullptr,
	_SynthPainter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthPainter$1"
};

$Object* allocate$SynthPainter($Class* clazz) {
	return $of($alloc(SynthPainter));
}

SynthPainter* SynthPainter::NULL_PAINTER = nullptr;

void SynthPainter::init$() {
}

void SynthPainter::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
}

void SynthPainter::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintProgressBarBackground(context, g, x, y, w, h);
}

void SynthPainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintProgressBarBorder(context, g, x, y, w, h);
}

void SynthPainter::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintScrollBarBackground(context, g, x, y, w, h);
}

void SynthPainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintScrollBarBorder(context, g, x, y, w, h);
}

void SynthPainter::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintScrollBarTrackBackground(context, g, x, y, w, h);
}

void SynthPainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintScrollBarTrackBorder(context, g, x, y, w, h);
}

void SynthPainter::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSeparatorBackground(context, g, x, y, w, h);
}

void SynthPainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSeparatorBorder(context, g, x, y, w, h);
}

void SynthPainter::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSliderBackground(context, g, x, y, w, h);
}

void SynthPainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSliderBorder(context, g, x, y, w, h);
}

void SynthPainter::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSliderTrackBackground(context, g, x, y, w, h);
}

void SynthPainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSliderTrackBorder(context, g, x, y, w, h);
}

void SynthPainter::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintSplitPaneDividerBackground(context, g, x, y, w, h);
}

void SynthPainter::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
}

void SynthPainter::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintTabbedPaneTabAreaBackground(context, g, x, y, w, h);
}

void SynthPainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintTabbedPaneTabAreaBorder(context, g, x, y, w, h);
}

void SynthPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
}

void SynthPainter::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	paintTabbedPaneTabBackground(context, g, x, y, w, h, tabIndex);
}

void SynthPainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
}

void SynthPainter::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	paintTabbedPaneTabBorder(context, g, x, y, w, h, tabIndex);
}

void SynthPainter::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarBackground(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarBorder(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarContentBackground(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarContentBorder(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarDragWindowBackground(context, g, x, y, w, h);
}

void SynthPainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintToolBarDragWindowBorder(context, g, x, y, w, h);
}

void SynthPainter::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainter::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void clinit$SynthPainter($Class* class$) {
	$assignStatic(SynthPainter::NULL_PAINTER, $new($SynthPainter$1));
}

SynthPainter::SynthPainter() {
}

$Class* SynthPainter::load$($String* name, bool initialize) {
	$loadClass(SynthPainter, name, initialize, &_SynthPainter_ClassInfo_, clinit$SynthPainter, allocate$SynthPainter);
	return class$;
}

$Class* SynthPainter::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax