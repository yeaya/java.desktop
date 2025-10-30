#include <sun/swing/plaf/synth/SynthFileChooserUI$UIBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUI$UIBorder_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$UIBorder, this$0)},
	{"_insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(SynthFileChooserUI$UIBorder, _insets)},
	{}
};

$MethodInfo _SynthFileChooserUI$UIBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;Ljava/awt/Insets;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUI$UIBorder::*)($SynthFileChooserUI*,$Insets*)>(&SynthFileChooserUI$UIBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUI$UIBorder_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUI$UIBorder", "sun.swing.plaf.synth.SynthFileChooserUI", "UIBorder", $PRIVATE},
	{}
};

$ClassInfo _SynthFileChooserUI$UIBorder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUI$UIBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_SynthFileChooserUI$UIBorder_FieldInfo_,
	_SynthFileChooserUI$UIBorder_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUI$UIBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUI"
};

$Object* allocate$SynthFileChooserUI$UIBorder($Class* clazz) {
	return $of($alloc(SynthFileChooserUI$UIBorder));
}

int32_t SynthFileChooserUI$UIBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool SynthFileChooserUI$UIBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* SynthFileChooserUI$UIBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* SynthFileChooserUI$UIBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void SynthFileChooserUI$UIBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void SynthFileChooserUI$UIBorder::init$($SynthFileChooserUI* this$0, $Insets* insets) {
	$set(this, this$0, this$0);
	$AbstractBorder::init$();
	if (insets != nullptr) {
		$set(this, _insets, $new($Insets, insets->top, insets->left, insets->bottom, insets->right));
	} else {
		$set(this, _insets, nullptr);
	}
}

void SynthFileChooserUI$UIBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($JComponent, c))) {
		return;
	}
	$var($JComponent, jc, $cast($JComponent, c));
	$var($SynthContext, context, this->this$0->getContext(jc));
	$var($SynthStyle, style, $nc(context)->getStyle());
	if (style != nullptr) {
		$nc($(style->getPainter(context)))->paintFileChooserBorder(context, g, x, y, width, height);
	}
}

$Insets* SynthFileChooserUI$UIBorder::getBorderInsets($Component* c, $Insets* insets$renamed) {
	$var($Insets, insets, insets$renamed);
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	if (this->_insets != nullptr) {
		$nc(insets)->top = $nc(this->_insets)->top;
		insets->bottom = $nc(this->_insets)->bottom;
		insets->left = $nc(this->_insets)->left;
		insets->right = $nc(this->_insets)->right;
	} else {
		$nc(insets)->top = (insets->bottom = (insets->right = (insets->left = 0)));
	}
	return insets;
}

bool SynthFileChooserUI$UIBorder::isBorderOpaque() {
	return false;
}

SynthFileChooserUI$UIBorder::SynthFileChooserUI$UIBorder() {
}

$Class* SynthFileChooserUI$UIBorder::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUI$UIBorder, name, initialize, &_SynthFileChooserUI$UIBorder_ClassInfo_, allocate$SynthFileChooserUI$UIBorder);
	return class$;
}

$Class* SynthFileChooserUI$UIBorder::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun