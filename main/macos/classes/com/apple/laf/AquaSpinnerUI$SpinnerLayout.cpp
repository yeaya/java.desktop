#include <com/apple/laf/AquaSpinnerUI$SpinnerLayout.h>

#include <com/apple/laf/AquaSpinnerUI.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaSpinnerUI$SpinnerLayout_FieldInfo_[] = {
	{"nextButton", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(AquaSpinnerUI$SpinnerLayout, nextButton)},
	{"previousButton", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(AquaSpinnerUI$SpinnerLayout, previousButton)},
	{"editor", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(AquaSpinnerUI$SpinnerLayout, editor)},
	{"painter", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(AquaSpinnerUI$SpinnerLayout, painter)},
	{}
};

$MethodInfo _AquaSpinnerUI$SpinnerLayout_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AquaSpinnerUI$SpinnerLayout::*)()>(&AquaSpinnerUI$SpinnerLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredSize", "(Ljava/awt/Component;)Ljava/awt/Dimension;", nullptr, $PRIVATE, $method(static_cast<$Dimension*(AquaSpinnerUI$SpinnerLayout::*)($Component*)>(&AquaSpinnerUI$SpinnerLayout::preferredSize))},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setBounds", "(Ljava/awt/Component;IIII)V", nullptr, $PRIVATE, $method(static_cast<void(AquaSpinnerUI$SpinnerLayout::*)($Component*,int32_t,int32_t,int32_t,int32_t)>(&AquaSpinnerUI$SpinnerLayout::setBounds))},
	{}
};

$InnerClassInfo _AquaSpinnerUI$SpinnerLayout_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaSpinnerUI$SpinnerLayout", "com.apple.laf.AquaSpinnerUI", "SpinnerLayout", $STATIC},
	{}
};

$ClassInfo _AquaSpinnerUI$SpinnerLayout_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaSpinnerUI$SpinnerLayout",
	"java.lang.Object",
	"java.awt.LayoutManager",
	_AquaSpinnerUI$SpinnerLayout_FieldInfo_,
	_AquaSpinnerUI$SpinnerLayout_MethodInfo_,
	nullptr,
	nullptr,
	_AquaSpinnerUI$SpinnerLayout_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaSpinnerUI"
};

$Object* allocate$AquaSpinnerUI$SpinnerLayout($Class* clazz) {
	return $of($alloc(AquaSpinnerUI$SpinnerLayout));
}

void AquaSpinnerUI$SpinnerLayout::init$() {
	$set(this, nextButton, nullptr);
	$set(this, previousButton, nullptr);
	$set(this, editor, nullptr);
	$set(this, painter, nullptr);
}

void AquaSpinnerUI$SpinnerLayout::addLayoutComponent($String* name, $Component* c) {
	if ("Next"_s->equals(name)) {
		$set(this, nextButton, c);
	} else if ("Previous"_s->equals(name)) {
		$set(this, previousButton, c);
	} else if ("Editor"_s->equals(name)) {
		$set(this, editor, c);
	} else if ("Painter"_s->equals(name)) {
		$set(this, painter, c);
	}
}

void AquaSpinnerUI$SpinnerLayout::removeLayoutComponent($Component* c$renamed) {
	$var($Component, c, c$renamed);
	if (c == this->nextButton) {
		$assign(c, nullptr);
	} else if (c == this->previousButton) {
		$set(this, previousButton, nullptr);
	} else if (c == this->editor) {
		$set(this, editor, nullptr);
	} else if (c == this->painter) {
		$set(this, painter, nullptr);
	}
}

$Dimension* AquaSpinnerUI$SpinnerLayout::preferredSize($Component* c) {
	return (c == nullptr) ? $new($Dimension, 0, 0) : $nc(c)->getPreferredSize();
}

$Dimension* AquaSpinnerUI$SpinnerLayout::preferredLayoutSize($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, editorD, preferredSize(this->editor));
	$var($Dimension, painterD, preferredSize(this->painter));
	$nc(editorD)->height = ((editorD->height + 1) / 2) * 2;
	$var($Dimension, size, $new($Dimension, editorD->width, $Math::max($nc(painterD)->height, editorD->height)));
	size->width += $nc(painterD)->width;
	$var($Insets, insets, $nc(parent)->getInsets());
	size->width += $nc(insets)->left + insets->right;
	size->height += insets->top + insets->bottom;
	return size;
}

$Dimension* AquaSpinnerUI$SpinnerLayout::minimumLayoutSize($Container* parent) {
	return preferredLayoutSize(parent);
}

void AquaSpinnerUI$SpinnerLayout::setBounds($Component* c, int32_t x, int32_t y, int32_t width, int32_t height) {
	if (c != nullptr) {
		c->setBounds(x, y, width, height);
	}
}

void AquaSpinnerUI$SpinnerLayout::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $nc(parent)->getInsets());
	int32_t availWidth = parent->getWidth() - ($nc(insets)->left + insets->right);
	int32_t availHeight = parent->getHeight() - (insets->top + insets->bottom);
	$var($Dimension, painterD, preferredSize(this->painter));
	int32_t nextHeight = availHeight / 2;
	int32_t previousHeight = availHeight - nextHeight;
	int32_t buttonsWidth = $nc(painterD)->width;
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
	int32_t painterTop = previousY - (painterD->height / 2);
	setBounds(this->editor, editorX, insets->top, editorWidth, availHeight);
	setBounds(this->nextButton, buttonsX, insets->top, buttonsWidth, nextHeight);
	setBounds(this->previousButton, buttonsX, previousY, buttonsWidth, previousHeight);
	setBounds(this->painter, buttonsX, painterTop, buttonsWidth, painterD->height);
}

AquaSpinnerUI$SpinnerLayout::AquaSpinnerUI$SpinnerLayout() {
}

$Class* AquaSpinnerUI$SpinnerLayout::load$($String* name, bool initialize) {
	$loadClass(AquaSpinnerUI$SpinnerLayout, name, initialize, &_AquaSpinnerUI$SpinnerLayout_ClassInfo_, allocate$AquaSpinnerUI$SpinnerLayout);
	return class$;
}

$Class* AquaSpinnerUI$SpinnerLayout::class$ = nullptr;

		} // laf
	} // apple
} // com