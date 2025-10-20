#include <javax/swing/plaf/synth/SynthBorder.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef ARROW_BUTTON
#undef BUTTON
#undef CHECK_BOX
#undef CHECK_BOX_MENU_ITEM
#undef EDITOR_PANE
#undef FORMATTED_TEXT_FIELD
#undef MENU
#undef MENU_BAR
#undef MENU_ITEM
#undef PASSWORD_FIELD
#undef RADIO_BUTTON
#undef RADIO_BUTTON_MENU_ITEM
#undef TEXT_AREA
#undef TEXT_FIELD
#undef TEXT_PANE
#undef TOGGLE_BUTTON
#undef TOOL_BAR

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JToolBar = ::javax::swing::JToolBar;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $UIResource = ::javax::swing::plaf::UIResource;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthBorder_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthBorder, $assertionsDisabled)},
	{"ui", "Ljavax/swing/plaf/synth/SynthUI;", nullptr, $PRIVATE, $field(SynthBorder, ui)},
	{"insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(SynthBorder, insets)},
	{}
};

$MethodInfo _SynthBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/synth/SynthUI;Ljava/awt/Insets;)V", nullptr, 0, $method(static_cast<void(SynthBorder::*)($SynthUI*,$Insets*)>(&SynthBorder::init$))},
	{"<init>", "(Ljavax/swing/plaf/synth/SynthUI;)V", nullptr, 0, $method(static_cast<void(SynthBorder::*)($SynthUI*)>(&SynthBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthBorder",
	"javax.swing.border.AbstractBorder",
	"javax.swing.plaf.UIResource",
	_SynthBorder_FieldInfo_,
	_SynthBorder_MethodInfo_
};

$Object* allocate$SynthBorder($Class* clazz) {
	return $of($alloc(SynthBorder));
}

int32_t SynthBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool SynthBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* SynthBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* SynthBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void SynthBorder::finalize() {
	this->$AbstractBorder::finalize();
}

bool SynthBorder::$assertionsDisabled = false;

void SynthBorder::init$($SynthUI* ui, $Insets* insets) {
	$AbstractBorder::init$();
	$set(this, ui, ui);
	$set(this, insets, insets);
}

void SynthBorder::init$($SynthUI* ui) {
	SynthBorder::init$(ui, nullptr);
}

void SynthBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, jc, $cast($JComponent, c));
	$var($SynthContext, context, $nc(this->ui)->getContext(jc));
	$var($SynthStyle, style, $nc(context)->getStyle());
	if (style == nullptr) {
		if (!SynthBorder::$assertionsDisabled) {
			$throwNew($AssertionError, $of("SynthBorder is being used outside after the UI has been uninstalled"_s));
		}
		return;
	}
	$nc(this->ui)->paintBorder(context, g, x, y, width, height);
}

$Insets* SynthBorder::getBorderInsets($Component* c, $Insets* insets$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, insets$renamed);
	if (this->insets != nullptr) {
		if (insets == nullptr) {
			$assign(insets, $new($Insets, $nc(this->insets)->top, $nc(this->insets)->left, $nc(this->insets)->bottom, $nc(this->insets)->right));
		} else {
			$nc(insets)->top = $nc(this->insets)->top;
			insets->bottom = $nc(this->insets)->bottom;
			insets->left = $nc(this->insets)->left;
			insets->right = $nc(this->insets)->right;
		}
	} else if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	} else {
		$nc(insets)->top = (insets->bottom = (insets->left = (insets->right = 0)));
	}
	if ($instanceOf($JComponent, c)) {
		$var($Region, region, $Region::getRegion($cast($JComponent, c)));
		$var($Insets, margin, nullptr);
		if ((region == $Region::ARROW_BUTTON || region == $Region::BUTTON || region == $Region::CHECK_BOX || region == $Region::CHECK_BOX_MENU_ITEM || region == $Region::MENU || region == $Region::MENU_ITEM || region == $Region::RADIO_BUTTON || region == $Region::RADIO_BUTTON_MENU_ITEM || region == $Region::TOGGLE_BUTTON) && ($instanceOf($AbstractButton, c))) {
			$assign(margin, $nc(($cast($AbstractButton, c)))->getMargin());
		} else {
			if ((region == $Region::EDITOR_PANE || region == $Region::FORMATTED_TEXT_FIELD || region == $Region::PASSWORD_FIELD || region == $Region::TEXT_AREA || region == $Region::TEXT_FIELD || region == $Region::TEXT_PANE) && ($instanceOf($JTextComponent, c))) {
				$assign(margin, $nc(($cast($JTextComponent, c)))->getMargin());
			} else {
				if (region == $Region::TOOL_BAR && ($instanceOf($JToolBar, c))) {
					$assign(margin, $nc(($cast($JToolBar, c)))->getMargin());
				} else {
					if (region == $Region::MENU_BAR && ($instanceOf($JMenuBar, c))) {
						$assign(margin, $nc(($cast($JMenuBar, c)))->getMargin());
					}
				}
			}
		}
		if (margin != nullptr) {
			$nc(insets)->top += margin->top;
			insets->bottom += margin->bottom;
			insets->left += margin->left;
			insets->right += margin->right;
		}
	}
	return insets;
}

bool SynthBorder::isBorderOpaque() {
	return false;
}

void clinit$SynthBorder($Class* class$) {
	SynthBorder::$assertionsDisabled = !SynthBorder::class$->desiredAssertionStatus();
}

SynthBorder::SynthBorder() {
}

$Class* SynthBorder::load$($String* name, bool initialize) {
	$loadClass(SynthBorder, name, initialize, &_SynthBorder_ClassInfo_, clinit$SynthBorder, allocate$SynthBorder);
	return class$;
}

$Class* SynthBorder::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax