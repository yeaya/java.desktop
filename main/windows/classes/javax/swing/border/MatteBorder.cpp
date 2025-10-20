#include <javax/swing/border/MatteBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/EmptyBorder.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;

namespace javax {
	namespace swing {
		namespace border {

$FieldInfo _MatteBorder_FieldInfo_[] = {
	{"color", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(MatteBorder, color)},
	{"tileIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(MatteBorder, tileIcon)},
	{}
};

$MethodInfo _MatteBorder_MethodInfo_[] = {
	{"<init>", "(IIIILjava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MatteBorder::*)(int32_t,int32_t,int32_t,int32_t,$Color*)>(&MatteBorder::init$))},
	{"<init>", "(Ljava/awt/Insets;Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(static_cast<void(MatteBorder::*)($Insets*,$Color*)>(&MatteBorder::init$))},
	{"<init>", "(IIIILjavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(MatteBorder::*)(int32_t,int32_t,int32_t,int32_t,$Icon*)>(&MatteBorder::init$))},
	{"<init>", "(Ljava/awt/Insets;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(MatteBorder::*)($Insets*,$Icon*)>(&MatteBorder::init$))},
	{"<init>", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(MatteBorder::*)($Icon*)>(&MatteBorder::init$))},
	{"computeInsets", "(Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PRIVATE, $method(static_cast<$Insets*(MatteBorder::*)($Insets*)>(&MatteBorder::computeInsets))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getBorderInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getMatteColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getTileIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintEdge", "(Ljava/awt/Component;Ljava/awt/Graphics;IIIIII)V", nullptr, $PRIVATE, $method(static_cast<void(MatteBorder::*)($Component*,$Graphics*,int32_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&MatteBorder::paintEdge))},
	{}
};

$ClassInfo _MatteBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.border.MatteBorder",
	"javax.swing.border.EmptyBorder",
	nullptr,
	_MatteBorder_FieldInfo_,
	_MatteBorder_MethodInfo_
};

$Object* allocate$MatteBorder($Class* clazz) {
	return $of($alloc(MatteBorder));
}

void MatteBorder::init$(int32_t top, int32_t left, int32_t bottom, int32_t right, $Color* matteColor) {
	$EmptyBorder::init$(top, left, bottom, right);
	$set(this, color, matteColor);
}

void MatteBorder::init$($Insets* borderInsets, $Color* matteColor) {
	$EmptyBorder::init$(borderInsets);
	$set(this, color, matteColor);
}

void MatteBorder::init$(int32_t top, int32_t left, int32_t bottom, int32_t right, $Icon* tileIcon) {
	$EmptyBorder::init$(top, left, bottom, right);
	$set(this, tileIcon, tileIcon);
}

void MatteBorder::init$($Insets* borderInsets, $Icon* tileIcon) {
	$EmptyBorder::init$(borderInsets);
	$set(this, tileIcon, tileIcon);
}

void MatteBorder::init$($Icon* tileIcon) {
	MatteBorder::init$(-1, -1, -1, -1, tileIcon);
}

void MatteBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, getBorderInsets(c));
	$var($Color, oldColor, $nc(g)->getColor());
	g->translate(x, y);
	if (this->tileIcon != nullptr) {
		$init($Color);
		$set(this, color, ($nc(this->tileIcon)->getIconWidth() == -1) ? $Color::gray : ($Color*)nullptr);
	}
	if (this->color != nullptr) {
		g->setColor(this->color);
		g->fillRect(0, 0, width - $nc(insets)->right, insets->top);
		g->fillRect(0, $nc(insets)->top, insets->left, height - insets->top);
		g->fillRect($nc(insets)->left, height - insets->bottom, width - insets->left, insets->bottom);
		g->fillRect(width - $nc(insets)->right, 0, insets->right, height - insets->bottom);
	} else if (this->tileIcon != nullptr) {
		int32_t tileW = $nc(this->tileIcon)->getIconWidth();
		int32_t tileH = $nc(this->tileIcon)->getIconHeight();
		paintEdge(c, g, 0, 0, width - $nc(insets)->right, insets->top, tileW, tileH);
		paintEdge(c, g, 0, $nc(insets)->top, insets->left, height - insets->top, tileW, tileH);
		paintEdge(c, g, $nc(insets)->left, height - insets->bottom, width - insets->left, insets->bottom, tileW, tileH);
		paintEdge(c, g, width - $nc(insets)->right, 0, insets->right, height - insets->bottom, tileW, tileH);
	}
	g->translate(-x, -y);
	g->setColor(oldColor);
}

void MatteBorder::paintEdge($Component* c, $Graphics* g$renamed, int32_t x, int32_t y, int32_t width, int32_t height, int32_t tileW, int32_t tileH) {
	$var($Graphics, g, g$renamed);
	$assign(g, $nc(g)->create(x, y, width, height));
	int32_t sY = -($mod(y, tileH));
	for (x = -($mod(x, tileW)); x < width; x += tileW) {
		for (y = sY; y < height; y += tileH) {
			$nc(this->tileIcon)->paintIcon(c, g, x, y);
		}
	}
	g->dispose();
}

$Insets* MatteBorder::getBorderInsets($Component* c, $Insets* insets) {
	return computeInsets(insets);
}

$Insets* MatteBorder::getBorderInsets() {
	return computeInsets($$new($Insets, 0, 0, 0, 0));
}

$Insets* MatteBorder::computeInsets($Insets* insets) {
	if (this->tileIcon != nullptr && this->top == -1 && this->bottom == -1 && this->left == -1 && this->right == -1) {
		int32_t w = $nc(this->tileIcon)->getIconWidth();
		int32_t h = $nc(this->tileIcon)->getIconHeight();
		$nc(insets)->top = h;
		insets->right = w;
		insets->bottom = h;
		insets->left = w;
	} else {
		$nc(insets)->left = this->left;
		insets->top = this->top;
		insets->right = this->right;
		insets->bottom = this->bottom;
	}
	return insets;
}

$Color* MatteBorder::getMatteColor() {
	return this->color;
}

$Icon* MatteBorder::getTileIcon() {
	return this->tileIcon;
}

bool MatteBorder::isBorderOpaque() {
	return this->color != nullptr;
}

MatteBorder::MatteBorder() {
}

$Class* MatteBorder::load$($String* name, bool initialize) {
	$loadClass(MatteBorder, name, initialize, &_MatteBorder_ClassInfo_, allocate$MatteBorder);
	return class$;
}

$Class* MatteBorder::class$ = nullptr;

		} // border
	} // swing
} // javax