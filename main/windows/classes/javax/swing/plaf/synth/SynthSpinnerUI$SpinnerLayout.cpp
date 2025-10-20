#include <javax/swing/plaf/synth/SynthSpinnerUI$SpinnerLayout.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/synth/SynthSpinnerUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SynthSpinnerUI = ::javax::swing::plaf::synth::SynthSpinnerUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthSpinnerUI$SpinnerLayout_FieldInfo_[] = {
	{"nextButton", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SynthSpinnerUI$SpinnerLayout, nextButton)},
	{"previousButton", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SynthSpinnerUI$SpinnerLayout, previousButton)},
	{"editor", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SynthSpinnerUI$SpinnerLayout, editor)},
	{}
};

$MethodInfo _SynthSpinnerUI$SpinnerLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthSpinnerUI$SpinnerLayout::*)()>(&SynthSpinnerUI$SpinnerLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredSize", "(Ljava/awt/Component;)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(SynthSpinnerUI$SpinnerLayout::*)($Component*)>(&SynthSpinnerUI$SpinnerLayout::preferredSize))},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setBounds", "(Ljava/awt/Component;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSpinnerUI$SpinnerLayout::*)($Component*,int32_t,int32_t,int32_t,int32_t)>(&SynthSpinnerUI$SpinnerLayout::setBounds))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthSpinnerUI$SpinnerLayout_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthSpinnerUI$SpinnerLayout", "javax.swing.plaf.synth.SynthSpinnerUI", "SpinnerLayout", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthSpinnerUI$SpinnerLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthSpinnerUI$SpinnerLayout",
	"java.lang.Object",
	"java.awt.LayoutManager,javax.swing.plaf.UIResource",
	_SynthSpinnerUI$SpinnerLayout_FieldInfo_,
	_SynthSpinnerUI$SpinnerLayout_MethodInfo_,
	nullptr,
	nullptr,
	_SynthSpinnerUI$SpinnerLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthSpinnerUI"
};

$Object* allocate$SynthSpinnerUI$SpinnerLayout($Class* clazz) {
	return $of($alloc(SynthSpinnerUI$SpinnerLayout));
}

int32_t SynthSpinnerUI$SpinnerLayout::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool SynthSpinnerUI$SpinnerLayout::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* SynthSpinnerUI$SpinnerLayout::clone() {
	 return this->$LayoutManager::clone();
}

$String* SynthSpinnerUI$SpinnerLayout::toString() {
	 return this->$LayoutManager::toString();
}

void SynthSpinnerUI$SpinnerLayout::finalize() {
	this->$LayoutManager::finalize();
}

void SynthSpinnerUI$SpinnerLayout::init$() {
	$set(this, nextButton, nullptr);
	$set(this, previousButton, nullptr);
	$set(this, editor, nullptr);
}

void SynthSpinnerUI$SpinnerLayout::addLayoutComponent($String* name, $Component* c) {
	if ("Next"_s->equals(name)) {
		$set(this, nextButton, c);
	} else if ("Previous"_s->equals(name)) {
		$set(this, previousButton, c);
	} else if ("Editor"_s->equals(name)) {
		$set(this, editor, c);
	}
}

void SynthSpinnerUI$SpinnerLayout::removeLayoutComponent($Component* c) {
	if (c == this->nextButton) {
		$set(this, nextButton, nullptr);
	} else if (c == this->previousButton) {
		$set(this, previousButton, nullptr);
	} else if (c == this->editor) {
		$set(this, editor, nullptr);
	}
}

$Dimension* SynthSpinnerUI$SpinnerLayout::preferredSize($Component* c) {
	return (c == nullptr) ? $new($Dimension, 0, 0) : $nc(c)->getPreferredSize();
}

$Dimension* SynthSpinnerUI$SpinnerLayout::preferredLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, nextD, preferredSize(this->nextButton));
	$var($Dimension, previousD, preferredSize(this->previousButton));
	$var($Dimension, editorD, preferredSize(this->editor));
	$nc(editorD)->height = ((editorD->height + 1) / 2) * 2;
	$var($Dimension, size, $new($Dimension, editorD->width, editorD->height));
	size->width += $Math::max($nc(nextD)->width, $nc(previousD)->width);
	$var($Insets, insets, $nc(parent)->getInsets());
	size->width += $nc(insets)->left + insets->right;
	size->height += insets->top + insets->bottom;
	return size;
}

$Dimension* SynthSpinnerUI$SpinnerLayout::minimumLayoutSize($Container* parent) {
	return preferredLayoutSize(parent);
}

void SynthSpinnerUI$SpinnerLayout::setBounds($Component* c, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (c != nullptr) {
		c->setBounds(x, y, width, height);
	}
}

void SynthSpinnerUI$SpinnerLayout::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $nc(parent)->getInsets());
	int32_t availWidth = parent->getWidth() - ($nc(insets)->left + insets->right);
	int32_t availHeight = parent->getHeight() - (insets->top + insets->bottom);
	$var($Dimension, nextD, preferredSize(this->nextButton));
	$var($Dimension, previousD, preferredSize(this->previousButton));
	int32_t nextHeight = availHeight / 2;
	int32_t previousHeight = availHeight - nextHeight;
	int32_t buttonsWidth = $Math::max($nc(nextD)->width, $nc(previousD)->width);
	int32_t editorWidth = availWidth - buttonsWidth;
	int32_t editorX = 0;
	int32_t buttonsX = 0;
	if ($nc($(parent->getComponentOrientation()))->isLeftToRight()) {
		editorX = insets->left;
		buttonsX = editorX + editorWidth;
	} else {
		buttonsX = insets->left;
		editorX = buttonsX + buttonsWidth;
	}
	int32_t previousY = insets->top + nextHeight;
	setBounds(this->editor, editorX, insets->top, editorWidth, availHeight);
	setBounds(this->nextButton, buttonsX, insets->top, buttonsWidth, nextHeight);
	setBounds(this->previousButton, buttonsX, previousY, buttonsWidth, previousHeight);
}

SynthSpinnerUI$SpinnerLayout::SynthSpinnerUI$SpinnerLayout() {
}

$Class* SynthSpinnerUI$SpinnerLayout::load$($String* name, bool initialize) {
	$loadClass(SynthSpinnerUI$SpinnerLayout, name, initialize, &_SynthSpinnerUI$SpinnerLayout_ClassInfo_, allocate$SynthSpinnerUI$SpinnerLayout);
	return class$;
}

$Class* SynthSpinnerUI$SpinnerLayout::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax