#include <javax/swing/plaf/synth/SynthScrollPaneUI$ViewportBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthScrollPaneUI.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <jcpp.h>

#undef EMPTY_UIRESOURCE_INSETS

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthScrollPaneUI = ::javax::swing::plaf::synth::SynthScrollPaneUI;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthScrollPaneUI$ViewportBorder_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthScrollPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthScrollPaneUI$ViewportBorder, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthScrollPaneUI$ViewportBorder, $assertionsDisabled)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(SynthScrollPaneUI$ViewportBorder, insets)},
	{}
};

$MethodInfo _SynthScrollPaneUI$ViewportBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/synth/SynthScrollPaneUI;Ljavax/swing/plaf/synth/SynthContext;)V", nullptr, 0, $method(static_cast<void(SynthScrollPaneUI$ViewportBorder::*)($SynthScrollPaneUI*,$SynthContext*)>(&SynthScrollPaneUI$ViewportBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthScrollPaneUI$ViewportBorder_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportBorder", "javax.swing.plaf.synth.SynthScrollPaneUI", "ViewportBorder", $PRIVATE},
	{}
};

$ClassInfo _SynthScrollPaneUI$ViewportBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthScrollPaneUI$ViewportBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_SynthScrollPaneUI$ViewportBorder_FieldInfo_,
	_SynthScrollPaneUI$ViewportBorder_MethodInfo_,
	nullptr,
	nullptr,
	_SynthScrollPaneUI$ViewportBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthScrollPaneUI"
};

$Object* allocate$SynthScrollPaneUI$ViewportBorder($Class* clazz) {
	return $of($alloc(SynthScrollPaneUI$ViewportBorder));
}

int32_t SynthScrollPaneUI$ViewportBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool SynthScrollPaneUI$ViewportBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* SynthScrollPaneUI$ViewportBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* SynthScrollPaneUI$ViewportBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void SynthScrollPaneUI$ViewportBorder::finalize() {
	this->$AbstractBorder::finalize();
}

bool SynthScrollPaneUI$ViewportBorder::$assertionsDisabled = false;

void SynthScrollPaneUI$ViewportBorder::init$($SynthScrollPaneUI* this$0, $SynthContext* context) {
	$set(this, this$0, this$0);
	$AbstractBorder::init$();
	$set(this, insets, $cast($Insets, $nc($($nc(context)->getStyle()))->get(context, "ScrollPane.viewportBorderInsets"_s)));
	if (this->insets == nullptr) {
		$init($SynthLookAndFeel);
		$set(this, insets, $SynthLookAndFeel::EMPTY_UIRESOURCE_INSETS);
	}
}

void SynthScrollPaneUI$ViewportBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, jc, $cast($JComponent, c));
	$var($SynthContext, context, this->this$0->getContext(jc));
	$var($SynthStyle, style, $nc(context)->getStyle());
	if (style == nullptr) {
		if (!SynthScrollPaneUI$ViewportBorder::$assertionsDisabled) {
			$throwNew($AssertionError, $of("SynthBorder is being used outside after the  UI has been uninstalled"_s));
		}
		return;
	}
	$nc($(context->getPainter()))->paintViewportBorder(context, g, x, y, width, height);
}

$Insets* SynthScrollPaneUI$ViewportBorder::getBorderInsets($Component* c, $Insets* insets) {
	if (insets == nullptr) {
		return $new($Insets, $nc(this->insets)->top, $nc(this->insets)->left, $nc(this->insets)->bottom, $nc(this->insets)->right);
	}
	$nc(insets)->top = $nc(this->insets)->top;
	insets->bottom = $nc(this->insets)->bottom;
	insets->left = $nc(this->insets)->left;
	insets->right = $nc(this->insets)->left;
	return insets;
}

bool SynthScrollPaneUI$ViewportBorder::isBorderOpaque() {
	return false;
}

void clinit$SynthScrollPaneUI$ViewportBorder($Class* class$) {
	$load($SynthScrollPaneUI);
	SynthScrollPaneUI$ViewportBorder::$assertionsDisabled = !$SynthScrollPaneUI::class$->desiredAssertionStatus();
}

SynthScrollPaneUI$ViewportBorder::SynthScrollPaneUI$ViewportBorder() {
}

$Class* SynthScrollPaneUI$ViewportBorder::load$($String* name, bool initialize) {
	$loadClass(SynthScrollPaneUI$ViewportBorder, name, initialize, &_SynthScrollPaneUI$ViewportBorder_ClassInfo_, clinit$SynthScrollPaneUI$ViewportBorder, allocate$SynthScrollPaneUI$ViewportBorder);
	return class$;
}

$Class* SynthScrollPaneUI$ViewportBorder::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax