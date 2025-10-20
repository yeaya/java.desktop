#include <javax/swing/plaf/synth/SynthTextPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/basic/BasicEditorPaneUI.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthEditorPaneUI.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/StyleContext.h>
#include <javax/swing/text/StyledDocument.h>
#include <jcpp.h>

#undef DEFAULT_STYLE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $Graphics = ::java::awt::Graphics;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TextUI = ::javax::swing::plaf::TextUI;
using $BasicEditorPaneUI = ::javax::swing::plaf::basic::BasicEditorPaneUI;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthEditorPaneUI = ::javax::swing::plaf::synth::SynthEditorPaneUI;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $Document = ::javax::swing::text::Document;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $StyleContext = ::javax::swing::text::StyleContext;
using $StyledDocument = ::javax::swing::text::StyledDocument;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthTextPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthTextPaneUI::*)()>(&SynthTextPaneUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthTextPaneUI::createUI))},
	{"getPropertyPrefix", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintBackground", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, 0},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PROTECTED},
	{"updateFont", "(Ljava/awt/Font;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTextPaneUI::*)($Font*)>(&SynthTextPaneUI::updateFont))},
	{"updateForeground", "(Ljava/awt/Color;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTextPaneUI::*)($Color*)>(&SynthTextPaneUI::updateForeground))},
	{}
};

$ClassInfo _SynthTextPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTextPaneUI",
	"javax.swing.plaf.synth.SynthEditorPaneUI",
	nullptr,
	nullptr,
	_SynthTextPaneUI_MethodInfo_
};

$Object* allocate$SynthTextPaneUI($Class* clazz) {
	return $of($alloc(SynthTextPaneUI));
}

void SynthTextPaneUI::init$() {
	$SynthEditorPaneUI::init$();
}

$ComponentUI* SynthTextPaneUI::createUI($JComponent* c) {
	$init(SynthTextPaneUI);
	return $new(SynthTextPaneUI);
}

$String* SynthTextPaneUI::getPropertyPrefix() {
	return "TextPane"_s;
}

void SynthTextPaneUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$SynthEditorPaneUI::installUI(c);
	updateForeground($($nc(c)->getForeground()));
	updateFont($($nc(c)->getFont()));
}

void SynthTextPaneUI::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$SynthEditorPaneUI::propertyChange(evt);
	$var($String, name, $nc(evt)->getPropertyName());
	if ($nc(name)->equals("foreground"_s)) {
		updateForeground($cast($Color, $(evt->getNewValue())));
	} else if (name->equals("font"_s)) {
		updateFont($cast($Font, $(evt->getNewValue())));
	} else if (name->equals("document"_s)) {
		$var($JComponent, comp, getComponent());
		updateForeground($($nc(comp)->getForeground()));
		updateFont($($nc(comp)->getFont()));
	}
}

void SynthTextPaneUI::updateForeground($Color* color) {
	$useLocalCurrentObjectStackCache();
	$var($StyledDocument, doc, $cast($StyledDocument, $nc($(getComponent()))->getDocument()));
	$init($StyleContext);
	$var($Style, style, $nc(doc)->getStyle($StyleContext::DEFAULT_STYLE));
	if (style == nullptr) {
		return;
	}
	if (color == nullptr) {
		$init($StyleConstants);
		$nc(style)->removeAttribute($StyleConstants::Foreground);
	} else {
		$StyleConstants::setForeground(style, color);
	}
}

void SynthTextPaneUI::updateFont($Font* font) {
	$useLocalCurrentObjectStackCache();
	$var($StyledDocument, doc, $cast($StyledDocument, $nc($(getComponent()))->getDocument()));
	$init($StyleContext);
	$var($Style, style, $nc(doc)->getStyle($StyleContext::DEFAULT_STYLE));
	if (style == nullptr) {
		return;
	}
	if (font == nullptr) {
		$init($StyleConstants);
		$nc(style)->removeAttribute($StyleConstants::FontFamily);
		style->removeAttribute($StyleConstants::FontSize);
		style->removeAttribute($StyleConstants::Bold);
		style->removeAttribute($StyleConstants::Italic);
	} else {
		$StyleConstants::setFontFamily(style, $($nc(font)->getName()));
		$StyleConstants::setFontSize(style, $nc(font)->getSize());
		$StyleConstants::setBold(style, $nc(font)->isBold());
		$StyleConstants::setItalic(style, $nc(font)->isItalic());
	}
}

void SynthTextPaneUI::paintBackground($SynthContext* context, $Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintTextPaneBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
}

void SynthTextPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintTextPaneBorder(context, g, x, y, w, h);
}

SynthTextPaneUI::SynthTextPaneUI() {
}

$Class* SynthTextPaneUI::load$($String* name, bool initialize) {
	$loadClass(SynthTextPaneUI, name, initialize, &_SynthTextPaneUI_ClassInfo_, allocate$SynthTextPaneUI);
	return class$;
}

$Class* SynthTextPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax