#include <javax/swing/plaf/nimbus/SynthPainterImpl.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/NoninvertibleTransformException.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/Painter.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/nimbus/NimbusStyle.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <jcpp.h>

#undef BOTTOM
#undef EAST
#undef HORIZONTAL
#undef HORIZONTAL_SPLIT
#undef LEFT
#undef NORTH
#undef RIGHT
#undef SOUTH
#undef TRUE
#undef TYPE_INT_ARGB
#undef VERTICAL
#undef WEST

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $NoninvertibleTransformException = ::java::awt::geom::NoninvertibleTransformException;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $JSplitPane = ::javax::swing::JSplitPane;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $Painter = ::javax::swing::Painter;
using $SwingConstants = ::javax::swing::SwingConstants;
using $NimbusStyle = ::javax::swing::plaf::nimbus::NimbusStyle;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _SynthPainterImpl_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/nimbus/NimbusStyle;", nullptr, $PRIVATE, $field(SynthPainterImpl, style)},
	{}
};

$MethodInfo _SynthPainterImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusStyle;)V", nullptr, 0, $method(static_cast<void(SynthPainterImpl::*)($NimbusStyle*)>(&SynthPainterImpl::init$))},
	{"paint", "(Ljavax/swing/Painter;Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", "(Ljavax/swing/Painter<Ljava/lang/Object;>;Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", $PRIVATE, $method(static_cast<void(SynthPainterImpl::*)($Painter*,$SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t,$AffineTransform*)>(&SynthPainterImpl::paint))},
	{"paintArrowButtonBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintArrowButtonBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintArrowButtonForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PUBLIC},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthPainterImpl::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t,$AffineTransform*)>(&SynthPainterImpl::paintBackground))},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PRIVATE, $method(static_cast<void(SynthPainterImpl::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SynthPainterImpl::paintBackground))},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthPainterImpl::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t,$AffineTransform*)>(&SynthPainterImpl::paintBorder))},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PRIVATE, $method(static_cast<void(SynthPainterImpl::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SynthPainterImpl::paintBorder))},
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
	{"paintForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIILjava/awt/geom/AffineTransform;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthPainterImpl::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t,$AffineTransform*)>(&SynthPainterImpl::paintForeground))},
	{"paintForeground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIIII)V", nullptr, $PRIVATE, $method(static_cast<void(SynthPainterImpl::*)($SynthContext*,$Graphics*,int32_t,int32_t,int32_t,int32_t,int32_t)>(&SynthPainterImpl::paintForeground))},
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

$ClassInfo _SynthPainterImpl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.SynthPainterImpl",
	"javax.swing.plaf.synth.SynthPainter",
	nullptr,
	_SynthPainterImpl_FieldInfo_,
	_SynthPainterImpl_MethodInfo_
};

$Object* allocate$SynthPainterImpl($Class* clazz) {
	return $of($alloc(SynthPainterImpl));
}

void SynthPainterImpl::init$($NimbusStyle* style) {
	$SynthPainter::init$();
	$set(this, style, style);
}

void SynthPainterImpl::paint($Painter* p, $SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $AffineTransform* transform) {
	if (p != nullptr) {
		if ($instanceOf($Graphics2D, g)) {
			$var($Graphics2D, gfx, $cast($Graphics2D, g));
			if (transform != nullptr) {
				$nc(gfx)->transform(transform);
			}
			$nc(gfx)->translate(x, y);
			p->paint(gfx, $($nc(ctx)->getComponent()), w, h);
			gfx->translate(-x, -y);
			if (transform != nullptr) {
				try {
					gfx->transform($(transform->createInverse()));
				} catch ($NoninvertibleTransformException&) {
					$var($NoninvertibleTransformException, e, $catch());
					e->printStackTrace();
				}
			}
		} else {
			$var($BufferedImage, img, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
			$var($Graphics2D, gfx, img->createGraphics());
			if (transform != nullptr) {
				$nc(gfx)->transform(transform);
			}
			p->paint(gfx, $($nc(ctx)->getComponent()), w, h);
			$nc(gfx)->dispose();
			$nc(g)->drawImage(img, x, y, nullptr);
			$assign(img, nullptr);
		}
	}
}

void SynthPainterImpl::paintBackground($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $AffineTransform* transform) {
	$var($Component, c, $nc(ctx)->getComponent());
	$var($Color, bg, (c != nullptr) ? $nc(c)->getBackground() : ($Color*)nullptr);
	if (bg == nullptr || $nc(bg)->getAlpha() > 0) {
		$var($Painter, backgroundPainter, $nc(this->style)->getBackgroundPainter(ctx));
		if (backgroundPainter != nullptr) {
			paint(backgroundPainter, ctx, g, x, y, w, h, transform);
		}
	}
}

void SynthPainterImpl::paintForeground($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $AffineTransform* transform) {
	$var($Painter, foregroundPainter, $nc(this->style)->getForegroundPainter(ctx));
	if (foregroundPainter != nullptr) {
		paint(foregroundPainter, ctx, g, x, y, w, h, transform);
	}
}

void SynthPainterImpl::paintBorder($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, $AffineTransform* transform) {
	$var($Painter, borderPainter, $nc(this->style)->getBorderPainter(ctx));
	if (borderPainter != nullptr) {
		paint(borderPainter, ctx, g, x, y, w, h, transform);
	}
}

void SynthPainterImpl::paintBackground($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$var($Component, c, $nc(ctx)->getComponent());
	bool ltr = $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
	if ($instanceOf($JSlider, $(ctx->getComponent()))) {
		ltr = true;
	}
	if (orientation == $SwingConstants::VERTICAL && ltr) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBackground(ctx, g, y, x, h, w, transform);
	} else if (orientation == $SwingConstants::VERTICAL) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintBackground(ctx, g, y, x, h, w, transform);
	} else if (orientation == $SwingConstants::HORIZONTAL && ltr) {
		paintBackground(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(ctx, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintBorder($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$var($Component, c, $nc(ctx)->getComponent());
	bool ltr = $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
	if (orientation == $SwingConstants::VERTICAL && ltr) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBorder(ctx, g, y, x, h, w, transform);
	} else if (orientation == $SwingConstants::VERTICAL) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintBorder(ctx, g, y, 0, h, w, transform);
	} else if (orientation == $SwingConstants::HORIZONTAL && ltr) {
		paintBorder(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		paintBorder(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintForeground($SynthContext* ctx, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$var($Component, c, $nc(ctx)->getComponent());
	bool ltr = $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
	if (orientation == $SwingConstants::VERTICAL && ltr) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintForeground(ctx, g, y, x, h, w, transform);
	} else if (orientation == $SwingConstants::VERTICAL) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintForeground(ctx, g, y, 0, h, w, transform);
	} else if (orientation == $SwingConstants::HORIZONTAL && ltr) {
		paintForeground(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		paintForeground(ctx, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintArrowButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintArrowButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintArrowButtonForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t direction) {
	$var($String, compName, $nc($($nc(context)->getComponent()))->getName());
	bool ltr = $nc($($nc($(context->getComponent()))->getComponentOrientation()))->isLeftToRight();
	bool var$0 = "Spinner.nextButton"_s->equals(compName);
	if (var$0 || "Spinner.previousButton"_s->equals(compName)) {
		if (ltr) {
			paintForeground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
		} else {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->translate((double)w, (double)0);
			transform->scale((double)-1, (double)1);
			paintForeground(context, g, x, y, w, h, transform);
		}
	} else if (direction == $SwingConstants::WEST) {
		paintForeground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else if (direction == $SwingConstants::NORTH) {
		if (ltr) {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->scale((double)-1, (double)1);
			transform->rotate($Math::toRadians((double)90));
			paintForeground(context, g, y, 0, h, w, transform);
		} else {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->rotate($Math::toRadians((double)90));
			transform->translate((double)0, (double)(-((double)(x + w))));
			paintForeground(context, g, y, 0, h, w, transform);
		}
	} else if (direction == $SwingConstants::EAST) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)w, (double)0);
		transform->scale((double)-1, (double)1);
		paintForeground(context, g, x, y, w, h, transform);
	} else if (direction == $SwingConstants::SOUTH) {
		if (ltr) {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->rotate($Math::toRadians((double)-90));
			transform->translate((double)(-h), (double)0);
			paintForeground(context, g, y, x, h, w, transform);
		} else {
			$var($AffineTransform, transform, $new($AffineTransform));
			transform->scale((double)-1, (double)1);
			transform->rotate($Math::toRadians((double)-90));
			transform->translate((double)(-((double)(h + y))), (double)(-((double)(w + x))));
			paintForeground(context, g, y, x, h, w, transform);
		}
	}
}

void SynthPainterImpl::paintButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintCheckBoxMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintCheckBoxMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintCheckBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintCheckBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintColorChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintColorChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintComboBoxBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintComboBoxBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintDesktopIconBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintDesktopIconBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintDesktopPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintDesktopPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintEditorPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintEditorPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintFileChooserBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintFileChooserBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintFormattedTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintFormattedTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBorder(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintInternalFrameTitlePaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintInternalFrameTitlePaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintInternalFrameBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintInternalFrameBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintLabelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintLabelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintListBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintListBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintOptionPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintOptionPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPanelBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPanelBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPasswordFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPasswordFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPopupMenuBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintPopupMenuBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintProgressBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintProgressBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintProgressBarForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintForeground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintRadioButtonMenuItemBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRadioButtonMenuItemBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRadioButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRadioButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRootPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintRootPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollBarTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintScrollPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintScrollPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSeparatorBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSeparatorBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSeparatorForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintForeground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSliderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSliderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderThumbBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	$init($Boolean);
	if ($equals($nc($($nc(context)->getComponent()))->getClientProperty("Slider.paintThumbArrowShape"_s), $Boolean::TRUE)) {
		if (orientation == $JSlider::HORIZONTAL) {
			orientation = $JSlider::VERTICAL;
		} else {
			orientation = $JSlider::HORIZONTAL;
		}
		paintBackground(context, g, x, y, w, h, orientation);
	} else {
		paintBackground(context, g, x, y, w, h, orientation);
	}
}

void SynthPainterImpl::paintSliderThumbBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSliderTrackBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSliderTrackBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintSpinnerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSpinnerBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneDividerBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	if (orientation == $JSplitPane::HORIZONTAL_SPLIT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBackground(context, g, y, x, h, w, transform);
	} else {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintSplitPaneDividerForeground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintForeground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneDragDivider($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintSplitPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	if (orientation == $JTabbedPane::LEFT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBackground(context, g, y, x, h, w, transform);
	} else if (orientation == $JTabbedPane::RIGHT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintBackground(context, g, y, 0, h, w, transform);
	} else if (orientation == $JTabbedPane::BOTTOM) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)1, (double)-1);
		transform->translate((double)0, (double)(-h));
		paintBackground(context, g, 0, 0, w, h, transform);
	} else {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	if (orientation == $JTabbedPane::LEFT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->scale((double)-1, (double)1);
		transform->rotate($Math::toRadians((double)90));
		paintBackground(context, g, y, x, h, w, transform);
	} else if (orientation == $JTabbedPane::RIGHT) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->rotate($Math::toRadians((double)90));
		transform->translate((double)0, (double)(-((double)(x + w))));
		paintBackground(context, g, y, 0, h, w, transform);
	} else if (orientation == $JTabbedPane::BOTTOM) {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)1, (double)-1);
		transform->translate((double)0, (double)(-h));
		paintBackground(context, g, 0, 0, w, h, transform);
	} else {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	}
}

void SynthPainterImpl::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneTabBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t tabIndex, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTabbedPaneContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTableHeaderBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTableHeaderBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTableBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTableBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextAreaBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextAreaBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextPaneBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextPaneBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTextFieldBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBackground(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintTextFieldBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	if ($nc($($nc($($nc(context)->getComponent()))->getComponentOrientation()))->isLeftToRight()) {
		paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
	} else {
		$var($AffineTransform, transform, $new($AffineTransform));
		transform->translate((double)x, (double)y);
		transform->scale((double)-1, (double)1);
		transform->translate((double)(-w), (double)0);
		paintBorder(context, g, 0, 0, w, h, transform);
	}
}

void SynthPainterImpl::paintToggleButtonBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToggleButtonBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarContentBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarContentBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarDragWindowBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBackground(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolBarDragWindowBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, int32_t orientation) {
	paintBorder(context, g, x, y, w, h, orientation);
}

void SynthPainterImpl::paintToolTipBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintToolTipBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeCellBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeCellBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintTreeCellFocus($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
}

void SynthPainterImpl::paintViewportBackground($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBackground(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

void SynthPainterImpl::paintViewportBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintBorder(context, g, x, y, w, h, ($AffineTransform*)nullptr);
}

SynthPainterImpl::SynthPainterImpl() {
}

$Class* SynthPainterImpl::load$($String* name, bool initialize) {
	$loadClass(SynthPainterImpl, name, initialize, &_SynthPainterImpl_ClassInfo_, allocate$SynthPainterImpl);
	return class$;
}

$Class* SynthPainterImpl::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax