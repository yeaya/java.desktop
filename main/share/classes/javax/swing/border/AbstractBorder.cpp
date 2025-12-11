#include <javax/swing/border/AbstractBorder.h>

#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/border/Border.h>
#include <jcpp.h>

#undef OTHER

using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Border = ::javax::swing::border::Border;

namespace javax {
	namespace swing {
		namespace border {

$MethodInfo _AbstractBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(AbstractBorder::*)()>(&AbstractBorder::init$))},
	{"getBaseline", "(Ljava/awt/Component;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljava/awt/Component;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getInteriorRectangle", "(Ljava/awt/Component;IIII)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getInteriorRectangle", "(Ljava/awt/Component;Ljavax/swing/border/Border;IIII)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Rectangle*(*)($Component*,$Border*,int32_t,int32_t,int32_t,int32_t)>(&AbstractBorder::getInteriorRectangle))},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&AbstractBorder::isLeftToRight))},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.border.AbstractBorder",
	"java.lang.Object",
	"javax.swing.border.Border,java.io.Serializable",
	nullptr,
	_AbstractBorder_MethodInfo_
};

$Object* allocate$AbstractBorder($Class* clazz) {
	return $of($alloc(AbstractBorder));
}

int32_t AbstractBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool AbstractBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* AbstractBorder::clone() {
	 return this->$Border::clone();
}

$String* AbstractBorder::toString() {
	 return this->$Border::toString();
}

void AbstractBorder::finalize() {
	this->$Border::finalize();
}

void AbstractBorder::init$() {
}

void AbstractBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
}

$Insets* AbstractBorder::getBorderInsets($Component* c) {
	return getBorderInsets(c, $$new($Insets, 0, 0, 0, 0));
}

$Insets* AbstractBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->left = (insets->top = (insets->right = (insets->bottom = 0)));
	return insets;
}

bool AbstractBorder::isBorderOpaque() {
	return false;
}

$Rectangle* AbstractBorder::getInteriorRectangle($Component* c, int32_t x, int32_t y, int32_t width, int32_t height) {
	return getInteriorRectangle(c, this, x, y, width, height);
}

$Rectangle* AbstractBorder::getInteriorRectangle($Component* c, $Border* b, int32_t x, int32_t y, int32_t width, int32_t height) {
	$init(AbstractBorder);
	$var($Insets, insets, nullptr);
	if (b != nullptr) {
		$assign(insets, b->getBorderInsets(c));
	} else {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	return $new($Rectangle, x + $nc(insets)->left, y + insets->top, width - insets->right - insets->left, height - insets->top - insets->bottom);
}

int32_t AbstractBorder::getBaseline($Component* c, int32_t width, int32_t height) {
	if (width < 0 || height < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	return -1;
}

$Component$BaselineResizeBehavior* AbstractBorder::getBaselineResizeBehavior($Component* c) {
	if (c == nullptr) {
		$throwNew($NullPointerException, "Component must be non-null"_s);
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

bool AbstractBorder::isLeftToRight($Component* c) {
	$init(AbstractBorder);
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

AbstractBorder::AbstractBorder() {
}

$Class* AbstractBorder::load$($String* name, bool initialize) {
	$loadClass(AbstractBorder, name, initialize, &_AbstractBorder_ClassInfo_, allocate$AbstractBorder);
	return class$;
}

$Class* AbstractBorder::class$ = nullptr;

		} // border
	} // swing
} // javax